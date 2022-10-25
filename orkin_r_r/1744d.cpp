#include <iostream>
#include <vector>
#include <algorithm>
int check_count(int a){
    int count_2 = 0;
    while (a%2 ==0){
        if (a%2==0){
            count_2+=1;
            a/=2;
        }
        else{
            break;
        }
        
    }
    
    return count_2;
}
 
 
int main()
{
    int t =0;
    int n = 0;
    int a =0;
    
    std::cin>>t;
    for (int j =0; j<t; j++){
        int count_2 = 0;
        int max_count_2 = 0;
        int moves = 0;
        std::vector<int> arr;
        
        std::cin>>n;
        
        for(int i =0; i<n; i++){
            std::cin>>a;
            
            count_2+= check_count(a);
            max_count_2 += check_count(i+1);
            
            arr.push_back(check_count(i+1));
        }
        std::sort(arr.begin(), arr.end());
        int need_2 = n - count_2;
        
        if (need_2 <=0){
            std::cout<<0<<std::endl;
        }
        else{
            if (max_count_2 - need_2 < 0){
                std::cout<<-1<<std::endl;
            }
            else{
                for(int i = arr.size()-1; i >=0; i --){
                    need_2 -= arr[i];
                    moves+=1;
                    if (need_2 <= 0){
                        std::cout<<moves<<std::endl;
                        break;
                    }
                }
            }
            
        }
    }
    return 0;
}
