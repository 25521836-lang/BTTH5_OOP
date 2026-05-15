#ifndef KHACHHANG_H
#define KHACHHANG_H

#include<iostream>
#include<string>
#include<fstream>

using namespace std;
class KhachHang {
protected:
    string tenKhachHang;
    int soLuongHang;
    double donGiaHang;
public:
    virtual void nhap();
    virtual double tinhTien() = 0;
    void xuatINP(ofstream &file);
    void xuatOUT(ofstream &file);
    string getTen() {
        return tenKhachHang;
    }
    int getSoLuong() {
        return soLuongHang;
    }
    double getDonGia() {
        return donGiaHang;
    }
};
#endif
