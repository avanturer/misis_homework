#include <vector>
#include <iostream>
#include <algorithm>  

int main()
{
    int n = 0;
    long long int k = 0;
    int a = 0;
    int win_count = 0;
    int winner_power = 0;
    std::vector<int> power;
    
    std::cin>>n>>k;
    
    for (int i = 0; i < n; i++){
        std::cin>>a;
        power.push_back(a);
    }
    
    if (k+1 > power.size()){
        int answer = *std::max_element(std::begin(power), std::end(power));
        std::cout<<answer;
        return 0;
    }
    while (win_count != k){
        for (int i = 1; i<n; i++){
            if (power[0] > power[i]){
                win_count+=1;
                winner_power = power[0];
                if (win_count == k){
                    break;
                }
            }
            else{
                win_count = 1;
                power.push_back(power[0]);
                power.erase(power.begin(),power.begin()+1);
                break;
            }
        }
    }
    
    std::cout<<winner_power;
    
    return 0;
}
