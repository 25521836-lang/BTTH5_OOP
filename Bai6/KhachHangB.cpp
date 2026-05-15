#include "KhachHangB.h"

void KhachHangB::nhap() {
    cin.ignore();
    cout << "Nhap ten khach hang: ";
    getline(cin, tenKhachHang);
    cout << "Nhap so luong hang: ";
    cin >> soLuongHang;
    cout << "Nhap don gia hang: ";
    cin >> donGiaHang;
    cout << "Nhap so nam than thiet: ";
    cin >> soNamThanThiet;
}

double KhachHangB::tinhTien() {

    double tien = soLuongHang * donGiaHang;

    double giam = soNamThanThiet * 0.05;

    if (giam > 0.5)
        giam = 0.5;

    return tien * (1 - giam) + tien * 0.1;
}
