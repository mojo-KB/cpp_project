#include<iostream>//Input output library

#include<string>//String Library

#include<iomanip>// Input outpu Manipulation library

#include<array>// Library For array.

#include"EncryptionDecryption.h";//Adding header file for our class.

using namespace std;

int main() {// main funtion    
    string plainText{
      ' '
    }, crText{
      ' '
    };
    int key;
    EncryptionDecryption CeaserCipher1{};//Object for Ceaser Chipher Encryption.
    EncryptionDecryption CeaserCipher2{};//Object for Ceaser Chipher Decryption.
    EncryptionDecryption substitutionCipher1{};//Object for Substitution Cipher Encryption.
    EncryptionDecryption substitutionCipher2{};//Object for Subsitution Chipher decryption.
    EncryptionDecryption unknownDecryption{};// Object for unknown decryption

    cout << "\n**********************************************************************\n" << endl;
    cout << " ******Hello!, Welcome to my encryptionand decryption project.******** " <<
        endl;
    int i{
      1
    };
    while (i >= 1) {// Prompting the user to choose what they want to accomplish.
        cout << "\n\n    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "    |       Please select what you want to do?                 |" << endl;
        cout << "    |     1. Encryption " << setw(15) << " 2. Decryption" << setw(15) <<
            "    0. to cancel        |" << endl;
        cout << "    ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cin >> i;
        switch (i) {
        case 1://This outer selection statement is for prompting  all the  encryption mathods.
            cout << "\nAlright!, you are up for Encryption, Huh?. Let's do it then" << endl;
            cout << "What encryption mathod you want to use?" << endl;
            cout << "1. Ceaser Cipher " << setw(5) << " 2. Substitution Chipher" << setw(5) << "   0 to cancel" << endl;
            cin >> i;
            switch (i) {//Inner selction statements.
            case 1://Doing Ceaser Chiper Encryption
                cout << " Great!, Let's encrypt using Ceaser Chipher method." << endl;
                cout << "Please enter the string text: ";
                cin.ignore();
                getline(cin, plainText);
                cout << "Please enter the shift Key: ";
                cin >> key;
                cout << "Your Ceaser Cipher Encrypted Messege: ";
                CeaserCipher1.ceaserChiperEncryption(plainText, key);// Using the CeaserCipher1 Object to encrypt plain text by passing the text and shift key.
                cout << endl;
                break;
            case 2:// Doing Substitution Cipher Encryption
                cout << " Great!, Let's encrypt using substitution chiper method." << endl;
                cout << "Please enter the plain text : ";
                cin.ignore();
                getline(cin, plainText);
                cout << "Your Substitution Cipher Encrypted Messege: ";
                substitutionCipher1.subsitutionCipherEncryption(plainText);// Using the substitutionCipher1 Object to encrypt plain text by passing the text from user.
                cout << endl;
                break;
            default:
                break;
            }

            break;
        case 2:////This is for prompting  all the  decryption mathods.
            cout << "\nAlright!, you are up for Decryption, Huh?. Let's do it then" << endl;
            cout << "What Decryption mathod you want to use?" << endl;
            cout << "1. Ceaser Cipher " << setw(5) << " 2. Substitution Chipher" << setw(5) << "  3. I do not want to say" << "   0. to cancel" << endl;
            cin >> i;
            switch (i) {// This inner selection statement is for decrypting the previously encrypted text.
            case 1://Ceaser Cipher decryption
                cout << " Great!, Let's decrypt using Ceaser Chipher method." << endl;
                cout << "Please enter the string text: ";
                cin.ignore();
                getline(cin, crText);
                cout << "Please enter the shift Key: ";
                cin >> key;
                cout << "Your Ceaser Cipher Decrypted Messege: ";
                CeaserCipher2.ceaserChiperdecryption(crText, key);//USing the object ceaserCipher2 to decrypt the text provided by the user.
                cout << endl;
                break;
            case 2:// Subsitution Cipher decryption
                cout << " Great!, Let's decrypt using substitution chiper method." << endl;
                cout << "Please enter the string text : ";
                cin.ignore();
                getline(cin, crText);
                cout << "Your Substitution Cipher Decrypted Messege: ";
                substitutionCipher2.subsitutionCipherDecryption(crText);// Using the object substitutionCipher2 to decrypt the text provided by the user.
                cout << endl;
                cout << endl;
                break;
            case 3:// The unkown mathod decryption
                cout << " Wanna play hard, huh!." << endl;
                cout << "\n Alright I got you." << endl;
                cout << " Great!, Let's decrypt using substitution chiper method." << endl;
                cout << "Please enter the string text : ";
                cin.ignore();
                getline(cin, crText);
                unknownDecryption.unknownDecryption(crText);//Using this unknownDecryption object to decrypt all the 26 possible decryptions.
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