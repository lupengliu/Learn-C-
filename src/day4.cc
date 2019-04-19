#include<iostream>
#include<string>
#include"string.h"
#include<malloc.h>
#include"Vector.h"


using namespace std;

int main(int argc, char *argv[])
{
    
    {
        cout<<"hello world"<<endl;
        Vector vector1(3);
        vector1[0] = 1;
        vector1[1] = 2;
        vector1[2] = 3;
        vector1.printVector();

        Vector vector2(4);
        vector2[0] = 4;
        vector2[1] = 4;
        vector2[2] = 4;
        vector2[3] = 4;

        vector2.printVector();

        Vector vector3 = vector1;
        if(vector1 == vector3)
        {
            cout<<"vector equals"<<endl;
        }
        else
        {   
            cout<<"vector not equal"<<endl;
        }
        

        if(vector1 == vector2)
        {
            cout<<"vector equals"<<endl;
        }
        else
        {   
            cout<<"vector not equal"<<endl;
        }

        vector1 = vector2;
        if(vector1 == vector2)
        {
            cout<<"vector equals"<<endl;
        }
        else
        {   
            cout<<"vector not equal"<<endl;
        }

        vector1 = vector2 = vector3;
        
        if((vector1 == vector2) && (vector2 == vector3))
        {
            cout<<"vector equals"<<endl;
        }
        else
        {   
            cout<<"vector not equal"<<endl;
        }

        if((vector1 != vector2) || (vector2 != vector3))
        {
            cout<<"vector not equals"<<endl;
        }
        else
        {   
            cout<<"vector equals"<<endl;
        }
    }
}



