# The_Forbidden_Permutation

You are given a permutation ๐ of length ๐, an array of ๐ distinct integers ๐1,๐2,โฆ,๐๐ (1โค๐๐โค๐), and an integer ๐.

Let pos(๐ฅ) be the index of ๐ฅ in the permutation ๐. The array ๐ is not good if

pos(๐๐)<pos(๐๐+1)โคpos(๐๐)+๐ for all 1โค๐<๐.
For example, with the permutation ๐=[4,2,1,3,6,5] and ๐=2:

๐=[2,3,6] is a not good array.
๐=[2,6,5] is good because pos(๐1)=2, pos(๐2)=5, so the condition pos(๐2)โคpos(๐1)+๐ is not satisfied.
๐=[1,6,3] is good because pos(๐2)=5, pos(๐3)=4, so the condition pos(๐2)<pos(๐3) is not satisfied.
In one move, you can swap two adjacent elements of the permutation ๐. What is the minimum number of moves needed such that the array ๐ becomes good?
It can be shown that there always exists a sequence of moves so that the array ๐ becomes good.

## Input

Each test contains multiple test cases. The first line contains the number of test cases ๐ก (1โค๐กโค104). The description of the test cases follows.

The first line of each test case contains three integers ๐, ๐ and ๐ (2โค๐โค105, 2โค๐โค๐, 1โค๐โค๐), the length of the permutation ๐, 
the length of the array ๐ and the value of ๐.

The second line contains ๐ integers ๐1,๐2,โฆ,๐๐ (1โค๐๐โค๐, ๐๐โ ๐๐ for ๐โ ๐).

The third line contains ๐ distinct integers ๐1,๐2,โฆ,๐๐ (1โค๐๐โค๐, ๐๐โ ๐๐ for ๐โ ๐).

The sum of ๐ over all test cases doesn't exceed 5โ105.

## Output

For each test case, print the minimum number of moves needed such that the array ๐ becomes good.

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
