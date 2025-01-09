#include "Creature.cpp"
#include "Cavern.cpp"

int main(){
    Cavern a;
    Creature c;
     Creature b("try",Creature::UNDEAD,1,200,true);
     Creature d("why");
    c.setLevel(2);
    b.setLevel(2);
    a.enterCavern(b);
    a.enterCavern(c);
    a.enterCavern(d);

    /*Creature d("team");
    c.setTame(true);

    int siz = a.getCurrentSize();
    int tame = a.getTameCount();
    int total = a.getLevelSum();
     std::cout<<"Count: "<<siz<<std::endl;
     std::cout<<"Tame: "<<tame<<std::endl;
     std::cout<<"Total: "<<total<<std::endl;
 

    a.enterCavern(c);
    siz = a.getCurrentSize();
     tame = a.getTameCount();
     total = a.getLevelSum();
     std::cout<<"Count: "<<siz<<std::endl;
     std::cout<<"Tame: "<<tame<<std::endl;
     std::cout<<"Total: "<<total<<std::endl;

   a.enterCavern(b);
     siz = a.getCurrentSize();
   tame = a.getTameCount();
   total = a.getLevelSum();
    std::cout<<"Count: "<<siz<<std::endl;
    std::cout<<"Tame: "<<tame<<std::endl;
    std::cout<<"Total: "<<total<<std::endl;

    a.enterCavern(d);
    siz = a.getCurrentSize();
    tame = a.getTameCount();
    total = a.getLevelSum();
    std::cout<<"Count: "<<siz<<std::endl;
    std::cout<<"Tame: "<<tame<<std::endl;
    std::cout<<"Total: "<<total<<std::endl;

    a.exitCavern(d);
    siz = a.getCurrentSize();
    tame = a.getTameCount();
    total = a.getLevelSum();
    std::cout<<"Count: "<<siz<<std::endl;
    std::cout<<"Tame: "<<tame<<std::endl;
    std::cout<<"Total: "<<total<<std::endl;

 
    std::cout<<"AVG: "<<a.calculateAvgLevel()<<std::endl;
    std::cout<<"Tame%: "<<a.calculateTamePercentage()<<std::endl;
    std::cout<<"tally: "<<a.tallyCategory("UNKNOWN")<<std::endl;
    //a.releaseCreaturesBelowLevel(1);
    //a.releaseCreaturesOfCategory();
    siz = a.getCurrentSize();
    std::cout<<"Count: "<<siz<<std::endl;*/
    a.cavernReport();

  

   

}
