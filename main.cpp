#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    int dimensione=0;
    cin>>dimensione;
    float array[dimensione];
    for( int i=0; i<dimensione; i++){
        cin>>array[i];
    }
    cout<< max_array(array, dimensione);
    
    return 0;
    }
