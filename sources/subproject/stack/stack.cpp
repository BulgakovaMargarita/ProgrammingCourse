#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
   array=new int(10);
   top=0;
}

Stack::~Stack()
{
   //  delete[array];

}

void Stack::push(const int a)
{
   array[top]=a;
   top=top+1;
}

int Stack::pop()
{
   int a;
   top=top-1;
   a=array[top];
return a;
}
