#include <iostream>
#include <vector>
int main()
{
    int t = 0;
    char a0 = '';
    char a = '0';
    std::cin>>t;
    for(int j = 0; j < t; j++){
        std::vector<char> arr;
        int count = 0;
        while(std::cin.peek() != '\n')
        {
            int answer_count = 0
            std::cin>>a;
            if (a == '?'){
                answer_count +=1;
            }
            arr.push_back(a);
            if (arr[0] == '0'){
                std::cout<<1<<std::endl;
            }
            
            else if (answer_count == arr.size()){
                std::cout<<arr.size()-1<<std::endl;
            
        }
        
        for(int i =0; i<arr.size()-1; i++){
            for (int l = i+1; l <arr.size(); l++){
                if (arr[i]==1 and arr[l] != 1){
                    count+=1
                }
            }
        }
    }

    return 0;
}
