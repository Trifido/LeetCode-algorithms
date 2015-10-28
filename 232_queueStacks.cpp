#include <iostream>
#include <cmath>
#include <vector>
#include <stack>

using namespace std;

stack<int> p1, p2;

void imprimir(vector<int> v){
    for(unsigned int i=0; i<v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
}

// Push element x to the back of queue.
void push(int x) {
    while(!p1.empty()){
        p2.push(p1.top());
        p1.pop();
    }

    p2.push(x);

    while(!p2.empty()){
        p1.push(p2.top());
        p2.pop();
    }
}

// Removes the element from in front of queue.
void pop(void) {
    p1.pop();
}

// Get the front element.
int peek(void) {
    return p1.top();
}

// Return whether the queue is empty.
bool empty(void) {
    return p1.empty();
}

int main(){



}
