#include "ringin.h"
extern int count;
void NineRingOut(int n){
    if(n==1)
        count++;
    else if(n==2){
        count+=2;
    }
    else{
        NineRingOut(n-2);
        count++;
        NineRingIn(n-2);
        NineRingOut(n-1);
    }
}


