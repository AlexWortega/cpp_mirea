//#include<windows.h>
#include<iostream>
#include <cmath>
#include <fstream>
void second();
void forth();
void five();
void eight();
using namespace std;

//#define PI 3.14
//task first laba nomer dva
int main()
{


    int task_number;
    cout<<"Enter task number";
    cin>>task_number;
    if (task_number==2){second();}
    if(task_number==4){forth();}
    if(task_number==5){five();}
    if (task_number==8){eight();}
    return 0;
}
void eight(){
    ofstream out("C:\\Users\\alexd\\OneDrive\\Desktop");
    out << "HelloWorld" << '\n';
    out << "UraRabotaet!!!" << '\n';
    out.close(); //Закрываем файл

}
void five(){
    int y;
    int left = -4;
    int right =4;
    int i=0;
    //обоссы но не бей за такой код
    for(left;i< right; i ++ ){
        if (i==1){cout<<"vikolota"<<endl;}
        else {
            cout << (pow(i/2, 2) - 2 * (i/2) + 2) / ((i/2) - 1)<<" ";
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
    int a,x;

    cout<< "input x"<<endl;

    cin>>x;
    cout<<"input a"<<endl;
    cin>>a;
    if (a-pow(x,2)<0){cout<<"doesnt exist in R";}
    if (((x>-1 && x<0 ) ||(x<1 && x>0)) ){ cout<< a*log(abs(x)); }
    if (x<=-1 || x>= 1 ){ cout<<pow(a-pow(x,2),0.5);}
}



