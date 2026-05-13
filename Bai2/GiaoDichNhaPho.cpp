#include "GiaoDichNhaPho.h"

void GiaoDichNhaPho::Nhap(){
    GiaoDich::Nhap();
    cin.ignore();
    cout<<"Nhap loai nha:";
    getline(cin,loaiNha);
    cout<<"Nhap dia chi:";
    getline(cin,diaChi);
}
void GiaoDichNhaPho::Xuat(){
    GiaoDich::Xuat();
    cout<<"Loai nha:"<<loaiNha<<endl;
    cout<<"Dia chi:"<<diaChi<<endl;
    cout<<"Thanh tien:"<<thanhTien()<<endl;
}
double GiaoDichNhaPho::thanhTien(){
    if(loaiNha=="cao cap")
        return dienTich*donGia;
    return dienTich*donGia*0.9;
}
