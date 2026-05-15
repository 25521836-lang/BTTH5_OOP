#ifndef NHANVIEN_H
#define NHANVIEN_H

#include<iostream>
#include<string>
using namespace std;
class NhanVien
{
protected:
     string maNV;
     string hoTen;
     string sdt;
     string email;
     double luongCoBan;
public:
    virtual void Nhap();
    virtual void Xuat();
    virtual double luong();
    double getLuong();
};

#endif
