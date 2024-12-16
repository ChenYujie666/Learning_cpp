// Program name: Convolution.cpp
// Author: Chen Yujie
// Date: December 2, 2024

#include <iostream>
#include <chrono>
#include <vector>
#include <math.h>
#include <cstdlib>

#define TEST_MODE

using namespace std;
#define EXECUTION_TIMES (10)

/**
 * @brief 生成二维高斯核
 * 
 * @param kernel 指向二维高斯核的指针
 * @param row 高斯核的行数
 * @param col 高斯核的列数
 * @param a 高斯函数的振幅
 * @param b 高斯函数的均值
 * @param c 高斯函数的标准差
 */
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

/**
 * @brief 生成一维高斯核
 * 
 * @param kernel_row 指向一维高斯核行向量的指针
 * @param kernel_col 指向一维高斯核列向量的指针
 * @param row 高斯核的行数
 * @param col 高斯核的列数
 * @param a1 高斯函数的振幅
 * @param b1 高斯函数的均值
 * @param c1 高斯函数的标准差
 * @param a2 高斯函数的振幅
 * @param b2 高斯函数的均值
 * @param c2 高斯函数的标准差
 */
void guassian_1d(vector<int> &kernel_row, vector<int> &kernel_col, int row, int col, int a1, int b1, int c1, int a2, int b2, int c2)
{
    for (int i = 0; i <= row / 2; i++)
    {
        kernel_row[i] = a1 * (exp(-(pow(i - row / 2 - b1, 2)) / (2 * pow(c1, 2))));
        kernel_row[row - 1 - i] = kernel_row[i];
    }

    for (int j = 0; j <= col / 2; j++)
    {
        kernel_col[j] = a2 * (exp(-(pow(j - col / 2 - b2, 2)) / (2 * pow(c2, 2))));
        kernel_col[col - 1 - j] = kernel_col[j];
        // cout << kernel_col[j] << endl;
    }
}

/**
 * @brief 进行二维卷积操作
 * 
 * @param input 输入图像
 * @param output 输出图像
 * @param kernel 卷积核
 * @param mm 输入图像的行数
 * @param nn 输入图像的列数
 * @param kernel_row 卷积核的行数
 * @param kernel_col 卷积核的列数
 */
void convolution(vector<vector<int>> &input, vector<vector<int>> &output, vector<vector<int>> kernel, int mm, int nn, int kernel_row, int kernel_col)
{
    // cout << "convolution" << endl;

    for (int i = kernel_row / 2; i < mm - kernel_row / 2; i++)
    {
        for (int j = kernel_col / 2; j < nn - kernel_col / 2; j++)
        {
            output[i][j] = 0.0f;

            for (int k = 0; k < kernel_row; k++)
            {
                for (int l = 0; l < kernel_col; l++)
                {
                    // cout << k << l << endl;
                    output[i][j] += kernel[k][l] * input[i][j];
                }
            }
            // cout << endl;
        }
    }
}

/**
 * @brief 进行一维卷积操作
 * 
 * @param input 输入图像
 * @param output 输出图像
 * @param kernel_1d_row 一维卷积核行向量
 * @param kernel_1d_col 一维卷积核列向量
 * @param mm 输入图像的行数
 * @param nn 输入图像的列数
 * @param kernel_row 卷积核的行数
 * @param kernel_col 卷积核的列数
 */
void convolution_1by1(vector<vector<int>> &input, vector<vector<int>> &output, vector<int> kernel_1d_row, vector<int> kernel_1d_col, int mm, int nn, int kernel_row, int kernel_col)
{
    vector<vector<float>> output1(mm, vector<float>(nn, 0));
    vector<vector<float>> output2(mm, vector<float>(nn, 0));

    for (int j = kernel_col / 2; j < nn - kernel_col / 2; j++)
    {
        for (int i = kernel_row / 2; i < mm - kernel_row / 2; i++)
        {
            for (int k = 0; k < kernel_row; k++)
            {
                output1[i][j] += kernel_1d_row[k];
            }
        }
    }

    for (int i = kernel_row / 2; i < mm - kernel_row / 2; i++)
    {
        for (int j = kernel_col / 2; j < nn - kernel_col / 2; j++)
        {
            // float tmp = 0.0f;
            for (int k = 0; k < kernel_col; k++)
            {
                output2[i][j] += kernel_1d_col[k];
            }
            // output[i][j] *= tmp;
        }
    }
    for (int i = 0; i < mm; i++)
    {
        for (int j = 0; j < nn; j++)
        {
            output[i][j] = output1[i][j] * output2[i][j] * input[i][j];
        }
    }
}

/**
 * @brief 测试函数
 * 
 * @return true  测试失败
 * @return false 测试通过
 */
