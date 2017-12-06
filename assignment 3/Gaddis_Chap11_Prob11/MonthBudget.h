/* 
 * File:   MonthBudget.h
 * Author: WilliamGunadi
 * Purpose:
 * Created on October 6, 2017, 11:02 PM
 */

#ifndef MONTHBUDGET_H
#define MONTHBUDGET_H

using namespace std;

struct MonthBudget {
    float housing,  // Expense categories in dollars
          utilities,
          household,
          trnsprt,
          food,
          medical,
          ins,
          entrmnt,
          clothes,
          misc;
};

#endif /* MONTHBUDGET_H */

