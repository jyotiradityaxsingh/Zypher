#ifndef CAESAR_CIPHER
#define CAESAR_CIPHER
#include <string>
#include <iostream>

using namespace std;

void caesarEncryption(string txt, int key) {
    string encryptedText = "";
    
    for (char c : txt) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            encryptedText += (c - base + key) % 26 + base;
        } else {
            encryptedText += c;
        }
    }

    cout << "Encrypted Text: " << encryptedText << endl;
}

void caesarDecryption(string txt, int key) {
    string decryptedText = "";
    
    for (char c : txt) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            decryptedText += (c - base - key + 26) % 26 + base;
        } else {
            decryptedText += c;
        }
    }

    cout << "Decrypted Text: " << decryptedText << endl;
}

#endif
