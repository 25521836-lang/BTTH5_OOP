#include "KhachHangB.h"

void KhachHangB::nhap(istream &in){

    KhachHang::nhap(in);

    cout << "Nhap so nam than thiet: ";
    in >> soNamThanThiet;

    in.ignore();
}

double KhachHangB::tinhTien(){

    double khuyenMai = soNamThanThiet * 0.05;

    if(khuyenMai > 0.5){
        khuyenMai = 0.5;
    }

    double tien = soLuong * donGia;

    tien = tien * (1 - khuyenMai);

    return tien + tien * 0.1;
}

int KhachHangB::getSoNamThanThiet(){

    return soNamThanThiet;
}
