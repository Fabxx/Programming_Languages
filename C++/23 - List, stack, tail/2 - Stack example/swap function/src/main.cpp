#include <iostream>
using namespace std;
#include <stack>

int main() {

stack<int> stack1, stack2;

    for (size_t i = 0; i < 5; i++){
        stack1.push(i+1);
        stack2.push(i+5);
    }
    //exchanges the stack1 values with stack2 values.
	stack1.swap(stack2); 

    while (!stack1.empty()){
        cout << "Elemet: " << stack1.top() << endl;
        stack1.pop();
    }
        return 0;
}
