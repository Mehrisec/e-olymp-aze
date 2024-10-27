//bu sualda n eded kub daxil edilir nizamli qaydaya uygun sekilde n eded kubu yaratmaq ucun lazim olan minumum uygunluq sayini cap etmeyimizi isteyir.
#include <cstdlib> // Standart C kitabxanalarını daxil edir.
#include <iostream> // Giriş-çıxış axınlarını istifadə etmək üçün daxil edir.
#include <cmath> // Riyazi funksiyaları üçün daxil edir.

using namespace std; // std ad məkanını istifadə etmək üçün.

int main() // Proqramın əsas funksiyası.
{
    double n, k = 1, i = 0, r, r1; // Dəyişənlərin tərifi: n - kub sayı, k - kubun həcmi, i - kub sayını hesablamaq üçün, r - kibritlərin sayı.
    cin >> n; // İstifadəçidən n ədədini daxil etməsini tələb edir.
    
    for (; k < n; ++i) // n-dən kiçik k dəyərini tapmaq üçün döngü.
        k = pow(i + 1, 3); // (i + 1) ədədinin kubunu hesablamaq.

    if (!i) i++; // Əgər i sıfırdırsa, onu bir artırır.

    // İlk şərt: (i-1)^3 < n <= (i-1)^3*i
    if ((i - 1) * (i - 1) * (i - 1) < n && n <= (i - 1) * (i - 1) * i)
    {
        r = 3 * (i - 1) * pow(i, 2); // İlk növbədə r-yə dəyər verir.
        n = n - pow(i - 1, 3); // n-dən (i - 1)^3 çıxır.
    }
    // İkinci şərt: (i-1)^3*i < n <= (i-1)*i^2
    else if ((i - 1) * (i - 1) * i < n && n <= (i - 1) * i * i)
    {
        r = 3 * pow(i - 1, 3) + 9 * pow(i - 1, 2) + 7 * (i - 1) + 1; // r-yə yeni dəyər verir.
        n = n - pow(i - 1, 2) * i; // n-dən (i - 1)^2 * i çıxır.
    }
    // Üçüncü şərt: (i-1)*i^2 < n <= i^3
    else if ((i - 1) * i * i < n && n <= i * i * i)
    {
        r = 3 * (pow(i, 3) + pow(i, 2)) - i - 1; // r-yə hesablama verir.
        n = n - pow(i, 2) * (i - 1); // n-dən i^2 * (i - 1) çıxır.
    }
    else
    {
        cout << i << "???"; // Heç bir şərtə uyğun gəlməyərsə i dəyərini göstərir.
        return 0; // Proqramı bitirir.
    }
    
    for (int i1 = 1; n; i1 += 2) // n-dən sıfıra qədər döngü.
    {
        for (int i2 = 0; i2 < i1 && n; i2++, n--) // İkiqat döngü, i1 qədər.
        {
            if (i1 == 1) r = r + 8; // i1 1-dirsə, r-yə 8 əlavə edir.
            else if (i2 == 0 || i2 == i1 / 2) r = r + 5; // i2 0 ya da i1/2-dirsə, 5 əlavə edir.
            else r = r + 3; // Başqa hallarda 3 əlavə edir.
        }
    }
    cout << r << endl; // Hesablanan r dəyərini göstərir.
    return 0; // Proqramı bitirir.
}
