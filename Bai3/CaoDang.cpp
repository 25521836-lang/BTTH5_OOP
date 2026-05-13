#include "CaoDang.h"

void CaoDang::Nhap(){
    SinhVien::Nhap();
    cout<<"Nhap diem thi tot nghiep:";
    cin>>diemThiTN;
}
void CaoDang::Xuat(){
    SinhVien::Xuat();
    cout<<"Diem thi TN:"<<diemThiTN<<endl;
}
bool CaoDang::totNghiep(){
    if(tongTinChi>=120 && diemTB>=5 && diemThiTN>=5)
        return 1;
    return 0;
}
