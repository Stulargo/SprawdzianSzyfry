#include <iostream>
#include <fstream>
using namespace std;

string PolowaZadanie1(string w) {
    string c1 = "";
    string c2 = "";
    int polowa = w.length() / 2-1;
    if (w.length() % 2 != 0) {
        polowa++;
    }

    for (int i = 0; i < polowa; i++) {
        c1 += w[i];
    }
    for (int j = polowa; j < w.length(); j++) {
        c2 += w[j];
    }
    string odwrocona_czesc1 = "";
    string odwrocona_czesc2 = "";
    for (int i = c1.length() - 1; i >= 0; --i) {
        odwrocona_czesc1 += c1[i];
    }
    for (int i = c2.length() - 1; i >= 0; --i) {
        odwrocona_czesc2 += c2[i];
    }
    string zaszyfrowane = odwrocona_czesc1 + odwrocona_czesc2;
    return zaszyfrowane;
}
int main() {
    ifstream plikWejsciowy("wejscie.txt");
    ofstream plikWyjsciowy("wyjscie.txt");
     {
        string slowo;
        for(int i = 0;i<10;i++){
        getline(plikWejsciowy, slowo);
        string zaszyfrowane = PolowaZadanie1(slowo);
        cout << "Oryginalne slowo: " << slowo << endl;
        cout << "Zaszyfrowane slowo: " << zaszyfrowane << endl;
        plikWyjsciowy << zaszyfrowane << endl;
        }
        plikWejsciowy.close();
        plikWyjsciowy.close();


    }

    return 0;
}
