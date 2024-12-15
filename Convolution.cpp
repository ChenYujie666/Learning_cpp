// Program name: Convolution.cpp
// Author: Chen Yujie
// Date: December 2, 2024

#include <iostream>
#include <chrono>
#include <vector>
#include <math.h>

using namespace std;
#define RUN_TIMES (10000)
void guassian(float **kernel, int row, int col, float a, float b, float c)
{
    for (int i = 0; i <= row / 2; i++)
    {
        for (int j = 0; j <= col / 2; j++)
        {
            // cout << i << " " << j << endl;
            kernel[i][j] = a * (exp(-(pow(i - row / 2, 2) + pow(j - col / 2, 2)) / (2 * pow(b, 2))) + c);
            kernel[i][col - 1 - j] = kernel[i][j];
            kernel[row - 1 - i][j] = kernel[i][j];
            kernel[row - 1 - i][col - 1 - j] = kernel[i][j];
        }
    }
}

void convolution(float **input, float **output, float **kernel, int mm, int nn, int kernel_row, int kernel_col)
{
    // cout << "convolution" << endl;

    int left = 0;
    int right = 0;
    int up = 0;
    int down = 0;

    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            output[i][j] = 0.0f;
            up = 0;
            down = kernel_row;
            left = 0;
            right = kernel_col;

            if (i - (kernel_row) / 2 < 0)
            {
                up = (kernel_row + 1) / 2 - i - 1;
            }

            if (j - (kernel_col) / 2 < 0)
            {
                left = (kernel_col + 1) / 2 - j - 1;
            }

            if (mm - 1 - i - (kernel_row) / 2 <= 0)
            {
                down = kernel_row + (mm - 1 - i - (kernel_row) / 2);
                // continue;
            }
            // j = 6  not satisfied
            if (nn - 1 - j - (kernel_col) / 2 <= 0)
            {
                right = kernel_col + (nn - 1 - j - (kernel_col) / 2);
                // continue;
            }

            for (int k = up; k < down; k++)
            {
                for (int l = left; l < right; l++)
                {
                    // cout << k << l << endl;
                    output[i][j] += kernel[k][l] * input[i][j];
                }
            }
            // cout << endl;
        }
    }
}

int main()
{
    int row = 7, col = 8;
    int kernel_row = 3, kernel_col = 4;
    // cout << kernel_col << kernel_row << endl;

    float **kernel = new float *[kernel_row];
    for (int i = 0; i < kernel_row; i++)
    {
        kernel[i] = new float[kernel_col];
    }
    // cout << row << col << endl;

    float **input = new float *[row];
    float **output = new float *[row];

    for (int i = 0; i < row; i++)
    {
        input[i] = new float[col];
        output[i] = new float[col];
    }

    guassian(kernel, kernel_row, kernel_col, 1, 1, 1);

    for (int i = 0; i < kernel_row; i++)
    {
        for (int j = 0; j < kernel_col; j++)
        {
            // cout << kernel[i][j] << "\t";
            printf("%.16f\t", kernel[i][j]);
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            input[i][j] = 1.0f;
            output[i][j] = 0.0f;
        }
    }
    // cout << 1 << endl;

    convolution(input, output, kernel, row, col, kernel_row, kernel_col);
    cout << "output: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << output[i][j] << "\t";
        }
        cout << endl;
    }

    // 释放内存
    for (int i = 0; i < row; i++)
    {
        delete[] input[i];
    }
    delete[] input;

    for (int i = 0; i < kernel_col; i++)
    {
        delete[] kernel[i];
    }
    delete[] kernel;
}