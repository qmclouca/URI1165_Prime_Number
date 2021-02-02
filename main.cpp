#include <iostream>
using namespace std;

int main() {
    int NCases = 0;
    bool flag = false;
    std::cin >> NCases;
    for (int x=0, value=0; x<NCases; x++){
        std::cin >> value;
        for(int y=2; y<value; y++){
            if (value%y == 0){
                flag = true;
            }
        }
        if (flag == false) {
            std::cout << value << " eh primo" << std::endl;
        } else {
            std::cout << value << " nao eh primo" << std::endl;
            flag = false;
        }
    }
    return 0;
}
