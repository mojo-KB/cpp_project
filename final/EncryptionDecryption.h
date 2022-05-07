#include <string>

#include<iostream>

#include<array>

using namespace std;
/*Creating the CLASS-"Encryption-Decryption" for the encryption and Decryption*/
class EncryptionDecryption {

private:

    /*Initializing private data members which can only be accessed by the member functions*/

    string ccPlain{
      ' '
    };
    string ccEncrypted{
      ' '
    };
    string scPlain{
      ' '
    };
    string scEncrypted{
      ' '
    };
    int shift{
      0
    };

public:
    //This function takes the plain text and encrypt it to Ceaser Cipher encryption.
    void ceaserChiperEncryption(string plainText, int key) {
        ccPlain = plainText;//Storing the user's input to private date members.
        shift = key;//Storing the user's input to private date members.
        array < char, 50 > encryptedDataCC{};//Creating an Array for storing the encrypted alphabets
        string character{ 0 }, alpha = "abcdefghijklmnopqrstuvwxyz";
        int caesarIndex, alphaIndex; // shift = 1;
        for (int i = 0; i < ccPlain.length(); i++) {// This for loop for going through every alphabet of plain text provided by the user one by one.
            if (ccPlain[i] == ' ') {//Printing out space for spaces in plain text.
                cout << ' ';
            }
            for (int j = 0; j < 26; j++) {// This for loop checking with the 26 alphabets to match the position of the plain text provided by the user.
                if (ccPlain[i] == alpha[j]) {
                    alphaIndex = j;
                    if (alphaIndex >= (26 - shift)) {
                        caesarIndex = (alphaIndex + shift) % 26;
                        //When the plain text alphabets are near "Z". When is shift is greater than 26 it will come back to "a".
                    }
                    else {
                        caesarIndex = alphaIndex + shift;// Shifting the alphabets based on the shift value.
                    }
                    encryptedDataCC[i] = alpha[caesarIndex];
                    cout << alpha[caesarIndex];// Printing out shifted(Encrypted) alphabets.

                }

            }
        }

        cout << endl;

    }

    //This function decrypt the  Ceaser Cipher encrypted messege from the user.
    void ceaserChiperdecryption(string crText, int key) {
        ccEncrypted = crText;// Storing the inputs form the user to to private date members.
        shift = key;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        array < char, 50 > decryptedData{};// Creating the array for the decrypted messege.
        int caesarIndex = 0;// Initializing to 0.
        int alphaIndex = 0;// Alpahbet index initialized to 0.
        for (int i = 0; i < ccEncrypted.length(); i++) {// This for loop for going through every alphabet of encrypted text provided by the user  one by one.
            if (ccEncrypted[i] == ' ') {// If there is a space in the sting print space.
                cout << ' ';
            }
            for (int j = 0; j < 26; j++) {// This for loop checking with the 26 alphabets to match the position of the plain text provided by the user.
                if (ccEncrypted[i] == alpha[j]) {
                    alphaIndex = j;
                    if (alphaIndex - shift < 0) {
                        caesarIndex = (((alphaIndex - shift) + 26));//When the plain text alphabets are near "a". When is shift is greater than 26 it will come back to "z".
                    }
                    else {
                        caesarIndex = alphaIndex - shift;// Shifting the alphabet
                    }
                    decryptedData[i] = alpha[caesarIndex];// Creating array elements based on the alphaIndex.

                    cout << decryptedData[i];//Printing the shifted alphaets on by one.

                }

            }
        }
    }

    // This function encrypts plain text using substituttion cipher mathod.
    void subsitutionCipherEncryption(string plainText) {
        scPlain = plainText;// Storing the user's input to our private data memebers.
        string substitutionText = "qwertyuiopasdfghjklzxcvbnm", alpha = "abcdefghijklmnopqrstuvwxyz";
        array < char, 50 > encryptedText{};// Creating an array for encrypted messege.
        int index{
          0//Initializing to 0
        };
        int alphaIndex{
          0//Initializing to 0
        };
        for (int i = 0; i < scPlain.size(); i++) {// Going through every alphabets proved by the user.
            if (scPlain[i] != ' ') {// If there is not space , run codes inside of it.
                for (int j = 0; j < 26; j++) {//Going thorough 26 alphabets one by one to macth the index.
                    if (scPlain[i] == alpha[j]) {//When index matches, running the code inside of this block.
                        alphaIndex = j;// Assigning the index value to aplphaIndex
                        encryptedText[i] = substitutionText[alphaIndex];// Creating array elements based on the alphaIndex.
                        cout << encryptedText[i];// Printing the array 
                    }

                }
            }
            else
                cout << ' ';// Printing the spaces.
        }

        cout << endl;

    }


    // This function takes the user's  encrypted messege and decrypt using subsitution mathod.
    void subsitutionCipherDecryption(string crText) {
        scEncrypted = crText;// Storing the user's input to our private data memebers.
        string substitutionText = "qwertyuiopasdfghjklzxcvbnm", alpha = "abcdefghijklmnopqrstuvwxyz";
        array < char, 50 > decryptedText{};// Array for decrypted messege.
        int index = 0;// Initialized to zero.
        int alphaIndex = 0;// Initialized to zero.
        for (int i = 0; i < scEncrypted.size(); i++) {// Going through every alphabets proved by the user.

            if (scEncrypted[i] != ' ') {// If there is not space then run the codes inside of it.

                for (int j = 0; j < 26; j++) {//Going thorough 26 alphabets one by one to macth the index of alphabets
                    if (scEncrypted[i] == substitutionText[j]) {//When index matches, running the code inside of this block.
                        alphaIndex = j;
                        decryptedText[i] = alpha[alphaIndex];// Creating array elements based on the alphaIndex.
                        cout << decryptedText[i];
                    }

                }
            }
            else
                cout << ' ';// Printing the spaces 
        }

    }

    // This function decrypted uncknown encrypted messege prived by the user.
    void unknownDecryption(string plainText) {

        ccPlain = plainText;// Storing the date form the user to our private data members.
        for (int i = 0; i < 26; i++) {// Will run the prgram 26 times and print out 26 possible decryption.

            for (int j = 0; j < ccPlain.size(); j++) {// Going thorough each letter one by one to shift it.

                if (ccPlain[j] != ' ') {// Only there is no space, run the program inside in this code.

                    char h = char(int(ccPlain[j] + i - 97) % 26 + 97);//97 is the ASCII "a" and it is calculating the vlaue among all 26 alphabets. The mod 26 is basically cutting down the possible index of the alphabets to 97 again([]%26+97/Means(a-z)).

                    cout << h;// Printing the chracters
                }
                else
                    cout << " ";// Printing spaces for spaces
            }

            cout << endl;

        }

        subsitutionCipherDecryption(ccPlain);//Doing Substituition Cipher Decryption.
    }

};

