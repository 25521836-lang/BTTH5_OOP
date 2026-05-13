#include<iostream>
#include"SinhVien.h"
#include"CaoDang.h"
#include"DaiHoc.h"
#include<string>

using namespace std;
int main(){
    int nCD,nDH;
    CaoDang cd[100];
    DaiHoc dh[100];
    cout<<"Nhap so sinh vien Cao Dang:";
    cin>>nCD;
    for(int i=0;i<nCD;i++){
        cout<<"\nSinh vien Cao Dang thu "<<i+1<<endl;
        cd[i].Nhap();
    }
    cout<<"\nNhap so sinh vien Dai Hoc:";
    cin>>nDH;
    for(int i=0;i<nDH;i++){
        cout<<"\nSinh vien Dai Hoc thu "<<i+1<<endl;
        dh[i].Nhap();
    }
    cout<<"\n====Sinh vien Cao Dang====\n";
    for(int i=0;i<nCD;i++){
        cd[i].Xuat();
        cout<<endl;
    }
     cout<<"\n====Sinh vien Dai Hoc====\n";
    for(int i=0;i<nDH;i++){
        dh[i].Xuat();
        cout<<endl;
    }
    cout<<"\n==Danh sach sinh vien du dieu kien tot nghiep==\n";
    for(int i=0;i<nCD;i++){
         if(cd[i].totNghiep()){
            cd[i].Xuat();
            cout<<endl;
         }
    }
    for(int i=0;i<nDH;i++){
         if(dh[i].totNghiep()){
            dh[i].Xuat();
            cout<<endl;
         }
    }
    cout<<"\n==Danh sach sinh vien khong du dieu kien tot nghiep==\n";
     for(int i=0;i<nCD;i++){
         if(!cd[i].totNghiep()){
            cd[i].Xuat();
            cout<<endl;
         }
    }
    for(int i=0;i<nDH;i++){
         if(!dh[i].totNghiep()){
            dh[i].Xuat();
            cout<<endl;
         }
    }
    int a=0;
    for(int i=0;i<nDH;i++){
        if(dh[i].getDiemTB()>dh[a].getDiemTB()){
            a=i;
        }
    }
    cout<<"\n==Sinh vien Dai Hoc co diem trung binh cao nhat==\n";
    dh[a].Xuat();
    int b=0;
    for(int i=0;i<nCD;i++){
        if(cd[i].getDiemTB()>cd[b].getDiemTB()){
            b=i;
        }
    }
    cout<<"\n==Sinh vien Cao Dang co diem trung binh cao nhat==\n";
    cd[b].Xuat();
    int nDemCD=0;
    int nDemDH=0;
    for(int i=0;i<nCD;i++){
        if(!cd[i].totNghiep()){
            nDemCD++;
        }
    }
    for(int i=0;i<nDH;i++){
        if(!dh[i].totNghiep()){
            nDemDH++;
        }
    }
    cout<<"\nSo sinh vien cao dang ko duoc tot nghiep:"<<nDemCD<<endl;
    cout<<"\nSo sinh vien dai hoc ko duoc tot nghiep:"<<nDemDH<<endl;
    return 0;
}
