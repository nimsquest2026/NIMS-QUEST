/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 9
Question Name: Detect the Cycle - Linked List
Marks: 30
Difficulty: Hard
Programming Language: C++17

Problem Description:
The input describes a singly linked list. The last node points to the node
at index POS when POS is between 0 and N - 1. If POS is -1, the last node
points to null. Determine whether the resulting list contains a cycle.

Input Format:
The first line contains N.
The second line contains N space-separated node values.
The third line contains POS, the zero-based index linked from the tail,
or -1 when the tail points to null.

Output Format:
Print "YES" if the list contains a cycle; otherwise print "NO".

Constraints:
1 <= N <= 100000
-1000000000 <= each node value <= 1000000000
-1 <= POS < N

Sample Input:
4
3 2 0 -4
1

Expected Output:
YES

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int value;
    ListNode* next;
    ListNode() : value(0), next(nullptr) {}
};

int main() {
    // Read node values and the index used to connect the tail.
    int n;
    cin >> n;
    vector<ListNode> nodes(n);
    for (int i = 0; i < n; ++i) {
        cin >> nodes[i].value;
        if (i + 1 < n) {
            nodes[i].next = &nodes[i + 1];
        }
    }
    int position;
    cin >> position;
    if (position >= 0) {
        nodes[n - 1].next = &nodes[position];
    }

    // Inspect the links to determine whether traversal revisits a node.
    ListNode* slow = &nodes[0];
    ListNode* fast = &nodes[0];
    bool hasCycle = false;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            hasCycle = true;
            break;
        }
    }

    // Report whether the linked structure contains a cycle.
    cout << (hasCycle ? "YES" : "NO") << '\n';
    return 0;
}
