#include "gtest/gtest.h"
#include <iostream>
#include <stack>
using namespace std;

void showStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << "\t" << s.top();
        s.pop();
    }
    cout << '\n';
}

TEST(TestStackSTL, pushAndPop)
{
    stack<int> s;
    for (int i = 0; i < 10; ++i)
    {
        s.push(i);
    }
    cout << "The stack is: ";
    cout << "\ns.size(): " << s.size();
    cout << "\ns.top(): " << s.top();
    s.pop();
    showStack(s);
    ASSERT_EQ(8, s.top());
    showStack(s);
}