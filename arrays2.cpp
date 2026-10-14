#include <iostream>
#include <vector>
#include <iomanip>

// Function to calculate the sum of the numbers in the array
double calculateSum(const std::vector<double> &numbers)
{
    double sum = 0.0;
    for (double num : numbers)
    {
        sum += num;
    }
    return sum;
}

// Function to calculate the average of the numbers in the array
double calculateAverage(const std::vector<double> &numbers)
{
    if (numbers.empty())
    {
        return 0.0;
    }
    double sum = calculateSum(numbers);
    return sum / numbers.size();
}

int main()
{
    int size = 0;

    // 1. Accept array size from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0)
    {
        std::cout << "Error: Array size must be a positive integer.\n";
        return 1;
    }

    // 2. Accept numbers to fill the array
    std::vector<double> numbers(size);
    std::cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << "  Number " << (i + 1) << ": ";
        std::cin >> numbers[i];
    }

    // 3. Calculate sum and average using functions
    double totalSum = calculateSum(numbers);
    double average = calculateAverage(numbers);

    // 4. Display the results formatted to 2 decimal places
    std::cout << "\n========================\n";
    std::cout << "      RESULTS           \n";
    std::cout << "========================\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sum     : " << totalSum << "\n";
    std::cout << "Average : " << average << "\n";
    std::cout << "========================\n";

    return 0;
}