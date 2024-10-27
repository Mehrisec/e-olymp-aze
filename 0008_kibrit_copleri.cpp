#include <iostream> // Giriş-çıxış əməliyyatları üçün kitabxana
using namespace std;

long long N, answer, M; // N - kvadrat sayı, answer - lazım olan kibrit sayı, M - kvadratın tərəfi

int main()
{
    cin >> N; // İstifadəçidən kvadratların sayını oxuyur
    M = 0; // M-in ilkin qiymətini 0 olaraq təyin edir

    // M kvadratın tərəfini tapır, M*M N-dən kiçik olana qədər artır
    while (M * M < N) M++;
    M--; // M-i bir az azaldır, çünki M*M artıq N-dən böyük oldu

    // Kibritlərin sayını hesablayır
    answer += M * (M + 1) * 2; // M kvadratının kənarları üçün lazım olan kibritlər
    answer += (N - M * M) * 2; // Qalan kvadratlar üçün lazım olan kibritlər
    answer++; // Bir əlavə kibrit çöpü künc üçün

    // Əgər qalan kvadratlar M-dən çoxdursa, bir kibrit daha əlavə et
    if (N - M * M > M) answer++;

    cout << answer << endl; // Nəticəni çap edir
}
