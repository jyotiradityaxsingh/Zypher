#include <iostream>
    #include <string>
    #include "../include/Caesar_Cipher.h"

    using namespace std;

    int main() {
        cout << "*** WELCOME TO ZYPHER ***" << endl;
        cout << "1> Encryption" << endl;
        cout << "2> Decryption" << endl;

        int choice = 0;
        cout << "> ";
        cin >> choice;

        if (choice == 1 || choice == 2) {  
            cout << "*** Ciphers:  ***" << endl;
            cout << "1> Caesar Cipher" << endl;

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
            }
        } else {
            cout << "Invalid choice. Please select either 1 for Encryption or 2 for Decryption." << endl;
        }

        return 0;
    }