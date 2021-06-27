#include <iostream>
using namespace std;
class Dikdortgen {
public :
double DikdortgenCevresi(double a,double b) {
return 2*(a+b);
}
double DikdortgenAlani(double a,double b) {
return a*b;
}
};
int main() {
    int a,b;
Dikdortgen dortgen;
cout << "Kisa kenar uzunlugu : " << endl;
cin >> a;
cout << "Uzun kenar uzunlugu : " << endl;
cin >> b;
double alan = dortgen.DikdortgenAlani(a,b);
double cevre = dortgen.DikdortgenCevresi(a,b);
cout << "Dikdortgen cevresi = " << cevre << endl;
cout << "Dikdortgen alani = " << alan << endl;
}

