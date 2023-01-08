#include<iostream>
#include<cmath>
using namespace std;

void find_n(){
  int n =1, sum = 1;
  while (sum<=100)
  {
    n++;
    sum += pow(n,2);
  }
  cout<<"the number n to find is: "<<n<<endl;
}
int main(){
  find_n();
  return 0;
}
/*Tìm số nguyên dương n nhỏ nhất sao cho 
	1 + 2^2+ 3^2+ … +n^2 > 100
*/