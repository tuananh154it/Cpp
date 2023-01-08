#include<iostream>
using namespace std;
int ucln(int x, int y){
  while(x!=y){
    int temp;
    if(x>y){
      temp = y;
      y = x-y;
      x=temp;
    }
    else{
      temp =x ;
      x =y-x;
      y =temp;
    }
  }
  return x;
}
void fn(int a,int b,int c, int d){
  cout<<"uoc chung lon nhat cua "<<a<<", "<<b<<", "<<c<<", "<<d<<" la: "<< ucln(ucln(a,b),ucln(c,d))<<endl;
}
int main(){
  int a,b,c,d;
  cout<<"enter a,b,c,d: ";
  cin>>a>>b>>c>>d;
  fn(a,b,c,d);
  return 0;
}