bool test()
{

    size_t row = rand() % 1000 + 100;
    size_t col = rand() % 1000 + 100;
    size_t kernel_row = rand() % 100 + 1;
    size_t kernel_col = rand() % 100 + 1;
    int a1 = rand() % 10 + 1;
    int b1 = rand() % 10 + 1;
    int c1 = rand() % 10 + 1;
    int a2 = rand() % 10 + 1;
    int b2 = rand() % 10 + 1;
    int c2 = rand() % 10 + 1;

    // size_t row = 1000, col = 1001;
    // size_t kernel_row = 11, kernel_col = 11;
    // int a1 = 3, b1 = 2, c1 = 5;
    // int a2 = 9, b2 = 8, c2 = 7;

    vector<vector<int>> input(row, vector<int>(col, 0));
    vector<vector<int>> output1(row, vector<int>(col, 0));
    vector<vector<int>> output2(row, vector<int>(col, 0));

    vector<int> kernel_row_1d(kernel_row, 0);
    vector<int> kernel_col_1d(kernel_col, 0);
    guassian_1d(kernel_row_1d, kernel_col_1d, kernel_row, kernel_col, a1, b1, c1, a2, b2, c2);

    vector<vector<int>> kernel_2d;
    for (size_t i = 0; i < kernel_row; i++)
    {
        vector<int> tmp(kernel_col, 0);
        for (size_t j = 0; j < kernel_col; j++)
        {
            tmp[j] = kernel_col_1d[j] * kernel_row_1d[i];
        }
        kernel_2d.push_back(tmp);
    }

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            input[i][j] = 11.1f * i + 12.4f * j + 3;
        }
    }

    // 测量function1的执行时间
    auto start1 = std::chrono::high_resolution_clock::now();
    // 直接卷积 相乘相加
    convolution(input, output1, kernel_2d, row, col, kernel_row, kernel_col);
    auto end1 = std::chrono::high_resolution_clock::now();

    // 测量function2的执行时间
    auto start2 = std::chrono::high_resolution_clock::now();
    // 先一维再二维
    convolution_1by1(input, output2, kernel_row_1d, kernel_col_1d, row, col, kernel_row, kernel_col);
    auto end2 = std::chrono::high_resolution_clock::now();
    cout << endl;
    cout << "***********************************************" << endl;

    cout << "row: " << row << " col: " << col << endl;
    cout << "kernel_row: " << kernel_row << " kernel_col: " << kernel_col << endl;

    std::chrono::duration<double> duration1 = end1 - start1;
    std::cout << "convolution execution time: " << duration1.count() << " seconds" << std::endl;
    std::chrono::duration<double> duration2 = end2 - start2;
    std::cout << "convolution_1by1 execution time: " << duration2.count() << " seconds" << std::endl;

    // output1[0][0] += 1;
    // cout << "Validation: " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if (abs(output1[i][j] - output2[i][j]) <= 0.01f)
            {
            }
            else
            {
                cerr << "output1 != output2" << endl;
                return 1;
            }
        }
    }
    cout << "output1 == output2" << endl;
    return 0;
}

int main()
{

#ifdef TEST_MODE
    for (int i = 0; i < EXECUTION_TIMES; i++)
    {
        if (test())
        {
            cerr << "test failed" << endl; // 测试如果有卷积结果不相对的，抛出错误
            return 1;
        }
    }
#endif
    size_t row = 1000, col = 1001;
    size_t kernel_row = 11, kernel_col = 11;
    int a1 = 3, b1 = 2, c1 = 5;
    int a2 = 9, b2 = 8, c2 = 7;

    vector<vector<int>> input(row, vector<int>(col, 0));
    vector<vector<int>> output1(row, vector<int>(col, 0));
    vector<vector<int>> output2(row, vector<int>(col, 0));

    vector<int> kernel_row_1d(kernel_row, 0);
    vector<int> kernel_col_1d(kernel_col, 0);
    guassian_1d(kernel_row_1d, kernel_col_1d, kernel_row, kernel_col, a1, b1, c1, a2, b2, c2);

    vector<vector<int>> kernel_2d;
    for (size_t i = 0; i < kernel_row; i++)
    {
        vector<int> tmp(kernel_col, 0);
        for (size_t j = 0; j < kernel_col; j++)
        {
            tmp[j] = kernel_col_1d[j] * kernel_row_1d[i];
        }
        kernel_2d.push_back(tmp);
    }

    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            input[i][j] = 11.1f * i + 12.4f * j + 3;
        }
    }

    // 测量function1的执行时间
    auto start1 = std::chrono::high_resolution_clock::now();
    // 直接卷积 相乘相加
    convolution(input, output1, kernel_2d, row, col, kernel_row, kernel_col);
    auto end1 = std::chrono::high_resolution_clock::now();

    // 测量function2的执行时间
    auto start2 = std::chrono::high_resolution_clock::now();
    // 先一维再二维
    convolution_1by1(input, output2, kernel_row_1d, kernel_col_1d, row, col, kernel_row, kernel_col);
    auto end2 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration1 = end1 - start1;
    std::cout << "convolution execution time: " << duration1.count() << " seconds" << std::endl;
    std::chrono::duration<double> duration2 = end2 - start2;
    std::cout << "convolution_1by1 execution time: " << duration2.count() << " seconds" << std::endl;

    // output1[0][0] += 1;
    cout << "Validation: " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if (abs(output1[i][j] - output2[i][j]) <= 0.01f)
            {
            }
            else
            {
                cerr << "output1 != output2" << endl;
                return 1;
            }
        }
    }
    cout << "output1 == output2" << endl;

    return 0;
}