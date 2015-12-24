#include "stack.h"
#include <math.h>
#include <iostream>
using namespace std;

Stack::Stack()
{
   array=new int(10);
   i=0;
}

Stack::Stack(const Stack &oStack):
    array(oStack.array),
    i(oStack.i)


{

    for (i=0; i<10; i++)
        array[i]=oStack.array[i];

}

Stack::~Stack()
{
  delete[] array;

}

void Stack::push(int a)
{
   array[i]=a;
   i++;

}

int Stack::pop()
{
  i=10;
  b=b+array[i]*pow(10,i);
  i--;
return 0;

}

int Stack::print()
{
  return b;

}


