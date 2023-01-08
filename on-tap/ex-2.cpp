#include<iostream>
using namespace std;
void fn(){
  for(int a=1;a<10;a++)
    for(int b=0;b<10;b++)
      for(int c=0;c<10;c++)
        for(int d=0;d<10;d++)
          if(a*b == c*d)
            cout<<a<<b<<c<<d<<endl;
}
int main(){
  fn();
  return 0;
}
/*Viết chương trình in ra tất cả các số có 4 chữ số abcd mà a*b = c*d*/