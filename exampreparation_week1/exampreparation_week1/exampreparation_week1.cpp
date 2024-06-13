

#include <iostream>
using namespace std;

void encryption(string, int, int);
int main()
{
    //string greeting = "Hello World!";
    //cout << greeting.size();
    //for (int i = 0; i <= greeting.size(); i++) {
    //    cout << i;
    //}
    encryption("cdezab", 1, 2);
}

/// <summary>
/// this function encrypts and decrypts words based on their ascii number using the ceaser cipher method..
/// </summary>
/// <param name="word"> the word to be encrypted or decrypted</param>
/// <param name="flag">if flag is 0 , the word will be encrypted, if flag is 1 the word will be decrypted,else it won't do nothing</param>
/// <param name="value">how far do you want to encrypt or decrypt it </param>
void encryption( string word, int flag, int value ) {
    if (flag == 0) {
        for (int i = 0; i <= word.size(); i++) {
           int newword=  int(word[i]) + value;
           if ( newword >122) {
               newword = newword - 26;
           }
            cout << char(newword);
        }
    }
    else if (flag == 1) {
        for (int i = 0; i <= word.size(); i++) {
            int newword = int(word[i]) - value;
            if (newword < 97) {
                newword = newword + 26;
            }
            cout << char(newword);
        }
    }
    else {
        cout << "This is impossible to encrypt !!" << endl;
    }

}