#include <iostream>

using namespace std;
int rows = 6;
int cols = 4;
int i, j, z=0;
int wow;
int search(int l,int **k)
{
    while (l != 1)
    {
        for (i=0; i<rows; i++)
        {
            for (j=1; j<cols; j++)
                if (k[i][j]==l)
                {
                    l=k[i][0];
                    cout<<l<<", ";
                }
        }
        search (l, k);
    }
    return 0;
}

int search1(int l, int m, int **k)
{
    while (l != m)
    {
        if (l > m)
        {
            for (i=0; i<rows; i++)
            {
                for (j=1; j<cols; j++)
                    if (k[i][j]==l)
                    {
                        l=k[i][0];
                        cout<<l<<" ";
                        i=rows-1;
                        j=cols-1;
                    }
            }
        }
        if (m>l)
        {
            for (i=0; i<rows; i++)
            {
                for (j=1; j<cols; j++)
                    if (k[i][j]==m)
                    {
                        m=k[i][0];
                        cout<<m<<" ";
                        i=rows-1;
                        j=cols-1;
                    }
            }
        }
    }
    cout<<"them teacher "<<m;
    return 0;
}

int main()
{
    int monk1=0, monk2=0; int x=0;
    int  data[6][4] = { {32,41,42,43}, {25,31,32,0}, {24,33,34,0}, {13,24,25,0}, {11,21,22,23},  {1,11,12,13}  };
    int **k = new int*[rows];
    for (i=0; i<rows; i++)
    {
        k[i]= new int [cols];
    }

    for (i=0; i<rows; i++)
    {
        for (j=0; j<cols; j++)
            k[i][j]=data[i][j];
    }
    int n=0, count=0;
    cout<<" 1 or 2 "<<endl;
    cin>>n;

    if (n==1)
    {
        cout<<"Input number of monah "<<endl;
        cin>>count;
        for (i=0; i<rows; i++)
        {
            for (j=0; j<cols; j++)
                if (k[i][j]==count)
                    wow=1;
        }
        if (wow==1)
        {
            cout<<"Monah "<<count<<", teachers ";
            search(count, k);
        }
        else
            cout<<count<<" - not monah"<<endl;
    }

    else
    {
        cout<<"Num of monah-"<<endl;
        cin>>monk1;
        cout<<"Num of second-";
        cin>>monk2;
        for (i=0; i<rows; i++)
        {
            for (j=0; j<cols; j++)
            {
                if (k[i][j]==monk1)
                    x++;
                if (k[i][j]==monk2)
                    wow++;
            }
        }
        if ((wow==1) && (x==1))
            search1(monk1, monk2, k);
        else
        {
            if (wow==0)
                cout<<monk2<<" - not monah"<<endl;
            if (x==0)
                cout<<monk1<<" - not monah"<<endl;
        }
    }
    delete [] k;
    return 0;
}
