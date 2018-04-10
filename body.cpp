#include "head.hpp"
#include <vector>

using namespace std;

vector<vector<double>> matrixOperations::defineMatrix(int dimM, int dimN)
{
        vector<vector<double>> matrix;
        matrix.resize(dimM);
            for (int i = 0; i < dimM ; i++)
                matrix[i].resize(dimN);

        return matrix;
}

vector<vector<double>> matrixOperations::mmult(vector<vector<double>>mat1, vector<vector<double>>mat2)
{
    int dimM = mat1.size();
    int dimN = mat2[0].size();

    vector<vector<double>> matrixProduct = defineMatrix(dimM, dimN);

    for(int i = 0; i < dimM; i++)
        for (int j = 0; j < dimN; j++)
        {
            double sumElements = 0;
            for(int k = 0; k < dimM; k++)
            {
                sumElements += mat1[i][k] * mat2[k][j];
            }
            matrixProduct[i][j] = sumElements;
        }

    return matrixProduct;
}
