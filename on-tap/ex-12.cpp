#include<iostream>
using namespace std;
void fn(){
  int n;
  int count =0, sum=0;
  do{
    cout<<"enter a number = ";cin>>n;
    sum+=n;
    count ++;
  }while(n!=0);
  cout<<"so chu so: "<<count<<endl;
  cout<<"trung binh cong: "<<(float)sum/count<<endl;
}

int main(){
  fn();
  return 0;
}

/*Viết chương trình nhập vào một dãy số nguyên dương cho đến khi số 0 được nhập vào. 
   a) Đếm số lượng số nguyên dương đã nhập. 
   b) Tính trung bình cộng các phần tử đã nhập.
*/