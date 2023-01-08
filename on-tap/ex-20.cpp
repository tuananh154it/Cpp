#include<iostream>
#include<cstring>
using namespace std;
bool check(char *n){
  int x = strlen(n);
  for(int i =0;i<x/2; i++)
      if(n[i]!=n[x-i-1]) return false;
  return true;
}
int main(){
  char n[100];
  cout<<"enter n: ";
  cin.getline(n,100);
  if(check(n))
    cout<<"day la so doi xung "<<endl;
  else
    cout<<"khong phai so doi xung"<<endl;
  return 0;
}
//Nhập số nguyên dương n? Kiểm tra xem n có là số đối xứng không?