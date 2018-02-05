#include <iostream>

int main (){
    unsigned long int number;
    unsigned long int prime = 2;
    bool print;

    std::cout << "Enter how many prime number you would like to get:" << std::endl;
    std::cin >> number;
    std::cin.ignore();

    for (unsigned long int i = 1; i <= number; ){
        print = true;
        if(prime == 2){
            std::cout << i << ". - " << prime << std::endl;
            i++;
            prime++;
        } else {
            for(unsigned long int z = 3; z < prime; z += 2){
                if (prime % z == 0){
                    print = false;
                }
            }
            if (print){
                std::cout << i << ". - " << prime << std::endl;
                i++;
            }
            prime += 2;
        }
    }
    std::cin.get();
}