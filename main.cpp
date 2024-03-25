#include <iostream>
#include <cmath>
using namespace std;

void calculRectangle(double side1, double side2) {
    if (side1 <= 0 || side2 <= 0) {
        cout << "error";
        return;
    }
    double perimetr = (side1 + side2) * 2; //Периметр
    double area = side1 * side2; //Площадь 
    double diagonal = sqrt(side1 * side1 + side2 * side2); //Длина диагонали
    
    cout << "a. Rectangle\nPerimetr: " << perimetr << endl;
    cout << "Area: " << area << endl;
    cout << "Diagonal: " << diagonal << endl;
}

int main(){
    calculRectangle(5, -1);
}