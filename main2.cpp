#include <iostream>
using namespace std;

string ZamianaCo3ZnakiZadanie2(string w) {
    string zdanie = "";
    int dlugosc = 0;
    while (w[dlugosc] != '\0') {
        dlugosc++;
    }

    int i = 0;
    while (i < dlugosc) {
        string czesc = "";
        for (int j = 0; j < 3 && i < dlugosc; j++) {
            czesc += w[i];
            i++;
        }

        if (czesc.length() == 3) {
            char temp = czesc[0];
            czesc[0] = czesc[2];
            czesc[2] = temp;
        }
        zdanie += czesc;
    }

    return zdanie;
}

int main() {
    string slowo = "klawiatura";
    string noweSlowo = ZamianaCo3ZnakiZadanie2(slowo);
    cout << "Oryginalne slowo: " << slowo << endl;
    cout << "Zaszyfrowane slowo : " << noweSlowo << endl;

    return 0;
}
