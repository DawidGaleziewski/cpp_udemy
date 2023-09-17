#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
private:
    char *str; // cstyle string
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    ~MyString();
    MyString &operator=(const MyString &rhs); // overloaded constructor
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_H
