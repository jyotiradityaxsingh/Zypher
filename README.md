![Banner](Resources/Banner%20(Zypher).png)

# ZYPHER - Encryption & Decryption Tool

ZYPHER Is A C++ Program That Offers Various Encryption And Decryption Algorithms For Securing Text. It Includes A Collection of Classic Ciphers Such As The Caesar Cipher, Atbash Cipher, Rot13 Cipher, Vigenère Cipher, And Polybius Cipher (Both Standard And Custom Variants).

## Features

- **Caesar Cipher**: A Substitution Cipher That Shifts Each Letter of The Plaintext By A Certain Number of Positions Down or Up The Alphabet.
- **Atbash Cipher**: A Substitution Cipher That Reverses The Alphabet (A Becomes Z, B Becomes Y, And So On).
- **ROT13 Cipher**: A Special Case of The Caesar Cipher, Where Each Letter Is Shifted By 13 Positions.
- **Vigenère Cipher**: A Polyalphabetic Substitution Cipher That Uses A Keyword To Shift Letters In The Plaintext.
- **Polybius Cipher (Standard)**: A Cipher That Uses A 5x5 Square To Map Letters To Pairs of Digits.
- **Polybius Cipher (Custom)**: A Variant of The Polybius Cipher Where The 5x5 Square Can Be Customized.

## Getting Started

To Use This Program, Compile The C++ Source Code And Execute The Resulting Binary. The Program Will Ask For User Input And Guide You Through The Encryption or Decryption Process.

### Prerequisites

You Need A C++ Compiler (e.g., GCC Or Clang) To Build And Run This Program. Ensure The Following Files Are Present And Correctly Configured:

- `Caesar_Cipher.h`
- `Atbash_Cipher.h`
- `ROT13_Cipher.h`
- `Vigenere_Cipher.h`
- `Polybius_Cipher.h`
- `Polybius_Cipher_Custom.h`

### Compilation

To Compile The Program, Run The Following Command:

```bash
g++ -o ZYPHER main.cpp -I ../include
```

This Assumes The Source Code Is In `main.cpp` And The Necessary Header Files Are In The `../include` Directory.

### Running The Program

To Run The Compiled Binary, Execute:

```bash
./ZYPHER
```

You Will Be Presented With A Menu To Either **encrypt** or **decrypt** Text.

## Usage

Once The Program Runs, It Presents You With A Menu For Either **encryption** or **decryption**:

1. **Choose The Mode**:

   - `1 > Encryption`
   - `2 > Decryption`

2. **Choose A Cipher**:

   - `1 > Caesar Cipher`
   - `2 > Atbash Cipher`
   - `3 > ROT13 Cipher`
   - `4 > Vigenère Cipher`
   - `5 > Polybius Cipher (Standard)`
   - `6 > Polybius Cipher (Custom)`

3. **Input Text**:

   - Enter The Text You Want To Encrypt or Decrypt.

4. **Input Additional Parameters**:

   - For **Caesar Cipher**, You'll Need To Provide A Key (A Shift Value).
   - For **Vigenère Cipher**, You'll Need To Provide A Keyword.
   - For **Polybius Ciphers**, Just Enter The Text, As No Additional Parameters Are Required.

5. **Get Result**:

   - The Program Will Output The Result of The Encryption or Decryption Based On Your Input.

### Example Walkthrough

Here’s How You Might Encrypt Text Using The **Caesar Cipher**:

1. Choose **Encryption**.
2. Select **Caesar Cipher**.
3. Input Your Text, For Example: `Hello World`.
4. Enter A Shift Key, For Example: `3`.
5. The Program Will Output The Encrypted Text (With The Key You Entered).

### Error Handling

- If An Invalid Choice Is Entered (Either For The Cipher or For The Encryption/Decryption Mode), The Program Will Prompt The User To Select A Valid Option.
- If The User Enters Invalid Text or A Key, Appropriate Error Messages Will Be Displayed.

## Available Ciphers

### 1. **Caesar Cipher**

- **Description**: A Simple Substitution Cipher Where Each Letter In The Plaintext Is Shifted By A Certain Number of Positions In The Alphabet.
- **usage**: Enter The Text And A Shift Key To Encrypt or Decrypt.

### 2. **Atbash Cipher**

- **Description**: A Substitution Cipher Where The Alphabet Is Reversed. `A` Becomes `Z`, `B` Becomes `Y`, And So On.
- **Usage**: Enter The Text To Encrypt or Decrypt.

### 3. **ROT13 Cipher**

- **Description**: A Special Case of The Caesar Cipher With A Fixed Shift of 13 Positions.
- **Usage**: Enter The Text To Encrypt or Decrypt (ROT13 Is Its Own Inverse).

### 4. **Vigenère Cipher**

- **Description**: A Polyalphabetic Cipher That Uses A Keyword For Encryption And Decryption. The Key Repeats Over The Plaintext.
- **Usage**: Enter The Text And A Keyword To Encrypt or Decrypt.

### 5. **Polybius Cipher (Standard)**

- **Description**: A Cipher That Uses A 5x5 Grid of Letters. Each Letter Is Represented By A Pair of Digits (Row And Column).
- **Usage**: Enter The Text To Encrypt or Decrypt.

### 6. **Polybius Cipher (Custom)**

- **Description**: Similar To The Standard Polybius Cipher But With A Customizable 5x5 Grid.
- **Usage**: Enter The Text To Encrypt or Decrypt.

## Contributing

Feel Free To Fork This Repository And Contribute Enhancements, Bug Fixes, or New Ciphers. Pull Requests Are Welcome!

## License

This Project Is Licensed Under The MIT License
