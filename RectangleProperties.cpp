

#include <iostream>
using namespace std; 

void getDimensions(double& length, double& width);
void rectangleCalc(double length, double width,
    double& area, double& perimeter);
void displayResult(double area, double perimeter);

int main()
{
    double length, width;
    double area, perimeter;
    char choice;
    do {
        getDimensions(length, width);
        rectangleCalc(length, width, area, perimeter);
        displayResult(area, perimeter);

        cout << "Calculate another rectangele? (y/n)";
        cin >> choice;

    } while (choice == 'y');
    cout << "Program Complete. Bye-Bye";
    return 0;
}
void getDimensions(double& length, double& width)
{
    cout << "Please enter the rectangle's length: ";
    cin >> length;
    while (length <= 0) {
        cout << "Error Length must be greather than 0. Please try again: ";
        cin >> length;
    }
    cout << "Please enter the rectangle's width: ";
    cin >> width;
    while (width <= 0) {
        cout << "Error. Width must be greater than 0. Please try again: ";
        cin >> width;
    }
}
void rectangleCalc(double length, double width,
    double& area, double& perimeter)
{
    area = length * width;
    perimeter = 2 * (length + width);
}
void displayResult(double area, double perimeter)
{
    cout << " The are of the rectangle is: " << area << endl;
    cout << " The perimeter of the rectangle is: " << perimeter << endl;
}