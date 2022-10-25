#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int x =0;
    unsigned int count = 0;
    
    std::cin>>x;
    for (; x; x >>= 1){
        count += x & 1;
    }
    std::cout<<count;
    return 0;
}
