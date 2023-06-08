#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"
//zle odczytywane sa wierzcholki grafu
//TEST(findMinDestroyedTests, findMinDestroyedTest_g1) {
//    std::fstream inputFile;
//    inputFile.open(R"(../input/g1.txt)");
//    if(!inputFile.is_open()) exit(-11);
//    std::chrono::duration<double, std::milli> duration{};
//    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream2(inputFile), &duration);
//    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
//    <<" finished after: "<<duration.count()<<"ms\n";
//    EXPECT_EQ(result, 1);
//}
//
//TEST(findMinDestroyedTests, findMinDestroyedTest_g2) {
//    std::fstream inputFile;
//    inputFile.open(R"(../input/g2.txt)");
//    if (!inputFile.is_open()) exit(-11);
//    std::chrono::duration<double, std::milli> duration{};
//    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream2(inputFile), &duration);
//    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
//             <<" finished after: "<<duration.count()<<"ms\n";
//    EXPECT_EQ(result, 5);
//}
//
//TEST(findMinDestroyedTests, findMinDestroyedTest_g3) {
//    std::fstream inputFile;
//    inputFile.open(R"(../input/g3.txt)");
//    if(!inputFile.is_open()) exit(-11);
//    std::chrono::duration<double, std::milli> duration{};
//    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream2(inputFile), &duration);
//    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
//             <<" finished after: "<<duration.count()<<"ms\n";
//    EXPECT_EQ(result, 4);
//}

TEST(findMinDestroyedTests2, findMinDestroyedTest_g4) {
    std::fstream inputFile;
    inputFile.open(R"(../input/g4.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream2(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
}

TEST(findMinDestroyedTests2, findMinDestroyedTest_pegaz) {
    std::fstream inputFile;
    inputFile.open(R"(../input/pegaz.txt)");
    if (!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream2(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 2);
}

TEST(findMinDestroyedTests2, findMinDestroyedTest_g5) {
    std::fstream inputFile;
    inputFile.open(R"(../input/g5.txt)");
    if(!inputFile.is_open()) exit(-11);
    std::chrono::duration<double, std::milli> duration{};
    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream2(inputFile), &duration);
    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
             <<" finished after: "<<duration.count()<<"ms\n";
    EXPECT_EQ(result, 1);
}