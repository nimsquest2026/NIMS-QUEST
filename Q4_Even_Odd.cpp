/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 4
Question Name: Even or Odd Detector
Marks: 10
Difficulty: Easy
Programming Language: C++17

Problem Description:
Given an integer, determine whether it is even or odd.

Input Format:
One integer N.

Output Format:
Print "Even" if N is even; otherwise print "Odd".

Constraints:
-1000000000 <= N <= 1000000000

Sample Input:
24

Expected Output:
Even

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
using namespace std;

int main() {
    // Read the integer whose parity is being checked.
    long long number;
    cin >> number;

    // Print the classification for the supplied integer.
    if (number % 2 == 0) {
        cout << "even\n";
    } else {
        cout << "odd\n";
    }
    return 0;
}
