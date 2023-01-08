#include<iostream>
#include<cmath>
using namespace std;
bool check(float a, float b, float c ){
  if((a+b>c)&&(a+c>b)&&(b+c)>a) return true;
  return false;
}
void fn(float a, float b, float c){
  if(check(a,b,c)){
    float p = (a+b+c)/2;
    cout<<"chu vi: "<<a+b+c<<endl;
    cout<<"dien tich: "<<sqrt(p*(p-a)*(p-b)*(p-c))<<endl;
  }

}
int main(){
  float a,b,c;
  cout<<"enter a,b,c: ";
  cin>>a>>b>>c;
  fn(a,b,c);
  return 0;
}
/*Viết chương trình nhập vào 3 số thực. 
Kiểm tra xem 3 số có tạo thành 3 cạnh tam giác không.
 Nếu có tính chu vi, diện tích tam giác đó.*/