#ifndef VIGENERE_CIPHER
#define VIGENERE_CIPHER
#include<iostream>
#include<string>

using namespace std;

void encryption(string &txt, const string &key) {
    int keyIndex = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (isalpha(txt[i])) {  
            char offset = isupper(txt[i]) ? 'A' : 'a';  
            char keyChar = isupper(txt[i]) ? toupper(key[keyIndex % key.length()]) : tolower(key[keyIndex % key.length()]);

            txt[i] = (txt[i] - offset + (keyChar - offset)) % 26 + offset;

            keyIndex++;
        }
    }

    cout << "Encrypted Text: " << txt << endl;
}

void decryption(string &txt, const string &key) {
    int keyIndex = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (isalpha(txt[i])) {  
            char offset = isupper(txt[i]) ? 'A' : 'a';  
            char keyChar = isupper(txt[i]) ? toupper(key[keyIndex % key.length()]) : tolower(key[keyIndex % key.length()]);

            txt[i] = (txt[i] - offset - (keyChar - offset) + 26) % 26 + offset;

            keyIndex++;
        }
    }

    cout << "Decrypted Text: " << txt << endl;
}

#endif