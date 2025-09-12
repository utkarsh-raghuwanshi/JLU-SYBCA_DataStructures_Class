// Implementing a circular que
#include <iostream>
using namespace std;

const int size = 5;
int Que[size];
int Front = -1;
int Rear = -1;

void display();
void Enq(int element);
void deq();

int main()
{
    Enq(0);
    Enq(1);
    Enq(2);
    Enq(3);
    Enq(4);
    Enq(5);
    display();
    return 0;
}
void display()
{
    if(Front == -1) 
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout<< "Elements in the queue are: ";
    int i = Front;
    while(true)
    {
        cout << Que[i] << " ";
        if(i == Rear)
            break;
        i = (i + 1) % size;
    }
}

void Enq(int element)
{
    if((Front == 0 && Rear == size - 1) || (Rear == (Front - 1) % (size - 1)))
    {
        cout << "Queue is full" << endl;
        return;
    }
    else if(Front == -1)
    {
        Front = Rear = 0;
        Que[Rear] = element;
    }
    else if(Rear == size - 1 && Front != 0)
    {
        Rear = 0;
        Que[Rear] = element;
    }
    else
    {
        Rear++;
        Que[Rear] = element;
    }
}
void deq()
{
    if(Front == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    int data = Que[Front];
    Que[Front] = -1;
    if(Front == Rear)
    {
        Front = -1;
        Rear = -1;
    }
    else if(Front == size - 1)
        Front = 0;
    else
        Front++;
    cout << "Deleted element is: " << data << endl;
}
