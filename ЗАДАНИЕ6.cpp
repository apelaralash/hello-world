#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <vector>
using namespace std;
 
int main() {
    int predmeti, gruzopod;
    cout << "Vvedite gruyopodyemnost ryukzaka: " << flush;
    cin >> gruzopod;
    cin.get();
    vector<pair<int, int> > cennostIves;
    cout << "Vvedite kolichestvo predmetov " << flush;
    cin >> predmeti;
    pair<int, int> * Bag = new pair<int, int>[predmeti];
    cout << "Vvedite massu i cenu predmetov:" << endl;
    for (size_t i(0); i < predmeti; i++) {
        cout << "Massa " << i + 1 << " predmeta = " << flush;
        cin >> Bag[i].first;
        cout << "Cena " << i + 1 << " predmeta = " << flush;
        cin >> Bag[i].second;
    }
    for (size_t i(0); i < predmeti; ++i) {
        int ves(0), cena(0);
        while (ves + Bag[i].first <= gruzopod) {
            ves += Bag[i].first;
            cena += Bag[i].second;
        }
        pair<int, int > temp;
        temp.first = cena;
        temp.second = ves;
        cennostIves.push_back(temp);
    }
     int max = 0;
    for (size_t i(0); i < cennostIves.size(); ++i) {
        if (cennostIves[max] < cennostIves[i]) {
            max = i;
        }
    }
    cout << "Massa naibolee dorogih veshey " << cennostIves[max].second << ", a cena " << cennostIves[max].first;
    delete[] Bag;
    cin.get();
    return 0;
}
