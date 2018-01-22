#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

// Map of all Substrings of the input string
std::map<string, long int> contactsMap;

void addContacts(string contactName){
    for (size_t i = 1; i <= contactName.size(); i++) {
        std::string subStr = contactName.substr(0,i);
        if (contactsMap.find(subStr) != contactsMap.end() ) { // Existing Entry
        contactsMap[subStr]+=1;
    }
    else{
        contactsMap[subStr]=1; // New Entry
    }
}
}

long int extractContacts(string contactName){
    if (contactsMap.find(contactName) != contactsMap.end()) { //Entry Found
    std::map<string, long int>:: iterator contactsIter  = contactsMap.find(contactName);
    return contactsIter->second;
}
else{
    return 0; // No Entry Found
}
}

int main() {

    long int querySize;
    std::cin >> querySize;
    for (size_t i = 0; i < querySize; i++) {
        string opName,inputString;
        std::cin >> opName>>inputString;
        if (opName=="add") {
            addContacts(inputString);
        }
        else if(opName=="find"){
            std::cout <<  extractContacts(inputString) << '\n';
        }
    }
    return 0;
}
