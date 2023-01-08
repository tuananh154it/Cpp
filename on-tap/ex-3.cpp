#include<iostream>
using namespace std;
void fn(){
  for(int a=1;a<10;a++)
    for(int b=0;b<10;b++)
      for(int c=0;c<10;c++)
        if(a*2 == b*c)
            cout<<a<<b<<c<<endl;
}
int main(){
  fn();
  return 0;
}

/*Viết chương trình in ra tất cả các số có 3 chữ số abcd mà 2*a = b*c*/