//
//  obj_of_affection.cpp
//  codeacademy_theObjectOfAffection
//
//  Created by Tanvir Sethi on 5/31/22.
//

#include <stdio.h>
#include <iostream>
#include "obj_of_affection.hpp""

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
: name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
  if (age >= 10){
    age = new_age;
  } else {
    age = 0;
  }
}
// Profile::~Profile(){
//   std::cout << "Clear the workspace\n";
// }
std::string Profile::view_profile(){
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  std::string hobby_string = "Hobbies:\n";

  for(std::string i : hobbies) {
    hobby_string += " - " + i + "\n";
  }

  return bio + "\n" + hobby_string;
}

void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}
