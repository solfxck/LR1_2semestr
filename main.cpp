#include <iostream>
#include <cmath>
using namespace std;

void calculTrapezoid(double sup, double sdown, double sleft, double sright){
    double perimetrT = sup + sdown + sleft + sright;
    double midlineT = (sup + sdown)/2;

    double sr2 = sright * sright; // sright^2
    double sl2 = sleft * sleft; //sideleft^2
    double sdminu = sdown - sup; // side down minus side up
    double sdminu2 = sdminu * sdminu;
    double fractup = sdminu2 + sl2 - sr2; // numerator
    double fractdown = 2 * sdminu; // denominator
    double fraction = fractup / fractdown;
    double fraction2 = fraction * fraction; //fraction^2
    double rpartf = sl2 - fraction2; // right part of formula
    double rootpart = sqrt(rpartf); // root of right part of formula

    double areaT = midlineT * rootpart;

    cout << "Trapezoid Perimetr: " << perimetrT << endl;
    cout << "Trapezoid Middle line: " << midlineT << endl;
    cout << "Trapezoid Area: " << areaT << endl;
}

int main(){
    calculTrapezoid(14.0, 18.0, 6.0, 8.0);
}