#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

TEST(findMinDestroyedTests, findMinDestroyedTest_g1) {
    std::fstream inputFile;
    inputFile.open(R"(../input/g1.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
    <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
}

TEST(findMinDestroyedTests, findMinDestroyedTest_g2) {
    std::fstream inputFile;
    inputFile.open(R"(../input/g2.txt)");
    if (!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 5);
}

TEST(findMinDestroyedTests, findMinDestroyedTest_g3) {
    std::fstream inputFile;
    inputFile.open(R"(../input/g3.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 4);
}

TEST(findMinDestroyedTests, findMinDestroyedTest_g4) {
    std::fstream inputFile;
    inputFile.open(R"(../input/g4.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
}

TEST(findMinDestroyedTests, findMinDestroyedTest_pegaz) {
    std::fstream inputFile;
    inputFile.open(R"(../input/pegaz.txt)");
    if (!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 2);
}