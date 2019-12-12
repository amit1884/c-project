#include<windows.h>
#include<mmsystem.h>
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#include<fstream>
using namespace std;
class fun
{
char chs,p,n[20],l[20],state[20],gen,ans,d,ch,h,op;
    int choice,pt,opt,t,x[100],y[100],a,b,c,vote,z,f,pass;
    public:
      fun();
      void music();
      void quiz();
      int votes();
   };
    fun::fun()
   {
    chs='y';
    p='y';
    d='y';
    ch='y';
    h='y';
    op='y';
    pt=0;
    opt=2;
    t=2;
    }
    void fun::music()
    {
         system("COLOR 5F");
    cout<<setw(50)<<"LIST OF SONGS :-"<<endl;
    cout<<"  "<<"1.  BOLO HAR (SHIVAAY)"<<endl;
      cout<<"  "<<"2.  Beat Pe Booty  (FLYING JATT)"<<endl;
      cout<<"  "<<"3.  Bol Do Na Zara  (AZHAR)"<<endl;      
          cout<<"  "<<"4.  Dekha Hazaro Dafa(RUSTOM)"<<endl;
            cout<<"  "<<"5.  Cham Cham  (BAAGHI) "<<endl;
              cout<<"  "<<"6.  Dheere Dheere  (HONEY SINGH)"<<endl;              
               cout<<"  "<<"7.  Hua Hai Aaj Pehli Baar  (SANAM RE)"<<endl;
                    cout<<"  "<<"8.  Toota Jo Kabhi Tara  (Flying JATT)"<<endl;
                    cout<<"  "<<"9.  Main Hun Hero Tera  (HERO)"<<endl;                   
                      cout<<"  "<<"10. Tere Sang Yara (RUSTOM)"<<endl;
                       cout<<"  "<<"11.  Tu Jo Mila (BAJRANGI BHAIJAN)"<<endl;                       
                          cout<<"  "<<"12.  Kala Chasma (BAR BAR DEKHO) "<<endl;
                           cout<<"  "<<"13.  Sanam Re (SANAM RE)"<<endl;
                            cout<<"  "<<"14.  Gerua (DILWALE)"<<endl;
                             cout<<"  "<<"15.  High Heels  (KI AND KA) "<<endl;
                    cout<<setw(50)<<"ENTER YOUR CHOICE   :-";
                    cin>>choice;
                    if(choice==1)
                    PlaySound(TEXT("shiv.wav"),NULL,SND_SYNC);
                    else if(choice==2)
                    PlaySound(TEXT("beatpebooty.wav"),NULL,SND_SYNC);
                    else if(choice==3)
                    PlaySound(TEXT("bol.wav"),NULL,SND_SYNC);
                    else if(choice==4)
                    PlaySound(TEXT("dek.wav"),NULL,SND_SYNC);
                    else if(choice==5)
                    PlaySound(TEXT("chamcham.wav"),NULL,SND_SYNC);
                    else if(choice==6)
                    PlaySound(TEXT("dheeredheere.wav"),NULL,SND_SYNC);
                    else if(choice==7)
                    PlaySound(TEXT("huahaiaaj.wav"),NULL,SND_SYNC);
                    else if(choice==8)
                    PlaySound(TEXT("tootajo.wav"),NULL,SND_SYNC);
                    else if(choice==9)
                    PlaySound(TEXT("MHHero.wav"),NULL,SND_SYNC);
                    else if(choice==10)
                    PlaySound(TEXT("teresangyara.wav"),NULL,SND_SYNC);
                    else if(choice==11)
                    PlaySound(TEXT("tujomila.wav"),NULL,SND_SYNC);
                    else if(choice==12)
                    PlaySound(TEXT("kalachasma.wav"),NULL,SND_SYNC);
                    else if(choice==13)
                    PlaySound(TEXT("sanamre.wav"),NULL,SND_SYNC);
                    else if(choice==14)
                    PlaySound(TEXT("geru.wav"),NULL,SND_SYNC);
                    else if(choice==15)
                    PlaySound(TEXT("highheels.wav"),NULL,SND_SYNC);
                    }
                    void fun::quiz()
                    {
                          system("COLOR 04");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
     system("COLOR 04");
    cout<<setw(53)<<"   WELCOME TO OUR QUIZ SHOW  "<<endl;
     system("COLOR 04");
    cout<<setw(53)<<"****************************"<<endl<<endl<<endl;
     system("COLOR 04");
    cout<<setw(54)<<"  ||||| BIG MILLIONAIER DAY |||||"<<endl<<endl<<endl;
     system("COLOR 04");
    cout<<setw(60)<<"** SPONSORED BY :- MOHIT & AMIT GROUP **"<<endl;
     PlaySound(TEXT("kbc.wav"),NULL,SND_SYNC);
    getch();
    system("cls");
    while(d=='y'||d=='Y')
    {
    system("COLOR 07");
      cout<<endl<<endl<<endl;
      cout<<"Before starting the quiz please enter your details:-  "<<endl<<endl;
      cout<<"FIRST NAME      :     ";
      cin>>n;
       cout<<"LAST NAME      :     ";
      cin>>l;
      cout<<"GENDER (M/F)    :     ";
      cin>>gen;
      getch();
         system("cls");
          cout<<endl<<endl<<endl;
          system("COLOR 57");

          cout<<"  "<<"Today we have a new contestant to play this game whose name is "<<n<<" "<<l<<" "<<endl<<"  "<<"from "<<"JHARKHAND"<<endl;
          cout<<"  "<<"You are most welcome here "<<endl<<endl;
          cout<<"  "<<"Before starting the game let me tell you the rules of this game"<<endl<<endl;
          cout<<"  "<<"1. Consists of 20 questions"<<endl<<endl;
          cout<<"  "<<"2.There are three rounds ,first two rounds consists of 5  question each "<<endl<<"  "<<"and the last and the final round consists of 10 questions"<<endl<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
          cout<<"  "<<"So now lets start the game "<<endl;
          cout<<"  "<<"And your first question is coming to your computer screen"<<endl<<endl;
          getch();
          system("cls");
          system("COLOR FC");
         cout<<"   "<<"Q1.Who will be joining Aditya Birla Retail as CEO ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A) MOHIT KAMPANI"<<endl<<endl;
          cout<<"  "<<"(B) ADITYA BIRLA"<<endl<<endl;
          cout<<"  "<<"(C)CYRUS MISTRY "<<endl<<endl;
          cout<<"  "<<"(D) RATAN BIRLA"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='a'||ans=='A')
        {             
        cout<<"That's the right answer!!!!"<<endl<<endl;
        PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
        pt+=10;
        }
        else
        {
        PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
        cout<<"   "<<"Ooooo! Sorry , your answer is wrong"<<endl<<endl;
        }
        //getch();
        system("cls");
         cout<<"   "<<"Q2. Who is the new Governor of RBI?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  RAGHURAM RAJAN"<<endl<<endl;
          cout<<"  "<<"(B)  URJIT PATEL"<<endl<<endl;
          cout<<"  "<<"(C)  SABIR MOHAMMAD "<<endl<<endl;
          cout<<"  "<<"(D)  RAJAN PANDEY"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {              
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            // getch();
             system("cls");
            cout<<"   "<<"Q3. Which among is the extinct species?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  DODO "<<endl<<endl;
          cout<<"  "<<"(B)  SEA HORSE "<<endl<<endl;
          cout<<"  "<<"(C)  TIGER "<<endl<<endl;
          cout<<"  "<<"(D)  LEOPARD"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='A'||ans=='a')
        {                  
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
              PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);  
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           // getch();
            system("cls");
            cout<<"   "<<"Q4.When was RBI established ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  18th FEBRUARY 1998"<<endl<<endl;
          cout<<"  "<<"(B)  18th APRIL 1936"<<endl<<endl;
          cout<<"  "<<"(C)  18th APRIL 1935 "<<endl<<endl;
          cout<<"  "<<"(D)  18th FEBRUARY 1930"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='C'||ans=='c')
        {            
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           // getch();
            system("cls");
            cout<<"   "<<"Q5. How many sportsman received Khel Ratna Award in 2016 ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  5"<<endl<<endl;
          cout<<"  "<<"(B)  4 "<<endl<<endl;
          cout<<"  "<<"(C)  2 "<<endl<<endl;
          cout<<"  "<<"(D)  0"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {              
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
            system("cls");
            cout<<"   "<<"Q6. Name the first INDIAN bank to launch ATM?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  STATE BANK OF INDIA "<<endl<<endl;
          cout<<"  "<<"(B)  BANK OF INDIA "<<endl<<endl;
          cout<<"  "<<"(C)  ICICI "<<endl<<endl;
          cout<<"  "<<"(D)  BANK OF BARODA"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='C'||ans=='c')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           // getch();
            system("cls");
                   if(pt<=40)
                   {
                 cout<<"Results Of First Round   :- "<<endl;
                 cout<<"POINTS    :  "<<pt<<endl;
                 cout<<"Your marks is not satifactory"<<endl;
                 cout<<"So you can't enter the next round"<<endl;
                 cout<<"Now you can go"<<endl;
                 cout<<"THANKS for interest"<<endl<<endl;
                break;
                 }
                else
                 {
                     cout<<"Your point is : "<<pt<<endl<<endl;
                     cout<<"Your points are enough to go to the next round"<<endl<<endl;
                     cout<<"So the next question are:-"<<endl;
                     getch();
                      system("cls");
             cout<<"   "<<"Q7. The world's Teacher's Day 2016 is being observed across the world on 5th October .The theme for World's Teacher's Day ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  KINDNESS,IMPROVING THEIR STATUS"<<endl<<endl;
          cout<<"  "<<"(B)  VALUING TEACHER, IMPROVING THEIR STATUS "<<endl<<endl;
          cout<<"  "<<"(C)  RESPECTING TEACHERS "<<endl<<endl;
          cout<<"  "<<"(D)  NONE OF THESE"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
            system("cls");    
             cout<<"   "<<"Q8. What was the moto of Rio Olyampic 2016 ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  A NEW WORLD"<<endl<<endl;
          cout<<"  "<<"(B)  RISING NATION "<<endl<<endl;
          cout<<"  "<<"(C)  UNITED NATION"<<endl<<endl;
          cout<<"  "<<"(D)  HAPPY NATION"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='A'||ans=='a')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
            system("cls");
            cout<<"   "<<"Q9.Which company launched a new premium smartphone (PIXEL) while wil rival with APPLE and SAMSUNG  ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  GOOGLE"<<endl<<endl;
          cout<<"  "<<"(B)  YAHOO"<<endl<<endl;
          cout<<"  "<<"(C)  REDMI "<<endl<<endl;
          cout<<"  "<<"(D)  MOTOROLA"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='A'||ans=='a')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           // getch();
            system("cls");
            cout<<"   "<<"Q10.Name the social networking sight, which collabrating with Election Commision of INDIA in five state in next election ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A) TWEETER"<<endl<<endl;
          cout<<"  "<<"(B) FACEBOOK"<<endl<<endl;
          cout<<"  "<<"(C) INSTAGRAM "<<endl<<endl;
          cout<<"  "<<"(D) HIKE"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
            system("cls");
          cout<<"   "<<"Q11. Which country has been debarred from kabbadi world cup 2016 ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  AUSTRALIA"<<endl<<endl;
          cout<<"  "<<"(B)  PAKISTAN "<<endl<<endl;
          cout<<"  "<<"(C)  BANGLADESH "<<endl<<endl;
          cout<<"  "<<"(D)  NEWZELAND"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
           
                     system("cls"); 
                     cout<<"   "<<"Q12. Which country has gone top the ICC test ranking after the victory against NEZELAND ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  AUSTRALIA"<<endl<<endl;
          cout<<"  "<<"(B)  INDIA"<<endl<<endl;
          cout<<"  "<<"(C)  ENGLAND "<<endl<<endl;
          cout<<"  "<<"(D)  SOUTH AFRICA"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
           
                     system("cls"); 
                     cout<<"   "<<"Q13. Name the company joined hands to announce a historic partnership on arficial intelligence and machine learning recently ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A) FACEBOOK,GOOGLE, MICROSOFT, AMAZONE"<<endl<<endl;
          cout<<"  "<<"(B)  FACEBOOK,GOOGLE "<<endl<<endl;
          cout<<"  "<<"(C)   MICROSOFT, AMAZONE "<<endl<<endl;
          cout<<"  "<<"(D)  NONE OF THESE"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           // getch();
            system("cls");
            }
            
            if(pt<110)
            {
                 cout<<"Results Of SECOND Round   :- "<<endl<<endl<<endl;
                 cout<<"POINTS    :  "<<pt<<endl;
                 cout<<"Your marks is not satifactory"<<endl;
                 cout<<"So you can't enter the next round"<<endl;
                 cout<<"Now you can go"<<endl;
                 cout<<"THANKS for interest";
                 break;
                 }
                 else
                 {
                     cout<<"Your point is : "<<pt<<endl<<endl;
                     cout<<"Your points are enough to go to the next round"<<endl<<endl;
                     cout<<"This is the last round so take some times and answer it "<<endl<<endl;
                     cout<<"So the next question are:-"<<endl;
                     getch();
                      system("cls"); 
                     cout<<"   "<<"Q14. On which date the INDIAN currency of denomination 500 and 1000 was banned ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  8th NOVEMBER,2016 "<<endl<<endl;
          cout<<"  "<<"(B)  7th NOVEMBER,2016 "<<endl<<endl;
          cout<<"  "<<"(C)  6th NOVEMBER,2016"<<endl<<endl;
          cout<<"  "<<"(D)  9th NOVEMBER,2016"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='D'||ans=='d')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
           
                     system("cls"); 
                     cout<<"   "<<"Q15. In which state GST bill was first imposed ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  JHARKHAND"<<endl<<endl;
          cout<<"  "<<"(B)  ASSAM "<<endl<<endl;
          cout<<"  "<<"(C)  MEGHALAYA "<<endl<<endl;
          cout<<"  "<<"(D)  UP"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- "<<endl<<endl;
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
        system("cls"); 
