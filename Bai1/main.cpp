#include<iostream>
#include<string>
#include"NhanVienSX.h"
#include"NhanVienVP.h"
using namespace std;
int main(){
    int n,m;
    NhanVienSX dsSX[100];
    NhanVienVP dsVP[100];
    cout<<"So nhan vien san xuat:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nNhap nhan vien san xuat thu:"<<i+1<<endl;
        dsSX[i].nhap();
    }
    cout<<"So nhan vien van phong:";
    cin>>m;
    for(int i=0;i<m;i++){
        cout<<"\nSo nhan vien van phong thu :"<<i+1<<endl;
        dsVP[i].nhap();
    }
    cout<<"\n====Nhan vien san xuat===="<<endl;
    for(int i=0;i<n;i++){
        dsSX[i].xuat();
    }
    cout<<"====Nhan vien van phong===="<<endl;
    for(int i=0;i<m;i++){
        dsVP[i].xuat();
    }
    double tongLuong=0;
    for(int i=0;i<n;i++){
        tongLuong+=dsSX[i].getLuong();
    }
    for(int i=0;i<m;i++){
        tongLuong+=dsVP[i].getLuong();
    }
    cout<<"\nTong luong cong ty phai tra:"<<tongLuong<<endl;
    int luongSXmin=0;
    for(int i=0;i<n;i++){
        if(dsSX[i].getLuong()<dsSX[luongSXmin].getLuong()){
            luongSXmin=i;
        }
    }
    cout<<"\nLuong san xuat thap nhat:"<<endl;
    dsSX[luongSXmin].xuat();
    int tuoiVPmax=0;
    for(int i=0;i<m;i++){
        if(dsVP[i].getNgaySinh()<dsVP[tuoiVPmax].getNgaySinh()){
            tuoiVPmax=i;
        }
    }
    cout<<"\nTuoi van phong cao nhat:"<<endl;
    dsVP[tuoiVPmax].xuat();
    return 0;

}
