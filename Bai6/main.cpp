#include<iostream>
#include<string>

#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"

using namespace std;
int main() {
    int x, y, z;
    KhachHangA dsA[100];
    KhachHangB dsB[100];
    KhachHangC dsC[100];
    cout << "Nhap so khach hang loai A: ";
    cin >> x;
    for (int i = 0; i < x; i++) {
        cout << "\nKhach hang A thu " << i + 1 << endl;
        dsA[i].nhap();
    }
    cout << "\nNhap so khach hang loai B: ";
    cin >> y;
    for (int i = 0; i < y; i++) {
        cout << "\nKhach hang B thu " << i + 1 << endl;
        dsB[i].nhap();
    }
    cout << "\nNhap so khach hang loai C: ";
    cin >> z;
    for (int i = 0; i < z; i++) {
        cout << "\nKhach hang C thu " << i + 1 << endl;
        dsC[i].nhap();
    }
    cout << "\n========== xyz.inp ==========\n" << endl;
    for (int i = 0; i < x; i++) {
        cout << "TenKhachHangA" << i + 1 << ": "
             << dsA[i].getTen() << endl;
        cout << "SoLuongHangA" << i + 1 << ": "
             << dsA[i].getSoLuong() << endl;
        cout << "DonGiaHangA" << i + 1 << ": "
             << dsA[i].getDonGia() << endl;
        cout << endl;
    }
    for (int i = 0; i < y; i++) {
        cout << "TenKhachHangB" << i + 1 << ": "
             << dsB[i].getTen() << endl;
        cout << "SoLuongHangB" << i + 1 << ": "
             << dsB[i].getSoLuong() << endl;
        cout << "DonGiaHangB" << i + 1 << ": "
             << dsB[i].getDonGia() << endl;
        cout << endl;
    }

    for (int i = 0; i < z; i++) {
        cout << "TenKhachHangC" << i + 1 << ": "
             << dsC[i].getTen() << endl;
        cout << "SoLuongHangC" << i + 1 << ": "
             << dsC[i].getSoLuong() << endl;
        cout << "DonGiaHangC" << i + 1 << ": "
             << dsC[i].getDonGia() << endl;
        cout << endl;
    }
    cout << "\n========== xyz.out ==========\n" << endl;
    for (int i = 0; i < x; i++) {

        cout << "TenKhachHangA" << i + 1 << ": "
             << dsA[i].getTen() << endl;

        cout << "SoTienPhaiTraA" << i + 1 << ": "
             << dsA[i].tinhTien() << endl;

        cout << endl;
    }
    for (int i = 0; i < y; i++) {
        cout << "TenKhachHangB" << i + 1 << ": "
             << dsB[i].getTen() << endl;
        cout << "SoTienPhaiTraB" << i + 1 << ": "
             << dsB[i].tinhTien() << endl;
        cout << endl;
    }
    for (int i = 0; i < z; i++) {
        cout << "TenKhachHangC" << i + 1 << ": "
             << dsC[i].getTen() << endl;
        cout << "SoTienPhaiTraC" << i + 1 << ": "
             << dsC[i].tinhTien() << endl;
        cout << endl;
    }
    return 0;
}
