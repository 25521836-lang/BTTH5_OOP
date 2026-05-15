#include "KhachHang.h"

void KhachHang::nhap(istream &in){
    cout << "Nhap ho ten: ";
    getline(in, ten);
    cout << "Nhap so luong hang: ";
    in >> soLuong;
    cout << "Nhap don gia hang: ";
    in >> donGia;
    in.ignore();
}
string KhachHang::getTen(){
    return ten;
}
