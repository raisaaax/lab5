#include <iostream>
using namespace std;

int main(){
  int n, sum, num1, num2;

  cout << "Enter two numbers";
  cin >> num1 >> num2;
  sum = 0;
  for (n = num1; n <=num2; n++){
    sum += n;
  }
  cout << "The sum from "<< num1<<" and "<<num2<<" is "<< sum<<endl;
}


