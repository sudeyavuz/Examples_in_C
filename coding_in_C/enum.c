#include <stdio.h>
enum Month{jan=1,feb=2,mar=3,apr=4,may=5,jun=6,jul=7,aug=8,sep=9,oct=10,nov=11,dec=12};
int main(){
    enum Month thisMonth;
    thisMonth = 7;
    if (thisMonth!=6 && thisMonth!=7 && thisMonth!=8)
    {
        printf("School time:(");
    }else {
        printf("Summer break:))");
    }
    
    return 0;
}