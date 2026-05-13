#ifndef GIAODICHNHAPHO_H
#define GIAODICHNHAPHO_H
#include"GiaoDich.h"

class GiaoDichNhaPho:public GiaoDich
{
   private:
       string loaiNha;
       string diaChi;
   public:
    void Nhap();
    void Xuat();
    double thanhTien();
};

#endif
