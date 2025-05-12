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

void generateReversePolybiusSquare(map<string, char>& reversePolybiusSquare, const map<char, string>& polybiusSquare) {
    for (const auto& entry : polybiusSquare) {
        reversePolybiusSquare[entry.second] = entry.first;
    }
}

void customPolybiusEncrypt(string& txt) {
    string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ";  
    int rows = 5, cols = 5;  

    map<char, string> polybiusSquare;
    generateCustomPolybiusSquare(alphabet, polybiusSquare, rows, cols);

    string encryptedText = "";
    for (char c : txt) {
        c = toupper(c);  
        if (isalpha(c)) {
            encryptedText += polybiusSquare.at(c);  
        } else {
            encryptedText += c;  
        }
    }

    txt = encryptedText;  
    cout << "Encrypted Text: " << txt << endl;
}

void customPolybiusDecrypt(string& txt) {
    string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ";  
    int rows = 5, cols = 5;  

    map<char, string> polybiusSquare;
    generateCustomPolybiusSquare(alphabet, polybiusSquare, rows, cols);

    map<string, char> reversePolybiusSquare;
    generateReversePolybiusSquare(reversePolybiusSquare, polybiusSquare);

    string decryptedText = "";
    for (size_t i = 0; i < txt.length(); i += 2) {
        if (i + 1 < txt.length() && isdigit(txt[i]) && isdigit(txt[i + 1])) {
            string code = string(1, txt[i]) + string(1, txt[i + 1]);
            decryptedText += reversePolybiusSquare.at(code);  
        } else {
            decryptedText += txt[i];  
        }
    }

    txt = decryptedText;  
    cout << "Decrypted Text: " << txt << endl;
}

#endif