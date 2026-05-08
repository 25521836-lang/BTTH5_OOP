#ifndef NHANVIENSX_H
#define NHANVIENSX_H

#include"NhanVien.h"
class NhanVienSX:public NhanVien
{
  private:
       double luongCanBan;
       int soSanPham;
   public:
    void nhap();
    void xuat();
    double tinhLuong();
};

#endif
