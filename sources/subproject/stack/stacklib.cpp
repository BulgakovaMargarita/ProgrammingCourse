#include "stacklib.h"
#include "stackapp.h"
#include <iostream>
using namespace std;
#include <cassert>
#include <iostream>

#include <iomanip>

Stack::Stack(int maxSize) :
    size(maxSize)
{
    stackPtr = new int[size];
    top = 0;
}


Stack::Stack(const Stack & otherStack) :
    size(otherStack.getStackSize()) //
{
    stackPtr = new int[size];
    top = otherStack.getTop();


    for(int ix = 0; ix < top; ix++)
        stackPtr[ix] = otherStack.stackPtr[ix];

}


Stack::~Stack()
{
    delete [] stackPtr;
}


void Stack::push(const int number)
{


    assert(top < size);

    stackPtr[top++] = number;
}






void Stack::printStack()
{
    for (int ix = top-1 ; ix >= 0; ix--){
        cout << "|" << stackPtr[ix];}
}


int Stack::getStackSize() const
{
    return size;
}




int Stack::getTop() const
{
    return top;
}
