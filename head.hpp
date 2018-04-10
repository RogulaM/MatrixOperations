#pragma once
#include <vector>

using namespace std;

class matrixOperations
{
public:

    vector<vector<double>> defineMatrix(int dimM, int dimN);
    vector<vector<double>> mmult(vector<vector<double>>mat1, vector<vector<double>>mat2);


};
