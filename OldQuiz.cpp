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
void Quiz::history()
{
     int ans_1;
     int correct_1 = 1;
     cout<<"During the first times of exploration, the Western Hemisphere, in particular the Americas, were known by what term?"<<endl;
     cout<<"1:The New World"<<"\n2:The Aztecs"<<"\n3: The Old World"<<endl;
     cin>>ans_1;
     if (ans_1==correct_1)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }


     int ans_2;
     int correct_2 = 3;
     cout<<"During which war did Florence Nightingale attend to wounded soldiers?";
     cout<<"1:The First and Second Boer War"<<"\n2:World War One"<<"\n3:The Crimean War"<<endl;
     cin>>ans_2;
     if (ans_2==correct_2)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }


     int ans_3;
     int correct_3 = 2;
     cout<<"What name was given to the South African Wars of 1880-1881 and 1899-1902?";
     cout<<"1:World War 2"<<"\n2:The First and Second Boer War"<<"\n3:The Crimean War"<<endl;
     cin>>ans_3;
     if (ans_3==correct_3)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }

     int ans_4;
      int correct_4 = 2;
     cout<<"What British tribe did the Iceni belong to?";
     cout<<"1:The Romans"<<"\n2:The Celtic tribes"<<"\n3:The Huns"<<endl;
     cin>>ans_4;
     if (ans_4==correct_4)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }

     int ans_5;
     int correct_5 = 1;
     cout<<"During which World War did the Battle of the Somme occur?";
     cout<<"1:World War One"<<"\n2:The 30 years war"<<"\n3:The war of the roses"<<endl;
     cin>>ans_5;
     if (ans_5==correct_5)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }
}
void Quiz::mixed()
{
     int ans_1;
     int correct_1 = 3;
     cout<<"In computer science, what does ""GUI"" stand for?";
     cout<<"1:Gaming Union of integrity "<<"\n2:Great User Interaction"<<"\n3:Graphical User Interface"<<endl;
     cin>>ans_1;
     if (ans_1==correct_1)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }

     int ans_2;
      int correct_2 = 1;
     cout<<"Who was the female lead in the movie ""Titanic""?";
     cout<<"1:Kate Winslety "<<"\n2:Miley Cyrus"<<"\n3:ariana grande"<<endl;
     cin>>ans_2;
     if (ans_2==correct_2)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }

     int ans_3;
     int correct_3 = 3;
     cout<<"What is the largest lake in Africa?";
     cout<<"1:Mono Lake "<<"\n2:The great salt lakes"<<"\n3:Lake Victoria"<<endl;
     cin>>ans_3;
     if (ans_3==correct_3)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }

     int ans_4;
     int correct_4 = 2;
     cout<<"Our solar system is located in what galaxy?";
     cout<<"1:Andromeda Galaxy"<<"\n2:The Milky Way Galaxys"<<"\n3:Pinwheel Galaxy"<<endl;
     cin>>ans_4;
     if (ans_4==correct_4)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }


     int ans_5;
     int correct_5 = 3;
     cout<<"What fast food franchise has the most worldwide locations?";
     cout<<"1:Mc Donalds"<<"\n2:KFC"<<"\n3:Subway"<<endl;
     cin>>ans_5;
     if (ans_5==correct_5)
     {
         score+=1;
         cout<<"Your choice was correct"<<endl;
     }
     else
        {
            cout<<"Your choose incorrectly"<<endl;
        }
}
