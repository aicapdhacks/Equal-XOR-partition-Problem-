# Equal-XOR-partition-Problem
Check whether it is possible to divide the elements of array in to exactly two groups such that XOR of the first group is equal 
to XOR of the second group.

## Problem: 
Given an array A={a1,a2,a3,...,an}, you have to Check whether it is possible to divide the elements of array in to exactly
two groups such that XOR of the first group is equal to XOR of the second group. Here XOR means Bitwise-XOR. You can pick the elements 
in order.

### Constraints

1<=T<=1000

1<=N<=1000

0<=ai<=10^6 where ai represents the ith element of the array.

### Input Format

First line contains T, the number of test case contains 2 lines the first line contains N, the size of the array. Next line contains
the elements of the array separated by space.

### Output Format

Output T lines. For each case print 0 if it is not possible to divide the elements into two groups else print 1.

### Sample Input #1

1

6

1 0 1 1 0 1

### Sample Output

1

### Solution:

This problem seems to be a variation of Partition Problem but its Tricky one. Do XOR of all elements one by one, say, xor. IF xor is 0 
then only it can be divided into two groups (of ANY combination, as A xor A = 0). Else if xor is 1 then its not possible.
