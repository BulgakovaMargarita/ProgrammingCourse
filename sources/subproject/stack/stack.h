#ifndef STACK_H
#define STACK_H


class Stack
{
public:
    Stack();
    ~Stack();
    //сделать конструктор копирования
   void push(const int);
   int pop();
private:
   int top;
   int *array;
};

#endif // STACK_H
