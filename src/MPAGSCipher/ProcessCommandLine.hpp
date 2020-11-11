#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

#include "CipherMode.hpp"


//defining data structure to simplify the program settings into one data structure, means fewer input params
//and common data stored in same structure
struct programSettings
{
    bool helpRequested; 
    bool versionRequested;
    std::string inputFile;
    std::string outputFile;
    std::string cipher_key;
    CipherMode ciphMode; //true if user wants encryption, false if decryption
    
};

bool processCommandLine(const std::vector<std::string>& args,
                        programSettings& inpSettings);

#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP 
