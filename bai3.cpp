#include <iostream>
#include <string>
using namespace std;

// Khai báo struct SinhVien
struct SinhVien {
    string ten;
    float diemToan, diemLy, diemHoa;
};

int main() {
    int n;

    //nhập n sinh viên
    do {
        cout << "Nhap so luong sinh vien (n > 0): ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cin.clear(); //bỏ qua lỗi tiếp tục nhập
            cin.ignore(1000, '\n'); //loại bỏ dữ liệu ko hợp lệ
            cout << "Vui long nhap so nguyen duong lon hon 0." << endl;
        }
    } while (n <= 0);

    //khai báo danh sách
    SinhVien danhsach[n];

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        cin.ignore();
        cout << "Ten: ";
        getline(cin, danhsach[i].ten);
        cout << "Diem Toan: ";
        cin >> danhsach[i].diemToan;
        cout << "Diem Ly: ";
        cin >> danhsach[i].diemLy;
        cout << "Diem Hoa: ";
        cin >> danhsach[i].diemHoa;
    }

    // In danh sách sinh viên có điểm trung bình > 8.0
    cout << "\nDanh sach sinh vien co diem trung binh > 8.0:" << endl;
    bool found = false;
    for (int i = 0; i < n; i++) {
        float diemTB = (danhsach[i].diemToan + danhsach[i].diemLy + danhsach[i].diemHoa) / 3.0;
        if (diemTB > 8.0 && diemTB <= 10.0) {
            cout << "Ten: " << danhsach[i].ten << ", Diem TB: " << diemTB << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Khong co sinh vien nao co diem thi hop le trung binh > 8.0." << endl;
    }

    return 0;
}