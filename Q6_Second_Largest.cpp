/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 6
Question Name: Second Largest Distinct Element
Marks: 20
Difficulty: Medium
Programming Language: C++17

Problem Description:
Given an array of integers, print its second largest distinct value.
If fewer than two distinct values exist, print "NONE".

Input Format:
The first line contains N.
The second line contains N space-separated integers.

Output Format:
Print the second largest distinct value, or "NONE" if it does not exist.

Constraints:
1 <= N <= 100000
-1000000000 <= each array value <= 1000000000

Sample Input:
5
12 35 35 10 34

Expected Output:
34

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Read every value before comparing candidates.
    int n;
    cin >> n;
    vector<long long> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    // Maintain the largest and second-largest candidates while scanning.
    long long largest = LLONG_MIN;
    long long secondLargest = LLONG_MIN;
    for (long long value : values) {
        if (value > largest) {
            secondLargest = largest;
            largest = value;
        } else if (value < largest && value > secondLargest) {
            secondLargest = value;
        }
    }

    // Print the second distinct candidate when one is available.
    if (secondLargest == LLONG_MIN) {
        cout << "NONE\n";
    } else {
        cout << secondLargest << '\n';
    }
    return 0;
}
