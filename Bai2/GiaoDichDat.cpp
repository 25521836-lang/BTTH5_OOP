#include "GiaoDichDat.h"

void GiaoDichDat::Nhap(){
    GiaoDich::Nhap();
    cout<<"Loai dat (A/B/C):";
    cin>>loaiDat;
}
void GiaoDichDat::Xuat(){
    GiaoDich::Xuat();
    cout<<"Loai dat:"<<loaiDat<<endl;
    cout<<"Thanh tien:"<<thanhTien()<<endl;
}
double GiaoDichDat::thanhTien(){
    if(loaiDat=='B'||loaiDat=='C')
        return dienTich*donGia;
    return dienTich*donGia*1.5;
}
