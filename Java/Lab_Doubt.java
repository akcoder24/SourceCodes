import java.util.*;
abstract class SortValue
{
    void IntegerSort()
	{
        for(int i=0;i<5;i++)
        {
            if(read[i]<read[i+1])
            {
                display[i]=read[i];
                read[i]=read[i+1];
            }
        }
    }
    void CharecterSort()
	{
        for(int i=0;i<5;i++)
        {
            if(read[i]<read[i+1])
            {
                display[i]=read[i];
                read[i]=read[i+1];
            }
        }
    }
    //void display();
}
abstract class SortInteger extends SortValue
{
    Scanner sc= new Scanner(System.in);
    int read[]=new int[5];
    int display[]=new int[5];
    void read()
    {
        for(int i=0;i<5;i++)
        {
            read[i]=sc.nextInt();
        }
    }
    /*void IntegerSort()
    {
        for(int i=0;i<5;i++)
        {
            if(read[i]<read[i+1])
            {
                display[i]=read[i];
                read[i]=read[i+1];
            }
        }
    }*/
    void display()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println(display[i]);   
        } 
    }
}
abstract class SortCharecter extends SortValue
{
    Scanner sc= new Scanner(System.in);
    char read[]=new char[5];
    char display[]=new char[5];
    void read()
    {
        for(int i=0;i<5;i++)
        {
            read[i]=sc.next().charAt(0);
        }
    }
    /*void CharecterSort()
    {
        for(int i=0;i<5;i++)
        {
            if(read[i]<read[i+1])
            {
                display[i]=read[i];
                read[i]=read[i+1];
            }
        }
    }*/
    void display()
    {
        for(int i=0;i<5;i++)
        {
            System.out.println(display[i]);   
        } 
    }
}
class Main
{
    public static void main(String[] args)
    {
        SortInteger si= new SortInteger();
        SortCharecter sc= new SortCharecter();
        si.read();
        sc.read();
        si.IntegerSort();
        sc.CharecterSort();
        si.display();
        sc.display();
    }
}