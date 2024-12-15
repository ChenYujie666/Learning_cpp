// Program name: Convolution.cpp
// Author: Chen Yujie
// Date: December 2, 2024

#include <iostream>
#include <chrono>

#include <vector>
#include <math.h>
using namespace std;
#define RUN_TIMES (1000000)
// #include "convolution.h"
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
float hadamard_sum_trivial(float **input, float **kernel, int row, int col)
{
    float sum = 0.0f;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += input[i][j] * kernel[i][j];
        }
    }
    return sum;
}

float hadamard_sum_x(float **input, float **kernel, int row, int col)
{
    float sum = 0.0f;
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            sum += (input[i][j] + input[i][col - 1 - j] + input[row - 1 - i][j] + input[row - 1 - i][col - 1 - j]) * kernel[i][j];
        }
    }
    if (row % 2 == 1)
    {
        for (int j = 0; j < col / 2; j++)
        {
            sum += (input[row / 2][j] + input[row / 2][col - 1 - j]) * kernel[row / 2][j];
        }
    }
    if (col % 2 == 1)
    {
        for (int i = 0; i < row / 2; i++)
        {
            sum += (input[i][col / 2] + input[row - 1 - i][col / 2]) * kernel[i][col / 2];
        }
    }
    return sum;
}

int main()
{
    int row = 50, col = 61;

    float **kernel = new float *[row];
    float **input = new float *[row];

    for (int i = 0; i < row; i++)
    {
        kernel[i] = new float[col];
        input[i] = new float[col];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            input[i][j] = 1;
        }
    }

    guassian(kernel, row, col, 1, 1, 1);

    // // show gaussian kernel
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout << kernel[i][j] << "\t";
    //     }
    //     cout << endl;
    // }

    float res1;
    float res2;

    {
        auto startTime = std::chrono::high_resolution_clock::now();
        // 模拟一个耗时的操作
        for (int i = 0; i < RUN_TIMES; i++)
        {
            res1 = hadamard_sum_trivial(input, kernel, row, col);
        }
        auto endTime = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
        std::cout << "hadamard_sum_trivial cost tiem: " << duration << " ms" << std::endl;
    }

    {
        auto startTime = std::chrono::high_resolution_clock::now();
        // 模拟一个耗时的操作
        for (int i = 0; i < RUN_TIMES; i++)
        {
            res2 = hadamard_sum_x(input, kernel, row, col);
        }
        auto endTime = std::chrono::high_resolution_clock::now();

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
        std::cout << "hadamard_sum_x cost time: " << duration << " ms" << std::endl;
    }

    cout << res1 << endl;
    cout << res2 << endl;

    // 释放内存
    for (int i = 0; i < row; i++)
    {
        delete[] kernel[i];
        delete[] input[i];
    }
    delete[] kernel;
    delete[] input;

    return 0;
}
