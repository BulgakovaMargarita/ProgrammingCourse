#ifndef STACK_H
#define STACK_H


class Stack
{
public:
   Stack();
   ~Stack();
   Stack(const Stack &oStack);
   void push(int);
   int print();
   int b=0;
private:
   int i;
   int *array;
   int pop();
};

#endif // STACK_H
