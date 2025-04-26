#include <iostream>
#include <vector>
using namespace std;

// Hàm đệ quy tính số Fibonacci với memoization
int fibonacci(int n, vector<int>& memo) {
    if (n <= 2) return 1; // F(1) = 1, F(2) = 1
    if (memo[n] != -1) return memo[n]; // Nếu đã tính trước đó, trả về giá trị đã lưu
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo); // Tính và lưu vào mảng memo
    return memo[n];
}

int main() {
    int n;

    // Nhập n và kiểm tra n <= 30
    do {
        cout << "Nhap n (1 <= n <= 30): ";
        cin >> n;
        if (cin.fail() || n <= 0 || n > 30) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Vui long nhap so nguyen trong khoang 1 den 30." << endl;
        }
    } while (n <= 0 || n > 30);

    // Tạo mảng memo để lưu trữ giá trị Fibonacci đã tính
    vector<int> memo(n + 1, -1);

    // In dãy Fibonacci từ F(1) đến F(n)
    cout << "Day Fibonacci tu F(1) den F(" << n << "): ";
    for (int i = 1; i <= n; i++) {
        cout << fibonacci(i, memo) << " ";
    }
    cout << endl;

    return 0;
}