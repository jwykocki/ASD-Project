#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_4_1000) {
    std::fstream inputFile;
    inputFile.open(R"(../input/large_tests/4_1000.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1000);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_5_500) {
    std::fstream inputFile;
    inputFile.open(R"(../input/large_tests/5_500.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 500);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_8_5041) {
    std::fstream inputFile;
    inputFile.open(R"(../input/large_tests/8_5041.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 5042);
    EXPECT_TRUE(duration.count()<500);
}


