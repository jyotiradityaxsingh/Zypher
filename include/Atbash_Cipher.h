#ifndef ATBASH_CIPHER_H
#define ATBASH_CIPHER_H

#include<iostream>
#include<string>

using namespace std;

void atbashEncrypt(string &txt) {
    for (int i = 0; i < txt.length(); i++) {

        if (txt[i] >= 'A' && txt[i] <= 'Z') {
            txt[i] = 'Z' - (txt[i] - 'A');
        }

        else if (txt[i] >= 'a' && txt[i] <= 'z') {
            txt[i] = 'z' - (txt[i] - 'a');
        }
    }

    cout << "Encrypted Text: " << txt << endl;
}

void atbashDecrypt(string &txt) {
    atbashEncrypt(txt);  
    cout << "Decrypted Text: " << txt << endl;
}

#endif 