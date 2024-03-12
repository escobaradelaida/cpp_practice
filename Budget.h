// Budget class is used to gather the budget requests for all the divisions of a company
// the class uses a static member, corpBudget, to hold the amount of the overall corporate budget

#ifndef BUDGET_H
#define BUDGET_H

// budget class declaration
class Budget
{
    private:
        static double corpBudget; // static member
        double divisionBudget; // instance member
    public:
        Budget()
        { divisionBudget = 0; }

        void addBudget(double b)
        { divisionBudget += b;
        corpBudget +=b; }

        double getDivisionBudget() const
        { return divisionBudget; }

        double getCorpBudget() const
        { return corpBudget; }
};

// Definition of static member variable corpBudget
double Budget::corpBudget = 0;

#endif