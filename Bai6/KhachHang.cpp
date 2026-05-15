#include "KhachHang.h"

void KhachHang::nhap() {
    cin.ignore();
    cout << "Nhap ten khach hang: ";
    getline(cin, tenKhachHang);
    cout << "Nhap so luong hang: ";
    cin >> soLuongHang;
    cout << "Nhap don gia hang: ";
    cin >> donGiaHang;
}
void KhachHang::xuatINP(ofstream &file) {
    file << tenKhachHang << endl;
    file << soLuongHang << endl;
    file << donGiaHang << endl;
}
void KhachHang::xuatOUT(ofstream &file) {
    file << tenKhachHang << endl;
    file << tinhTien() << endl;
}
