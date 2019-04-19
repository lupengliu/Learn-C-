#ifndef MY_VECTOR_H
#define MY_VECTOR_H

#include<iostream>

using namespace std;

class Vector
{
    friend ostream& operator<<(ostream &out, const Vector &vec_obj);
    friend istream& operator>>(istream &in, Vector &vec_obj);
public:
    Vector(int len);
    Vector(const Vector &vec_obj);
    ~Vector();

    //void setData(int pos, int value);
    //int getData(int pos);
    void printVector();
    int size();

    Vector& operator=(const Vector &vec_obj);
    int& operator[](int pos);
    bool operator==(const Vector &vec_obj);
    bool operator!=(const Vector &vec_obj);
protected:
private:

    int buf_len;
    int *buf_p;

};

ostream& operator<<(ostream &out, const Vector &vec_obj);

istream& operator>>(istream &in, Vector &vec_obj);


#endif
