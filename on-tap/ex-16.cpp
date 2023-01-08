#include<iostream>
using namespace std;
bool check(float a, float b, float c ){
  if((a+b>c)&&(a+c>b)&&(b+c)>a) return true;
  return false;
}
int check_2(float a, float b, float c){
  if((a == b)||(a==c)||(b==c)) return 1;
  if((a==b)&&(a==c)) return 2;
  if((a*a == b*b + c*c)||(b*b == c*c +a*a)||(c*c == a*a+b*b)) return 3;
  return 0;
}
void fn(float a, float b, float c){
  if(check(a,b,c)){
    if(check_2(a,b,c)==0)
      cout<<"day la tam giac bth"<<endl;
    else if(check_2(a,b,c)==1)
      cout<<"day la tam giac can"<<endl;
    else if(check_2(a,b,c)==2)
      cout<<"day la tam giac deu"<<endl;
    else
      cout<<"day la tam giac vuong"<<endl;
  }
  else
  cout<<"day khong phai ba canh cua tam giac"<<endl;
}
int main(){
  float a,b,c;
  cout<<"enter a,b,c: ";
  cin>>a>>b>>c;
  fn(a,b,c);
  return 0;
}
/*Viết chương trình nhập vào 3 số thực. Kiểm tra xem 3 số có tạo thành 3 cạnh tam giác không.
 Nếu có kiểm tra xem là tam giác cân, đều hay vuông.*/