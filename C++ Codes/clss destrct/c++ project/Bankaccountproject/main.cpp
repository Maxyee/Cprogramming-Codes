#include <iostream>
#include <cstdlib>
#include <CONIO.h>
using namespace std;


 class BankAccount
        {
            float balance;
            int account_no;
		public:
             void set_account_no(int value)
            {
                account_no=value;
            }

                 int get_account_no()
            {
               return  account_no;
            }

          virtual float get_account_balance()
            {
                return balance;
            }

           virtual bool Deposite_money(float amount)
            {
                balance =this->balance+ amount;
                return true;
            }

          virtual bool withdraw_money(float amount)
            {
                this->balance =this->balance- amount;
				return true;
            }
        };

        class CheckingAccount : public BankAccount
        {

            int transaction_no;
            float transaction_fee ;
		public:
			CheckingAccount()
			{
				transaction_fee= 0.50;
				transaction_no=0;
			}
            bool withdraw_money(float amount) override
            {
                transaction_no++;
                if (transaction_no > 2 && (BankAccount::get_account_balance() - (amount + transaction_fee) >= 0))
                {
                BankAccount::withdraw_money(amount + transaction_fee);
                    return true;
                }
                else if (BankAccount::get_account_balance() - amount >= 0)
                {
                    BankAccount::withdraw_money(amount);
                    return true;
                }
                else
                {

                    return false;
                }
            }

      /*     float get_account_balance() override
           {
               transaction_no++;
                return BankAccount::get_account_balance();
           }

           bool Deposite_money(float amount) override
           {
                transaction_no++;
                BankAccount::Deposite_money(amount);
                return true;
           }
*/
           int get_transaction_no()
            {
                return transaction_no;
            }
        };

        class SavingsingAccount : public BankAccount
        {

            int transaction_no;
            int days_of_last_inquery;
            float annual_interest_rate;
            float daily_interest_rate;
            float interest_from_last_transaction;

		//BankAccount


		public:

			SavingsingAccount()
			{

            transaction_no=0;
            days_of_last_inquery=0;
            annual_interest_rate=1;
            daily_interest_rate=1;
             interest_from_last_transaction=1;
			}
			float get_interest_from_last_transaction()
            {
                interest_from_last_transaction = get_daily_interest_rate() * days_of_last_inquery;
                return interest_from_last_transaction;
            }
           void set_annual_interest_rate(float value)
            {
                this->annual_interest_rate = value;
                daily_interest_rate = annual_interest_rate / 365;
            }
            float  get_daily_interest_rate()
            {

            return daily_interest_rate;
            }

            void update_days_of_last_inquery()
            {
                days_of_last_inquery = rand()%7;
            }
            int get_days_of_last_inquery()
            {
               return days_of_last_inquery;
            }

             float get_account_balance() override
            {
                update_days_of_last_inquery();
                return BankAccount::get_account_balance() + ((BankAccount::get_account_balance()*get_interest_from_last_transaction())/100);
            }



            bool withdraw_money(float amount) override
            {
              // update_days_of_last_inquery();
                if (get_account_balance() - amount >= 0)
                {
                    BankAccount::withdraw_money(amount);
                    return true;
                }
                else
                {
                    return false;
                }
            }
        };

        int main()
{

     char c;
            CheckingAccount AcheckingAccount;
            SavingsingAccount AsavingsAccount;
            AcheckingAccount.set_account_no(12345);
            AsavingsAccount.set_account_no(54321);

            AcheckingAccount.Deposite_money(100);
            AsavingsAccount.Deposite_money(100);

            AsavingsAccount.set_annual_interest_rate(3);


 MainMenu:
            system("CLS");

                cout<<"select from bellow"<<endl<<endl<< "1. for Checking account"<<endl<<"2. for savings account"<<endl;
           c= getch();
           system("CLS");
           if(c=='1')
           {

            cout << "1. Balance Inquiry" <<endl<<"2. Deposit"<<endl<<"3. Withdraw" <<endl<<"0. Main Menu" <<endl;
            c=getch();
             system("CLS");
            if(c=='1')
            {

                cout<<"Current Balance On "<<AcheckingAccount.get_account_no()<<" is: "<<AcheckingAccount.get_account_balance()<<endl<<"Your Transaction No Is: "<<AcheckingAccount.get_transaction_no()<<endl;


                cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
            }
            else if(c=='2')
            {

                cout<<"Enter The Amount To Deposit"<<endl;
                float value;
                cin>>value;
                AcheckingAccount.Deposite_money(value);
                system("CLS");
                cout<<"Balance Added"<<endl;
                cout<<"After deposit on account No: "<<AcheckingAccount.get_account_no()<<endl<< "Current Balance is: "<<AcheckingAccount.get_account_balance()<<endl<<"Your Transaction No Is: "<<AcheckingAccount.get_transaction_no()<<endl;

           cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
            }
            else if(c=='3')
            {

                cout<<"Enter The Amount To Withdraw"<<endl;
                float value;
                cin>>value;
               bool results= AcheckingAccount.withdraw_money(value);
                system("CLS");
                if(results)
                {
                           cout<<"After Withdrawal from account No: "<<AcheckingAccount.get_account_no()<<endl<< "Current Balance is: "<<AcheckingAccount.get_account_balance()<<endl<<"Your Transaction No Is: "<<AcheckingAccount.get_transaction_no()<<endl;
                }
                else
                {
                    cout<<"sorry insufficient balance"<<endl <<"your current balance is: "<<AcheckingAccount.get_account_balance()<<endl<<"Your Transaction No Is: "<<AcheckingAccount.get_transaction_no()<<endl;
                }
                 cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
             }
              else if(c=='0')
                {
            goto MainMenu;
                }


           }
           else if(c=='2')
           {
                cout << "1. Balance Inquiry" <<endl<<"2. Deposit"<<endl<<"3. Withdraw" << endl<<"0. Main Menu"<<endl;
            c=getch();
             system("CLS");
            if(c=='1')
            {

                cout<<"Current Balance On "<<AsavingsAccount.get_account_no()<<" is: "<<AsavingsAccount.get_account_balance()<<endl<<"Daily Interest Rate Is: "<<AsavingsAccount.get_daily_interest_rate()<<"%"<<endl;
                cout<<"Days of Last Inquiry: "<<AsavingsAccount.get_days_of_last_inquery()<<endl;
                cout<<"Applicable interest from last Inquiry: "<<AsavingsAccount.get_interest_from_last_transaction()<<"%"<<endl;

               cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
            }
            else if(c=='2')
            {

                cout<<"Enter The Amount To Deposit"<<endl;
                float value;
                cin>>value;
                AsavingsAccount.Deposite_money(value);
                system("CLS");
                cout<<"Balance Added"<<endl;
                cout<<"After Deposit Current Balance On "<<AsavingsAccount.get_account_no()<<" is: "<<AsavingsAccount.get_account_balance()<<endl<<"Daily Interest Rate Is: "<<AsavingsAccount.get_daily_interest_rate()<<"%"<<endl;
                cout<<"Days of Last Inquiry: "<<AsavingsAccount.get_days_of_last_inquery()<<endl;
                cout<<"Applicable interest from last Inquiry: "<<AsavingsAccount.get_interest_from_last_transaction()<<"%"<<endl;


                 cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
                 }
            else if(c=='3')
            {

                 cout<<"Enter The Amount To Withdraw"<<endl;
                float value;
                cin>>value;
                bool results= AsavingsAccount.withdraw_money(value);
                system("CLS");
                if(results)
                {
                 cout<<"Balance Withdrawn"<<endl;
                cout<<"After Withdrawal Current Balance On "<<AsavingsAccount.get_account_no()<<" is: "<<AsavingsAccount.get_account_balance()<<endl<<"Daily Interest Rate Is: "<<AsavingsAccount.get_daily_interest_rate()<<endl;
                cout<<"Days of Last Inquiry: "<<AsavingsAccount.get_days_of_last_inquery()<<endl;
                cout<<"Applicable interest from last Inquiry: "<<AsavingsAccount.get_interest_from_last_transaction()<<"%"<<endl;

               cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
                 }


                else
                {
                    cout<<"sorry insufficient balance"<<endl <<"your current balance is: "<<AsavingsAccount.get_account_balance()<<endl<<"Your last day of Inquiry: "<<AsavingsAccount.get_days_of_last_inquery();
                cout<<"Press 0 for Main Menu"<<endl;
                if(getch()=='0')
                {
                    goto MainMenu;
                }
                }
             }
              else if(c=='0')
                {
                    goto MainMenu;
                }
           }

    return 0;
}
