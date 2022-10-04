#include <iostream>
 
 
int main()
{
    int y = 0;
    int a,b,c,d = 0;
    std::cin>>y;
    while(1==1){
        y = y+1;
        a = y/1000;
        b = y%1000/100;
        c = y%100 /10;
        d = y %10;
        if (a != b && a!=c && a!=d && b!=c && b!=d && c!=d){
            std::cout<<y;
            return 0;
        }
        
        
    }
    
}
