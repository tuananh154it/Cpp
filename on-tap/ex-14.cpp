#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool check(int x){
  int y=sqrt(x);
  if(y*y == x) return true;
  return false;
}
void fn(int n){
  for(int i =1;i<=n; i++)
    if(check(i))
      cout<<setw(10)<<left<<i;
  cout<<"\n";
}

int main(){
  int n;
  cout<<"enter n: ";cin>>n;
  fn(n);
  return 0;
}
/*Viết chương trình nhập vào một số nguyên dương n. In ra các số chính phương trong phạm vi n.*/