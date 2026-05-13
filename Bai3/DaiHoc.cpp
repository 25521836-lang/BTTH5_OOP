#include "DaiHoc.h"

void DaiHoc::Nhap(){
    SinhVien::Nhap();
    cin.ignore(1000,'\n');
    cout<<"Nhap ten luan van:";
    getline(cin,tenLuanVan);
    cout<<"Nhap diem luan van:";
    cin>>diemLuanVan;
}
void DaiHoc::Xuat(){
    SinhVien::Xuat();
    cout<<"Ten luan van:"<<tenLuanVan<<endl;
    cout<<"Diem luan van:"<<diemLuanVan<<endl;
}
bool DaiHoc::totNghiep(){
    if(tongTinChi>=170 && diemTB>=5 && diemLuanVan>=5)
        return 1;
    return 0;
}
