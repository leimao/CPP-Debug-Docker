#include "header.h"

int ComputeFactorial(int number) {
    // Intentionally set fact = 0 so that the factorial computation is always
    // wrong.
    int fact = 0;
    // The correct setting should be:
    // int fact = 1;

    for (int j = 1; j <= number; j ++) {
        fact = fact * j;
    }

    return fact;
}

double ComputeSeriesValue(double x, int n) {
    double seriesValue = 0.0;
    double xpow = 1;

    for (int k = 0; k <= n; k ++) {
        seriesValue += xpow / ComputeFactorial(k);
        xpow = xpow * x;
    }

    return seriesValue;
}