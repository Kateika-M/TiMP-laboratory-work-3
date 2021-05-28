//main.cpp
#include "modAlphaCipher.h"

void check(const string& Text, const string& key)
{
    string cipherText;
    string decryptedText;
    modAlphaCipher cipher(key);
    cipherText = cipher.encrypt(Text);
    decryptedText = cipher.decrypt(cipherText);
    cout<<"key="<<key<<endl;
    cout<<Text<<endl;
    cout<<cipherText<<endl;
    cout<<decryptedText<<endl;
    if (Text == decryptedText)
        cout<<"Ok\n";
    else
        cout<<"Err\n";
}
int main(int argc, char **argv)
{
    check("СПАСИ","Спасу");
    check("СПАСИ","СПАСУ");
    check("СПАСИ","!СПАСУ!");
    check("СПАСИ ПОМОГИ","11032002");
    check("1234567890","NO");
    check("СПАСИПОМОГИ","НЕ СПАСУ");
    check("123456789","СПАСУ");
    check("НЕЗАДАВАЙТЕ КОНТРОЛЬНЫХВОПРОСОВ","АБВГ");
    //return 0;
}
