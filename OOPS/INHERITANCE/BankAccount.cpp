/*Imagine you are developing a simple banking system in C++ to manage accounts. You are required to design a class hierarchy to represent different types of bank accounts using inheritance.
 
Create a base class called BankAccount with the following attributes and methods:
 
Attributes:
accountNumber (an integer) - representing the unique account number.
accountHolderName (a string) - representing the name of the account holder.
balance (a double) - representing the current balance.
Methods:
constructor - a constructor to initialize the accountNumber, accountHolderName, and balance attributes.
deposit(double amount) - a method to deposit money into the account.
withdraw(double amount) - a method to withdraw money from the account.
display() - a method to display the account details including the account number, account holder name, and balance.
Create two subclasses of BankAccount representing different types of accounts (e.g., SavingsAccount and CheckingAccount). Each subclass should:
 
Have its own unique attributes and methods (e.g., interestRate for SavingsAccount, minimumBalance for CheckingAccount).
Override the withdraw method to include any account-specific rules (e.g., checking for minimum balance).
Create instances of each subclass and demonstrate the use of inheritance by calling both the parent class and subclass methods on these instances.
 
Write a function called accountInfo(BankAccount* account) that takes a pointer to a BankAccount object and displays its account details using the display method.*/

#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    string accountHolderName;
    double balance;
    BankAccount(int ,string ,double);

};
int main(){

    return 0;
}