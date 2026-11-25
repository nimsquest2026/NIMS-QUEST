/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 5
Question Name: Find the Target - Binary Search
Marks: 20
Difficulty: Medium
Programming Language: C++17

Problem Description:
Given a sorted array of distinct integers and a target value, find the
target's zero-based index. Print -1 if the target is not present.

Input Format:
The first line contains N.
The second line contains N integers in strictly increasing order.
The third line contains the target value.

Output Format:
Print the zero-based index of the target, or -1 if it is absent.

Constraints:
1 <= N <= 100000
-1000000000 <= array values and target <= 1000000000
The array values are strictly increasing.

Sample Input:
6
1 3 5 7 9 11
7

Expected Output:
3

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the sorted search space and the value to locate.
    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }
    int target;
    cin >> target;

    // Narrow the candidate interval until the target is found or excluded.
    int left = 0;
    int right = n - 1;
    int answer = -1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (values[middle] == target) {
            answer = middle;
            break;
        }
        if (values[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    // Report the requested zero-based position or the not-found marker.
    cout << answer << '\n';
    return 0;
}
