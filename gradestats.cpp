#include <iostream>
using namespace std;


int main(){
  const int MAX_GRADES = 100;
  int grades[MAX_GRADES];
  int numGrades = 0;
  int total = 0;

  cout << "Enter grade (-1 to end)" <<endl;

  for (int i = 0; i<MAX_GRADES; i++){
    int grade;
    cin >> grade;
    if (grade == -1){
      break;
    }
    if (grade >=0 && grade <=MAX_GRADES){
      grades[numGrades] = grade;
      total += grade;
      numGrades++;
      
    }else{
      cout << "invalid" <<endl;
    }
       
  }
  double average = total/numGrades;
  cout<< "Average grade: "<<average<<endl;
}
