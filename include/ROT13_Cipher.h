#ifndef ROT13_CIPHER
#define ROT13_CIPHER
#include <string>
#include <iostream>

using namespace std;

void rot13Encryption(string txt) {
    string encryptedText = "";
    
    for (char c : txt) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            encryptedText += (c - base + 13) % 26 + base;
        } else {
            encryptedText += c;
        }
    }

    cout << "Encrypted Text (ROT13): " << encryptedText << endl;
}

void rot13Decryption(string txt) {
    string decryptedText = "";
    
    for (char c : txt) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            decryptedText += (c - base + 13) % 26 + base;
        } else {
            decryptedText += c;
        }
    }

    cout << "Decrypted Text (ROT13): " << decryptedText << endl;
}

#endif
