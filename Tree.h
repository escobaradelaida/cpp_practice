/* Static member variable: a member variable that is declared in a class, but does not belong to any instance
   of the class

   When a member variable is declared with the key word static, only one copy exists in memory regardless of how
   many instances of the class that might exist
   
   Static member function: A member function that is declared in a class but does not belong to any instance of
   the class.
   */

// Here is an example

// Tree class
class Tree
{
    private:
        static int objectCount; // this is the static member variable
    public:
        // Constructor
        Tree()
        { objectCount++; }

        // Accessor function for objectCount
        int getObjectCount() const
            { return objectCount; }
};

// Definition of static member variable, written outside of the class
// Causes the variable to be created in memory and is required
int Tree::objectCount = 0;