//C++

#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string name1, name2;
    int pointT = 0, pointL = 0;

    std::cout << "Enter the name of the first person : " ;
    std::getline(std::cin,name1);
    std::transform(name1.begin(), name1.end(), name1.begin(), ::tolower);

    std::cout << "Enter the name of the second person : " ;
    std::getline(std::cin,name2);
    std::transform(name2.begin(), name2.end(), name2.begin(), ::tolower);

    std::string tru = "true";
    std::string love = "love";

    for(char c : name1){
        if(tru.find(c) != std::string::npos){
            pointT++;
        }
        if(love.find(c) != std::string::npos){
            pointL++;
        }
    }

    for (char c :name2){
        if(tru.find(c) != std::string::npos){
            pointT++;
        }
        if(love.find(c) != std::string::npos){
            pointL++;
        }
    }

    std::cout << "The total love score is: " << pointT << pointL << std::endl;

    return 0;
}

//PYTHON

name1 = input("Enter the name of the first person : ")
name2 = input("Enter the name of the second person : ")

tru = ["t","r","u","e"]
love = ["l","o","v","e"]

pointT = 0
pointL = 0

for char in name1:
    if char in tru :
        pointT += 1
    if char in love :
        pointL += 1
    
for char in name2:
    if char in tru :
        pointT += 1
    if char in love :
        pointL += 1
    
print(f"The total love is : {pointT}{pointL}")
    
