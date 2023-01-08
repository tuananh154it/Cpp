#include<iostream>
using namespace std;
long int factorial(int x){
  if(x == 0) return 1;
  return x*factorial(x-1);
}
void fn(int k, int n){
  long A = factorial(n)/factorial(n-k);
  long C =  A/factorial(k);
  cout<<"to hop chap "<<k<<" cua "<<n<<" = "<<C<<endl;
  cout<<"chinh hop chap "<<k<<" cua "<<n<<" = "<<A<<endl;
}
int main(){
  int k,n;
  cout<<"enter n and k: "; cin>>n>>k;
  fn(k,n);
  return 0;
}
/*Viết hàm tính n giai thừa. Áp dụng tính nCk , nAk*/