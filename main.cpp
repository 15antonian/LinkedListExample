#include <iostream>
using namespace std;


struct listNode{
    int studentNum;
    int grade;
    listNode* next;

};

void addRecord(listNode* sc, int stuNum, int gr){
    listNode * newNode = new listNode;
    newNode->studentNum = stuNum;
    newNode->grade = gr;
    newNode->next = sc;
    sc = newNode;
}

double averageRocord(listNode * sc){
    if(sc==NULL){
        return 0;
    }
    int count = 0;
    double sum = 0;
    listNode * loopptr = sc;
    while(loopptr!=NULL){
        sum+=loopptr->grade;
        count++;
        loopptr = loopptr->next;
    }
    double average = sum / count;
    return average;
}



int main() {
    listNode * sc; //head pointer
    listNode * node1 = new listNode;
    node1->studentNum = 1001;
    node1->grade = 78;
    listNode * node2 = new listNode;
    node2->studentNum= 1012;
    node2->grade = 93;
    listNode * node3 = new listNode;
    node3->studentNum = 1076;
    node3->grade = 85;
    sc = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    addRecord(sc, 1274, 91);
    addRecord(sc,9999, 100);

    cout << "Average: " << averageRocord(sc) << endl;







}