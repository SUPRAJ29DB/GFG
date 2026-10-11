# [Compare two linked lists](https://www.geeksforgeeks.org/problems/compare-two-linked-lists/1)
## Easy
Given two strings, head1 and head2, represented as linked lists where each character is stored in a node's data field, complete the function compare() that mimics the behavior of strcmp(). The function should return:

0 if both strings are identical,
1 if the first linked list is lexicographically greater, and
-1 if the second linked list is lexicographically greater.

Examples:
Input: head1 = a-&gt;b-&gt;a-&gt;b-&gt;a , head2 = a-&gt;b-&gt;a-&gt;aOutput: 1Explanation: String consisting of nodes of first linked list is lexicographically greater than the second one. So, the result is 1.

Input: head1 = a-&gt;a-&gt;b , head2 = a-&gt;a-&gt;bOutput: 0Explanation: String consisting of nodes of first linked list is same as the second one. So, the result is 0.
Input: head1 = a-&gt;b-&gt;c-&gt;d , head2 = a-&gt;b-&gt;c-&gt;e
Output: -1Explanation: String consisting of nodes of second linked list is lexicographically greater than the first one. So, the result is -1.