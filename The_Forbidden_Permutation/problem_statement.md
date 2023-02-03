# The_Forbidden_Permutation

You are given a permutation 𝑝 of length 𝑛, an array of 𝑚 distinct integers 𝑎1,𝑎2,…,𝑎𝑚 (1≤𝑎𝑖≤𝑛), and an integer 𝑑.

Let pos(𝑥) be the index of 𝑥 in the permutation 𝑝. The array 𝑎 is not good if

pos(𝑎𝑖)<pos(𝑎𝑖+1)≤pos(𝑎𝑖)+𝑑 for all 1≤𝑖<𝑚.
For example, with the permutation 𝑝=[4,2,1,3,6,5] and 𝑑=2:

𝑎=[2,3,6] is a not good array.
𝑎=[2,6,5] is good because pos(𝑎1)=2, pos(𝑎2)=5, so the condition pos(𝑎2)≤pos(𝑎1)+𝑑 is not satisfied.
𝑎=[1,6,3] is good because pos(𝑎2)=5, pos(𝑎3)=4, so the condition pos(𝑎2)<pos(𝑎3) is not satisfied.
In one move, you can swap two adjacent elements of the permutation 𝑝. What is the minimum number of moves needed such that the array 𝑎 becomes good?
It can be shown that there always exists a sequence of moves so that the array 𝑎 becomes good.

## Input

Each test contains multiple test cases. The first line contains the number of test cases 𝑡 (1≤𝑡≤104). The description of the test cases follows.

The first line of each test case contains three integers 𝑛, 𝑚 and 𝑑 (2≤𝑛≤105, 2≤𝑚≤𝑛, 1≤𝑑≤𝑛), the length of the permutation 𝑝, 
the length of the array 𝑎 and the value of 𝑑.

The second line contains 𝑛 integers 𝑝1,𝑝2,…,𝑝𝑛 (1≤𝑝𝑖≤𝑛, 𝑝𝑖≠𝑝𝑗 for 𝑖≠𝑗).

The third line contains 𝑚 distinct integers 𝑎1,𝑎2,…,𝑎𝑚 (1≤𝑎𝑖≤𝑛, 𝑎𝑖≠𝑎𝑗 for 𝑖≠𝑗).

The sum of 𝑛 over all test cases doesn't exceed 5⋅105.

## Output

For each test case, print the minimum number of moves needed such that the array 𝑎 becomes good.

### Inputs
-  5
  -  4 2 2
  -  1 2 3 4
  -  1 3
  -  5 2 4
  -  5 4 3 2 1
  -  5 2
  -  5 3 3
  -  3 4 1 5 2
  -  3 1 2
  -  2 2 1
  -  1 2
  -  2 1
  -  6 2 4
  -  1 2 3 4 5 6
  -  2 5

### Output
-  1
-  3
-  2
-  0
-  2


Here's the link to the problem: https://codeforces.com/contest/1778/problem/B
