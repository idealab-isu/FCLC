#include <iostream>
#include <cmath>
using namespace std;

void q2_19(){

    //Instantiate Three Nos
    int n1,n2,n3;

    //Read Three Numbers one by one
    cout << "Read three different integers : ";
    cin >> n1 >> n2 >>n3;
    //Perform Math
    cout << "Sum is " << n1+n2+n3 << endl;
    float average = (n1 + n2 + n3) / 3;
    cout << "Average is " << average << endl;
    cout << "Product is " << n1*n2*n3 << endl;
    cout << "Smallest is " << min(min(n1,n2),n3) << endl;
    cout << "Largest is " << max(min(n1,n2),n3) << endl;
}

void q2_24(){

    //Instantiate a number
    int n;

    //Read Three Numbers one by one
    cout << "Enter an integer : ";
    cin >> n;

    if(n%2 == 0){
        cout << n << " is an even integer";
    }
    else{
        cout << n << " is an odd integer";
    }
}

void q2_25(){

    //Instantiate a number
    int m, n;

    //Read Three Numbers one by one
    cout << "Program to check if the first number is a multiple of the second \n";
    cout << "==================================================================== \n";
    cout << "Enter first integer : ";
    cin >> m;
    cout << "Enter second integer : ";
    cin >> n;

    if(m%n == 0){
        cout << m << " is a multiple of " << n << endl;
    }
    else{
        cout << m << " is NOT a multiple of " << n << endl;
    }

}

void q2_28(){

    int n,k;
    cout << "Enter an Integer : ";
    cin >> n;

    int numb_digits = ceil(log10(n));
    cout << "This number has " << numb_digits << " digits \n";

    int digit_array[numb_digits];

    for(int i = numb_digits - 1; i >= 0; i--){

        k = n%10;
        digit_array[i] = k;
        n = n/10;

    }

    for(int j = 0; j < numb_digits; j++){

        cout << digit_array[j] << "   ";

    }

}


//3.11
class GradeBook
{

private:
    string courseName, courseInstructor; // course name for this GradeBook

public:
    GradeBook(string inCourseName, string inCourseInstructor)
    {
        this -> courseName = inCourseName;
        this -> courseInstructor = inCourseInstructor;

    }; // constructor that initializes courseName


    void setCourseName( string h)
    {
        this -> courseName = h;
    }// function that sets the course name

    string getCourseName()
    {
        return this -> courseName ;
    }// function that gets the course name


    void setInstructorName( string h)
    {
        this -> courseInstructor = h;
    }// function that sets the course name

    string getInstructorName()
    {
        return this -> courseInstructor ;
    }// function that gets the course name


    void displayMessage()
    {
        cout << "Welcome to the " << this -> courseName << " course." << endl;
        cout << "This course is presented by " << this -> courseInstructor << " ." << endl;
    }// function that displays a welcome message

};

class Account
{
private:
    int accountBalance;

public:

    Account(int inBalance)
    {
        if(inBalance >= 0){
            this -> accountBalance = inBalance;
        }
        else{
            this -> accountBalance = 0;
            cout << "Initial Balance of " << inBalance << " is invalid";
        }

    };

    string credit(int amount){

        if(amount < 0 ){
            return "Incorrect credit amount." ;
        }
        else{
            this -> accountBalance = this -> accountBalance + amount;
            return "We credited $ " + to_string(amount) + " to your account.";
        }

    }

    string debit(int amount){

        if(amount > this -> accountBalance){
            return "Debit amount exceeded the current account balance." ;
        }
        else{
            this -> accountBalance = this -> accountBalance - amount;
            return "We debited $ " + to_string(this -> accountBalance) + " from your account.";
        }
    }

    string getBalance(){
        return "Your account balance is $ " + to_string(this -> accountBalance) + " .";
    }
};

class Invoice{

private:
    string partDesc;
    int partNumber, qty, pricePerItem;

public:
    Invoice(int inPartNumber, string inPartDesc, int inQty, int inPricePerItem){

        this->partNumber = inPartNumber;
        this->partDesc = inPartDesc;

        if(inQty < 0){
            this->qty = 0;
        } else{
            this->qty = inQty;
        }

        if(inPricePerItem < 0){
            this->pricePerItem = 0;
        } else{
            this->pricePerItem = inPricePerItem;
        }

    }

    void setPartNumber( int h)
    {
        this -> partNumber = h;
    }


    int getIPartNumber()
    {
        return this -> partNumber ;
    }

    void setQty( int h)
    {
        this -> qty = h;
    }


    int getQty()
    {
        return this -> qty ;
    }


