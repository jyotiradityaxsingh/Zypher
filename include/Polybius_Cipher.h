#ifndef POLYBIUS_CIPHER
#define POLYBIUS_CIPHER
#include<iostream>
#include<string>
#include<map>
#include<cctype>

using namespace std;

void generatePolybiusSquare(map<char, string> &polybiusSquare) {
    string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ"; 
    int row = 1, col = 1;

    for (char letter : alphabet) {
        polybiusSquare[letter] = to_string(row) + to_string(col);
        col++;
        if (col > 5) {
            col = 1;
            row++;
        }
    }
}

void encryption(string &txt) {
    map<char, string> polybiusSquare;
    generatePolybiusSquare(polybiusSquare);

    for (int i = 0; i < txt.length(); i++) {
        txt[i] = toupper(txt[i]);
        if (txt[i] == 'J') {
            txt[i] = 'I';
        }
    }

    string encryptedText = "";
    for (char c : txt) {
        if (isalpha(c)) {
            encryptedText += polybiusSquare[c];
        } else {
            encryptedText += c; 
        }
    }

    cout << "Encrypted Text: " << encryptedText << endl;
}

void decryption(string &txt) {
    map<char, string> polybiusSquare;
    generatePolybiusSquare(polybiusSquare);

    map<string, char> reversePolybiusSquare;
    for (auto &entry : polybiusSquare) {
        reversePolybiusSquare[entry.second] = entry.first;
    }

    string decryptedText = "";
    for (int i = 0; i < txt.length(); i += 2) {
        if (i + 1 < txt.length() && isdigit(txt[i]) && isdigit(txt[i+1])) {
            string code = string(1, txt[i]) + string(1, txt[i + 1]);
            decryptedText += reversePolybiusSquare[code];
        } else {
            decryptedText += txt[i]; 
        }
    }

    cout << "Decrypted Text: " << decryptedText << endl;
}

#endif