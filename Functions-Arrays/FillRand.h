#pragma once
#include"stdafx.h"
#include"constants.h"


void FillRand(int array[], int size, int minRand_Fill = 0, int maxRand_Fill = 100);
void FillRand(char array[], int size, int minRand_Fill = 0, int maxRand_Fill = 100);
void FillRand(float array[], int size, int minRand_Fill = 0, int maxRand_Fill = 100);
void FillRand(double array[], int size, int minRand_Fill = 0, int maxRand_Fill = 100);

void FillRand(int array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(float array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double array_2[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);