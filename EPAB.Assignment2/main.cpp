#include<iostream>
#include<conio.h>

using namespace std;

//Prototype function

double GetLengthFromUser();
double GetWidthFromUser();

double CalculateArea(double length, double width);
void DisplayArea(double area);


int main()
{

   double length = GetLengthFromUser();
   double width = GetWidthFromUser();

   double area = CalculateArea(length, width);
   DisplayArea(area);

    (void)_getch();
    return 0;
}



double GetLengthFromUser()
{
    double value;
    cout << "Enter the length of the Rectangle: ";
    cin >> value;
    return value;
}

double GetWidthFromUser()
{
    double value;
    cout << "Enter the width of the Rectangle: ";
    cin >> value;
    return value;
}

double CalculateArea(double value1, double value2)
{
    double value = value1 * value2;
    return value;
}

void DisplayArea(double value)
{
    cout << "\nThe area of the rectangle is: " << value << " Cm²";
}

