#include "quadraticroots.h"
#include <math.h>

QuadraticRootsResult findroots(long double a, long double b, long double c) {
    QuadraticRootsResult result;
    
    long double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        result.norealroots = 1;
    } else {
        result.norealroots = 0;
        long double sqrtDiscriminant = sqrtl(discriminant);
        
        result.x1 = (-b + sqrtDiscriminant) / (2 * a);
        result.x2 = (-b - sqrtDiscriminant) / (2 * a);
    }

    return result;
}