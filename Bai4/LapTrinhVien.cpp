#include "LapTrinhVien.h"

void LapTrinhVien::Nhap(){
    NhanVien::Nhap();
    cout<<"Nhap so gio overtime:";
    cin>>soGio;
}
void LapTrinhVien::Xuat(){
    NhanVien::Xuat();
    cout<<"So gio overtime:"<<soGio<<endl;
}
double LapTrinhVien::luong(){
    return luongCoBan+soGio*200000;
}
