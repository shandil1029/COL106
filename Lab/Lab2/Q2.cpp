#ifndef HEADER_HPP
#define HEADER_HPP
#include<iostream>
#include <string>

class Customer {
private:
    std::string name;
    int credit;

public:
    Customer(std::string n = "", int c = 0);
    ~Customer();
    void setName(std::string n);
    void setCredit(int c);
    std::string getName();
    int getCredit();
    void withdraw(int amount);
};

struct CustomerNode {
    Customer customerData;
    CustomerNode* next;

    CustomerNode(Customer cust){
        customerData = cust;
        next = nullptr;
    };
    ~CustomerNode(){};
};

class CustomerLinkedList {
private:
    CustomerNode* head;
    CustomerNode* mover;

public:
    CustomerLinkedList(){
        head = nullptr;
    };
    ~CustomerLinkedList(){};
    void addCustomer(std::string name, int credit){
        Customer cust1(name,credit);
        CustomerNode* newNode = new CustomerNode(cust1);
        newNode->next = head;
        head = newNode;
    };
    void displayAllCustomers(){
        CustomerNode* current = head;
        while(current!=nullptr){
            std::cout<<current->customerData.getName()<<" "<<current->customerData.getCredit()<<std::endl;
            current = current->next;
        }
    };
    Customer* findCustomer(std::string name){
        CustomerNode* temp = head;
        while(temp!=nullptr){
            if(temp->customerData.getName()==name){
                std::cout<<name<<std::endl;
                return &(temp->customerData);
            }
            temp=temp->next;
        }
        return nullptr;

    };
};
Customer::Customer(std::string n, int c){
    name = n;
    credit = c;
}
Customer::~Customer(){}
void Customer::setName(std::string n){
    name = n;
}
void Customer::setCredit(int c){
    credit = c;
}
std::string Customer::getName(){
    return name;
}
int Customer::getCredit(){
    return credit;
}
void Customer::withdraw(int amount){
    if (amount<=credit){
        credit -= amount;
    }
}
int main() {
    CustomerLinkedList list;

    list.addCustomer("Alice", 500);
    list.addCustomer("Bob", 800);
    list.addCustomer("Charlie", 300);

    // std::cout << "\n--- All Customers ---\n";
    list.displayAllCustomers();

    std::cout << "\n--- Searching for Bob ---\n";
    Customer* bob = list.findCustomer("Bob");
    if (bob) {
        std::cout << "Found Bob! Credit: " << bob->getCredit() << std::endl;
        // bob->withdraw(200);
        // std::cout << "After withdrawal, Bob's Credit: " << bob->getCredit() << std::endl;
    } else {
        std::cout << "Bob not found.\n";
    }

    return 0;
}
#endif

