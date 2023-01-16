#include <iostream>
#include <cmath>

using namespace std;

// Fungsi yang akan diintegrasikan
double f(double x)
{
    return 1 / (1 + x); // Contoh: f(x) = x^2
}

// Fungsi untuk menghitung integral dengan metode trapesium
double trap(double a, double b, int n)
{
    double h = (b - a) / n;
    double result = 0.5 * (f(a) + f(b));

    for (int i = 1; i < n; i++)
        result += f(a + i * h);

    result *= h;
    return result;
}

// Fungsi untuk menghitung integral dengan integrasi Romberg
double romberg(double a, double b, int n)
{
    // Matriks untuk menyimpan nilai integral yang dihitung dengan metode trapesium
    double r[n+1][n+1];

    for (int i = 1; i <= n; i++)
        r[i][1] = trap(a, b, pow(2, i-1));

    cout << "Nilai integral dengan n = 2^" << 0 << ": " << r[1][1] << endl;
    cout << "Nilai integral dengan n = 2^" << 1 << ": " << r[2][1] << endl;

    // Menggunakan teknik interpolasi Richardson untuk menghitung nilai integral yang lebih akurat
    for (int j = 2; j <= n; j++)
        for (int i = j; i <= n; i++)
        {
            r[i][j] = (pow(4, j-1) * r[i][j-1] - r[i-1][j-1]) / (pow(4, j-1) - 1);
            cout << "Nilai integral dengan n = 2^" << i << ": " << r[i][j] << endl;
        }

    return r[n][n];
}

int main()
{
    // Batas atas dan batas bawah integral
    double a = 0, b = 1;

    // Jumlah subinterval yang digunakan
    int n = 8;

    cout << "Hasil perhitungan integral dengan integrasi Romberg:" << endl;
    cout << "Nilai integral = " << romberg(a, b, n) << endl;

    return 0;
}
