// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

class Package {

protected:

    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZip;

    string receiverName;
    string receiverAddress;
    string receiverCity;
    string receiverState;
    string receiverZip;

    double pkgWeightOz;
    double costPerOz;

public:

    Package(

            string senderName,
            string senderAddress,
            string senderCity,
            string senderState,
            string senderZip,

            string receiverName,
            string receiverAddress,
            string receiverCity,
            string receiverState,
            string receiverZip,

            double pkgWeightOz,
            double costPerOz) {

        senderName = senderName;
        senderAddress = senderAddress;
        senderCity = senderCity;
        senderState = senderState;
        senderZip = senderZip;

        receiverName = receiverName;
        receiverAddress = receiverAddress;
        receiverCity = receiverCity;
        receiverState = receiverState;
        receiverZip = receiverZip;

        pkgWeightOz = pkgWeightOz;
        costPerOz = costPerOz;

    }

    double calculateCost() {
        return this->pkgWeightOz * this->costPerOz;
    }

    void printLabel(){
        cout << "From:  " << endl;
        cout << "==========" << endl;
        cout << this->senderName << endl;
        cout << this->senderAddress << endl;
        cout << this->senderCity << endl;
        cout << this->senderState << endl;
        cout << this->senderZip << endl;

        cout << "To:  " << endl;
        cout << "==========" << endl;
        cout << this->receiverName << endl;
        cout << this->receiverAddress << endl;
        cout << this->receiverCity << endl;
        cout << this->receiverState << endl;
        cout << this->senderZip << endl;
    }

};

class TwoDayPackage : public Package {

private:

    double flatFee;

public:

    TwoDayPackage(
            string senderName,
            string senderAddress,
            string senderCity,
            string senderState,
            string senderZip,
            string receiverName,
            string receiverAddress,
            string receiverCity,
            string receiverState,
            string receiverZip,
            double pkgWeightOz,
            double costPerOz,
            double flatFee) : Package(
            senderName,
            senderAddress,
            senderCity,
            senderState,
            senderZip,
            receiverName,
            receiverAddress,
            receiverCity,
            receiverState,
            receiverZip,
            pkgWeightOz,
            costPerOz) {
        flatFee = flatFee;
    }

    double calculateCost() {
        return this->pkgWeightOz * this->costPerOz + this->flatFee;
    }

};

class OverNightPackage : public Package {

private:

    double additionalFeePerOz;

public:

    OverNightPackage(
            string senderName,
            string senderAddress,
            string senderCity,
            string senderState,
            string senderZip,
            string receiverName,
            string receiverAddress,
            string receiverCity,
            string receiverState,
            string receiverZip,
            double pkgWeightOz,
            double costPerOz,
            double additionalFeePerOz) : Package(
            senderName,
            senderAddress,
            senderCity,
            senderState,
            senderZip,
            receiverName,
            receiverAddress,
            receiverCity,
            receiverState,
            receiverZip,
            pkgWeightOz,
            costPerOz) {
        additionalFeePerOz = additionalFeePerOz;
    }

    double calculateCost() {
        return this->pkgWeightOz * (this->costPerOz + this->additionalFeePerOz);
    }



};

class Shape {
protected:
    double pi = 22.0/7.0;
    double length;
    double width;
    double radius;
    double height;
    double base;
    double baseSecond;
public:
    Shape(
            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0
    ) {

        length = length;
        width = width;
        radius = radius;
        height = height;
        base = base;
        baseSecond = baseSecond;
    }
};

class TwoDimensionalShape : public Shape {

public:

    TwoDimensionalShape(
            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0
    ) : Shape(
            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ) {//No in class variables to initialize}

    }
};


class ThreeDimensionalShape : public Shape {

public:

    ThreeDimensionalShape(
            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0
    ) : Shape(
            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ) {//No in class variables to initialize}

    }
};

class Triangle : public TwoDimensionalShape{

public:

    Triangle(

            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0

            ) : TwoDimensionalShape(

            length,
            width,
            radius,
            height,
            base,
            baseSecond
                    ){
    }

    double getArea(){
        return this->base * this->height *0.5;
    }

    void drawShape(){

        int PointsMax = this->base;
        int height = 0;
        while(height < this->height){
            for(int k = 0; k < PointsMax-height; k++){
                cout << "*";
            }
            cout << endl;
            height++;
        }

    }
};

class Square : public TwoDimensionalShape{

public:

    Square(

            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0

    ) : TwoDimensionalShape(

            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ){
    }

    double getArea(){
        return this->base * this->base;
    }

