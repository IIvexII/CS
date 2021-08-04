/*
Q2). Write a C++ program to create a class name as arithmetic_operations (in header file as
.h) with two attributes (number 1 and number 2). Write four functions addition, subtraction,
multiplication and division. Program menu should be user friendly.
*/
class ArithmeticOperations{
    public:
        int num1, num2;
        int addition(){
            return num1+num2;
        }
        int subtraction(){
            return num1-num2;
        }
        int multiplication(){
            return num1*num2;
        }
        int division(){
            return num1/num2;
        }
};