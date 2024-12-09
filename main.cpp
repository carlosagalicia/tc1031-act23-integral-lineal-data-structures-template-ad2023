// =========================================================
// File: main.cpp
// Author: Carlos Galicia - A01709890
// Date: 10/10/2023
// =========================================================
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;
// encontrarPersona. Encuentra a la siguiente parsona(muerto o sustituto) despues de k saltos
// @Complexity	O(n)
void encontrarPersona(int *ptr_i, std::list<int>::iterator &persona, list<int> &lista, int k){
    for(int count = 1; count < k; count ++){
        if(persona == --lista.end()) persona = lista.begin();
        else (persona)++;

        if((*ptr_i) == lista.size()) (*ptr_i) = 1;
        else (*ptr_i)++;
    }
}

int main(){
    int n; // numero de persona
    int k; // numero de saltos
    int i = 1; // posicion de inicio
    int *ptr_i = &i; // Apuntador de posicion de persona

    cin >> n;
    cin >> k;

    list<int> lista(n); // generar lista
    int aumento = 1;
    generate(lista.begin(), lista.end(), [&aumento]() { return aumento++; }); // @Complexity	O(n)

    list<int> copia; // duplicar lista
    copy(lista.begin(), lista.end(), back_inserter(copia));// @Complexity	O(n)

    list<int>::iterator persona= lista.begin();
    int posicion_muerto, valor_siguiente;
    bool ultimo;

    while(lista.size() > 1){
        encontrarPersona(ptr_i, persona, lista, k); // encontrar persona muerta
        posicion_muerto = *ptr_i; // guardar posicion de muerto

        if(persona == --lista.end()) ultimo = 1; // si el muerto esta en la ultima posicion..
        else ultimo = 0;

        persona = lista.erase(persona); // eliminar persona

        if(lista.size() == 1) break; //si la lista solo tiene un elemento termina el loop

        if(ultimo) persona = lista.begin(); // empezar en el siguiente elemento
        //else (persona)++;

        if((*ptr_i) > lista.size()) (*ptr_i) = 1;
        valor_siguiente = *persona;

        encontrarPersona(ptr_i, persona, lista, k); // encontrar persona sustituta


        int valor_sustituto = *persona; // guardar valor de persona sustituta

        //insertar persona sustituta
        //encontrar la posicion de valor del elemento a mover
        list<int>::iterator it = find(lista.begin(), lista.end(), *persona); // @Complexity	O(n)
        if(ultimo){
            lista.erase(it);  // Eliminar el elemento de su posición original
            it = find(lista.begin(), lista.end(), valor_siguiente);  // Encontrar la nueva posición O(n)
            lista.push_back(valor_sustituto);
        }
        else{
            if (it != lista.end()) {
                int elementToMove = *it;  // Guardar el valor del elemento
                if(*it != valor_siguiente){ //Si el elemento a insertar todavia no se encuentra en su posicion..
                    lista.erase(it);  // Eliminar el elemento de su posición original
                    it = find(lista.begin(), lista.end(), valor_siguiente);  // Encontrar la nueva posición O(n)
                    if (it != lista.end()) lista.insert(it, elementToMove);  // Insertar el elemento en la nueva posición
                }
            }
        }

        persona = lista.begin(); // reinicio de iterador
        persona = find(lista.begin(), lista.end(), valor_sustituto); // recolocación del iterador

        //actualizar posicion del sustituto
        if (ultimo) *ptr_i = lista.size(); //si el muerto esta en la ultima posicion
        else{
            if((*ptr_i) != 1 || lista.size() != 2){ //si el sustituto despues de cambiar no es el primero
                (*ptr_i) = 1;
                for(list<int>::iterator iter = lista.begin(); *iter != valor_sustituto; iter++){
                    (*ptr_i)++;
                }
            }
        }

        if((*ptr_i) == lista.size()) (*ptr_i) = 1; // empezar en el siguiente elemento
        else (*ptr_i)++;

        if(persona == --lista.end()) persona = lista.begin();
        else persona++;
    }

    if(*lista.begin() != 1){
        auto iteradorElemento = std::find(copia.begin(), copia.end(), *lista.begin());
        //calcular distancia entre el inicio y el iterador
        ptrdiff_t distancia_derecha = distance(copia.begin(), --iteradorElemento); // @Complexity	O(n)
        cout << (*copia.end())- distancia_derecha << endl;
    }
    else cout << *lista.begin() << endl; 

    return 0;
}
