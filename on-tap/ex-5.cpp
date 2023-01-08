#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool check_prime(int x){
  if(x<2) return false;
  if(x== 2) return true;
  if(x%2 == 0) return false;
  else 
    for(int i = 3; i<= sqrt(x);i+=2)
      if(x%i == 0) return false;
  return true;
}
void print_primes(int n){
  cout<<"cac so nguyen to trong pham vi n"<<endl;
  for(int i =1;i<=n;i++)
    if(check_prime(i))
      cout<<setw(10)<<i;
}
int main(){
  int n ; 
  cout<<" enter n = ";cin>>n;
  print_primes(n);
  return 0;
}

/*Viết chương trình nhập vào một số nguyên dương n. In ra các số nguyên tố trong phạm vi n.*/