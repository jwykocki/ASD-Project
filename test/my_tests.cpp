#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

TEST(findMinDestroyedMyTests, findMinDestroyedTest_g4) {
    std::fstream inputFile;
    inputFile.open(R"(../input/my_tests/g4.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstreamOneLine(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedMyTests, findMinDestroyedTest_pegaz) {
    std::fstream inputFile;
    inputFile.open(R"(../input/my_tests/pegaz.txt)");
    if (!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstreamOneLine(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 2);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedMyTests, findMinDestroyedTest_g5) {
    std::fstream inputFile;
    inputFile.open(R"(../input/my_tests/g5.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstreamOneLine(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
    EXPECT_TRUE(duration.count()<500);
}