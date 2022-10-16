#include <iostream>
 
int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;
    std::cout <<std::min(a,b)<<" "<<(std::max(a,b)- std::min(a,b))/2;
}
