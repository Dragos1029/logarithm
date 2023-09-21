#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;

double ln(double nr) {
    double count = 1, totalValue = 0, it = 100, z, powe = 1, y;

    z = (nr + 1) / (nr - 1);
    double step = ((nr - 1) * (nr - 1)) / ((nr + 1) * (nr + 1));

    while (count <= it)
    {

        z *= step;
        y = (1 / powe)*z;

        totalValue = totalValue + y;
        powe = powe + 2;
        count++;
    }

    return 2 * totalValue;
}

double log(double nr, double base) {
    return ln(nr) / ln(base);
}

int main() {
    double nr, base;
    printf("Nr: ");
    cin >> nr;
    printf("\nBase: ");
    cin >> base;
    double res = log(nr, base);
    printf("\nRes is: %f", res);

    getch();

    return 0;
}