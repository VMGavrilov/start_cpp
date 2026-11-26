#include <iostream>
#include <iomanip>

void task1() {
    int size = 4;
    int scores[4];
    int num;

    std::cout << "--- Scores for tasks ---\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];

        // Проверка диапазона 0-100
        while (scores[i] < 0 || scores[i] > 100) {
            std::cout << "Error: score must be between 0 and 100. Try again: ";
            std::cin >> scores[i];
        }
    }

    std::cout << "Scores: ";
    for (int i = 0; i < size; i++) std::cout << scores[i] << " ";
    std::cout << "\n";

    std::cout << "Task number (1-4): ";
    std::cin >> num;

    if (num >= 1 && num <= size)
        std::cout << "Score for task " << num << ": " << scores[num - 1] << "\n\n";
    else
        std::cout << "Error: invalid number\n\n";
}

void task2() {
    int size = 6;
    int temps[6];
    int sum = 0, pos = 0;

    std::cout << "--- Temperature for six hours ---\n";
    std::cout << "Enter 6 temperatures: ";
    for (int i = 0; i < size; i++) {
        std::cin >> temps[i];

        // Проверка диапазона от -50 до 50 (как в условии)
        while (temps[i] < -50 || temps[i] > 50) {
            std::cout << "Error: temperature must be between -50 and 50. Try again: ";
            std::cin >> temps[i];
        }
    }

    int minV = temps[0], maxV = temps[0];
    for (int i = 0; i < size; i++) {
        sum += temps[i];
        if (temps[i] < minV) minV = temps[i];
        if (temps[i] > maxV) maxV = temps[i];
        if (temps[i] > 0) pos++;
    }

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Min: " << minV << "\n";
    std::cout << "Max: " << maxV << "\n";
    std::cout << "Average: " << std::fixed << std::setprecision(2) << (double)sum / size << "\n";
    std::cout << "Positive: " << pos << "\n\n";
}

void task3() {
    int size = 5;
    int stock[5];
    int target, found = -1;

    std::cout << "--- Inventory ---\n";
    std::cout << "Enter 5 stock values: ";
    for (int i = 0; i < size; i++) {
        std::cin >> stock[i];

        // Проверка диапазона 0-1000 (как в условии)
        while (stock[i] < 0 || stock[i] > 1000) {
            std::cout << "Error: stock must be between 0 and 1000. Try again: ";
            std::cin >> stock[i];
        }
    }

    std::cout << "Target value: ";
    std::cin >> target;

    for (int i = 0; i < size; i++) {
        if (stock[i] == target) {
            found = i;
            break;
        }
    }

    if (found == -1) std::cout << "Value not found\n";
    else std::cout << "First match: cell " << found + 1 << "\n";

    int cell, newVal;
    std::cout << "Cell number (1-5): "; std::cin >> cell;
    std::cout << "New stock value: "; std::cin >> newVal;

    if (cell >= 1 && cell <= size && newVal >= 0 && newVal <= 1000)
        stock[cell - 1] = newVal;
    else
        std::cout << "Error: invalid input\n";

    std::cout << "Array: ";
    for (int i = 0; i < size; i++) std::cout << stock[i] << " ";
    std::cout << "\n";

    std::cout << "Reversed: ";
    for (int i = size - 1; i >= 0; i--) std::cout << stock[i] << " ";
    std::cout << "\n\n";
}

int main() {
    task1();
    task2();
    task3();
    return 0;
}