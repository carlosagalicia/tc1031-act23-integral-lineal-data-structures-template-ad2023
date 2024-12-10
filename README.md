![Tec de Monterrey](images/logotecmty.png)
# Act 2.3 - Comprehensive Activity on Linear Data Structures (Competency Evidence)

## <span style="color: rgb(26, 99, 169);">What Do I Have to Do?</span>
In this repository, you will find the input files as well as the expected outputs to test your implementation. You will also find a "main.cpp" file. You must implement your solution in this file. At the top of the file, include your personal information in comments. For example:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```
<span style="text-decoration: underline;">Individually</span>, develop the solution for the following problem:

The historian Flavius Josephus tells how, during the Roman-Jewish conflict of 67 CE, the Romans took the village of Jotapata, which he commanded. While escaping, Josephus found himself trapped in a cave with 40 companions. The Romans discovered their location and invited them to surrender, but his companions refused to let him. Therefore, he suggested that they kill each other, one by one, with the order decided by a draw. Tradition says the method for conducting the draw was to stand in a circle, and starting at some point, count around, killing every third person in turn. The sole survivor of this process was Josephus, who then surrendered to the Romans. This raises the question: Had Josephus quietly practiced beforehand with 41 stones in a dark corner, or had he calculated mathematically that he should adopt position 31 to survive?

After reading an account of this gruesome event, you have become obsessed with the fear of finding yourself in a similar situation in the future. To prepare for such an eventuality, you decide to write a program to determine the position where you should start the counting process to ensure that you are the sole survivor.

In particular, your program should be able to handle the following variation of the processes described by Josephus: *n* > 0 people are initially arranged in a circle, facing inward, and numbered from 1 to *n* in clockwise order. Your assigned number is 1. Starting with person number *i*, counting begins clockwise until person number *k* (*k* > 0) is reached, who quickly dies. The counting then proceeds *k* more people clockwise, starting with the person immediately to the left of the victim. The person numbered *k* thus selected buries the victim and then returns to the position in the circle previously occupied by the victim. Counting then continues from the person immediately to their left, with the *k*-th person being killed, and so on, until only one person remains.

For example, when *n* = 5, *k* = 2, and *i* = 1, the execution order is 2, 5, 3, and 1. The survivor is 4.

## <span style="color: rgb(26, 99, 169);">**Input**</span>
Your program must read input lines containing values for *n* and *k* (in that order). Your program can assume a maximum of 100 people participating in this event.

## <span style="color: rgb(26, 99, 169);">**Output**</span>
Display the number of the person where the counting should start to ensure you are the sole survivor. For example, in the case above, the safe starting position is 3.

## <span style="color: rgb(26, 99, 169);">**Sample Input**</span>
```
1 5
```

## <span style="color: rgb(26, 99, 169);">**Sample Output**</span>
```
1
```

To test your implementation, compile your program with the command:
```
g++ -std=c++11 main.cpp -o app
```
Then, test your solution with each of the input files provided in this repository (`input1.txt`, `input2.txt`, `input3.txt`, `input4.txt`). The expected results are in the files `output1.txt`, `output2.txt`, `output3.txt`, and `output4.txt`. To perform the tests, you can use the following commands. For example, to test with "input1.txt":
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
```
If the second command produces no output, you know your results are as expected.

Finally, conduct individual research and reflection on the importance and efficiency of different sorting and searching algorithms in a problem situation like this, generating a document titled **"ReflexAct2.3.pdf"**.

## <span style="color: rgb(26, 99, 169);">**How Is My Evidence Evaluated?**</span>

- **80%** - For each functionality, the evaluation will be:
    - **Excellent (80%)** - correctly passes all test cases.
    - **Very Good (60%)** - correctly passes 75% of test cases.
    - **Good (40%)** - correctly passes 50% of test cases.
    - **Insufficient (20%)** - correctly passes less than 50% of test cases.

- **10%** - The code must follow the coding standards specified in the document: <span class="instructure_file_holder link_holder">[coding_standard_link](estandar.pdf)</span>.
- **10%** - Function names in the application must be respected.

## <span style="color: rgb(26, 99, 169);">**Where Do I Submit It?**</span>
This activity is part of your final course grade as well as the portfolio of evidence for the competencies to be developed in the course. Therefore, individually:
* Submit the corresponding files for the sorting and searching algorithms in the appropriate section of this platform, along with the individual reflection document (**ReflexAct2.3.pdf**).
* Create a personal folder named **TC1031(Final_Portfolio)** to prepare for the portfolio of competencies submission at the end of the course. This folder must contain 5 subfolders:
    * Act1.3
    * **Act2.3** - place your files that solved <span style="text-decoration: underline;">activity 2.3</span> along with the individual reflection document (**ReflexAct2.3.pdf**).
    * Act3.4
    * Act4.3
    * Act5.2
