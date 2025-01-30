#include <iostream>
#include <vector>
#include <sstream>
#include <string>

    struct combatant{
        std::string name;
        int init;
    };
    
 
void display_menu();
int valid_init();
std::vector<combatant> get_combatants();
std::vector<combatant> BubbleSort(std::vector<combatant>& list);
void print_out(std::vector<combatant> & list);


int main(){

 
    display_menu(); // prints out the menu to the user

    std::vector<combatant> list = get_combatants();

    std::vector<combatant> n_list = BubbleSort(list);
    print_out(n_list);
    std::cout<<"\nclear\n";



    return 0;

}

void print_out(std::vector<combatant> & list){
    for(int i = 0; i<=list.size() - 1;i++){
        std::cout<<list[i].name<<"\t"<<list[i].init<<std::endl;
    }
    return;
}

std::vector<combatant> BubbleSort(std::vector<combatant>& list){

    for(int i = list.size()-2; i >= 0;i--){
        for(int y = 0; y <= i; y++){
            if(list[y].init < list[y+1].init){
                combatant tmp = list[y];
                list[y] = list[y+1];
                list[y+1] = tmp;
            }
            
        }
    }
    
    return list;
}


void display_menu(){
    std::cout<<"\t**Initiative Tracker**\n";
    std::cout<<"type \"exit\" to end program.\n";
    std::cout<<"type \"next\" to add combantant.\n";
    return;
}

std::vector<combatant> get_combatants(){

    combatant tmp;
    std::vector<combatant> combat_list;
    while(true){
        std::cout<<"Name: ";
        std::cin >> tmp.name;
        if(tmp.name == "exit"){
            exit(0);
        }
        if(tmp.name == "next"){
            break;
        }
        
        std::cout<< "Initiative: ";
        int init = valid_init();
        tmp.init = init;

        combat_list.push_back(tmp);

    }

    return combat_list;
}

int valid_init(){
    int init{0};
    do{
    if(std::cin>>init){
        if(init <=0 || init >= 35){
            std::cout<<"Error// number out of Bounds. Try Again\nInitiative: ";

        }else{
            return init;
        }
    }else{
        std::cout<<"Error//not a integer.Try Again\nInitiative: ";
        std::cin.clear();
        std::cin.ignore(125,'\n');
    };
    }while(true);
    
}