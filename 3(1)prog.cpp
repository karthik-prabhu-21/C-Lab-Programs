#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
   private:
     string owner;
     double balance;
   public:
    //Member function to open account
    void openAccount(string name , double initial)
   {
     owner = name;
     if(initial > 0)
       balance = initial;
     else
        balance = 0;   
   }
   void deposit(double amount)
   {
    if(amount > 0)
        balance = balance + amount;
   }
bool withdraw(double amount)
{
  if(amount > 0 && amount <= balance)
  {
    balance = balance - amount;
    return true;
  }
  else
  return false;


}
 string getOwner()
 {
    return owner;
 }
 double getBalance()
 {
    return balance;
 }
};

int main()
{
  BankAccount account;
  string name;
  double initialDeposit;
  double depositAmount;
  double validWithdrawal;

  cout<<"Enter account holder name: ";
  cin>>name;
  cout<<"Enter initial deposit: ";
  cin>>initialDeposit;
  account.openAccount(name, initialDeposit);

  cout<<"Enter amount to deposit: ";
    cin>>depositAmount;

  account.deposit(depositAmount);
  cout<<"\n Enter valid amount to withdraw: ";
  cin>>validWithdrawal;

    if(account.withdraw(validWithdrawal))
    {
        cout<<"Withdrawal successful."<<endl;
    }
    else
    {
        cout<<"Insufficient balance."<<endl;
    }
 cout<<"Account holder: "<<account.getOwner()<<endl;
 cout<<"Current balance: "<<account.getBalance()<<endl;

 return 0;

}