#include "header.h"

#include <cmath>
#include <iostream>

int main() {
    std::cout << "This program is used to compute the value of the following "
                 "series : "
              << std::endl;

    std::cout << "(x^0)/0! + (x^1)/1! + (x^2)/2! + (x^3)/3! + (x^4)/4! + "
                 "........ + (x^n)/n! "
              << std::endl;

    std::cout << "Please enter the value of x : ";

    double x;
    std::cin >> x;

    int n;
    std::cout << std::endl << "Please enter an integer value for n : ";
    std::cin >> n;
    std::cout << std::endl;

    double seriesValue = ComputeSeriesValue(x, n);
    std::cout << "The value of the series for the values entered is "
              << seriesValue << std::endl;

    return 0;
}