#include <iostream>
#include "head.hpp"

using namespace std;

int main()
{
    matrixOperations MO;
    vector<vector<double>> mat1 = MO.defineMatrix(3,3);
    vector<vector<double>> mat2 = MO.defineMatrix(3,2);

    mat1[0][0] = 1;
    mat1[0][1] = 5;
    mat1[0][2] = 7;
    mat1[1][0] = 6;
    mat1[1][1] = 2;
    mat1[1][2] = 4;
    mat1[2][0] = -5;
    mat1[2][1] = 1;
    mat1[2][2] = 6;

    mat2[0][0] = 5;
    mat2[1][0] = -6;
    mat2[2][0] = 2;
    mat2[0][1] = 3;
    mat2[2][1] = 4;
    mat2[1][1] = 7;

    vector<vector<double>> matrixProduct = MO.mmult(mat1, mat2);

    return 0;
}
