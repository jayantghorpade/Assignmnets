import java.util.*;
class PatternPrint
{
    public int no1;
    public int no2;
    public PatternPrint(int i,int j)
    {
        no1=i;
        no2=j;
    }
    public void Pattern()
    {
        for(int row=no1;row>=1;row--)
        {
            for(int col=1;col<=no2;col++)
            {
            System.out.print(row+"\t");
            }
            System.out.println();
        }
    }
}
class Program364
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in); 
System.out.println("Enter no of row");
int i=sc.nextInt();
System.out.println("Enter no of col");
int j=sc.nextInt();
PatternPrint obj=new PatternPrint(i,j);
obj.Pattern();

}
}
