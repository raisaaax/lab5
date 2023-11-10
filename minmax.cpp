#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  const int arrayLen = 10;
  int randNums[arrayLen];

  for (int i = 0; i < arrayLen; ++i){
    randNums[i] = rand() % 100;
  }

  cout<< "Random numbers: ";
  for (int i=0; i<arrayLen; ++i){
    cout << randNums[i] << "  ";
  }
  
  int min;
  int max;
  for (int i = 1; i<arrayLen; ++i) {
   
    if (randNums[i] < min) {
    min = randNums[i];
   }
   else{
    max = randNums[i];
   }
  }
  cout<< "\nMinimum is " << min << " and maximum is "<< max<<endl;
}
