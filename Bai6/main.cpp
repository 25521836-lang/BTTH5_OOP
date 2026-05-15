#include<iostream>
#include<fstream>

#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"

using namespace std;
int main(){
    ofstream out("XYZ.OUT");
    int x, y, z;
    cout << "Nhap so khach hang loai A: ";
    cin >> x;
    cout << "Nhap so khach hang loai B: ";
    cin >> y;
    cout << "Nhap so khach hang loai C: ";
    cin >> z;
    cin.ignore();
    KhachHangA dsA[1000];
    KhachHangB dsB[1000];
    KhachHangC dsC[1000];
    double tong = 0;
    cout << "\n===== NHAP KHACH HANG LOAI A =====\n";
    for(int i = 0; i < x; i++){
        cout << "\nKhach hang A thu " << i + 1 << endl;
        dsA[i].nhap(cin);
    }
    cout << "\n===== NHAP KHACH HANG LOAI B =====\n";
    for(int i = 0; i < y; i++){
        cout << "\nKhach hang B thu " << i + 1 << endl;
        dsB[i].nhap(cin);
    }

    cout << "\n===== NHAP KHACH HANG LOAI C =====\n";
    for(int i = 0; i < z; i++){
        cout << "\nKhach hang C thu " << i + 1 << endl;
        dsC[i].nhap(cin);
    }
    out << x << " " << y << " " << z << endl;
    for(int i = 0; i < x; i++){
        double tien = dsA[i].tinhTien();
        out << dsA[i].getTen() << endl;
        out << tien << endl;
        tong += tien;
    }
    for(int i = 0; i < y; i++){
        double tien = dsB[i].tinhTien();
        out << dsB[i].getTen() << endl;
        out << tien << endl;
        tong += tien;
    }
    for(int i = 0; i < z; i++){
        double tien = dsC[i].tinhTien();
        out << dsC[i].getTen() << endl;
        out << tien << endl;
        tong += tien;
    }
    out << "Tong so tien cong ty thu duoc: " << tong;
    out.close();
    cout << "\nDa ghi file XYZ.OUT thanh cong";
    return 0;
}
