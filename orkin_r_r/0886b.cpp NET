#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n = 0;
    int a = 0;
    std::vector<int> arr;
    
    std::cin>>n;
    
    for(int i = 0; i< n; i++){
        std::cin>>a;
        arr.push_back(a);
    }
    if (n == 1){
        std::cout<<arr[0];
        return 0;
    }
    for(int j = 0; j<n-1; j++){
        bool flag = false;
        flag = *std::find(std::begin(arr)+(j+1), std::end(arr), arr[j]);
        if (flag == false){
            std::cout<<arr[j];
            break;
        }
    }
    return 0;
}
