#include "linked_list_stack.h"
#include "stack_class.h"
#include "gtest/gtest.h"

TEST(TestStackClass, push)
{
    Stack<int> stack(10);
    for (size_t i = 0; i < 10; i++)
    {
        stack.push(i);
    }

    stack.printStack();
    for (size_t i = 9; i > 0; i--)
    {
        ASSERT_EQ(i, stack.pop());
    }
}

TEST(TestStackClass, linkedListPush)
{
    LinkedListStack<int> stack;
    for (int i = 0; i < 10; i++)
    {
        stack.push(i);
    }

    for (int i = 9; i > 0; i--)
    {
        ASSERT_EQ(i, stack.pop());
    }
}

TEST(TestStackClass, hello)
{
    ASSERT_EQ(1, 1);
}
