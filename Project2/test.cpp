
#include "Dragon.hpp"
#include "Ghoul.hpp"
#include "Mindflayer.hpp"

int main(){
    Dragon Ash;
    std::cout<<"NAME: "<<Ash.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Ash.getCategory()<<std::endl;
    std::cout<<"HP: "<<Ash.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Ash.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Ash.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"ELEMENT: "<<Ash.getElement()<<std::endl;
    std::cout<<"HEADS: "<<Ash.getNumberOfHeads()<<std::endl;
    std::cout<<"FLIGHT: "<<(Ash.getFlight() ? "TRUE":"FALSE")<<std::endl;

    Dragon Smog("Smog");
    std::cout<<"NAME: "<<Smog.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Smog.getCategory()<<std::endl;
    std::cout<<"HP: "<<Smog.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Smog.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Smog.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"ELEMENT: "<<Smog.getElement()<<std::endl;
    std::cout<<"HEADS: "<<Smog.getNumberOfHeads()<<std::endl;
    std::cout<<"FLIGHT: "<<(Smog.getFlight() ? "TRUE":"FALSE")<<std::endl;
  
    Dragon Burny("BURNY",Creature::UNDEAD,100,10,true,Dragon::FIRE,1,true);
    std::cout<<"NAME: "<<Burny.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Burny.getCategory()<<std::endl;
    std::cout<<"HP: "<<Burny.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Burny.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Burny.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"ELEMENT: "<<Burny.getElement()<<std::endl;
    std::cout<<"HEADS: "<<Burny.getNumberOfHeads()<<std::endl;
    std::cout<<"FLIGHT: "<<(Burny.getFlight() ? "TRUE":"FALSE")<<std::endl;
   
    Burny.setElement(Dragon::WATER);
    Burny.setNumberOfHeads(2);
    Burny.setNumberOfHeads(0);
    Burny.setFlight(false);
    std::cout<<"NAME: "<<Burny.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Burny.getCategory()<<std::endl;
    std::cout<<"HP: "<<Burny.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Burny.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Burny.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"ELEMENT: "<<Burny.getElement()<<std::endl;
    std::cout<<"HEADS: "<<Burny.getNumberOfHeads()<<std::endl;
    std::cout<<"FLIGHT: "<<(Burny.getFlight() ? "TRUE":"FALSE")<<std::endl;
     
    Ghoul wake;
    std::cout<<"NAME: "<<wake.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<wake.getCategory()<<std::endl;
    std::cout<<"HP: "<<wake.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<wake.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(wake.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"DECAY: "<<wake.getDecay()<<std::endl;
    std::cout<<"FACTION: "<<wake.getFaction()<<std::endl;
    std::cout<<"TRANSFORM: "<<(wake.getTransformation() ? "TRUE":"FALSE")<<std::endl;
 
    Ghoul Homph("Homph");
    std::cout<<"NAME: "<<Homph.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Homph.getCategory()<<std::endl;
    std::cout<<"HP: "<<Homph.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Homph.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Homph.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"DECAY: "<<Homph.getDecay()<<std::endl;
    std::cout<<"FACTION: "<<Homph.getFaction()<<std::endl;
    std::cout<<"TRANSFORM: "<<(Homph.getTransformation() ? "TRUE":"FALSE")<<std::endl;
    
    Ghoul Chomper("CHOMPER",Creature::ALIEN,100,10,true,3,Ghoul::FLESHGORGER,true);
    std::cout<<"NAME: "<<Chomper.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Chomper.getCategory()<<std::endl;
    std::cout<<"HP: "<<Chomper.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Chomper.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Chomper.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"DECAY: "<<Chomper.getDecay()<<std::endl;
    std::cout<<"FACTION: "<<Chomper.getFaction()<<std::endl;
    std::cout<<"TRANSFORM: "<<(Chomper.getTransformation() ? "TRUE":"FALSE")<<std::endl;

    Chomper.setDecay(2);
    Chomper.setDecay(-20);
    Chomper.setFaction(Ghoul::SHADOWSTALKER);
    Chomper.setTransformation(false);

    std::cout<<"NAME: "<<Chomper.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Chomper.getCategory()<<std::endl;
    std::cout<<"HP: "<<Chomper.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Chomper.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Chomper.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"DECAY: "<<Chomper.getDecay()<<std::endl;
    std::cout<<"FACTION: "<<Chomper.getFaction()<<std::endl;
    std::cout<<"TRANSFORM: "<<(Chomper.getTransformation() ? "TRUE":"FALSE")<<std::endl;
    
    Mindflayer m;
    std::cout<<"NAME: "<<m.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<m.getCategory()<<std::endl;
    std::cout<<"HP: "<<m.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<m.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(m.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"SUMMONING: "<<(m.getSummoning() ? "TRUE":"FALSE")<<std::endl;
    if(!m.getProjectiles().empty()){
    for(int i=0;i<m.getProjectiles().size();i++){
        std::cout<<m.variantToString(m.getProjectiles()[i].type_)<<": "<<m.getProjectiles()[i].quantity_<<std::endl;
        }
    }
   if(!m.getAffinities().empty()){
        std::cout<<"AFFINITIES: "<<std::endl;
        for(int i=0;i<m.getAffinities().size();i++){
            std::cout<<m.variantToString(m.getAffinities()[i])<<std::endl;
            }
        }


    
    
    Mindflayer Bigbrain("BIGBRAIN",Creature::MYSTICAL,100,10,true,{{Mindflayer::PSIONIC, 2}, {Mindflayer::TELEPATHIC, 1}, {Mindflayer::PSIONIC, 1}, {Mindflayer::ILLUSIONARY, 3}},true,{Mindflayer::PSIONIC, Mindflayer::TELEPATHIC, Mindflayer::PSIONIC, Mindflayer::ILLUSIONARY});
    std::cout<<"NAME: "<<Bigbrain.getName()<<std::endl;
    std::cout<<"CATEGORY: "<<Bigbrain.getCategory()<<std::endl;
    std::cout<<"HP: "<<Bigbrain.getHitpoints()<<std::endl;
    std::cout<<"LVL: "<<Bigbrain.getLevel()<<std::endl;
    std::cout<<"TAME: "<<(Bigbrain.isTame() ? "TRUE":"FALSE")<<std::endl;
    std::cout<<"SUMMONING: "<<(Bigbrain.getSummoning() ? "TRUE":"FALSE")<<std::endl;
    if(!Bigbrain.getProjectiles().empty()){
    for(int i=0;i<Bigbrain.getProjectiles().size();i++){
        std::cout<<Bigbrain.variantToString(Bigbrain.getProjectiles()[i].type_)<<": "<<Bigbrain.getProjectiles()[i].quantity_<<std::endl;
    }
    }
    if(!Bigbrain.getAffinities().empty()){
    std::cout<<"AFFINITIES: "<<std::endl;
    for(int i=0;i<Bigbrain.getAffinities().size();i++){
        std::cout<<Bigbrain.variantToString(Bigbrain.getAffinities()[i])<<std::endl;
    }
    }
 
    }
   

