#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack stack;
    stack.push(8);
    stack.push(7);
    stack.push(6);
    cout<<stack.pop();
    cout<<stack.pop();
    cout<<stack.pop();
    cout<<stack.pop();
    return 0;
}

