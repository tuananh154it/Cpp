#include<iostream>
using namespace std;
void count_n_number_of_numbers(int n){
  int dem=0;
  do{
    dem++;
    n/=10;
  }while(n!=0);
  cout<<"x number of numbers is: "<<dem<<endl;
}
int main(){
  int n;
  cout<<"enter n = "; cin>>n;
  count_n_number_of_numbers(n);
  return 0;
}
// Viết chương trình đếm số chữ số của số n