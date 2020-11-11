//Unit tests for tranformChar
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "TransformChar.hpp"


TEST_CASE("Characters created by transform char are uppercase converted","[alphanumeric]"){
    const std::string upper("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    const std::string lower("abcdefghijklmnopqrstuvwxyz");
    size_t i{0};
    for (const auto& lowChar : lower){
        REQUIRE(transformChar(lowChar)==std::string{upper[i]});
        i++;
    }
}

TEST_CASE("Digits converted to Strings","[alphanumeric]"){
    const std::vector<std::string> stringAlpha={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    const std::string stringNum{"0123456789"};

    for (size_t i{0};i<stringNum.size();i++){
        REQUIRE(transformChar(stringNum[i])==stringAlpha[i]);
      
    }
}


TEST_CASE("Remove non-alphanumeric","[punctuation]"){
    const std::string nonAlphaNum={"␀␁␂␃␄␅␆␇␈␉␊␋␌␍␎␏␐␑␒␓␔␕␖␗␘␙␚␛␜␝␞␟␠!\"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~␡"};

    //require that for any of special characters an empty string is returned
    for (const auto& specialChar : nonAlphaNum){
        REQUIRE(transformChar(specialChar)=="");
      
    }
}