import java.util.*;
class BankAccount
{
	private static int var_bal;
	BankAccount()
	{
		var_bal=1000;
	}
	BankAccount(int b)
	{
		var_bal=b;
	}
	public void Deposit(int amt)
	{
		var_bal=var_bal+amt;
	}
	public void Deposit(int amt, int ser_charge)
	{
		var_bal=var_bal-ser_charge;
	}
	void display()
	{
		System.out.println(var_bal);
	}
}
class Main
{
	public static void main(String[] args)
	{
		int amt,ser_charge;
		Scanner sc= new Scanner(System.in);
		amt=sc.nextInt();
		ser_charge=sc.nextInt();
		BankAccount o1= new BankAccount();
		BankAccount o2= new BankAccount(amt);
		o1.Deposit(amt);
		o2.Deposit(amt,ser_charge);
		o1.display();
	}
}