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
void Quiz::history()
{
     string ans_1;
     cout<<"During the first times of exploration, the Western Hemisphere, in particular the Americas, were known by what term?";
     cin>>ans_1;

     string ans_2;
     cout<<"During which war did Florence Nightingale attend to wounded soldiers?";
     cin>>ans_2;

     string ans_3;
     cout<<"What name was given to the South African Wars of 1880-1881 and 1899-1902?";
     cin>>ans_3;

     string ans_4;
     cout<<"What British tribe did the Iceni belong to?";
     cin>>ans_4;

     string ans_5;
     cout<<"During which World War did the Battle of the Somme occur?";
     cin>>ans_5;
}
void Quiz::mixed()
{
     string ans_1;
     cout<<"In computer science, what does ""GUI"" stand for?";
     cin>>ans_1;

     string ans_2;
     cout<<"Who was the female lead in the movie ""Titanic""?";
     cin>>ans_2;

     string ans_3;
     cout<<"What is the largest lake in Africa?";
     cin>>ans_3;

     string ans_4;
     cout<<"Our solar system is located in what galaxy?";
     cin>>ans_4;

     string ans_5;
     cout<<"What fast food franchise has the most worldwide locations?";
     cin>>ans_5;
}
