#ifndef POLYBIUS_CIPHER_CUSTOM_H
#define POLYBIUS_CIPHER_CUSTOM_H

#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <vector>

using namespace std;

void generateCustomPolybiusSquare(const string& alphabet, map<char, string>& polybiusSquare, int rows, int cols) {
    int index = 0;
    for (char letter : alphabet) {
        int row = index / cols + 1;
        int col = index % cols + 1;
        polybiusSquare[letter] = to_string(row) + to_string(col);
        index++;
        if (row > rows) break; 
    }
}

void generateReversePolybiusSquare(const map<char, string>& polybiusSquare, map<string, char>& reversePolybiusSquare) {
    for (const auto& entry : polybiusSquare) {
        reversePolybiusSquare[entry.second] = entry.first;
    }
}

void encryption(const string& txt, const map<char, string>& polybiusSquare) {
    string encryptedText = "";
    for (char c : txt) {
        c = toupper(c);  
        if (isalpha(c)) {
            encryptedText += polybiusSquare.at(c);  
        } else {
            encryptedText += c;  
        }
    }
    cout << "Encrypted Text: " << encryptedText << endl;
}

void decryption(const string& txt, const map<string, char>& reversePolybiusSquare) {
    string decryptedText = "";
    for (size_t i = 0; i < txt.length(); i += 2) {
        if (i + 1 < txt.length() && isdigit(txt[i]) && isdigit(txt[i + 1])) {
            string code = string(1, txt[i]) + string(1, txt[i + 1]);
            decryptedText += reversePolybiusSquare.at(code);  
        } else {
            decryptedText += txt[i];  
        }
    }
    cout << "Decrypted Text: " << decryptedText << endl;
}

#endif 