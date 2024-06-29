#ifndef DETAILS_H
#define DETAILS_H

#include <string>

class Details {
public:
    static std::string name, gender;
    int phoneNo;
    int age;
    std::string add;
    static int cId;
    char arr[100];

    void information();
};

#endif
