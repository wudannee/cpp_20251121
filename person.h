#pragma once
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(std::string name, int age);

    std::string toString();

    ~Person();
};

