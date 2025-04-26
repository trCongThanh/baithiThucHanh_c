#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhập số lượng phần tử mảng
    do {
        cout << "Nhap so luong phan tu cua mang (n > 0): ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Vui long nhap so nguyen duong lon hon 0." << endl;
        }
    } while (n <= 0);

    int arr[n];
    cout << "Nhap " << n << " so nguyen:" << endl;

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        while (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Vui long nhap so nguyen: ";
            cin >> arr[i];
        }
    }

    // Tìm số lớn nhất chia hết cho 3
    int maxDivisibleBy3 = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] > maxDivisibleBy3) {
            maxDivisibleBy3 = arr[i];
        }
    }

    // In kết quả
    if (maxDivisibleBy3 == -1) {
        cout << "Khong co" << endl;
    } else {
        cout << "So lon nhat chia het cho 3 la: " << maxDivisibleBy3 << endl;
    }

    return 0;
}