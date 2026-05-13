#include "SinhVien.h"

void SinhVien::Nhap(){
    cin.ignore(1000,'\n');
    cout<<"Nhap MSSV:";
    getline(cin,MSSV);
    cout<<"Nhap ho ten:";
    getline(cin,hoTen);
    cout<<"Nhap dia chi:";
    getline(cin,diaChi);
    cout<<"nhap tong tin chi:";
    cin>>tongTinChi;
    cout<<"Nhap diem trung binh:";
    cin>>diemTB;
}
void SinhVien::Xuat(){
    cout<<"MSSV:"<<MSSV<<endl;
    cout<<"Ho ten:"<<hoTen<<endl;
    cout<<"Dia chi: "<<diaChi<<endl;
    cout<<"Tong tin chi: "<<tongTinChi<<endl;
    cout<<"Diem TB: "<<diemTB<<endl;
}
bool SinhVien::totNghiep(){
    return 0;
}
double SinhVien::getDiemTB(){
    return diemTB;
}