    void setPricePerItem( int h)
    {
        this -> pricePerItem = h;
    }


    int getPricePerItem()
    {
        return this -> pricePerItem ;
    }

    void setPartDesc( string h)
    {
        this -> partDesc = h;
    }


    string getPartDesc()
    {
        return this -> partDesc ;
    }


    int getInvoiceAmount(){
        return this->qty * this->pricePerItem;
    }


};

class Employee{
private:
    string fname, lname;
    int salary;

public:
    Employee(string inFname, string inLname, int inSalary ){

        this -> fname = inFname;
        this -> lname = inLname;

        if(inSalary < 0){
            this -> salary = 0;
        } else{
            this -> salary = inSalary;
        }

    }

    string getFname()
    {
        return this -> fname ;
    }


    void setFname( string h)
    {
        this -> fname = h;
    }

    string getLname()
    {
        return this -> lname ;
    }


    void setLname( string h)
    {
        this -> lname = h;
    }


    void setSalary( int h)
    {
        this -> salary = h;
    }


    int getSalary()
    {
        return this -> salary ;
    }



};

class Date{
private:
    int month, day, year;

public:
    Date(int inMonth, int inDay, int inYear){
        if(inMonth < 0 || inMonth > 12){
            this -> month = 1;
        } else {
            this -> month = inMonth;
        }

        this -> day = inDay;
        this -> year = inYear;
    }

    void setDay( int h)
    {
        this -> day = h;
    }


    int getDay()
    {
        return this -> day ;
    }

    void setMonth( int h)
    {
        this -> month = h;
    }


    int getMonth()
    {
        return this -> month ;
    }

    void setYear( int h)
    {
        this -> year = h;
    }


    int getYear()
    {
        return this -> year ;
    }


    string displayDate(){
        return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
    }
};


void mpg(){
    int miles = 0;
    int gallons = 0;

    int miles_now = 0;
    int gallons_now = 0;

    while(1==1){
        cout << "\n Enter miles driven (Enter -1 to quit): ";
        cin >> miles_now;
        if(miles_now != -1){
            cout << "\n Enter gallons used: ";
            cin >> gallons_now;

            miles += miles_now;
            gallons += gallons_now;

            float mpg_now = (miles_now*1.0)/(gallons_now*1.0);
            float mpg = (miles*1.0)/(gallons*1.0);

            cout << "\n MPG this trip: " << mpg_now;
            cout << "\n TOTAL MPG: " << mpg;
        }   else{
            break;
        }
    }

}


bool palindrome(int numb){
    int len_numb = ceil(log10(numb));
    int digit_array[len_numb];
    cout << "Number of Digits = " << len_numb << endl;
    for(int t = len_numb-1; t >= 0; t--){
        digit_array[t] = numb%10;
        numb = numb/10;
    }

    int mid = len_numb/2;
    bool flag = 1;
    for(int j = 0; j < mid; j++){
        if(digit_array[j] == digit_array[len_numb - 1 - j]){
            flag = flag*1;
        } else{
            flag = flag*0;
        }
    }

    return flag;
}

int binaryToDecimal(int bin){
    //Load the Binary number into an array
    int len_numb = ceil(log10(bin));
    int digit_array[len_numb];
    cout << "Number of Digits = " << len_numb << endl;
    for(int t = len_numb-1; t >= 0; t--){
        digit_array[t] = bin%10;
        bin = bin/10;
    }

    //Convert to Decimal
    int decimal = 0;
    for(int q = len_numb-1; q >= 0; q--){
        decimal += digit_array[q]*(pow(2,(len_numb - 1 - q)));
    }

    return decimal;
}



class Factorial{
public:
    //Factorial(){} - No constructor necessary

    int computeFactorial(int t){
        int reg = 1;
        int copyX = t;
        if(copyX == 0){
            return 1;
        }else{
            while(copyX > 0){
                reg = reg*copyX;
                copyX = copyX - 1;
        }
            return reg;

        }
    }

    float findE(int precision){
        float reg = 1.0;
        if(precision > 1){
            int counter = 1;
            while(counter <= precision){
                reg = reg + (1.0/(this -> computeFactorial(counter)));
                counter = counter + 1;
            }
            return reg;
        }
        else{
            return reg;
        }
    }

    float findEx(int x, int precision){
        float reg = 0.0f;
        if(precision > 1){
            int counter = 0;
            while(precision > counter){
                //Def - gamma(n) = (n-1)!
                reg = reg + pow(x,counter)/(tgamma(counter+1));
                counter++;
            }

            return reg;
        }
        else{
            return 1.0;
        }
    }

};



class Cryptography{

private:
    int numb;

public:

