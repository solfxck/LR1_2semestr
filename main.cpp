#include <iostream>
#include <cmath>
using namespace std;

void calculRectangle(double side1, double side2) {
    double perimetr = (side1 + side2) * 2; //Периметр
    double area = side1 * side2; //Площадь 
    double diagonal = sqrt(side1 * side1 + side2 * side2); //Длина диагонали
    
    cout << "Perimetr: " << perimetr << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;
}

int main(){
    double side1, side2;
    cout << "a. Rectangle\nEnter two values: ";
    cin >> side1 >> side2;
    calculRectangle(side1, side2);
}