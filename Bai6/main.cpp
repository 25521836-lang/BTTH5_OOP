#include<iostream>
#include<fstream>

#include "KhachHangA.h"
#include "KhachHangB.h"
#include "KhachHangC.h"

using namespace std;

int main(){

    ofstream inp("XYZ.INP");

    ofstream out("XYZ.OUT");

    int x, y, z;

    cout << "Nhap so khach hang loai A: ";
    cin >> x;

    cout << "Nhap so khach hang loai B: ";
    cin >> y;

    cout << "Nhap so khach hang loai C: ";
    cin >> z;

    cin.ignore();

    inp << x << " " << y << " " << z << endl;

    KhachHangA dsA[1000];

    KhachHangB dsB[1000];

    KhachHangC dsC[1000];

    double tong = 0;

    cout << "\n===== NHAP KHACH HANG LOAI A =====\n";

    for(int i = 0; i < x; i++){

        cout << "\nKhach hang A thu " << i + 1 << endl;

        dsA[i].nhap(cin);

        inp << dsA[i].getTen() << endl;
        inp << dsA[i].getSoLuong() << endl;
        inp << dsA[i].getDonGia() << endl;
    }

    cout << "\n===== NHAP KHACH HANG LOAI B =====\n";

    for(int i = 0; i < y; i++){

        cout << "\nKhach hang B thu " << i + 1 << endl;

        dsB[i].nhap(cin);

        inp << dsB[i].getTen() << endl;
        inp << dsB[i].getSoLuong() << endl;
        inp << dsB[i].getDonGia() << endl;
        inp << dsB[i].getSoNamThanThiet() << endl;
    }

    cout << "\n===== NHAP KHACH HANG LOAI C =====\n";

    for(int i = 0; i < z; i++){

        cout << "\nKhach hang C thu " << i + 1 << endl;

        dsC[i].nhap(cin);

        inp << dsC[i].getTen() << endl;
        inp << dsC[i].getSoLuong() << endl;
        inp << dsC[i].getDonGia() << endl;
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

    inp.close();

    out.close();

    cout << "\nDa tao file XYZ.INP va XYZ.OUT";

    return 0;
}
