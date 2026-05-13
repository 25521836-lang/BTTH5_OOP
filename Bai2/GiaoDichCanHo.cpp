#include "GiaoDichCanHo.h"

void GiaoDichCanHo::Nhap(){
    GiaoDich::Nhap();
    cin.ignore();
    cout<<"Nhap ma can:";
    getline(cin,maCan);
    cout<<"Nhap vi tri tang:";
    cin>>viTriTang;
}
void GiaoDichCanHo::Xuat(){
    GiaoDich::Xuat();
    cout<<"Ma can:"<<maCan<<endl;
    cout<<"Vi tri tang:"<<viTriTang<<endl;
    cout<<"Thanh tien:"<<thanhTien()<<endl;
}
double GiaoDichCanHo::thanhTien(){
    if(viTriTang==1)
        return dienTich*donGia*2;
    else if(viTriTang>=15)
        return dienTich*donGia*1.2;
    else 
        return dienTich*donGia;
}

