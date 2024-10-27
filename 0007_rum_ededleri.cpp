#include <iostream>
#include <string>

using namespace std;

// Rum say sisteminin ədəd dəyərləri
const string Rom[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I", ""};
const int Ar[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1, 0};

// Rum ədədini arab ədədinə çevirir
string Roman(int arab) {
    string roman; // Nəticə üçün dəyişən
    int i = 0;
    while (arab > 0) { // Arab ədədi müsbət olduğu müddətdə
        while (Ar[i] <= arab) { // Arab ədədindən uyğun Rum dəyərini çıxarır
            roman += Rom[i]; // Rum ədədini əlavə edir
            arab -= Ar[i]; // Çıxarma əməliyyatı
        }
        ++i; // Növbəti Rum dəyərinə keç
    }
    return roman; // Nəticəni qaytarır
}

// Arab ədədini Rum ədədinə çevirir
int Arab(string roman) {
    int arab = 0; // Nəticə üçün dəyişən
    int i = 0;
    while (roman != "") { // Roman boşalmadığı müddətdə
        while (Rom[i] == roman.substr(0, Rom[i].length())) { // Başlanğıc uyğunluq varsa
            roman.replace(0, Rom[i].length(), ""); // Uygunluğu silir
            arab += Ar[i]; // Arab ədədini artırır
        }
        ++i; // Növbəti Rum dəyərinə keç
    }
    return arab; // Nəticəni qaytarır
}

int main() {
    string first, second; // Birinci və ikinci Rum ədədini saxlayacaq
    char c;
    
    // İlk Rum ədədini oxuyur
    while ((c = getchar()) != '+') first.push_back(c);
    
    // İkinci Rum ədədini oxuyur
    while ((c = getchar()) != '\n') second.push_back(c);
    
    // İki Rum ədədinin cəmini hesablayır və nəticəni çap edir
    cout << Roman(Arab(first) + Arab(second)) << endl;
    return 0; // Proqramın bitməsi
}
