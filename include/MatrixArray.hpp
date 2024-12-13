#pragma once


#ifndef MatrixArray_hpp //header guard to prevent re-initiate of the file multiple times.
#define MatrixArray_hpp

#include "include/Primary.hpp"

//Box standard { x, y }
struct input_box {float x, y;};

extern struct input_box default_input_box_size;
class ArrayDeclaration : protected RECTANGLE
{
    public:
    int rows, columns; // Self explainatory.

    //Varible to store inputs
    std::string inputNumber = "";
    double numbersArray;
    bool numberEntered = false;
    float value = 0;

    /*
        - New change 1.1
    */
    std::string calculate = "";

    //Interaction
    bool mouse_over_box = false;    
    int clicked_uppon = 0; // 0 is clear, 1 is hover, 2 is clicked
    void registering_number();
    void designating_box(); 
    void clear();
    void draws();
};

extern ArrayDeclaration matrix, box[3][3];

/*
    New change 1.1
*/
extern ArrayDeclaration linearValue[1][3], linear;
extern ArrayDeclaration Grid; 

class MatrixSize : protected RECTANGLE
{
    public:
    bool state = false;
    void mode();
};

extern MatrixSize is_three_by_three;

#endif