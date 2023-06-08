#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_3_3) {
    std::fstream inputFile;
    inputFile.open(R"(../input/3_3.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 3);
}

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_5_8) {
    std::fstream inputFile;
    inputFile.open(R"(../input/5_8.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 8);
}

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_1_23) {
    std::fstream inputFile;
    inputFile.open(R"(../input/1_23.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 23);
}
TEST(findMinDestroyedLargeTests, findMinDestroyedTest_10_31) {
    std::fstream inputFile;
    inputFile.open(R"(../input/10_31.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 31);
}

TEST(findMinDestroyedLargeTests, findMinDestroyedTest_8_5041) {
    std::fstream inputFile;
    inputFile.open(R"(../input/8_5041.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 5041);
}

TEST(findMinDestroyedLargeTests2, findMinDestroyedTest_2_3) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_input/2_3.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 3);
}

TEST(findMinDestroyedLargeTests2, findMinDestroyedTest_3_8) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_input/3_8.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 8);
}

TEST(findMinDestroyedLargeTests2, findMinDestroyedTest_4_1000) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_input/4_1000.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1000);
}

TEST(findMinDestroyedLargeTests2, findMinDestroyedTest_5_500) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_input/5_500.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 500);
}

TEST(findMinDestroyedLargeTests2, findMinDestroyedTest_6_2) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_input/6_2.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 2);
}

TEST(findMinDestroyedLargeTests2, findMinDestroyedTest_7_31) {
    std::fstream inputFile;
    inputFile.open(R"(../input/new_input/7_31.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 31);
}

