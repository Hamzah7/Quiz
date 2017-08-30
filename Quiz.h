#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>
#include <string>
using namespace std;

class Quiz
{
        int score;
    public:
        Quiz();
        virtual ~Quiz();
        void geography();
        void history();
        void science();
        void mixed();

    private:
};

#endif // QUIZ_H
