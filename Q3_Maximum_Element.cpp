/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 3
Question Name: The Highest Score
Marks: 10
Difficulty: Easy
Programming Language: C++17

Problem Description:
Given the scores of N participants, print the highest score.

Input Format:
The first line contains an integer N.
The second line contains N space-separated integer scores.

Output Format:
Print the highest score.

Constraints:
1 <= N <= 100000
-1000000000 <= each score <= 1000000000

Sample Input:
4
-12 -3 -20 -8

Expected Output:
-3

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        return 0;
    }

    vector<long long> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    long long highest = scores[0];
    for (int i = 1; i < n; ++i) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }

    cout << highest << '\n';
    return 0;
}
