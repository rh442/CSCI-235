#include "Creature.hpp"



int main(){
   /*
    2.1 
  - Instantiate a creature with the default constructor
  - Set its hitpoints to 10 using the appropriate setter function.
  - Set its level to 5 using the appropriate setter functions
  - Set its tame flag to True using the appropriate setter function.

  - Print out the creature's information using the display() function:

  Expected output:
  NAMELESS
  Category: UNKNOWN
  Level: 5
  Hitpoints: 10
  Tame: TRUE*/
   Creature one;
   one.setHitpoints(10);
   one.setLevel(5);
   one.setTame(true);
   one.display();


/*2.2
  - Instantiate a creature with the parameterized constructor with the following creature details:
  Name: Wormy
  Category: MYSTICAL
  Level: 2
  Hitpoints: 3
  - Set Wormy as Tame with the appropriate setter function.

  - Print out the creature's information using the display() function:

  Expected output:
  WORMY
  Category: MYSTICAL
  Level: 2
  Hitpoints: 3
  Tame: TRUE
*/
   Creature two("Wormy",Creature::Category::MYSTICAL,3,2);
   two.setTame(true);
   two.display();

}
