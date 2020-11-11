#ifndef MPAGSCIPHER_CIPHERMODE_HPP
#define MPAGSCIPHER_CIPHERMODE_HPP

/*
Header file to contain ENUMERATOR for the mode of cipher being requested: encryption/decryption,
no cpp file required in this case as full definition in header
*/

enum class CipherMode{
    Encrypt,
    Decrypt
};


#endif // MPAGSCIPHER_CIPHERMODE_HPP 