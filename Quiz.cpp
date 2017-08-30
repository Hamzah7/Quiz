#include "Quiz.h"

Quiz::Quiz()
{
    score =0;
}

Quiz::~Quiz()
{
    //dtor
}
void Quiz::geography()
{
 string ans_1;
 cout<<"What is erosion?";
 cin>>ans_1;

 string ans_2;
 cout<<"What are the name of the longest river in the world?";
 cin>>ans_2;

 string ans_3;
 cout<<"What is measured by the Richter scale?";
 cin>>ans_3;

 string ans_4;
 cout<<"What is the capital of Japan?";
 cin>>ans_4;

 string ans_5;
 cout<<"what is the highest moutain in the world?";
 cin>>ans_5;
}
