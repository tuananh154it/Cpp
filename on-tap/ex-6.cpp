#include<iostream>
#include<iomanip>
using namespace std;
void print_divisible_3_and_5(int n){
  for(int i = i ; i<=n; i++)
    if(i%15 == 0)
      cout<<setw(10)<<left<<i;
  cout<<"\n";
}
void count_odd_numbers(int n){
  if(n%2==0)
    cout<<"odd number of numbers: "<<n/2<<endl;
  else
    cout<<"odd number of numbers: "<<n/2+1<<endl;
}
int main(){
  int n;
  cout<<"enter n = "; cin>>n;
  print_divisible_3_and_5(n);
  count_odd_numbers(n);
  return 0;
}

/*
Viết chương trình nhập vào một số nguyên dương n. 
a.	In ra các số vừa chia hết cho 3 vừa chia hết cho 5 trong phạm vi n.
b.	Đếm các số lẻ trong phạm vi n.
*/