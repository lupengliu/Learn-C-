#include"Vector.h"
#include<exception>
#include<iostream>

using namespace std;

Vector::Vector(int len)
{
    this->buf_len = len;
    this->buf_p = new int[len];
}

Vector::Vector(const Vector &vec_obj)
{
    this->buf_len = vec_obj.buf_len;
    this->buf_p = new int[vec_obj.buf_len];
    for(int i = 0; i < this->buf_len; i++)
    {
        this->buf_p[i] = vec_obj.buf_p[i];
    }
}

Vector::~Vector()
{
    delete[] this->buf_p;
    this->buf_len = 0;
}


void Vector::printVector()
{
    for(int i = 0; i < this->buf_len; i++)
    {
        cout<<this->buf_p[i]<<' ';
    }
    cout<<endl;
}

int Vector::size()
{
    return this->buf_len;
}


Vector &  Vector::operator=(const Vector &vec_obj)
{
    if(this->buf_p != NULL){
        delete[] this->buf_p;
        this->buf_len = 0;
    }
    
    this->buf_len = vec_obj.buf_len;
    this->buf_p = new int[vec_obj.buf_len];
    
    for(int i = 0; i < this->buf_len; i++)
    {
        this->buf_p[i] = vec_obj.buf_p[i];
    }
    return *this;
}

int& Vector::operator[](int pos)
{
    if(pos >= this->buf_len)
        throw range_error("index out of range!");                                            ("index out-of range");
    
    return this->buf_p[pos];
}

bool Vector::operator==(const Vector &vec_obj)
{
    if(this->buf_len != vec_obj.buf_len) return false;
    for(int i = 0; i < this->buf_len; i++)
    {
        if(this->buf_p[i] != vec_obj.buf_p[i])
            return false;
    }
    
    return true;
}


bool Vector::operator!=(const Vector &vec_obj)
{
    /*
    if(this->buf_len != vec_obj.buf_len) return true;
    for(int i = 0; i < this->buf_len; i++)
    {
        if(this->buf_p[i] != vec_obj.buf_p[i])
            return true;
    }
    
    return false;
    */

    return !(*this == vec_obj);
}













