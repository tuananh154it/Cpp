#include<iostream>
using namespace std;
void fn(int n){
  n/=10;
  n%=10;
  if(n%3 == 0)
    cout<<" chu so hang chuc co chia het cho 3"<<endl;
  else 
    cout<<"chu so hang chuc khong chia het cho 3"<<endl;
}
int main(){
  int n;
  cout<<"enter n: ";cin>>n;
  fn(n);
  return 0;
}
/*Nhập số nguyên dương n có 4 chữ số? Kiểm tra xem 
chữ số hàng chục của số đó có chia hết cho 3 không?*/