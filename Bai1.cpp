#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0." << endl;
        return 1;
    }

    if (N <= 2) {
        cout << "Khong co so nguyen to" << endl;
    } 
    else {
        cout << "Cac so nguyen to nho hon " << N << " la: ";
        for (int i = 2; i < N; i++) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}