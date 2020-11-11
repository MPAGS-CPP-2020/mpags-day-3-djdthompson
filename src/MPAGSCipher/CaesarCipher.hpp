#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include "CipherMode.hpp"

#include <string>
#include <vector>

class CaesarCipher{
private:
    //private member data
    

    const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    const size_t alphabetSize_{alphabet_.size()};

    size_t cipherKey_{0};
public:
    //Constructors/Destructors
    explicit CaesarCipher(const size_t& key);
    explicit CaesarCipher(const std::string& key);//for conversion of key from string to unsigned long
    //explicit keyword prevents constructor from implcitly converting a data_type into a new object if lazy code was written


    //public member data
    


    //member functions
    //size_t getAlphabetSize() const;
    

    std::string applyCipher(const std::string& inpString,const CipherMode& ciphMode) const;


};




#endif // MPAGSCIPHER_CAESARCIPHER_HPP 