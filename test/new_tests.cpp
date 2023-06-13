#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

TEST(findMinDestroyedNewTests, findMinDestroyedTest_10_1) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_tests/10_1.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
    EXPECT_TRUE(duration.count()<500);
}


TEST(findMinDestroyedNewTests, findMinDestroyedTest_13_19) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_tests/13_19.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 19);
    EXPECT_TRUE(duration.count()<500);
}


TEST(findMinDestroyedNewTests, findMinDestroyedTest_14_1) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_tests/14_1.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedNewTests, findMinDestroyedTest_11_20175) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_tests/11_20175.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 20175);
    EXPECT_TRUE(duration.count()<500);
}


TEST(findMinDestroyedNewTests, findMinDestroyedTest_12_991043) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_tests/12_991043.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 991043);
    EXPECT_TRUE(duration.count()<500);
}