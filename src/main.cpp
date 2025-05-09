#include <iostream>
#include <string>
#include "../include/Caesar_Cipher.h"
#include "../include/Atbash_Cipher.h"
#include "../include/ROT13_Cipher.h"
#include "../include/Vigenere_Cipher.h"  

using namespace std;

int main() {
    cout << "*** WELCOME TO ZYPHER ***" << endl;
    cout << "1> Encryption" << endl;
    cout << "2> Decryption" << endl;

    int choice = 0;
    cout << "> ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << "*** Ciphers: ***" << endl;
        cout << "1> Caesar Cipher" << endl;
        cout << "2> Atbash Cipher" << endl;
        cout << "3> ROT13 Cipher" << endl;  
        cout << "4> Vigenère Cipher" << endl; 

        int usrInput = 0;
        cout << "Enter A Cipher: ";
        cin >> usrInput;

        if (usrInput == 1) {  
            int key = 0;
            string txt;

            cout << "Enter Text: ";
            cin.ignore();  
            getline(cin, txt);  

            cout << "Enter Key: ";
            cin >> key;

            if (choice == 1) {
                caesarEncryption(txt, key);  
            } else if (choice == 2) {
                caesarDecryption(txt, key);  
            }

        } else if (usrInput == 2) {  
            string txt;

            cout << "Enter Text: ";
            cin.ignore();  
            getline(cin, txt);  

            if (choice == 1) {
                encryption(txt);  
            } else if (choice == 2) {
                decryption(txt);  
            }

        } else if (usrInput == 3) {  
            string txt;

            cout << "Enter Text: ";
            cin.ignore();  
            getline(cin, txt);  

            if (choice == 1) {
                rot13Encryption(txt);  
            } else if (choice == 2) {
                rot13Decryption(txt);  
            }

        } else if (usrInput == 4) {  
            string txt, key;

            cout << "Enter Text: ";
            cin.ignore();  
            getline(cin, txt);  

            cout << "Enter Key: ";
            getline(cin, key);  

            if (choice == 1) {
                encryption(txt, key);  
            } else if (choice == 2) {
                decryption(txt, key);  
            }

        } else {
            cout << "Invalid Choice. Please Select Either Caesar Cipher, Atbash Cipher, ROT13 Cipher, or Vigenère Cipher" << endl;
        }

    } else {
        cout << "Invalid Choice. Please Select Either 1 For Encryption or 2 For Decryption." << endl;
    }

    return 0;
}