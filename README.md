# Zypher - Encryption & Decryption Tool

Zypher Is A C++ Program That offers Various Encryption And Decryption Algorithms For Securing Text. It Includes A Collection of Classic Ciphers Such As The Caesar Cipher, Atbash Cipher, ROT13 Cipher, Vigenère Cipher, And Polybius Cipher (Both Standard And Custom Variants).

## Features

    1. Caesar Cipher: A Substitution Cipher That Shifts Each Letter of The Plaintext By A Certain Number of Positions Down or Up The Alphabet
    2. Atbash Cipher: A Substitution Cipher That Reverses The Alphabet (A Becomes Z, B Becomes Y, And So On)
    3. ROT13 Cipher: A Special Case of The Caesar Cipher, Where Each Letter Is Shifted By 13 Positions
    4. Vigenère Cipher: A Polyalphabetic Substitution Cipher That Uses A Keyword To Shift Letters In The Plaintext
    5. Polybius Cipher (Standard): A Cipher That Uses A 5x5 Square To Map Letters To Pairs of Digits
    6. Polybius Cipher (Custom): A Variant of The Polybius Cipher Where The 5x5 Square Can Be Customized

## Getting Started

To Use This Program, Compile The C++ Source Code And Execute The Resulting Binary. The Program Will Ask For User Input And Guide You Through The Encryption or Decryption Process.

#### Prerequisites

You Need A C++ Compiler (Example, GCC or Clang) To Build And Run This Program. Ensure The Following Files Are Present And Correctly Configured:

    Caesar_Cipher.h

    Atbash_Cipher.h

    ROT13_Cipher.h

    Vigenère_Cipher.h

    Polybius_Cipher.h

    Polybius_Cipher_Custom.h

#### Compilation

To Compile The Program, Run The Following Command:

```
g++ -o ZYPher main.cpp -I ../include
```

This Assumes The Source Code Is In `main.cpp` And The Necessary Header Files Are In The `../include` Directory
Running The Program

To Run The Compiled Binary, Execute:

```
./Zypher
```

You Will Be Presented With A Menu To Either Encrypt or Decrypt Text.

#### Usage

Once The Program Runs, It Presents You With A Menu For Either Encryption or Decryption:

    Choose The Mode:

```
        1 > Encryption

        2 > Decryption
```

    Choose A Cipher:

```
        1 > Caesar Cipher

        2 > Atbash Cipher

        3 > ROT13 Cipher

        4 > Vigenère Cipher

        5 > Polybius Cipher (Standard)

        6 > Polybius Cipher (Custom)
```

    Input Text:

        Enter The Text You Want To Encrypt or Decrypt.

    Input Additional Parameters:

        For Caesar Cipher, You'll Need To Provide A Key (A Shift Value).

        For Vigenère Cipher, You'll Need To Provide A Keyword.

        For Polybius Ciphers, Just Enter The Text, As No Additional Parameters Are Required.

    Get Result:

        The Program Will Output The Result of The Encryption or Decryption Based On Your Input.

## Example Walkthrough

Here’s How You Might Encrypt Text Using The Caesar Cipher:

    Choose Encryption.

    Select Caesar Cipher.

    Input Your Text, For Example: `HELLO WORLD`.

    Enter A Shift Key, For Example: `3`.

    The Program Will Output The Encrypted Text (With The Key You Entered).

## Error Handling

    If An Invalid Choice Is Entered (Either For The Cipher or For The Encryption/Decryption Mode), The Program Will Prompt The User To Select A Valid Option.

    If The User Enters Invalid Text or A Key, Appropriate Error Messages Will Be Displayed.

## Available Ciphers

#### Caesar Cipher

**Description:** A Simple Substitution Cipher Where Each Letter In The Plaintext Is Shifted By A Certain Number of Positions In The Alphabet.

Usage: Enter The Text And A Shift Key To Encrypt or Decrypt.

#### Atbash Cipher

**Description:** A Substitution Cipher Where The Alphabet Is Reversed. A Becomes Z, B Becomes Y, And So On.

Usage: Enter The Text To Encrypt or Decrypt.

#### ROT13 Cipher

**Description:** A Special Case of The Caesar Cipher With A Fixed Shift of 13 Positions.

Usage: Enter The Text To Encrypt or Decrypt (ROT13 Is Its Own Inverse).

#### Vigenère Cipher

**Description:** A Polyalphabetic Cipher That Uses A Keyword For Encryption And Decryption. The Key Repeats Over The Plaintext.

Usage: Enter The Text And A Keyword To Encrypt or Decrypt.

#### Polybius Cipher (Standard)

**Description:** A Cipher That Uses A 5x5 Grid of Letters. Each Letter Is Represented By A Pair of Digits (Row And Column).

Usage: Enter The Text To Encrypt or Decrypt.

#### Polybius Cipher (Custom)

**Description:** Similar To The Standard Polybius Cipher But With A Customizable 5x5 Grid.

Usage: Enter The Text To Encrypt or Decrypt.

## Contributing

Feel Free To Fork This Repository And Contribute Enhancements, Bug Fixes, or New Ciphers. Pull Requests Are Welcome!

## License

This Project Is Licensed Under The MIT License
