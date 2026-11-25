/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 7
Question Name: Balanced Brackets
Marks: 20
Difficulty: Medium
Programming Language: C++17

Problem Description:
Given a string containing only '(', ')', '[', ']', '{', and '}', determine
whether every opening bracket is closed by the correct type of bracket and
the brackets are properly nested.

Input Format:
One line containing the bracket string. The line may be empty.

Output Format:
Print "YES" if the brackets are balanced; otherwise print "NO".

Constraints:
0 <= string length <= 100000
The string contains only the six bracket characters listed above.

Sample Input:
([]{})

Expected Output:
YES

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
    int n;
    cin >> n;

    vector<long long> values(n);

    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    long long largest = LLONG_MIN;
    long long secondLargest = LLONG_MIN;

    for (long long value : values) {
        if (value > largest) {
            secondLargest = largest;
            largest = value;
        }
        else if (value < largest && value > secondLargest) {
            secondLargest = value;
        }
    }

    if (secondLargest == LLONG_MIN) {
        cout << "NONE\n";
    }
    else {
        cout << secondLargest << '\n';
    }

    return 0;
}

