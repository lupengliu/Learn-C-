#include<iostream>
#include<string>
#include"string.h"
#include<malloc.h>
#include"MyVector.h"
#include"MyString.h"


using namespace std;

int main(int argc, char *argv[])
{

    {
        cout<<"hello world"<<endl;
        String s1("str1");
        cout<<s1<<endl;

        String s2("str2");
        cout<<s2<<endl;

        String s3 = s2;
        cout<<"s3: "<<s3<<endl;

        if(s1 < s2)
            cout<<"s1<s2"<<endl;
        else
            cout<<"s1>s2"<<endl;

        String s4;
        cout<<"input s4: "<<endl;
        cin>>s4;
        cout<<"s4: "<<s4<<endl;;
    }


    
    {
        cout<<"hello world"<<endl;
        Vector vector1(3);
        vector1[0] = 1;
        vector1[1] = 2;
        vector1[2] = 3;
        //vector1.printVector();
        cout<<vector1;//<<endl;

        Vector vector2(4);
        vector2[0] = 4;
        vector2[1] = 4;
        vector2[2] = 4;
        vector2[3] = 4;

        //vector2.printVector();
        cout<<vector2<<endl;

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



