#include <iostream>
 
 
int main()
{
    int x=0, a;
    std::cin>>x;
    a=x/5;
    if(x%5 !=0)
    {
        std::cout<<a+1;    
    }
    else
    {
       std::cout<<a;
    }
    return 0;
}
