/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 8
Question Name: Merge Two Sorted Arrays
Marks: 20
Difficulty: Medium
Programming Language: C++17

Problem Description:
Given two arrays sorted in non-decreasing order, combine their elements
into one non-decreasing sequence and print that sequence.

Input Format:
The first line contains N and M, the sizes of the arrays.
The second line contains N integers in non-decreasing order.
The third line contains M integers in non-decreasing order.

Output Format:
Print all N + M values in non-decreasing order, separated by spaces.

Constraints:
1 <= N, M <= 100000
-1000000000 <= each array value <= 1000000000

Sample Input:
3 3
1 4 7
2 5 8

Expected Output:
1 2 4 5 7 8

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read both sorted input sequences.
    int n, m;
    cin >> n >> m;
    vector<int> first(n), second(m);
    for (int i = 0; i < n; ++i) {
        cin >> first[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> second[i];
    }

    // Select the next smallest value from the two sequences.
    vector<int> merged;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (first[i] <= second[j]) {
            merged.push_back(first[i++]);
        } else {
            merged.push_back(second[j++]);
        }
    }

    // Append any values that remain after one sequence is exhausted.
    for (; i < n; ++i) {
        merged.push_back(first[i]);
    }
    for (; j < m; ++j) {
        merged.push_back(second[j]);
    }

    // Print the merged sequence with single spaces between values.
    for (int k = 0; k < static_cast<int>(merged.size()); ++k) {
        if (k > 0) {
            cout << ' ';
        }
        cout << merged[k];
    }
    cout << '\n';
    return 0;
}
