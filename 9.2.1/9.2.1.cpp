#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;


#define MAX(a, b) ((a) > (b) ? (a) : (b))


#define MIN(a, b) ((a) < (b) ? (a) : (b))


#define ABS(a) ((a) < 0 ? -(a) : (a))


#define SQUARE(a) ((a) * (a))


#define POWER(a, b) (pow((a), (b)))


double calculateWFormula1(double x, double z) {
    return MAX(x, z) * MIN(x + z, x * z);
}


double calculateWFormula2(double x, double z) {
    return SQUARE(MIN(ABS(x - z), z));
}


#define CALCULATE_W(x, z) ((5 < (z) && (z) < 10) ? calculateWFormula1((x), (z)) : calculateWFormula2((x), (z)))


double calculateWFormula1(double x, double z) {
    return MAX(x, z) * MIN(x + z, x * z);
}


double calculateWFormula2(double x, double z) {
    return SQUARE(MIN(ABS(x - z), z));
}


double calculateW(double x, double z) {
    return CALCULATE_W(x, z);
}


int main() {
    double x, z;

   
    cout << " Enter x,z: ";
    cin >> x >> z;

  
#if 5 < z && z < 10
#define FORMULA1
#else
#undef FORMULA1
#endif


    double w = calculateW(x, z);


    cout << "reuslt w: " << w << endl;

    return 0;
}
    