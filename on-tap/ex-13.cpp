#include<iostream>
using namespace std;
bool check_perfect(int x){
  long int  sum= 0;
  for(int i = 1; i<=x/2 ; i++)
    if(x%i == 0) sum+=i;
  if(sum == x) 
    return true;
  return false;
}
void fn(int n){
  int sum_perfect = 0;
  for(int i = 1 ; i<=n; i++)
  if(check_perfect(i))
    sum_perfect+=i;
  cout<<"sum perfect number is "<<sum_perfect<<endl;
}
int main(){
  int n;
  cout<<"enter n : "; cin>>n;
  fn(n);
  return 0;
}

/*Viết chương trình nhập vào một số nguyên dương n. Tính tổng các số hoàn thiện trong phạm vi n. */