    Cryptography(int inNumb){

        this -> numb = inNumb;
    }

    void setNumb(int h){
        this -> numb = h;
    }

    int getNumb(){
        return this -> numb;
    }

    int encrypt(){

        int numbCopy = this -> numb;
        int digit_array[4];

        for(int j = 3; j >= 0; j--){
            digit_array[j] = numbCopy%10;
            numbCopy = numbCopy/10;
        }

        for(int j = 3; j >= 0; j--){
            digit_array[j] = (digit_array[j] + 7)%10;
        }



        //Swap

        int swap1 = digit_array[1];
        digit_array[1] = digit_array[3];
        digit_array[3] = swap1;

        int swap2 = digit_array[0];
        digit_array[0] = digit_array[2];
        digit_array[2] = swap2;

        return digit_array[0]*1000 + digit_array[1]*100 + digit_array[2]*10 + digit_array[3]; //return the number as an integer.
    }

    int decrypt(int code){

        int copyCode = code;
        //Find number of digits

        int numb_digits = ceil(log10(copyCode)); //Sometimes the message might have fewer digits than 4, because 3 encrypts as zero.

        int digit_array[4];

        for(int j = 0; j <= 3; j++){
            if(j < numb_digits) {
                digit_array[3 - j] = copyCode % 10;
                copyCode = copyCode / 10;
            }
            else{
                digit_array[3 - j] = 0;
            }
        }

        //Swap Back

        int swap1 = digit_array[1];
        digit_array[1] = digit_array[3];
        digit_array[3] = swap1;

        int swap2 = digit_array[0];
        digit_array[0] = digit_array[2];
        digit_array[2] = swap2;

        //Convert back to original message
        for(int j = 0; j <= 3; j++){
            if(digit_array[j] < 7){
                digit_array[j] = digit_array[j] + 3;
            }
            else{
                digit_array[j] = digit_array[j] - 7;
            }
        }

        //Return
        return digit_array[0]*1000 + digit_array[1]*100 + digit_array[2]*10 + digit_array[3]; //return the number as an integer.

    }

};

int main() {
    //q2_19();
    //q2_24();
    //q2_25();
    //q2_28();

    /* Q3.11
    GradeBook myGB("Optimization","Matt Harris");
    //cout << myGB.getCourseName();
    myGB.displayMessage();
    */

    /* Q3.12
    Account myAcc(1000);
    cout << myAcc.getBalance() << endl;
    cout << myAcc.credit(500) << endl;
    cout << myAcc.debit(750) << endl;
    cout << myAcc.getBalance() << endl;
     */

    /* Q3.13
    Invoice myInvoice = Invoice(33069,"Bike",12,200);
    cout << myInvoice.getInvoiceAmount();
    */

    /* Q3.14
    Employee myEmp1 = Employee("Jane","Doe",5900);
    Employee myEmp2 = Employee("John","Doe",5850);
    cout << myEmp1.getFname() << " " << myEmp1.getLname() << " ,ANNUAL SALARY : $ " << myEmp1.getSalary()*12 << endl;
    cout << myEmp2.getFname() << " " << myEmp2.getLname() << " ,ANNUAL SALARY : $ " << myEmp2.getSalary()*12<< endl;
    int newSalary1 = myEmp1.getSalary()*1.1;
    int newSalary2 = myEmp2.getSalary()*1.1;
    myEmp1.setSalary(newSalary1);
    myEmp2.setSalary(newSalary2);
    cout << myEmp1.getFname() << " " << myEmp1.getLname() << " ,NEW ANNUAL SALARY : $ " << myEmp1.getSalary()*12 << endl;
    cout << myEmp2.getFname() << " " << myEmp2.getLname() << " ,NEW ANNUAL SALARY : $ " << myEmp2.getSalary()*12<< endl;
    */

    /* 3.15
    Date myDate = Date(12,1,1984);
    cout << myDate.displayDate();
    */

    /* 4.13 */
    //mpg();

    /* 4.26 */
    //palindrome(11211);

    /* 4.27 */
    //binaryToDecimal(1101);

    /* 4.34 */
    //Factorial myFact = Factorial();
    //cout << myFact.computeFactorial(5) << endl;
    //cout << myFact.findE(15);
    //cout << myFact.findEx(2,5) << endl;

    /* 4.35
    Cryptography myCrypt = Cryptography(3303);
    int message = myCrypt.encrypt();
    cout << "Your encrypted message is " << message << endl;
    int retrieve = myCrypt.decrypt(message);
    cout << "Your decrypted message is " << retrieve << endl;
    return 0;
     */
}

/* Chapter - 4 : 13,26,27,34,35 */