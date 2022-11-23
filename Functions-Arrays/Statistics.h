#pragma once
#include"constants.h"

template<typename T>T Sum(T array[], int size);

template<typename T>T Sum(T array_2[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T array[], int size);

template<typename T>double Avg(T array_2[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(T array[], int size);

template<typename T>T minValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(T array[], int size);

template<typename T>T maxValueIn(T array_2[ROWS][COLS], const int ROWS, const int COLS);

