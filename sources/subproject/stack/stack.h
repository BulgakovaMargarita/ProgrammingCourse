#ifndef STACK_H
#define STACK_H


class Stack
{
public:
   Stack();
   ~Stack();
   Stack(const Stack &oStack);
   void push();
   int pop();
private:
   int i;
   int *array;
};

#endif // STACK_H
