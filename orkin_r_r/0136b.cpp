#include <iostream>
#include <vector>

int 10_to_3(int a){
    std::vector<int> arr;
    while a > 0 {
        arr.push_back(a%3);
        a /=3;
    }
    return arr;
}

int main()
{
    int a = 0;
    int c = 0;
    
    std::vector<int> arr1;
    std::vector<int> arr2;
    
    std::cin>>a>>c;
    
    arr1 = 10_to_3(a);
    arr2 = 10_to_3(c);
    
    
    
        
    
    
    return 0;
}
