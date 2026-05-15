#ifndef KHACHHANG_H
#define KHACHHANG_H

#include<iostream>
#include<string>

using namespace std;

class KhachHang{

protected:
    string ten;
    int soLuong;
    double donGia;

public:

    virtual void nhap(istream &in);

    virtual double tinhTien() = 0;

    string getTen();

    int getSoLuong();

    double getDonGia();
};

#endif
