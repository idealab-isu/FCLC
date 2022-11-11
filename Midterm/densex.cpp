#include <vector>
#include <iostream>
#include "dense.h"

using namespace std;

Dense::Dense(int heightIn, int widthIn, vector<float> dataIn = {}){
    width = widthIn;
    height = heightIn;



    if(dataIn.size()!=(widthIn * heightIn)){
        cerr << "Width/Height Mismatch" << endl;
    }else{
        if (dataIn.empty()){
            vector<float> defaultData(heightIn*widthIn);
            data = defaultData;
        }else{
            data = dataIn;
        }
    }
}
void Dense::print(){
    cout << "[";
    for (int i = 0; i < data.size(); i++){
        cout << data[i];
        if ((i+1) % width == 0){
            // End line
            if (i == data.size()-1){
                cout << "]" << endl;
            }else{
                cout << endl << " ";
            }
        }else{
            cout << " , ";
        }
    }
}

Dense Dense::Mult(Dense B){

    if (width == B.height){
        vector<float> newData;
        for (int i = 0; i < height; i++){
            int AIdxWidthComponent = i*width;
            for (int j = 0; j < B.width; j++){
                float tmp = 0.0;
                for (int k = 0; k < width; k++){
                    int idxB = k*(B.width) + j;
                    int idxA = AIdxWidthComponent + k;
                    tmp += data.at(idxA) * B.data.at(idxB);
                }
                newData.push_back(tmp);
            }
        }
        Dense MatOutput(height,B.width,newData);
        return MatOutput;
    }else{
        cerr << "Dimensions mismatch" << endl;
        return B;
    }
}




