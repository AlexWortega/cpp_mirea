//#include<windows.h>

//COPYRIGHT 2019 @alexwortega-vk @cimonciri - telegram
//если  эти задачи спасли вашу жопу от препода то пожалуйста поблагодарите автора(бутылка пива лишней не бывает)
// ыайл будет дополнятся кстати как и гит
//дада там многое написано немного странно , но как правило это лень а не тупость автора
// товарищи преподы пожалуйста не бейте автора, он просто хочет пить
#include<iostream>
#include <cmath>
#include <vector>
//#include <random>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
//#include <dos.h>
//#include<graphics.h>
using namespace std;

#define PI 3.14
//task first laba nomer dva

double triangle(int storona){

    double S = (storona*storona*sqrt(3))/(4);
    return S;

}
int sqad(int storona_1,int storona_2){

    int S = storona_1*storona_2;
    return S;
}

double cirkle(int R){
    double S = PI*R*R;
    return S;

}
void nine(){
    int a,b,r;
    cout<<"side of triangle"<<endl;
    cin>>a;
    cout<<"side(second) of hetirexugolnik"<<endl;
    cin>>b;
    cout<<"radius"<<endl;
    cin>>r;
    //прямоуголник треугольник круг
    cout<<"triangle"<<" "<<triangle(a)<<endl;
    cout<<"pryamougolnik"<<" "<<sqad(a,b)<<endl;
    cout<<"cirkle"<<" "<<cirkle(r) <<endl;


}


void six() {

    float  m;
   // double r, m;
    double S, p, n, otvet;

    p = 0;
    //r=0;
    cout << "Input S" << endl;
    cin >> S;
    cout << "Input m" << endl;
    cin >> m;
    cout << "Input n" << endl;
    cin >> n;
//    double r;
  //  r = p / 100;
    for (double r = 0; r < 1; r += 0.01) {
        // r=r+0.01;
        //cout<<r<<" ";
        if (((S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)) - m) < 0.01) {
            otvet = r;
        }


    }
    cout << otvet * 100 + 1;

}

void five(){
    float left = -4;
    float right =4;
    float i=0.5;
    //обоссы но не бей за такой код
    while(left != right){
        left = left+i;
        if (i==1){cout<<"vikolota"<<endl;}
        else {
            cout << ((left)*(left) - 2 * (left) + 2) / ((left) - 1)<<" ";
        }
    }

}
void forth() {
    int i,N;
    cout<<"Input N"<<endl;
    cin>>N;
    for (i=N;i<=N+10;i++ ){cout<<i<<" ";}

}

void second() {
    float a,x;

    cout<< "input x"<<endl;

    cin>>x;
    cout<<"input a"<<endl;
    cin>>a;
    if (a-pow(x,2)<0){cout<<"doesnt exist in R";}
    if (((x>-1 && x<0 ) ||(x<1 && x>0)) ){ cout<< a*log(abs(x)); }
    if (x<=-1 || x>= 1 ){ cout<<pow(a-pow(x,2),0.5);}
}
void first(){
    double V,S;
    float R,h,r,l;
    cout<<"input R"<<endl;
    cin>>R;
    cout<<"imput r"<<endl;
    cin>>r;
    cout<<" input h"<<endl;
    cin>>h;
    l=sqrt(((R-r)*(R-r)+pow(h,2)));
    V = (R*R + 2*r*R +r*r)/3;
    S = PI*(R*R +(r+R)*l +r*r);
    cout<<"V"<<" "<<V<<endl;
    cout<<"S"<<" "<<S<<endl;

}
int Gcd_main(int a, int b)
    {
        while (b) {
            a %= b;
            swap (a, b);
        }
        return a;

        }
void gcd(){
    int a,b;
    cout<<"input a"<<endl;
    cin>>a;
    cout<<"input b"<<endl;
    cin>>b;
    cout<<Gcd_main(a,b)<<endl;


}
//void svet (){
    //string sh,l,d;
    //cout<<"sh"<<endl;
   // cin >> sh;




void resheto (){
    int n;
    cout << "input n "<<endl;
    cin >> n;
    int *a = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
        a[i] = i;
    for (int p = 2; p < n + 1; p++)
    {
        if (a[p] != 0)
        {
            cout << a[p] << endl;
            for (int j = p*p; j < n + 1; j += p)
                a[j] = 0;
        }
    }

}
void print (string xui){

    //cout << xui;


}
void copypaste(){
//копирование


    string line;
   // char k;
  //  int number;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout<< line;
        }
        myfile.close();
    }

    else cout << "Unable to open file";
}
void filtr ()
{
    //фильтр
    string line;
    char k;
    int number;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            number = line.length();
            for (int i = 0 ; i< number;i++)
            {
                k = line[i];
                if(isdigit(k))
                {
                    cout<< line[i];

                }

            }
        }
        myfile.close();
    }

    else cout << "Unable to open file";

}
void sort()
{
    //сортировка
// char chr;
 int number = 0;
 string cach[28];
 //string alph_ideal = "abcdefghijklmnopqrstuvwxy" ;
 string aplh = "pqrstuvwxyabcdefghijklmno";
 number  = aplh.length();
 for(int i =0; i< number;++i)
 {
  cach[i] = aplh[i];
 }
sort(begin(cach),end(cach));
 for(auto& s: cach){cout<<s<<" ";}
}
int znakchisla(int x)
{
if (x>0){ return 1;}
else if(x==0){return 0;}
else { return -1;}
}
void znak()
{
    //знак числа

    int a;
    cout<<" input number";
    cin>> a;
    cout<<znakchisla(a);

}
void generator(){
    //генератор чисел
    int m = 37;
    int i = 3;

    int c = 64;
    int s =0;
    for(int k =0 ; k<20 ;++k)
    {
        s = (m*s+i) % c;
        cout<< s<<" ";
    }


}
void next(){
    string line;
    int number;
    int sum = 0;
    char k;
    ifstream myfile ("example.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            number = line.length();
           // for (int i = 0 ; i< number;i++)
          //  {
          //      line[i] = rand();
                //надо было его доделать но мне так лень

         //   }
            for (int i = 0 ; i< number;i++)
            {   //cout<<line<<endl;
                k = line[i];
                if(isdigit(k))
                {
                    //cout<<int(k)<<endl;
                   // cout<<sum<<endl;
                    sum = sum+int(k)-48 ;

                }

            }
        }
        cout<< sum;
        myfile.close();

    }

    else cout << "Unable to open file";
}

