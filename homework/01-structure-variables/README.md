# Отчёт по домашнему заданию 1

| ФИО | Гаврилов Владислав |
| :--- | :--- |
| Группа | 9/2-РПО-25/1 |
| Курс | Основы C++ |
| Тема | Структура программы и переменные |
| Папка | `homework/01-structure-variables/` |

## Что сделано

Написана консольная программа `main.cpp`, которая выводит рецепт омлета:
- три переменные `int`: `portions` (2), `timeMinutes` (10), `readyPortions` (0);
- вывод названия, порций, времени и начального числа готовых порций через переменные;
- разделы «Ingredients» (3 пункта) и «Steps» (3 шага), каждый с новой строки;
- после шагов `readyPortions` перезаписывается значением `portions` и выводится;
- добавлен осмысленный комментарий в коде.

## Как собрать и запустить (VS Code)

1. Открыть папку `homework/01-structure-variables/` в VS Code.
2. Убедиться, что установлено расширение **C/C++** (Microsoft).
3. Открыть `main.cpp`.
4. Нажать **Ctrl+F5** (Run Without Debugging) — VS Code соберёт и запустит программу.
   - Если сборка не настроена: **Terminal → Run Build Task** → выбрать компилятор (g++/clang++/MSVC), затем **Ctrl+F5**.

## Ожидаемый вывод

```text
Recipe: Quick cheese omelette
Portions: 2
Time: 10 min
Ready before: 0
Ingredients:

Eggs

Cheese

Butter
Steps:

Beat the eggs.

Melt butter in a pan.

Pour eggs, add cheese, cook 5 min.
Ready after: 2
```

## Проверка

- [x] Программа собирается без ошибок.
- [x] Запускается через Ctrl+F5.
- [x] Все числовые данные выводятся через переменные.
- [x] `readyPortions` изменяется через уже созданную переменную.
- [x] Есть осмысленный комментарий.