#include<string.h>
#include<iostream>

using namespace std;

class String
{
public:
    String();
    String(char *str);
    String(const String &str_obj);
    
    ~String();
    
    void print();

    bool operator==(const String &str_obj);
    bool operator!=(const String &str_obj);

    bool operator>(const String &str_obj);
    bool operator<(const String &str_obj);

    String& operator=(const String &str_obj);
protected:
private:
    int str_len;
    char *str_p;
        
}



