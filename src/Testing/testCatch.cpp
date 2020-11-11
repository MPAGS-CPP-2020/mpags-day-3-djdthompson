//Test to test whther catch works 
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

//initial test to get use to testing syntax, test whether addition works

//TEST_CASE(desciption of test,tag for grouping tests){...}

TEST_CASE("Addition successful","[math]"){
    //Boolean statement in require which will return true for a successful test
    REQUIRE(1+1==2);
}
//test doomed to fail
TEST_CASE("Does test pick up failure ","[mathFail]"){
    //Boolean statement in require which will return true for a successful test
    REQUIRE(1-1==0);
}