using namespace std;
#include "lib.h"
float max_array(float a[], int dim ) {
    float max=a[0];
    for (int i=0; i< dim; i++) {
        if (a[i]>max) {
            max=a[i];
        }
    }
    return max;
}
