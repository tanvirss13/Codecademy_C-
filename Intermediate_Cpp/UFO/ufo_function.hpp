#ifndef ufo_function_h
#define ufo_function_h

#include <vector>
#include <string>

void display_misses(int misses);
// Declare functions
void greet();
void end_game(std::string answer, std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);

#endif
