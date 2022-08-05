#include "basic_questionnaire.h"

Questionnaire::Questionnaire(int w, int h, int a, Gender g)
{
    weight = w;
    height = h;
    age = a;
    gender = g;
}

//double Questionnaire::calculate()
//{
//    double calories = 0;
//    if(gender == female){
//        calories = physicalActivityCoefficient*(10*weight + 6,25*height + 5*age - 161);
//    }
//    else if (gender == male){
//        calories =  physicalActivityCoefficient*(10*weight + 6,25*height + 5*age + 5);
//    }
//    return  calories;
//}
