#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

//TODO: zrobic plik wyjsciowy test_results.txt

TEST(findMinDestroyedBasicTests, findMinDestroyedTest_3_3) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/3_3.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 3);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedBasicTests, findMinDestroyedTest_5_8) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/5_8.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 8);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedBasicTests, findMinDestroyedTest_1_23) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/1_23.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 23);
    EXPECT_TRUE(duration.count()<500);
}
TEST(findMinDestroyedBasicTests, findMinDestroyedTest_10_31) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/10_31.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 31);
    EXPECT_TRUE(duration.count()<500);
}


TEST(findMinDestroyedBasicTests, findMinDestroyedTest_2_3) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/2_3.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 3);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedBasicTests, findMinDestroyedTest_3_8) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/3_8.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 8);
    EXPECT_TRUE(duration.count()<500);
}


TEST(findMinDestroyedBasicTests, findMinDestroyedTest_6_2) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/6_2.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 2);
    EXPECT_TRUE(duration.count()<500);
}

TEST(findMinDestroyedBasicTests, findMinDestroyedTest_7_31) {
    std::fstream inputFile;
    inputFile.open(R"(../input/basic_tests/7_31.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 31);
    EXPECT_TRUE(duration.count()<500);
}