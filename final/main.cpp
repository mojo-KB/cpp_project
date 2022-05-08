#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include "header.h"

using namespace std;

int main() {
    // main funtion    
    string plainText = '';
    string crText  = '';
    int key;
    header CeaserCipher1{};
    header CeaserCipher2{};
    header substitutionCipher1{};
    header substitutionCipher2{};
    header unknownDecryption{};

    int i = 1;
    while (i >= 1) {
        // Prompting the user 
        cout << "Choose option: " << endl;
        cout << "1. Encryption " << endl;
        cout << "2. Decryption" << endl;
        cout << "0. To cancel" << endl;
        cin >> i;
        switch (i) {
        case 1:
            // Prompting the user 
            cout << "Choose option: " << endl;
            cout << "1. Encryption " << endl;
            cout << "2. Decryption" << endl;
            cout << "0. To cancel" << endl;
            cin >> i;
            switch (i) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, plainText);
                cout << "Enter the shift Key: ";
                cin >> key;
                cout << "Your Ceaser Cipher Encrypted Messege: ";
                CeaserCipher1.ceaserChiperEncryption(plainText, key);
                cout << endl;
                break;
            case 2:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, plainText);
                cout << "Your Substitution Cipher Encrypted Messege: ";
                substitutionCipher1.subsitutionCipherEncryption(plainText);
                cout << endl;
                break;
            default:
                break;
            }

            break;
        case 2:
             // Prompting the user 
            cout << "Choose option: " << endl;
            cout << "1. Encryption " << endl;
            cout << "2. Decryption" << endl;
            cout << "0. To cancel" << endl;
            cin >> i;
            switch (i) {
            case 1:
            //Ceaser Cipher decryption
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, plainText);
                cout << "Enter the shift Key: ";
                cin >> key;
                cout << "Your Ceaser Cipher Decrypted Messege: ";
                CeaserCipher2.ceaserChiperdecryption(crText, key);
                cout << endl;
                break;
            case 2:
            // Subsitution Cipher decryption
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, plainText);
                cout << "Your Substitution Cipher Decrypted Messege: ";
                substitutionCipher2.subsitutionCipherDecryption(crText);
                cout << endl;
                cout << endl;
                break;
            case 3:
                cout << "Enter a string : ";
                cin.ignore();
                getline(cin, crText);
            unknownDecryption.unknownDecryption(crText);
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }

    }

}