/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>


int main()
{
    int t = 0;
    int n = 0 ;
    int a = 0;
    int k = 1;
    std::vector<int> arr;
    
    std::cin>>t;
    
    for(int j =0; j<t; j++){
        std::cin>>n;
        
        for (int i =0; i<n; i++){
            std::cin>>a;
            arr.push_back(a);
        }
        if (n == 1){
            if (arr[0] == 1){
                k+=1;
            }
        }
        else{
            for (int i =1; i<n; i++){
                
                if (arr[i-1] == 0 and arr[i] == 0){
                    k=-1;
                    break;
                }
                if(arr[i-1] == 0 and arr[i] == 1){
                    k+=1;
                }
                if (arr[i-1] == 1 and arr[i] == 1){
                    k+=6;
                }
                }
        }
        std::cout<<k<<std::endl;
        k = 1;
        arr.clear();
        }

    return 0;
}
