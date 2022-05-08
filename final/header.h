#include <string>
#include <iostream>
#include <array>

using namespace std;

class header {

    private:
        // initializing variables

        string ccPlain = '';
        string ccEncrypted = '';
        string scPlain = '';
        string scEncrypted = '';
        int shift = 0;

    public:
   
    void ceaserChiperEncryption(string plainText, int key) {
        // function Ceaser Chiper Encryption
        ccPlain = plainText;
        shift = key;
        array < char, 50 > encryptedDataCC{};
        string character{ 0 }, alpha = "abcdefghijklmnopqrstuvwxyz";
        int caesarIndex, alphaIndex; 
        for (int i = 0; i < ccPlain.length(); i++) {
            if (ccPlain[i] == ' ') {
                cout << ' ';
            }
            for (int j = 0; j < 26; j++) {
                if (ccPlain[i] == alpha[j]) {
                    alphaIndex = j;
                    if (alphaIndex >= (26 - shift)) {
                        caesarIndex = (alphaIndex + shift) % 26;
                    }
                    else {
                        caesarIndex = alphaIndex + shift;
                    }
                    encryptedDataCC[i] = alpha[caesarIndex];
                    cout << alpha[caesarIndex];
                }

            }
        }

        cout << endl;

    }


    void ceaserChiperdecryption(string crText, int key) {
        // function Ceaser Chiper Decryption
        ccEncrypted = crText;
        shift = key;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        array < char, 50 > decryptedData{};
        int caesarIndex = 0;
        int alphaIndex = 0;
        for (int i = 0; i < ccEncrypted.length(); i++) {
            if (ccEncrypted[i] == ' ') {
                cout << ' ';
            }
            for (int j = 0; j < 26; j++) {
                if (ccEncrypted[i] == alpha[j]) {
                    alphaIndex = j;
                    if (alphaIndex - shift < 0) {
                        caesarIndex = (((alphaIndex - shift) + 26));
                    }
                    else {
                        caesarIndex = alphaIndex - shift;
                    }
                    decryptedData[i] = alpha[caesarIndex];
                    cout << decryptedData[i];

                }

            }
        }
    }

  
    void subsitutionCipherEncryption(string plainText) {
            // function substitution Cipher Encryption
            scPlain = plainText;
            string substitutionText = "qwertyuiopasdfghjklzxcvbnm", alpha = "abcdefghijklmnopqrstuvwxyz";
            array < char, 50 > encryptedText{};
            int index{
            0
            };
            int alphaIndex{
            0
            };
            for (int i = 0; i < scPlain.size(); i++) {
                if (scPlain[i] != ' ') {
                    for (int j = 0; j < 26; j++) {
                        if (scPlain[i] == alpha[j]) {
                            alphaIndex = j;
                            encryptedText[i] = substitutionText[alphaIndex];
                            cout << encryptedText[i];
                        }

                    }
                }
                else
                    cout << ' ';

            cout << endl;

        }
    }


   
    void subsitutionCipherDecryption(string crText) {
        // function substitution Cipher Decryption
        scEncrypted = crText;
        string substitutionText = "qwertyuiopasdfghjklzxcvbnm", alpha = "abcdefghijklmnopqrstuvwxyz";
        array < char, 50 > decryptedText{};
        int index = 0;
        int alphaIndex = 0;
        for (int i = 0; i < scEncrypted.size(); i++) {
            if (scEncrypted[i] != ' ') {

                for (int j = 0; j < 26; j++) {
                    if (scEncrypted[i] == substitutionText[j]) {
                        alphaIndex = j;
                        decryptedText[i] = alpha[alphaIndex];
                        cout << decryptedText[i];
                    }

                }
            }
            else
                cout << ' ';
        }

    }

  
    void unknownDecryption(string plainText) {
        // function to decrypt unknown string

        ccPlain = plainText;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < ccPlain.size(); j++) {
                if (ccPlain[j] != ' ') {
                    char h = char(int(ccPlain[j] + i - 97) % 26 + 97);
                    cout << h;
                }
                else
                    cout << " ";
            }

            cout << endl;

        }

        subsitutionCipherDecryption(ccPlain);
    }

};

