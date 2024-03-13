/* A copy constructor is a special constructor that is called whenever a new object
  is created and initialized with another object's data*/

  // here is an example of a header file in this chapter

#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H

#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
    private:
        // lines 18 to 20 declare class's attributes
        string studentName; // The student's name
        double *testScores; // points to array of test scores
        int numTestScores; // number of test scores

        // private member function to create an array to hold the test scores
        void createTestScoresArray(int size)
        { numTestScores = size;
          testScores = new double[size];
          for (int i = 0; i < size; i++)
                testScores[i] = DEFAULT_SCORE; }

    public:
        // constructor that accepts the student's name and number of test scores as arguments
        StudentTestScores(string name, int numScores)
        { studentName = name;
            createTestScoresArray(numScores);} // number of test scores is passed to the createTestScoreArray member function

        // destructor deallocates the testScores array
        ~StudentTestScores()
        { delete [] testScores; }

        // The setTestScore function sets a specific test score's value
        void setTestScore(double score, int index)
        { testScores[index] = score; }

        // set the student's name
        string getStudentName() const
        { studentName = name; }

        // get the student's name
        string getStudentName() const
        { return studentName; }

        // get the number of test scores
        int getNumTestScores() const
        { return numTestScores; }

        // get a specific test score
        double getTestScore(int index) const
        { return testScores[index]; }
};
#endif