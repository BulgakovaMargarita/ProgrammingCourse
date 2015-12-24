#ifndef STACKLIB_H
#define STACKLIB_H



class Stack
{
private:
    int *stackPtr;
    const int size;
    int top;
public:

    Stack(int = 10);
    Stack(const Stack &);
    ~Stack();

    void push(const int number);
    void printStack();
    int getStackSize() const;
    int getTop() const;
};



#endif // STACKLIB_H
