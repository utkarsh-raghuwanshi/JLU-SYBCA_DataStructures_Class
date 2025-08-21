#include<stdio.h>
using namespace.std
void push(int stack[], int &pointer, inte element)
void pop(int stack[], int &pointer)
int main()
{
  int stack[size];
  int ponter = -1;
}
void push(int stack[], int &pointer, inte element)
{
  if(pointer == size-1)
  {
    cout<<"Stack is full"<<endl;
  }else
  {
    pointer ++;
    stack[pointer] = element;
  }
}
