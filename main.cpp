#include <bits/stdc++.h>
#include "stack.h"
using namespace std;

int main() {

    cout << "Welcome to stack" << endl;

    cout << "To add ==> push" <<endl;
    cout << "To create ==> create" <<endl;
    cout << "To delete ==> pop" <<endl;
    cout << "To check if empty ==> is_empty" << endl;
    cout << "To search  ==> search" << endl;
    cout << "To know size ==> get_size" << endl;
    cout << "To get Top ==> get-top" <<endl;
    cout << "To add stack to another ==> join" <<endl;
    cout << "To reverse ==> reverse" << endl;
    cout << "To display ==> display" <<endl;
    cout << "To end ==> clear" << endl;

    cout << "==============================" << endl;

//    check empty Stack

    Stack s1;

    s1.display();
    s1.get_top();
    s1.get_size();
    s1.is_empty();
    s1.search(5);
    s1.pop();
    s1.clear();
    s1.create(5);    // 1 2 3 4 5
    s1.display();

//    check not empty Stack

    Stack s2;

    s2.create(5);    // 1 2 3 4 5
    s2.push(6);
    s2.push(7);
    s2.search(1);
    s2.search(7);
    s2.search(4);
    s2.search(99);
    s2.display();
    s2.get_size();
    s2.get_top();
    s2.push(8);
    s2.push(9);
    s2.pop();
    s2.display();
    s2.is_empty();
    s2.get_size();
    s2.get_top();
    s2.join(s1);
    s2.display();
    s1.display();
    s2.get_size();
    s2.reverse();
    s1.reverse();
    s2.display();
    s1.display();
    s2.clear();
    s1.clear();

    return 0;
}