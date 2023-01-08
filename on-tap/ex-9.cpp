#include<iostream>
using namespace std;
void find_n(){
  int sum = 1;
  int n =1 ;
  while( sum <100){
    n++;
    sum+= (2*n-1);
  }
  cout<<"the number n to find is "<<n<<endl;
}
int main(){
  find_n();
  return 0;
}

/*Tìm số nguyên dương n lớn nhất sao cho
	  1 + 3 +    +(2*n-1) <100
*/