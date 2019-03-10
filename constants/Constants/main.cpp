#include <cstdlib>
#include <iostream>
using namespace std;
#include "Employee.h"
#define BUFFERSIZE 100

void printBufferSize(unsigned int buffersize){
    cout<<buffersize<<endl;
}

void printBufferSizePointer(const unsigned int* bufferSizePtr){
    cout<<*bufferSizePtr<<endl;
}

bool hireEarlier(const Employee& emp1, const Employee& emp2){
    //emp1.setFirstName("Tom");
    return emp1.getHiringYear() < emp2.getHiringYear();
}

int main(int argc, char** argv) {
    const unsigned int bufferSize=100;
    printBufferSize(100);
    printBufferSize(BUFFERSIZE);
    //printBufferSizePointer(&BUFFERSIZE);
    printBufferSizePointer(&bufferSize);
    
    const Employee JohnSmith("John", "Smith", "Sales", 2010);
    cout<<JohnSmith.getFirstName()<<endl;
    //JohnSmith.setFirstName("Alex");
    
    Employee AliceDoe("Alice", "Doe", "Sales", 2016);
    cout<<hireEarlier(JohnSmith, AliceDoe)<<endl;
    cout<<hireEarlier(AliceDoe, JohnSmith)<<endl;
    
    return 0;
}

