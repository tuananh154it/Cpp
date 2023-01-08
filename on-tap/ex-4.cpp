#include<iostream>
using namespace std;
void fn(){
  char character;
  int number_of_characters = 0, number_of_x_characters = 0;
  do{
    cout<<"enter a character: ";
    cin>>character;
    number_of_characters++;
    if(character == 'x')
      number_of_x_characters++;
  }while(character != '=');
  number_of_characters-=1;
  cout<<"number of character: "<<number_of_characters<<endl;
  cout<<"number of  x character: "<<number_of_x_characters<<endl;
}
int main(){
  fn();
  return 0;
}


/*Viết chương trình nhập vào một ký tự cho đến khi dấu ‘=’ được nhập vào. 
a)	Đếm số ký tự đã nhập không kể dấu ‘=’
b)	Trong đó có bao nhiêu ký tự ‘x’.
*/