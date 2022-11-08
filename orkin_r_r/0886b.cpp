#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    int n = 0;
    int a = 0;
    int minimal = 10000000;
    int result = 0;
    std::vector<int> arr;
    std::map<int, int> mp;
    std::cin>>n;
    
    for(int i = 0; i< n; i++){
        std::cin>>a;
        arr.push_back(a);
        mp[a] = i;
    }
    if (n == 1){
        std::cout<<arr[0];
        return 0;
    }
    result = mp[0];
    for(int i = 0; i<n; i++){
        if(mp[arr[i]] < minimal){
            result = arr[i];
            minimal = mp[arr[i]];
        }
    }
    std::cout<<result;
    return 0;
}
