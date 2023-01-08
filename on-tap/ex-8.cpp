#include<iostream>
using namespace std;
void find_n(){
  float sum = 1;
  int n =1 ;
  while( sum <=3){
    n++;
    sum+= (float)1/n;
  }
  cout<<"the number n to find is "<<n<<endl;
}
int main(){
  find_n();
  return 0;
}
/*Tìm số nguyên dương n nhỏ nhất sao cho 
		1 + 1/2  + 1/3 +…. + 1/n >3
*/