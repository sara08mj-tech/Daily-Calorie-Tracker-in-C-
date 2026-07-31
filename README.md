# Daily Calorie Tracker in C++

## Overview

This project is a simple calorie tracking application developed in C++. It allows users to enter the calorie count for multiple meals, validates the input, and provides useful nutritional statistics.

## Features

- Input calories for multiple meals.
- Validate calorie values (100–2000).
- Calculate total calorie intake.
- Calculate average calories per meal.
- Find the highest-calorie meal.
- Display all entered calorie values.

## Technologies

- C++
- Standard Library (`iostream`)

## Concepts Covered

- Arrays
- Functions
- Input validation
- Loops
- Conditional statements

## How to Run

Compile:

```bash
g++ main.cpp -o calorie-tracker
```

Run:

```bash
./calorie-tracker
```

## Sample Output

```
Enter number of calories meals: 3

Enter calories for meal 1: 450
Enter calories for meal 2: 720
Enter calories for meal 3: 550

-----------------------------------------
Total calories: 1720
Average calories: 573.33
Highest calories: 720
All calories: 450 720 550
```

## Future Improvements

- Store meal names in addition to calories.
- Save calorie records to a file.
- Display minimum calorie value.
- Generate a daily nutrition report.