cout<<"   "<<"Q16. Which public sector bank has received Rs 775 crore as capital infusion from the central government ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  SBI"<<endl<<endl;
          cout<<"  "<<"(B)  BOI"<<endl<<endl;
          cout<<"  "<<"(C)  ICICI"<<endl<<endl;
          cout<<"  "<<"(D)  UCO"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='D'||ans=='d')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
            //getch();
           
                     system("cls"); 
                     cout<<"   "<<"Q17. WHO WAS THE FIRST TEST-TUBE BABY   ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  LOUISE BROWN"<<endl<<endl;
          cout<<"  "<<"(B)  CHANDLER DAVIS "<<endl<<endl;
          cout<<"  "<<"(C)  JAMES DANIEl "<<endl<<endl;
          cout<<"  "<<"(D)  ELIZABETH PAL"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='A'||ans=='a')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           
                     system("cls"); 
                     cout<<"   "<<"Q18. WHO FIRST TREATED ZERO AS A NUMBER ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  ARYABHATTA"<<endl<<endl;
          cout<<"  "<<"(B)  BRAHMAGUPTA "<<endl<<endl;
          cout<<"  "<<"(C)  BHASKAR"<<endl<<endl;
          cout<<"  "<<"(D)  ARISTOTLE"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='B'||ans=='b')
        {
            cout<<"CORRECT ANSWER!!!!"<<endl<<endl;
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????"<<endl<<endl;
            }
           
                     system("cls"); 
                     cout<<"   "<<"Q19. WHICH IS THE OLDEST RAILWAY STATION IN THE WORLD ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  SONPUR"<<endl<<endl;
          cout<<"  "<<"(B)  LONDON "<<endl<<endl;
          cout<<"  "<<"(C)  LIVERPOOL "<<endl<<endl;
          cout<<"  "<<"(D)  LININGRAD"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='C'||ans=='c')
        {
            cout<<"CORRECT ANSWER!!!!";
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????";
            }
           
                     system("cls"); 
                     cout<<"   "<<"Q20. WHO IS KNOWN AS THE FATHER OF CELLULAR PHONE ?"<<endl<<endl<<endl;
          cout<<"  "<<"(A)  FRANK WHITTLE"<<endl<<endl;
          cout<<"  "<<"(B)  CHARLES BABBAGE "<<endl<<endl;
          cout<<"  "<<"(C)  JOHN LUDWIG "<<endl<<endl;
          cout<<"  "<<"(D)  MARTIN COOPER"<<endl<<endl;
        cout<<"   "<<"Enter your answer  :- ";
        cin>>ans;
        if(ans=='D'||ans=='d')
        {
            cout<<"CORRECT ANSWER!!!!";
            PlaySound(TEXT("clap.wav"),NULL,SND_SYNC); 
            pt+=10;
            }
            else
            {
                PlaySound(TEXT("buzz.wav"),NULL,SND_SYNC);
            cout<<"WRONG ANSWER?????";
            }
            }
            if(pt<170)
            {
                      cout<<"   "<<"Sorry your score is not upto the mark "<<endl<<endl;
                      cout<<"    "<<"You Have To Leave The Game "<<endl<<endl;
                      cout<<"    "<<"***THANK YOU FOR PLAYING*** ";
                      }
                      else
                      {
                       system("cls");   
                     cout<<"Your point is          :     "<<pt<<endl;
                     cout<<"That means you clear this round successfully"<<endl<<endl;
                     cout<<"YOU GET A PRIZE FROM TENDER HEART SCHOOL CORP. TO CLAIM UR PRIZE, CONTRACT AT : thsss@GOTALACHANT.COM"<<endl<<endl;
                     cout<<"VISIT US AGAIN"<<endl;
                     getch();
            system("cls");
            }         
            cout<<"want to continue ";
            cin>>d;
            getch();
            system("cls");
            }
            }
            int fun::votes()
            {
                 for(a=0;a<18;a++)
x[a]=0;
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
system("COLOR 0D");
cout<<setw(50)<<"NAMES OF COMPUTER PROJECTS :-"<<endl<<endl;
cout<<"1.EVOLUTION OF COMPUTER"<<endl;
cout<<"2.HARDWARE AND ITS PARTS"<<endl;
cout<<"3.SOFTWARE TREE"<<endl;
cout<<"4.WEBSITE BUILDER AND SECRETS OF WINDOWS"<<endl;
cout<<"5.HARD DISK"<<endl;
cout<<"6.CYBER CRIME"<<endl;
cout<<"7.CANCER PRESENTATION"<<endl;
cout<<"8.CAREER IN IT"<<endl;
cout<<"9.AUTOMATED ROBOT"<<endl;
cout<<"10.LIFETIME FREE INTERNET INCREASING LIKES ON FACEBOOK"<<endl;
cout<<"11.FLASH GAME"<<endl;
cout<<"12.NETWORKING"<<endl;
cout<<"13.INTERNET WEB SERVICE"<<endl;
cout<<"14.HACKING"<<endl;
cout<<"15.USB STEALER"<<endl;
cout<<"16.MOBILE DETECTER"<<endl;
cout<<"17.FUN WITH C++"<<endl;
cout<<"18.NONE OF THESE "<<endl;
getch();
system("cls");
system("COLOR 3F");
cout<<setw(50)<<"VOTING STRARTS  :"<<endl;
ch='y';
while(ch=='y'||ch=='Y')
{
   cout<<"ENTER THE PASSWORD ";
   cin>>pass;
   if(pass==123)
   {                    
cout<<"enter your vote"<<endl;
cin>>vote;
if(vote==1)
x[0]++;
else if(vote==2)
x[1]++;
else if(vote==3)
x[2]++;
else if(vote==4)
x[3]++;
else if(vote==5)
x[4]++;
else if(vote==6)
x[5]++;
else if(vote==7)
x[6]++;
else if(vote==8)
x[7]++;
else if(vote==9)
x[8]++;
else if(vote==10)
x[9]++;
else if(vote==11)
x[10]++;
else if(vote==12)
x[11]++;
else if(vote==13)
x[12]++;
else if(vote==14)
x[13]++;
else if(vote==15)
x[14]++;
else if(vote==16)
x[15]++;
else if(vote==17)
x[16]++;
else if(vote==18)
x[17]++;
else
{
cout<<"wrong choice";
break;
}
}
cout<<"Want to continue :"<<endl;
cin>>ch;
}
getch();
system("cls");
system("COLOR 4F");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(50)<<"RESULTS OF COMPUTER PROJECTS :-"<<endl<<endl;
cout<<setw(50)<<"1.EVOLUTION OF COMPUTER                                   :"<<x[0]<<endl;
cout<<setw(50)<<"2.HARDWARE AND ITS PARTS                                  :"<<x[1]<<endl;
cout<<setw(50)<<"3.SOFTWARE TREE                                           :"<<x[2]<<endl;
cout<<setw(50)<<"4.WEBSITE BUILDER AND SECRETS OF WINDOWS                  :"<<x[3]<<endl;
cout<<setw(50)<<"5.HARD DISK                                               :"<<x[4]<<endl;
cout<<setw(50)<<"6.CYBER CRIME                                             :"<<x[5]<<endl;
cout<<setw(50)<<"7.CANCER PRESENTATION                                     :"<<x[6]<<endl;
cout<<setw(50)<<"8.CAREER IN IT                                            :"<<x[7]<<endl;
cout<<setw(50)<<"9.AUTOMATED ROBOT                                         :"<<x[8]<<endl;
cout<<setw(40)<<"10.LIFETIME FREE INTERNET INCREASING LIKES ON FACEBOOK    : "<<x[9]<<endl;
cout<<setw(50)<<"11.FLASH GAME                                             :"<<x[10]<<endl;
cout<<setw(50)<<"12.NETWORKING                                             :"<<x[11]<<endl;
cout<<setw(50)<<"13.INTERNET WEB SERVICE                                   :"<<x[12]<<endl;
cout<<setw(50)<<"14.HACKING                                                :"<<x[13]<<endl;
cout<<setw(50)<<"15.USB STEALER                                            :"<<x[14]<<endl;
cout<<setw(50)<<"16.MOBILE DETECTER                                        :"<<x[15]<<endl;
cout<<setw(50)<<"17.FUN WITH C++                                           :"<<x[16]<<endl;
cout<<setw(50)<<"18.NONE OF THESE                                          :"<<x[17]<<endl;
for(a=0;a<18;a++)
y[a]=x[a];
for(a=0;a<18;a++)
{
for(b=0;b<17;b++)
{
if(y[b]<y[b+1])
{
c=y[b];
y[b]=y[b+1];
y[b+1]=c;
}
}
}
getch();
system("cls");
system("COLOR 5F");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(45)<<"RESULTS"<<endl;
cout<<endl<<endl<<endl;
if(y[0]==x[0])
cout<<setw(30)<<"FIRST"<<"  "<<" EVOLUTION OF COMPUTER "<<" : "<<x[0]<<endl;
else if(y[0]==x[1])
cout<<setw(30)<<"FIRST"<<"  "<<" HARDWARE AND ITS PARTS "<<" : "<<x[1]<<endl;
else if(y[0]==x[2])
cout<<setw(30)<<"FIRST"<<"  "<<" SOFTWARE TREE "<<" : "<<x[2]<<endl;
else if(y[0]==x[3])
cout<<setw(30)<<"FIRST"<<"  "<<" WEBSITE BUILDER AND SECRETS OF WINDOWS "<<" : "<<x[3]<<endl;
else if(y[0]==x[4])
cout<<setw(30)<<"FIRST"<<"  "<<" HARD DISK "<<" : "<<x[4]<<endl;
if(y[0]==x[5])
cout<<setw(30)<<"FIRST"<<"  "<<" CYBER CRIME "<<" : "<<x[5]<<endl;
else if(y[0]==x[6])
cout<<setw(30)<<"FIRST"<<"  "<<" CANCER PRESENTATION "<<" : "<<x[6]<<endl;
else if(y[0]==x[7])
cout<<setw(30)<<"FIRST"<<"  "<<" CAREER IN IT "<<" : "<<x[7]<<endl;
else if(y[0]==x[8])
cout<<setw(30)<<"FIRST"<<"  "<<" AUTOMATED ROBOT "<<" : "<<x[8]<<endl;
else if(y[0]==x[9])
cout<<setw(30)<<"FIRST"<<"  "<<" LIFETIME FREE INTERNET INCREASING LIKES ON FACEBOOK "<<" : "<<x[9]<<endl;
else if(y[0]==x[10])
cout<<setw(30)<<"FIRST"<<"  "<<" FLASH GAME "<<" : "<<x[10]<<endl;
else if(y[0]==x[11])
cout<<setw(30)<<"FIRST"<<"  "<<" NETWORKING "<<" : "<<x[11]<<endl;
else if(y[0]==x[12])
cout<<setw(30)<<"FIRST"<<"  "<<" INTERNET WEB SERVICE "<<" : "<<x[12]<<endl;
else if(y[0]==x[13])
cout<<setw(30)<<"FIRST"<<"  "<<" HACKING  "<<" : "<<x[13]<<endl;
else if(y[0]==x[14])
cout<<setw(30)<<"FIRST"<<"  "<<" USB STEALER "<<" : "<<x[14]<<endl;
else if(y[0]==x[15])
cout<<setw(30)<<"FIRST"<<"  "<<" MOBILE DETECTER "<<" : "<<x[15]<<endl;
else if(y[0]==x[16])
cout<<setw(30)<<"FIRST"<<"  "<<" FUN WITH C++ "<<" : "<<x[16]<<endl;
else if(y[0]==x[17])
cout<<setw(30)<<"FIRST"<<"  "<<" NONE OF THESE "<<" : "<<x[17]<<endl;
if(y[1]==x[0])
cout<<setw(30)<<"SECOND"<<"  "<<" EVOLUTION OF COMPUTER "<<" : "<<x[0]<<endl;
else if(y[1]==x[1])
cout<<setw(30)<<"SECOND"<<"  "<<" HARDWARE AND ITS PARTS "<<" : "<<x[1]<<endl;
else if(y[1]==x[2])
cout<<setw(30)<<"SECOND"<<"  "<<" SOFTWARE TREE  "<<" : "<<x[2]<<endl;
else if(y[1]==x[3])
cout<<setw(30)<<"SECOND"<<"  "<<" WEBSITE BUILDER AND SECRETS OF WINDOWS "<<" : "<<x[3]<<endl;
else if(y[1]==x[4])
cout<<setw(30)<<"SECOND"<<"  "<<" HARD DISK "<<" : "<<x[4]<<endl;
else if(y[1]==x[5])
cout<<setw(30)<<"SECOND"<<"  "<<" CYBER CRIME "<<" : "<<x[5]<<endl;
else if(y[1]==x[6])
cout<<setw(30)<<"SECOND"<<"  "<<" CANCER PRESENTATION "<<" : "<<x[6]<<endl;
else if(y[1]==x[7])
cout<<setw(30)<<"SECOND"<<"  "<<" CAREER IN IT "<<" : "<<x[7]<<endl;
else if(y[1]==x[8])
cout<<setw(30)<<"SECOND"<<"  "<<" AUTOMATED ROBOT "<<" : "<<x[8]<<endl;
else if(y[1]==x[9])
cout<<setw(30)<<"SECOND"<<"  "<<" LIFETIME FREE INTERNET INCREASING LIKES ON FACEBOOK "<<" : "<<x[9]<<endl;
else if(y[1]==x[10])
cout<<setw(30)<<"SECOND"<<"  "<<" FLASH GAME "<<" : "<<x[10]<<endl;
else if(y[1]==x[11])
cout<<setw(30)<<"SECOND"<<"  "<<"NETWORKING"<<" : "<<x[11]<<endl;
else if(y[1]==x[12])
cout<<setw(30)<<"SECOND"<<"  "<<" INTERNET WEB SERVICE "<<" : "<<x[12]<<endl;
else if(y[1]==x[13])
cout<<setw(30)<<"SECOND"<<"  "<<" HACKING  "<<" : "<<x[13]<<endl;
else if(y[1]==x[14])
cout<<setw(30)<<"SECOND"<<"  "<<" USB STEALER "<<" : "<<x[14]<<endl;
else if(y[1]==x[15])
cout<<setw(30)<<"SECOND"<<"  "<<" MOBILE DETECTOR "<<" : "<<x[15]<<endl;
else if(y[1]==x[16])
cout<<setw(30)<<"SECOND"<<"  "<<" FUN WITH C++ "<<" : "<<x[16]<<endl;
else if(y[1]==x[17])
cout<<setw(30)<<"SECOND"<<"  "<<" NONE OF THESES "<<" : "<<x[17]<<endl;
if(y[2]==x[0])
cout<<setw(30)<<"THIRD"<<"  "<<" EVOLUTION OF COMPUTER "<<" : "<<x[0]<<endl;
else if(y[2]==x[1])
cout<<setw(30)<<"THIRD"<<"  "<<" HARDWARE AND ITS PARTS "<<" : "<<x[1]<<endl;
else if(y[2]==x[2])
cout<<setw(30)<<"THIRD"<<"  "<<" SOFTWARE TREE "<<" : "<<x[2]<<endl;
else if(y[2]==x[3])
cout<<setw(30)<<"THIRD"<<"  "<<" WEBSITE BUILDER AND SECRETS OF WINDOWS "<<" : "<<x[3]<<endl;
else if(y[2]==x[4])
cout<<setw(30)<<"THIRD"<<"  "<<" HARD DISK "<<" : "<<x[4]<<endl;
else if(y[2]==x[5])
cout<<setw(30)<<"THIRD"<<"  "<<" CYBER CRIME "<<" : "<<x[5]<<endl;
else if(y[2]==x[6])
cout<<setw(30)<<"THIRD"<<"  "<<" CANCER PRESENTATION "<<" : "<<x[6]<<endl;
else if(y[2]==x[7])
cout<<setw(30)<<"THIRD"<<"  "<<" CAREER IN IT "<<" : "<<x[7]<<endl;
else if(y[2]==x[8])
cout<<setw(30)<<"THIRD"<<"  "<<" AUTOMATED ROBOT "<<" : "<<x[8]<<endl;
else if(y[2]==x[9])
cout<<setw(30)<<"THIRD"<<"  "<<" LIFETIME FREE INTERNET INCREASING LIKES ON FACEBOOK "<<" : "<<x[9]<<endl;
else if(y[2]==x[10])
cout<<setw(30)<<"THIRD"<<"  "<<" FLASH GAME "<<" : "<<x[10]<<endl;
else if(y[2]==x[11])
cout<<setw(30)<<"THIRD"<<"  "<<"NETWORKING"<<" : "<<x[11]<<endl;
else if(y[2]==x[12])
cout<<setw(30)<<"THIRD"<<"  "<<" INTERNET WEB SERVICE "<<" : "<<x[12]<<endl;
else if(y[2]==x[13])
cout<<setw(30)<<"THIRD"<<"  "<<" HACKING "<<" : "<<x[13]<<endl;
else if(y[2]==x[14])
cout<<setw(30)<<"THIRD"<<"  "<<" USB STEALER "<<" : "<<x[14]<<endl;
else if(y[2]==x[15])
cout<<setw(30)<<"THIRD"<<"  "<<" MOBILE DETECTOR "<<" : "<<x[15]<<endl;
else if(y[2]==x[16])
cout<<setw(30)<<"THIRD"<<"  "<<" FUN WITH C++ "<<" : "<<x[16]<<endl;
else if(y[2]==x[17])
cout<<setw(30)<<"THIRD"<<"  "<<" NONE OF THESES "<<" : "<<x[17]<<endl;
getch();
system("cls");
}
int main()
{
    char q='y';
    int f;
     fun x1;
     fstream y1;
     y1.open("store.dat",ios::out|ios::in|ios::binary);
      while(q=='y'||q=='Y')
    {
                         cout<<endl<<endl<<endl<<endl;
                         system("COLOR 5F");
       cout<<setw(50)<<"***FUN WITH C++*** "<<endl<<endl;  
       cout<<"NAMES OF PROGRAMS INCLUDED :-  "<<endl;
       cout<<"1. MUSIC PLAYER"<<endl;
       cout<<"2. QUIZ SHOW "<<endl;
       cout<<"3. ELECTION SYSTEM"<<endl;
       cout<<"ENTER YOUR CHOICE (1,2 or 3) :-  ";
       cin>>f;
       system("cls");
       if(f==1)
       {
               x1.music();
               }
               else if(f==2)
               {
               x1.quiz();
               y1.write((char*)&x1,sizeof(x1));
               }
               else if(f==3)
               {
               x1.votes();
               y1.write((char*)&x1,sizeof(x1));
               }
               else
               {
               cout<<"WRONG CHOICE !!!!!!  ";
               break;
               }
               cout<<"WANT TO CONTINUE :-"<<endl;
               cin>>q;
               system("cls");
               }
               system("COLOR FC");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(45)<<"THANK YOU FOR YOUR CO-OPERATION"<<endl<<endl<<endl;
cout<<setw(66)<<"CREATED BY :-    AMIT RAJ ,MOHIT KUMAR and ADITYA KUMAR"<<endl<<endl;
cout<<setw(60)<<"SUPPORTED BY :-   ALL THE COMPUTER TEACHERS";
getch();
system("cls");
system("COLOR FD");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(45)<<"THE END"<<endl<<endl<<endl<<endl;
system("COLOR FC");
cout<<setw(60)<<"HAVE FUN AND ENJOY THE EXHIBITION";
getch();
               return 0;
               }
                 
                     
