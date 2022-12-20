#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

int main() {
    std::string word1;
    std::string word2;

    std::cin >> word1 >> word2;

    unsigned long long int size1 = word1.size();
    unsigned long long int size2 = word2.size();

    if (word1[size1 - 1] != word2[size2 - 1]) {
        std::cout << size1 + size2;
    }
    else if (size1 == size2) {
        int count = 0;
        for (int i = size1 - 1; i >= 0; i--) {
            if (word1[i] == word2[i]) {
                count += 2;
            }
            else {
                std::cout << size1 + size2 - count;
                break;
            }
        }
    }
    else if(size1 != size2){
        int count = 0;
        if (size1 > size2){
            word1.erase(word1.begin(), word1.begin()+ abs(size1-size2));
        }

        else{
            word2.erase(word1.begin(), word1.begin()+ abs(size1-size2));
        }
        count += abs(size1-size2);
        for (int i = std::min(size1, size2)-1; i >= 0; i--) {
            std::cin>>i;
            if (word1[i] == word2[i]) {
                count += 2;
            }
            else {
                std::cout << size1 + size2 - count;
                break;
            }
            std::cout<<count;
        }
    }


    return 0;
}