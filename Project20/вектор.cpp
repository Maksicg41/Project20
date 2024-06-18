#include <iostream>
#include <Windows.h>
#include <random>
#include <vector>
int main() 
{

    std::vector numbers;

     
        
        std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(-20, 20);

    for (int i = 0; i < 10; i++) 
    {
        numbers.push_back(distrib(gen));
    }

     
    std::cout << "Исходный вектор: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

     
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int n) {
        return n <= 0;
        }), numbers.end());
 
    std::sort(numbers.begin(), numbers.end());

     
    std::vector<int> sortedNumbers(numbers.begin(), numbers.end());

   
    std::cout << "Отсортированный вектор: ";
    for (const auto& num : sortedNumbers) {
        std::cout << num << " ";
    }
     

    return 0;
}

