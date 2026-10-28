#include <iostream>

int main() {
    // Переменные типа int: порции, время, готовые порции
    int portions = 2;          // количество порций
    int timeMinutes = 10;      // время приготовления в минутах
    int readyPortions = 0;     // готовых порций в начале — ноль

    // Вывод заголовка рецепта
    std::cout << "Recipe: Quick cheese omelette" << std::endl;
    std::cout << "Portions: " << portions << std::endl;
    std::cout << "Time: " << timeMinutes << " min" << std::endl;
    std::cout << "Ready before: " << readyPortions << std::endl;

    // Раздел ингредиентов (минимум три)
    std::cout << "Ingredients:" << std::endl;
    std::cout << "- Eggs" << std::endl;
    std::cout << "- Cheese" << std::endl;
    std::cout << "- Butter" << std::endl;

    // Раздел приготовления (минимум три шага)
    std::cout << "Steps:" << std::endl;
    std::cout << "1. Beat the eggs." << std::endl;
    std::cout << "2. Melt butter in a pan." << std::endl;
    std::cout << "3. Pour eggs, add cheese, cook 5 min." << std::endl;

    // Присваиваем счётчику готовых порций новое значение
    readyPortions = portions;

    // Вывод итогового количества готовых порций
    std::cout << "Ready after: " << readyPortions << std::endl;

    return 0;
}