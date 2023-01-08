#include<iostream>
using namespace std;
void count_odd_numbers(int n){
  int dem = 0;
  int k;
  do{
    k = n%10;
    n /=10;
    if(k%2 == 1) dem++;
  }while(n!=0);
  cout<<"so chu so le: "<<dem<<endl;
}
int main(){
  int n;
  cout<<"enter n: "; cin>>n;
  count_odd_numbers(n);
  return 0;
}
/*Viết chương trình đếm số lượng chữ số lẻ của số nguyên dương n?*/