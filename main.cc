//Matthew O'Connell
//ECE 2620-001
//

#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
	int menuChoice;
	double x1,y1,x2,y2;
	cout << "Enter the coordinates of the center of a cirlce separated by whitespace:" << endl;
    cin >> x1 >> y1;
    cout << "Enter the coordinates of a point on the circle separated by whitespace:" << endl;
    cin >> x2 >> y2;
	circle mycircle; //mycircle circle object declaration
	mycircle.populate_classobj(x1,y1,x2,y2); //mycircle circle object instantiation
	while(menuChoice != 4){ //allows the menu option to loop until the user wishes to exit the program
                cout << "(1) Compute the radius of the circle" << endl << "(2) Compute the circumference of the circle" << endl << "(3) Compute the area of the circle" << endl << "(4) Exit" << endl;
                cin >> menuChoice;
                if(menuChoice != 4){
                        switch(menuChoice){ //calculates certain desired values based on user input i.e. radius, circumference, area
                                case 1:
                                        cout << "The radius of the circle is: " << mycircle.radius() << endl;
                                        break;

                                case 2:
                                        cout << "The circumference of the circle is: " << mycircle.circumference() << endl;
                                        break;

                                case 3:
                                        cout << "The area of the circle is: " << mycircle.area() << endl;
                                        break;

                                default: //triggers if the user enters a number that is not 1,2,3, or 4
                                        cout << "Please choose a valid option." << endl;
                                        break;
                        }
                }
        }


	
	return 0;
}

