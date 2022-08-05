#ifndef FOOD_QUESTIONNAIRE_H
#define FOOD_QUESTIONNAIRE_H

enum Food
{
    meat,
    butter,
    bird,
    eggs,
    fish,
    dairy,
    oils,
    beans,
    nuts,
    citrus,
    berries,
    vegetables,
    fruits,
    dried_fruits,
    bread,
    rice,
    cereals,
    pasta
};

class FoodQuestionnaire
{
    Food food[19];

public:
    FoodQuestionnaire(Food *arr);
};

#endif // FOOD_QUESTIONNAIRE_H
