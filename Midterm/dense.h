#ifndef dense_H
#define dense_H

#include <vector>
#include <tuple>

class Dense
{
public:
    int width;
    int height;
    std::vector<float> data;

    // Member Functions
    Dense(int widthIn, int heightIn, std::vector<float> dataIn);
    Dense Mult(Dense B);
    void Set(int row, int col, float dataIn);
    void print();
};

#endif







