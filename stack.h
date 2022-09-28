#include <bits/stdc++.h>
#include "node.h"
using namespace std;

class Stack{

    node* top = nullptr;
    int counter = 0;

    bool empty(){
        return (top == nullptr);
    }

    bool found(int item){
        bool find_item = false;
        if(!empty()){
            node* curr_ptr = top;
            while (curr_ptr != nullptr){
                if (curr_ptr->get_data() == item){
                    find_item = true;
                    break;
                }
                curr_ptr = curr_ptr->get_next();
            }
        }
        return find_item;
    }

public:
    Stack(){
        // This is constructor
    }

    void push(int item){
        node* new_node = new node(item);
        if (!empty()){
            new_node->set_next(top);
        }
        top = new_node;
        counter++;
    }

    void create(int num){
        for (int i = 0; i < num; ++i) {
            int item = 0;
            cout << "Enter item " << i+1 << " : ";
            cin >> item;
            push(item);
        }
    }

    void pop(){
        if (!empty()){
            node* curr_ptr = top;
            top = top->get_next();
            delete curr_ptr;
            counter--;
        }else{
            cout << "Can't delete , Stack is empty" << endl;
        }
    }

    void is_empty(){
        string s = empty() ? "Stack is empty" : "Stack isn't empty";
        cout << s << endl;
    }

    void search(int item) {
        if (empty()) {
            cout << "No " << item << " isn't found, " <<"Stack is empty" << endl;
        }else if(found(item)){
            cout << "Yes " << item << " is found" << endl;
        }else {
            cout << "No " << item << " isn't found, " <<"item don't in it" << endl;
        }
    }

    void get_size(){
            cout << "The size of stack is : " << counter << endl;
    }

    void get_top(){
        if (! empty()){
            cout << "The Top is ==> " << top->get_data() << endl;
        }else{
            cout << "No Top, stack is empty" << endl;
        }
    }

    void join(Stack s){
        s.reverse();
        node* curr_ptr = s.top;
        while (curr_ptr != nullptr){
            push(curr_ptr->get_data());
            curr_ptr = curr_ptr->get_next();
        }
        s.reverse();
    }

    void reverse(){
        node* pre = nullptr;
        node* curr = top;
        node* next;
        while (curr != nullptr){
            next = curr->get_next();
            curr->set_next(pre);
            pre = curr;
            curr = next;
        }
        top = pre;
    }

    void display(){
        if(!empty()){
            node* curr_ptr = top;
            cout << "The Stack is ==> ";
            while (curr_ptr->get_next() != nullptr){
                cout << curr_ptr->get_data() << " ---> ";
                curr_ptr = curr_ptr->get_next();
            }
            cout << curr_ptr->get_data();
            cout << endl;
        }else{
            cout << "Can't display, Stack is empty" << endl;
        }
    }

    void clear(){
        if(!empty()){
            while (! empty()){
                pop();
            }
        } else{
            cout << "Can't Clear, Stack is empty" << endl;
        }
    }
};
