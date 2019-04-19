#include"MyString.h"
#include<iostream>
#include"string.h"

String::String()
{
    str_len = 0;
    str_p = NULL;
}

String:: String(char *str)
{
    str_len = strlen(str);
    str_p = new char[str_len+1];
    strcpy(str_p, str);
}

String::String(const String &str_obj)
{
    str_len = str_obj.str_len;
    str_p = new char[str_obj.str_len+1];
    strcpy(str_p, str_obj.str_p);
}

String::~String()
{
    if(str_p != NULL)
    {
        str_len = 0;
        delete[] str_p;
    }
}

bool String::operator==(const String &str_obj)
{
    if(0 == strcmp(this->str_p, str_obj.str_p))
        return true;
    else
        return false;
}

bool String::operator!=(const String &str_obj)
{
    return !(*this == str_obj);
}

bool String::operator>(const String &str_obj)
{
    if((strcmp(this->str_p, str_obj.str_p) > 0))
        return true;
    else 
        return false;
}

bool String::operator<(const String &str_obj)
{
    if((strcmp(this->str_p, str_obj.str_p) < 0))
        return true;
    else 
        return false;
}

String& String::operator=(const String &str_obj)
{
    if(str_p != NULL)
    {
        str_len = 0;
        delete[] str_p;
    }
    str_len = str_obj.str_len;
    str_p = new char[str_obj.str_len+1];
    strcpy(str_p, str_obj.str_p);
}






