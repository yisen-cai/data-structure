//
// Created by 蔡宜身 on 2020/12/14.
//
#include "queues.h"
#include "gtest/gtest.h"



TEST(TestQueues, usingStackW1)
{
    QueueByStackWay1<int> queue;
    for (int I = 0; I < 10; ++I)
    {
        queue.enqueue(I);
    }

    for (int I = 0; I < 10; ++I)
    {
        ASSERT_EQ(I, queue.dequeue());
    }
}
TEST(TestQueues, usingStackW2)
{
    QueueByStackWay2<int> queue;
    for (int I = 0; I < 10; ++I)
    {
        queue.enqueue(I);
    }

    for (int I = 0; I < 10; ++I)
    {
        ASSERT_EQ(I, queue.dequeue());
    }

}