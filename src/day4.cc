#include<iostream>
#include<string>
#include"string.h"
#include<malloc.h>

class Name
{
public:
    Name(const char *myp)
    {
        m_len = strlen(myp);
        m_p = (char *)malloc(m_len + 1);
        strcpy(m_p, myp);
    }

    Name(const Name &obj)
    {
        m_len = obj.m_len;
        m_p = (char *)malloc(m_len + 1);
        strcpy(m_p, obj.m_p);
    }

    ~Name()
    {
        if(m_p != NULL)
        {   
            free(m_p);
            m_p = NULL;
            m_len = 0;
        }
    }
protected:
private:
    char *m_p;
    int m_len;
};






using namespace std;

int main(int argc, char *argv[])
{
    Name name1("abcd");
    Name name2("def");
    cout<<"hello world"<<endl;
  
}



