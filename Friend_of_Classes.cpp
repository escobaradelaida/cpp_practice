/*A friend is a function or a class that is not a member of a class but as access to the private members of the class
  A friend function is a function that is not part of a class but has access to the class's private members.
  A friend function is treated as if it were a member of a class
  
  To declare a friend:
  friend ReturnType FunctionName (ParameterTypeList)
  
  Note: The best practice is to declare as friends only those functions that must have access to the private members of the class*/

  /*Here is a Question from the revel course:
  Define a class named Window with the following members:
  An int member variable named width.
  An int member variable named height
  A constructor that accepts two int arguments. The first argument should be assigned to width and the second argument should be assigned to height.
  The Window class should declare the areSameSize function, described below, as a friend.

  Outside of the Window class, write a function named areSameSize that accepts two Window
  objects as arguments, and returns a bool indicating whether the two Window objects are the same size. Two Window objects are the same size 
  if their widths and heights match.*/

#include <iostream>

class Window
{
    private:
        int width;
        int height;
    public:
        Window(int width, int height) : width(width), height(height) {}

        friend bool areSameSize(const Window& window1, const Window& window2);
};

bool areSameSize(const Window& window1, const Window& window2){
    if (window1.width == window2.width && window1.height == window2.height)
    {
        return true;
    } 

    else
    {
        return false;
    }
};