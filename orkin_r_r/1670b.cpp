#include <iostream>
#include <string>
int main()
{
    int t = 0;
    char a = '0';
    std::cin>>t;
    for(int j = 0; j < t; j++){
        std::string arr;
        
        int count = 0;
        int left = 0;
        int right = 0;
        
        std::cin>>arr;
        
        right = arr.size()-1;
        for(int i = arr.size()-1; i>=0; i--){
            if (arr[i] == '1'){
                left = i;
                break;
            } 
        }
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] == '0'){
                right = i;
                break;
            } 
        }
        std::cout<<right-left+1<<std::endl;
    }

    return 0;
}
