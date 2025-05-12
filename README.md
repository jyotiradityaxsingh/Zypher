![Banner](Resources/Banner%20(Zypher).png)

# ZYPHER - Encryption & Decryption Tool

ZYPHER is a C++ program that offers various encryption and decryption algorithms for securing text. It includes a collection of classic ciphers such as the Caesar Cipher, Atbash Cipher, ROT13 Cipher, Vigenère Cipher, and Polybius Cipher (both standard and custom variants).

## Features

- **Caesar Cipher**: A substitution cipher that shifts each letter of the plaintext by a certain number of positions down or up the alphabet.
- **Atbash Cipher**: A substitution cipher that reverses the alphabet (A becomes Z, B becomes Y, and so on).
- **ROT13 Cipher**: A special case of the Caesar cipher, where each letter is shifted by 13 positions.
- **Vigenère Cipher**: A polyalphabetic substitution cipher that uses a keyword to shift letters in the plaintext.
- **Polybius Cipher (Standard)**: A cipher that uses a 5x5 square to map letters to pairs of digits.
- **Polybius Cipher (Custom)**: A variant of the Polybius cipher where the 5x5 square can be customized.

## Getting Started

To use this program, compile the C++ source code and execute the resulting binary. The program will ask for user input and guide you through the encryption or decryption process.

### Prerequisites

You need a C++ compiler (e.g., GCC or Clang) to build and run this program. Ensure the following files are present and correctly configured:

- `Caesar_Cipher.h`
- `Atbash_Cipher.h`
- `ROT13_Cipher.h`
- `Vigenere_Cipher.h`
- `Polybius_Cipher.h`
- `Polybius_Cipher_Custom.h`

### Compilation

To compile the program, run the following command:

```bash
g++ -o ZYPHER main.cpp -I ../include
```

This assumes the source code is in `main.cpp` and the necessary header files are in the `../include` directory.

### Running the Program

To run the compiled binary, execute:

```bash
./ZYPHER
```

You will be presented with a menu to either **Encrypt** or **Decrypt** text.

## Usage

Once the program runs, it presents you with a menu for either **Encryption** or **Decryption**:

1. **Choose the mode**:

   - `1 > Encryption`
   - `2 > Decryption`

2. **Choose a cipher**:

   - `1 > Caesar Cipher`
   - `2 > Atbash Cipher`
   - `3 > ROT13 Cipher`
   - `4 > Vigenère Cipher`
   - `5 > Polybius Cipher (Standard)`
   - `6 > Polybius Cipher (Custom)`

3. **Input text**:

   - Enter the text you want to encrypt or decrypt.

4. **Input additional parameters**:

   - For **Caesar Cipher**, you'll need to provide a key (a shift value).
   - For **Vigenère Cipher**, you'll need to provide a keyword.
   - For **Polybius Ciphers**, just enter the text, as no additional parameters are required.

5. **Get result**:

   - The program will output the result of the encryption or decryption based on your input.

### Example Walkthrough

Here’s how you might encrypt text using the **Caesar Cipher**:

1. Choose **Encryption**.
2. Select **Caesar Cipher**.
3. Input your text, for example: `HELLO WORLD`.
4. Enter a shift key, for example: `3`.
5. The program will output the encrypted text (with the key you entered).

### Error Handling

- If an invalid choice is entered (either for the cipher or for the encryption/decryption mode), the program will prompt the user to select a valid option.
- If the user enters invalid text or a key, appropriate error messages will be displayed.

## Available Ciphers

### 1. **Caesar Cipher**

- **Description**: A simple substitution cipher where each letter in the plaintext is shifted by a certain number of positions in the alphabet.
- **Usage**: Enter the text and a shift key to encrypt or decrypt.

### 2. **Atbash Cipher**

- **Description**: A substitution cipher where the alphabet is reversed. `A` becomes `Z`, `B` becomes `Y`, and so on.
- **Usage**: Enter the text to encrypt or decrypt.

### 3. **ROT13 Cipher**

- **Description**: A special case of the Caesar cipher with a fixed shift of 13 positions.
- **Usage**: Enter the text to encrypt or decrypt (ROT13 is its own inverse).

### 4. **Vigenère Cipher**

- **Description**: A polyalphabetic cipher that uses a keyword for encryption and decryption. The key repeats over the plaintext.
- **Usage**: Enter the text and a keyword to encrypt or decrypt.

### 5. **Polybius Cipher (Standard)**

- **Description**: A cipher that uses a 5x5 grid of letters. Each letter is represented by a pair of digits (row and column).
- **Usage**: Enter the text to encrypt or decrypt.

### 6. **Polybius Cipher (Custom)**

- **Description**: Similar to the standard Polybius cipher but with a customizable 5x5 grid.
- **Usage**: Enter the text to encrypt or decrypt.

## Contributing

Feel free to fork this repository and contribute enhancements, bug fixes, or new ciphers. Pull requests are welcome!

## License

This project is licensed under the MIT License
