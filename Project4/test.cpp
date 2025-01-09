#include "Creature.hpp"
#include "Cavern.hpp"
#include "Dragon.hpp"
#include "Ghoul.hpp"
#include "Mindflayer.hpp"

int main(){
    std::string input = "creatures.csv";
    Cavern A(input);
    A.displayCategory("ALIEN");


}