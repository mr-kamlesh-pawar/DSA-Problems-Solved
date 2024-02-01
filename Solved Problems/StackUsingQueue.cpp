// Design a stack using two queues. Implement a class MyStack with the following operations:

// push(int x): Pushes the element x onto the stack.
// pop(): Removes the element on the top of the stack and returns it. If the stack is empty, print an appropriate message.
// top(): Returns the element on the top of the stack without removing it. If the stack is empty, print an appropriate message.
// empty(): Returns true if the stack is empty; otherwise, returns false.


#include <iostream>
#include <queue>
using namespace std;

class MyStack
{
public:
    queue<int> q1, q2;
    MyStack()
    {
    }

    void push(int x)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int val = q1.front();
        q1.pop();
        return val;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{  int x;
    MyStack my;
  for(int i=1; i<=5; i++){

     cout << "Ener a how many Element: ";
    cin >> x;
    my.push(x);


    

  }cout<<my.pop();
  cout<<my.pop();
  cout<<my.pop();
  cout<<my.pop();
  cout<<my.pop();
   


    

    return 0;
}