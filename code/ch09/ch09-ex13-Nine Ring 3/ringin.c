#include "ringout.h"
extern int count;
void NineRingIn(int n){
    if(n==1)
        count++;
    else if(n==2)    {
        count+=2;
    }
    else{
        NineRingIn(n-1);
        NineRingOut(n-2);
        count++;
        NineRingIn(n-2);
    }
}


