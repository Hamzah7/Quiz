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
 int ans_1;
 int correct_1 = 1;
 cout<<"What is erosion?";
 cout << " 1.rock are worn away through the action of water" << "\n 2.rocks breaking down each other " << "\n 3.Trees roots cause damge to rocks" << endl;
 cin>>ans_1;

 int ans_2;
 int correct_2 = 3;
 cout<<"What are the name of the longest river in the world?";
 cout << " 1.Congo river" << "\n 2. Amazon River " << "\n 3.River Nile" << endl;
 cin>>ans_2;

 int ans_3;
 int correct_3 = 2;
 cout<<"What is measured by the Richter scale?";
 cout << " 1.Distance" << "\n 2. Earthquake " << "\n 3.Temperature" << endl;
 cin>>ans_3;

 int ans_4;
 int correct_4 = 2;
 cout<<"What is the capital of Japan?";
 cout << " 1.Kyoto" << "\n 2. Tokyo " << "\n 3.Hiroshima" << endl;
 cin>>ans_4;

 int ans_5;
 int correct_5= 1;
 cout<<"what is the highest moutain in the world?";
 cout << " 1.Everest" << "\n 2. Mt fuji " << "\n 3.K2" << endl;
 cin>>ans_5;
}

void Quiz::science(){
 int ans_1;
 int correct_1 = 1;
 cout<<"Who discovered the law of gravity?";
 cout << " 1.Newton" << "\n 2. Einstein " << "\n 3.Galileo" << endl;
 cin>>ans_1;

 int ans_2;
 int correct_2 = 1;
 cout<<"Which chemical element has the symbol He?";
 cout << " 1.Hellium" << "\n 2. Hydrogen " << "\n 3.Carbon" << endl;
 cin>>ans_2;

 int ans_3;
 int correct_3 = 2;
 cout<<"What is the name of main artery that carries blood from the heart?";
 cout << " 1.coronary" << "\n 2. The Aorta " << "\n 3.Pulmonary" << endl;
 cin>>ans_3;

 int ans_4;
 int correct_4 = 1;
 cout<<"Which two elements make up water";
 cout << " 1.Hydrogen and oxygen " << "\n 2.Hydrogen and carbon" << "\n 3.Hydrogen and Hellium" << endl;
 cin>>ans_4;

 int ans_5;
 int correct_5= 2
 cout<<"Which vitamin does sunlight provide to humans?";
 cout << " 1.Vitamin A" << "\n 2.Vitamin D" << "\n 3.Vitamin C" << endl;
 cin>>ans_5;
}
