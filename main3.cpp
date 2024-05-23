#include <iostream>
#include <string>
using namespace std;

string Co2ZnakZadanie3(string slowo, int klucz) {
    klucz = klucz % 26;
    string szyfr = "";
    for (int i = 0; i < slowo.length(); i++) {
        if (i % 2 == 0) {
            if (slowo[i] + klucz > 122) {
                szyfr += slowo[i] + klucz - 26;
            } else {
                szyfr += slowo[i] + klucz;
            }
        } else {
            szyfr += slowo[i];
        }
    }
    return szyfr;
}

int main() {
    string slowo = "monitor";
    int klucz = 2;
    string zaszyfrowaneSlowo = Co2ZnakZadanie3(slowo, klucz);
    cout << "Oryginalne slowo : " << slowo << endl;
    cout << "Zaszyfrowane slowo : " << zaszyfrowaneSlowo << endl;
    return 0;
}
