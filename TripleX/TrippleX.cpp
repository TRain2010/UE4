#include <iostream>
#include <algorithm>

using namespace std;
bool Guess(int array[]){
    
}


void PlayGame(){
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    const int CodeA = rand();
    const int CodeB = rand();
    const int CodeC = rand();
    int array[] = {CodeA, CodeB, CodeC};
    std::sort(std::begin(array), std::end(array));

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "You have 3 clues: " << std::endl;
    std::cout << "There are 3 numbers" << std::endl;
    std::cout << "Their Sum is " << CodeSum << std::endl;
    std::cout << "Their Product is " << CodeProduct << std::endl;

    int lifeLeft = 5;

}

int main()
{
    
    return 0;
}