    void drawShape(){

        int PointsMax = this->base;
        while(PointsMax > 0){
            for(int k = 0; k < PointsMax; k++){
                cout << "*";
            }
            cout << endl;
            PointsMax--;
        }

    }
};

class Circle : public TwoDimensionalShape{

public:

    Circle(

            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0

    ) : TwoDimensionalShape(

            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ){
    }

    double getArea(){
        return this->radius * this->radius * this->pi;
    }

    void drawShape(){
        int PointsMax = this->base;
        while(PointsMax > 0){
            for(int k = 0; k < PointsMax; k++){
                cout << "*";
            }
            cout << endl;
            PointsMax--;
        }
    }
};


class Pyramid : public ThreeDimensionalShape{

public:

    Pyramid(

            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0

    ) : ThreeDimensionalShape(

            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ){
    }


    double getArea(){
        return 2*this->base * this->height;
    }


    double getVolume(){
        return this->base * this->height * this-> width/3;
    }
};

class Cube : public ThreeDimensionalShape{

public:

    Cube(

            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0

    ) : ThreeDimensionalShape(

            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ){
    }

    double getVolume(){
        return this->base * this->base * this->base;
    }

    double getArea(){
        return this->base * this->base * 6;
    }

};

class Sphere : public ThreeDimensionalShape{

public:

    Sphere(

            double length = 0,
            double width = 0,
            double radius = 0,
            double height = 0,
            double base = 0,
            double baseSecond = 0

    ) : ThreeDimensionalShape(

            length,
            width,
            radius,
            height,
            base,
            baseSecond
    ){
    }

    double getVolume(){
        return this->radius * this->radius * this->radius *this->pi/3;
    }

    double getArea(){
        return this->pi * this->radius * this-> radius * 4;
    }
};


int main() {
    /* 12.9 */
    OverNightPackage oPack = OverNightPackage("sN", "sA", "sC", "sS", "sZ", "rN", "rA", "rC", "rS", "rZ", 10, 1, 2);
    cout << "OverNight Cost = $" << oPack.calculateCost() << endl;

    TwoDayPackage tdPack = TwoDayPackage("sN", "sA", "sC", "sS", "sZ", "rN", "rA", "rC", "rS", "rZ", 10, 1, 2);
    cout << "2 Day Cost = $" << tdPack.calculateCost() << endl;

    /* 13.13*/

    vector<Shape*> shapes(4);
    shapes[0] = new Circle(0,0,2,0,0,0);
    shapes[1] = new Square(0,0,0,0,5,0);
    shapes[2] = new Cube(0,0,0,0,7,0);
    shapes[3] = new Sphere(0,0,5,0,0,0);

    for(size_t k = 0; k < 4; k++){
        string s = typeid(shapes[k]).name();

        if(s == "Cube"){
            cout << "Volume of " << s << " = " << static_cast<Cube*>(shapes[k])->getVolume();
            cout << "Area of " << s << " = " << static_cast<Cube*>(shapes[k])->getArea();
        }

        if(s == "Sphere"){

            cout << "Volume of " << s << " = " << static_cast<Sphere*>(shapes[k])->getVolume();
            cout << "Area of " << s << " = " << static_cast<Sphere*>(shapes[k])->getArea();

        }

        if(s == "Circle"){

            cout << "Area of " << s << " = " << static_cast<Circle*>(shapes[k])->getArea();

        }

        if(s == "Square"){

            cout << "Area of " << s << " = " << static_cast<Square*>(shapes[k])->getArea();

        }
    }


    /* 13.14*/

    vector<Shape*> newShapes(2);
    newShapes[0] = new Triangle(0,0,0,10,10,0);
    newShapes[1] = new Square(0,0,0,0,5,0);

    for(size_t k = 0; k < 2; k++){

        string s = typeid(shapes[k]).name();
        if(s == "Triangle"){
            static_cast<Triangle*>(shapes[k])->drawShape();
        }

        if(s == "Square"){
            static_cast<Square*>(shapes[k])->drawShape();
        }
    }


    /* 13.15*/
    vector<Package*> packages(2);

    packages[0] = new OverNightPackage("sN", "sA", "sC", "sS", "sZ", "rN", "rA", "rC", "rS", "rZ", 10, 1, 2);
    packages[1] = new TwoDayPackage("sN", "sA", "sC", "sS", "sZ", "rN", "rA", "rC", "rS", "rZ", 10, 1, 2);

    double totalCost = 0;

    for(size_t j = 0; j < packages.size(); j++){

        packages[j]->printLabel();
        double currCost = packages[j]-> calculateCost();
        totalCost += currCost;
        cout << "Total Shipping Cost = $"<< currCost << endl;
    }

    return 0;
}
