#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    int n = 0;
    int mark = 0;
    int vova_total = 0;
    std::vector<int> vec;
    
    std::cin>>n;
 
    for(int j = 0; j < n; j++){
        int summ = 0;
        for(int i =0; i <4; i++){
            std::cin>>mark;
            summ+=mark;
        }
        vec.push_back(summ);
    }
    vova_total = vec[0];
    std::sort(vec.begin(), vec.end());
    std::reverse(vec.begin(), vec.end());
    for(int i = 1; i <= n; i++){
        if (vec[i-1] == vova_total){
            std::cout<<i;
            break;
        }
    }
    return 0;
}
