#include "Pantry.hpp"

int main(){
    Pantry pantry("debug.csv");
    Pantry p2("recipes.csv");
//     std::string Ramen="Ramen",broth="Broth",chicken="Chicken",water="Water",noodles="Noodles",flour="Flour",egg="Egg",seaweed="Seaweed";
//     std::string R="Japanese style noodle", cB="Chicken soup", c="chicken meat",w="water",n="stringy dough",f="used for cooking",e="shelled food",s="underwater plant";
//     int qty=5;
//     int prc=5;
//     Ingredient* RamenPtr,*BrothPTR,*ChickenPTR,*WaterPTR,*NoodlePTR,*FlourPTR,*EggPTR,*SeaweedPTR;
//     //Ingredient* PTR_RAMEN,*PTR_BROTH,*PTR_NOODLE,*PTR_SEAWEED,*PTR_CHKN,*PTR_WTR,*PTR_FLR,*PTR_EGG;
//     Ingredient SWN(seaweed,s,qty,prc,{});
//     SeaweedPTR=&SWN;
//     Ingredient CHKN(chicken,c,qty,prc,{SeaweedPTR});
//     Ingredient WTR(water,w,qty,prc,{});
//     Ingredient FLR(flour,f,qty,prc,{});
//     Ingredient EGG(egg,e,qty,prc,{});
    
//     ChickenPTR=&CHKN;
//     WaterPTR=&WTR;
//     FlourPTR=&FLR;
//     EggPTR=&EGG;
//     std::vector<Ingredient*> brth = {ChickenPTR,WaterPTR};
//     Ingredient Broth(broth,cB,qty,prc,brth);
//     BrothPTR=&Broth;
//     std::vector<Ingredient*> ndl = {FlourPTR,EggPTR};
//     Ingredient NDL(noodles,n,0,prc,ndl);
//     NoodlePTR=&NDL;
//     std::vector<Ingredient*> RMN={BrothPTR,NoodlePTR,SeaweedPTR};
//     Ingredient Ramn(Ramen,R,0,prc,RMN);
//     RamenPtr=&Ramn;
//     pantry.addIngredient(RamenPtr);
// pantry.ingredientQuery("Ramen");
//p2.pantryList();
//pantry.pantryList("CRAFTABLE");
// p2.ingredientQuery("Inferno_Espresso");

pantry.ingredientQuery("in1");
std::cout<<std::endl;
pantry.ingredientQuery("in2");
std::cout<<std::endl;
pantry.ingredientQuery("in3");
std::cout<<std::endl;
pantry.ingredientQuery("in4");
std::cout<<std::endl;
pantry.ingredientQuery("in5");
std::cout<<std::endl;
pantry.ingredientQuery("in6");
std::cout<<std::endl;
pantry.ingredientQuery("in7");
std::cout<<std::endl;
pantry.ingredientQuery("in8");



    // one.addIngredient(Ramen,R,0,prc,RMN);
    // one.ingredientQuery("Ramen");
  
    
    // Ingredient("in1","des1",3,72,{});
    // Ingredient *ptr1 = new Ingredient("in1","des1",3,72,{});

    // Pantry one;

    // one.addIngredient(ptr1);
    // one.addIngredient("in2","des2",0,138,{ptr1});

    // std::cout<<(one.getPointerTo(0)->getItem() == ptr1) <<"\n";


   //one.pantryList();
   //in1,des1,3,72,NONE
   //in2,des2,0,138,in1;
  
    
   
    
  
    
   



 
    
   
}