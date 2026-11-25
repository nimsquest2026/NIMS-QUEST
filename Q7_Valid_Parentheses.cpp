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
#include <string>
#include <stack>
using namespace std;

int main() {
    // Read the complete bracket sequence, including an empty line if given.
    string sequence;
    getline(cin, sequence);

    // Match each closing bracket with the most recent opening bracket.
    stack<char> openings;
    bool valid = true;
    for (char current : sequence) {
        if (current == '(' || current == '[' || current == '{') {
            openings.push(current);
        } else {
            if (openings.empty()) {
                valid = false;
                break;
            }
            char opening = openings.top();
            openings.pop();
            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{')) {
                valid = false;
                break;
            }
        }
    }

    // Report whether the sequence satisfies the bracket rules.
    cout << (valid && openings.empty() ? "YES" : "NO") << '\n';
    return 0;
}
