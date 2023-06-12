#include "gtest/gtest.h"
#include "functions.h"
#include "Graph.h"

//TEST(findMinDestroyedNewTests, findMinDestroyedTest_) {
//    std::fstream inputFile;
//    inputFile.open(R"(../input/new_tests/???.txt)");
//    if(!inputFile.is_open()) exit(-11);
//    std::chrono::duration<double, std::milli> duration{};
//    int result = measureTime<int, Graph>(&findMinDestroyed2, createGraphFromIstream(inputFile), &duration);
//    std::cout<<::testing::UnitTest::GetInstance()->current_test_info()->name()
//             <<" finished after: "<<duration.count()<<"ms\n";
//    EXPECT_EQ(result, 0);
//    EXPECT_TRUE(duration.count()<500);
//}
