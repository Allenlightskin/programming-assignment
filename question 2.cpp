#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  string course;
  int score;
  char grade;

  cout <<"Enter the full name of the student: ";
  cin >> name;

  cout <<"Enter the course: ";
  cin >> course;

  cout <<"Enter the score: ";
  cin >> score;

  if (score >= 70){
    grade = 'A';
  }
  else if (score >= 60){
    grade = 'B';
  } else if (score >= 50){
    grade = 'C';
  } else if (score >= 40){
    grade = 'D';
  } else if (score >= 0){
    grade = 'F';
  } else {
    cout <<"Invalid score" << endl;
    return 1;
  }
   
   cout <<"Student: " << name << endl;
   cout <<"Course: " << course << endl;
   cout <<"Score: "  << score << endl;
   cout <<"Grade: "  << grade << endl;

   return 0;
  
}