#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "funSearchProblem.h"

using testing::Eq;

TEST(test, facingsun){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(4);
    EXPECT_EQ(2, FunSearchProblem::facingSun(v));
}

TEST(test, squareR){
    EXPECT_EQ(3, FunSearchProblem::squareR(11));
    EXPECT_EQ(6, FunSearchProblem::squareR(45));
}

TEST(test, missingvalue){
    vector<int> v;
    v.push_back(2);
    v.push_back(-5);
    v.push_back(0);
    v.push_back(102);
    v.push_back(7);
    v.push_back(-4);
    EXPECT_EQ(2, FunSearchProblem::smallestMissingValue(v));
    vector<int> x;
    x.push_back(-5);
    x.push_back(0);
    x.push_back(-102);
    x.push_back(-7);
    x.push_back(-4);
    EXPECT_EQ(0, FunSearchProblem::smallestMissingValue(x));
}

TEST(test, minPages){

}
