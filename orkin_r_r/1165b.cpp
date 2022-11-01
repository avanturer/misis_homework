#include <vector>
#include <iostream>
#include <algorithm>  

int main()
{
    std::vector<int> arr;
    int a = 0;
    int n = 0;
    
    std::cin>>n;
    
    for(int i =0; i <n; i++){
        std::cin>>a;
        arr.push_back(a);
    }
    
    std::sort(arr.begin(), arr.end());
    
    int cnt = 1;
    for(int i =0; i<n;i++){
        if(arr[i] >= cnt){
            cnt++;
        }
    }
    
    std::cout<<cnt-1;
    
    return 0;
}
