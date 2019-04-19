#ifndef MY_STRING_H
#define MY_STRING_H

#include"string.h"
#include<iostream>

using namespace std;

class String
{
    friend ostream & operator<<(ostream &out, const String &str_obj);
    friend istream & operator>>(istream &out, String &str_obj);
public:
    String();
    String(char *str);
    String(const String &str_obj);
    
    ~String();
    
    //void print();

    bool operator==(const String &str_obj);
    bool operator!=(const String &str_obj);

    bool operator>(const String &str_obj);
    bool operator<(const String &str_obj);

    String& operator=(const String &str_obj);
protected:
private:
    int str_len;
    char *str_p;
        
};

inline ostream & operator<<(ostream &out, const String &str_obj)
{
    return cout<<str_obj.str_p;
    
}

inline istream & operator>>(istream &in, String &str_obj)
{
    //free memory first
    if(str_obj.str_p!= NULL)
    {
        str_obj.str_len = 0;
        delete[] str_obj.str_p;
    }
    str_obj.str_p = new char[50];
    in>>str_obj.str_p;
    str_obj.str_len = strlen(str_obj.str_p);
    return in;
}



#endif
