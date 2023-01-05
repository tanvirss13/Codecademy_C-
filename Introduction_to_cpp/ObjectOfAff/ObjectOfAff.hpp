//
//  obj_of_affection.hpp
//  codeacademy_theObjectOfAffection
//
//  Created by Tanvir Sethi on 5/31/22.
//

#ifndef obj_of_affection_h
#define obj_of_affection_h
#include <vector>

class Profile {

private:
  std::string name;
  int age;
  std::string city;
  std::string country;
  std::string pronouns;
  std::vector<std::string> hobbies;
  
public:
  Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");

  // ~Profile();

  std::string view_profile();
  void add_hobby(std::string new_hobby);

};

#endif /* obj_of_affection_h */
