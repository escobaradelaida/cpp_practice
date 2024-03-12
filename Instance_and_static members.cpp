/* The Rectangle class has two membber variables: width and length. Suppose we define two objects of the
   Rectangle class and set their width and lengthh member variables as shown in the following code:
   
   Rectangle box1, box2;
   
   // set the width and length for box1
   box1.setWidth(5);
   box1.setLength(10);
   
   // set width and length for box2
   box2.setWidth(500);
   box2.setLength(1000);
   
   What is going on?
   
   This code is creating box1 and box2, which are two distinct objects. Each has its own width and length member variables
   
   If getWidth member function is called, it returns the value stored in the object's width member variable.
   
   so cout << box1.getWidth() << " " << box2.getWidth() << endl;
   
   --> 5 500.
   
   The member variables, width and length, are known as instance variables because each instance of the class has its own copies
   of the variables*/