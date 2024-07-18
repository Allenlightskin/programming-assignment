#include <iostream>
#include <cmath>

using namespace std;

int main(){
   int choice;
   double area;

   do {
     cout << "Menu:" << endl;
     cout << "1.Calculate the area of a circle" << endl;
     cout << "2.Calculate the area of a rectangle" << endl;
     cout << "3.Calculate the area of a triangle" << endl;
     cout << "4.Quit" << endl;
     cout << "Enter your choice: ";
     cin >> choice;
     switch (choice)
     {
     case 1:{
      double radius;
      cout << "Enter the radius of the circle: ";
      cin >> radius;
      area = M_PI * radius * radius;
      cout << "The area of the circle is: " << area << endl;
      break;        
     }
      case 2:{
        double length,width;
        cout << "Enter the length and width of rectangle: ";
        cin >> length >> width;
        area = length * width;
        cout << "The area of the rectangle is: " << area << endl;
        break;
      }  
      case 3:{
        double base,height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
        break;
      }
      case 4:{
        cout << "Quitting..." << endl;
        break;
      }
      default: {
        cout << "Invalid choice. Please try again." << endl;
        break;
      }
     }
   } while (choice != 4);
   
   return 0;
   
}