#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n){
  if (n<= 1){
    return false;
  }
  for (int i = 2; i<n; i++){
    if (n % i==0) {
      return false;
    }
  }
  return true;
}


int main(){
  int limitNumber;

  cout<< "Enter an integer: ";
  cin >> limitNumber;

  if (limitNumber < 2) {
  cout << "There are no primes <= "<< limitNumber<<endl;
  return 0;
  }

  cout << "Primes to "<<limitNumber << " are ";
  for ( int i = 2; i <= limitNumber; ++i){
    if (isPrime(i)){
      cout <<i << " ";      
    }
 }
 return 0;
}
