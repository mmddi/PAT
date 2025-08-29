# The practice of PAT

## elevator
The highest building in our city has only one elevator. A request list is made up with N positive numbers. The numbers denote at which floors the elevator will stop, in specified order. It costs 6 seconds to move the elevator up one floor, and 4 seconds to move down one floor. The elevator will stay for 5 seconds at each stop.
For a given request list, you are to compute the total time spent to fulfill the requests on the list. The elevator is on the 0th floor at the beginning and does not have to return to the ground floor when the requests are fulfilled.
Input Specification:
Each input file contains one test case. Each case contains a positive integer N, followed by N positive numbers. All the numbers in the input are less than 100.
Output Specification:
For each test case, print the total time on a single line. 

Sample Input:
```bash
3 2 3 1
```
Sample Output:
```bash
41
```

## treetrav
Suppose that all the keys in a binary tree are distinct positive integers. Given the postorder and inorder traversal sequences, you are supposed to output the level order traversal sequence of the corresponding binary tree.
Input Specification:
Each input file contains one test case. For each case, the first line gives a positive integer N (≤30), the total number of nodes in the binary tree. The second line gives the postorder sequence and the third line gives the inorder sequence. All the numbers in a line are separated by a space.
Output Specification:
For each test case, print in one line the level order traversal sequence of the corresponding binary tree. All the numbers in a line must be separated by exactly one space, and there must be no extra space at the end of the line.

Sample Input:
```bash
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7
```
Sample Output:
```bash
4 1 6 3 5 7 2
```

## productpoly
This time, you are supposed to find A×B where A and B are two polynomials.

Sample Input:
```bash
2 1 2.4 0 3.2
2 2 1.5 1 0.5
```
Sample Output:
```bash
3 3 3.6 2 6.0 1 1.6
```


## sharing
To store English words, one method is to use linked lists and store a word letter by letter. To save some space, we may let the words share the same sublist if they share the same suffix.
put Specification:
Each input file contains one test case. For each case, the first line contains two addresses of nodes and a positive N (≤105), where the two addresses are the addresses of the first nodes of the two words, and N is the total number of nodes. The address of a node is a 5-digit positive integer, and NULL is represented by −1.
Then N lines follow, each describes a node in the format:
```bash
Address Data Next
```
whereAddress is the position of the node, Data is the letter contained by this node which is an English letter chosen from { a-z, A-Z }, and Next is the position of the next node.
Output Specification:
For each case, simply output the 5-digit starting position of the common suffix. If the two words have no common suffix, output -1 instead.

Sample Input:
```bash
11111 22222 9
67890 i 00002
00010 a 12345
00003 g -1
12345 D 67890
00002 n 00003
22222 B 23456
11111 L 00001
23456 e 67890
00001 o 00010
```
Sample Output:
```
bash67890
```

## primefc
Input Specification:
Each input file contains one test case which gives a positive integer N in the range of long int.
Output Specification:
Factor N in the format N=p1^k1*pm^km*...pm^km, where pi's are prime factors of N in increasing order, and the exponent ki is the number of pi -- hence when there is only one pi, ki is 1 and must NOT be printed out.

Sample Input:
```bash
97532468
```
Sample Output:
```
97532468=2^2*11*17*101*1291
```

## blac
For any 4-digit integer except the ones with all the digits being the same, if we sort the digits in non-increasing order first, and then in non-decreasing order, a new number can be obtained by taking the second number from the first one. Repeat in this manner we will soon end up at the number 6174 -- the black hole of 4-digit numbers. This number is named Kaprekar Constant.

For example, start from 6767, we'll get:
```bash
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
... ...
```
Given any 4-digit number, you are supposed to illustrate the way it gets into the black hole.
Input Specification:
Each input file contains one test case which gives a positive integer N in the range (0,104).
Output Specification:
If all the 4 digits of N are the same, print in one line the equation N - N = 0000. Else print each step of calculation in a line until 6174 comes out as the difference. All the numbers must be printed as 4-digit numbers.


Sample Input:
```bash
6767
```
Sample Output:
```
7766 - 6677 = 1089
9810 - 0189 = 9621
9621 - 1269 = 8352
8532 - 2358 = 6174
```

## countpat
The string APPAPT contains two PAT's as substrings. The first one is formed by the 2nd, the 4th, and the 6th characters, and the second one is formed by the 3rd, the 4th, and the 6th characters.
Now given any string, you are supposed to tell the number of PAT's contained in the string.
Input Specification:
Each input file contains one test case. For each case, there is only one line giving a string of no more than 105 characters containing only P, A, or T.
Output Specification:
For each test case, print in one line the number of PAT's contained in the string. Since the result may be a huge number, you only have to output the result moded by 1000000007.

Sample Input:
```bash
APPAPT
```
Sample Output:
```
2
```

