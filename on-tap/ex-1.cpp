#include<iostream>
#include<iomanip>
using namespace std;
struct duoc_pham{
  char ma_hang[10], ten_hang[25],don_vi[10];
  double don_gia, thanh_tien;
  int so_luong;
}
// hàm nhập thông tin
void(int );
int main(){
  int n;
  cout<<"nhap so luong san pham: ";cin>>n;



  return 0;
}
/*Viết chương trình quản lý dược phẩm với thông tin của mỗi dược phẩm bao gồm:
 {mã hàng (kiểu chuỗi); tên hàng; đơn vị tính; đơn giá; số lượng; thành tiền}. 
 Trong đó {mã hàng; tên hàng; đơn vị tính; đơn giá; số lượng} được nhập vào từ bàn phím. Xây dựng chương trình
a)	Nhập thông tin các mặt hàng từ bàn phím, không nhập trường thành tiền. 
b)	Tính cột thành tiền với thành tiền = đơn giá*số lượng.
c)	In thông tin các mặt hàng có thành tiền lớn nhất vào tệp mathang.dat 
d)	Tìm dược phẩm có tên hàng “Augmentine”.
e)	Sắp xếp các mặt hàng theo thứ tự giảm dần theo mã hàng. In danh sách trước và sau khi sắp xếp. 
*/