void fail()
{
    string  input;
    string line ;
    ofstream myfile("example.txt",std::ios::app);
    if (myfile.is_open())
    {
        cout<<"input=`";
         cin>>input;
         myfile << input <<endl;


        myfile.close();
    }
    else cout << "Unable to open file";
next();
}


void zvezdocki(){
    for(int i = 0; i<12; ++i)
    {
        cout<<"*";
    }
    //вывод 12 звездочек

}
void palochki(int n){

    for(int i = 0; i<n ; ++i)
    {
        cout<<"=";
    }
}
void lastglory()
{
   int rows = 4 ;
   bool raw_start = true;
   int coll = 12;
   for(int i = 0; i<13; ++i)
   {
       if (i!= 0 && i<5)
       {
           //по сути выводим звездочки с первого по 5 ряд
           zvezdocki();
           palochki(20);
          // cout<<endl;
       }
        //палочки с 5 по какой то там ряд
        if (i>=5 && i<10){palochki(32);}
        //господи мне правда лень написать <=13?
        cout<<endl;
        //вообще то оно должно выводить чуть больше( до 13 лол ) но обьективно получается херовато
       }


   }
//ля лень кодить еще задачи
//или закодить
//хммммммммммммммммммммммммммммммммммммммммммммммммммммммммммммм
//не лень
//пойдй писать на пухтоне  ыыыыыыыыыы пухтон топ
void printSinWave(int wave_height, int wave_length)
{

    int is = 1, os = 2;


    for (int i = 1; i <= wave_height; i++) {


        for (int j = 1; j <= wave_length; j++) {

            for (int k = 1; k <= os; k++) {
                printf(" ");
            }


            printf("*");

            for (int k = 1; k <= is; k++)
                printf(" ");


            printf("*");

            for (int k = 1; k <= os; k++)
                printf(" ");

            printf(" ");
        }


        os = (i + 1 != wave_height);


        is = (i + 1 != wave_height) ? 3 : 5;

        printf("\n");
    }
}
int sinus()
{
    printSinWave(5,10);
    return 0;

}
void autodetect()
{    bool minus = false;
    int number,sum,col;
    sum = 0;
    col = 0;
    string input;
    cout<<"rome input I-1 V-5 X-10 L-50 C-100 D-500 M-1000"<<endl;
    cin>>input;
    number = input.length();
    for(int i = 0;i<=number;++i)
    {

        if(input[i]=='-'){minus=true; }
        if(input[i]=='I')
        {
            sum= sum+1;
            col++;
        }
        if(input[i]=='V')
        {
            sum= sum+5;
            col++;
        }
        if(input[i]=='X')
        {
            sum= sum+10;
            col++;
        }
        if(input[i]=='L')
        {
            sum= sum+50;
            col++;
        }
        if(input[i]=='C')
        {
            sum= sum+100;
            col++;
        }
        if(input[i]=='D')
        {
            sum= sum+500;
            col++;
        }
        if(input[i]=='M')
        {
            sum= sum+1000;
            col++;
        }
    }
if(col==number ){cout<<sum;}
else cout<<sum<<"something input noncorect";
}

void sixthytohex()
{
 int i;
 cout<<"hex-";
 cin>>std::hex>>i;
cout<<endl;
cout<<"octo-"<<oct<<i;



}


void fail_sys()
{
    const int coll = 5;
    const int rows = 5;
    string input;
    int table[rows][coll]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int buffer=0;
    int sum[rows];
    cout<<"do you wanna to input matrix";
    cin>>input;
    if(input=="y"){
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < coll; ++j)
            {
                cin >> table[i][j];
            }
        }
    }
    else
    cout << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < coll; ++j)
        {
            buffer = buffer+table[j][i];
        }
        sum[i]=buffer;
        buffer=0;
        cout<<sum[i]<<endl;
    }
}
void opros(){
    int task_number;

    cout<<"Enter task number"<<endl;
    cout<<"for third from 3 to 7"<<endl;
    cout<<"for forth laba mark from 11-19"<<endl;
    cout<<"for euklid algo please input 19 "<<endl;
    cin>>task_number;
    if (task_number==1){first();}
    if (task_number==2){second();}
    if(task_number==4){forth();}
    if (task_number==6){six();}
    if(task_number==5){five();}
   // if (task_number==8){eight();}
    if (task_number==9){ nine();}
    if (task_number == 10){copypaste();}
    if(task_number==11){filtr();}
    if(task_number==13 ){sort();}
    if (task_number==14){znak();}
    if(task_number == 15){generator();}
    if(task_number==16){fail();}
    if(task_number==17){lastglory();}
    if(task_number==18){sinus();}
    if (task_number==19){gcd();}
    if(task_number==20){resheto();}
    if(task_number==21){autodetect();}
    if(task_number==22){sixthytohex();}
   // if(task_number==23){torgash();}
    if(task_number==24){fail_sys();}
}
int main()
{
    //оптимизировать

   opros();
 //   else{cout<<"try again wrong number";}
    return 0;
}
