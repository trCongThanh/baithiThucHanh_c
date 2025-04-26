#include <iostream>
#include <set>
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
    cout << "Nhap " << n << " phan tu cua mang:" << endl;

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

    // Sử dụng set để lưu các giá trị phân biệt
    set<int> distinctValues;
    for (int i = 0; i < n; i++) {
        distinctValues.insert(arr[i]);
    }

    // In ra số lượng các giá trị phân biệt
    cout << "So luong cac gia tri phan biet trong mang la: " << distinctValues.size() << endl;

    return 0;
}