#include "person.h"

Person::Person(std::string name, int age) {
    this->name = name;
    this->age = age;
}

std::string Person::toString() { 
    return "Name: " + name + ", Age: " + std::to_string(age);
 }

Person::~Person() {}