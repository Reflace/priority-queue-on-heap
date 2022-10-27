#include "googletest/googletest/include/gtest/gtest.h"
#include "googletest/googletest/include/gtest/gtest-assertion-result.h"
#include "Parallelepiped.hpp"
#include "PriorityQueue.hpp"

TEST(Group1, test1) {
    PriorityQueue<double> pq;
    ASSERT_DOUBLE_EQ(1., 1.);
}

int main(int argc, char **argv)
{   
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS(); 
}
