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
        int iCnt=1;
        for(int row=no1;row>=1;row--)
        {
            for(int col=1;col<=no2;col++)
            {
            System.out.print(iCnt+"\t");
            iCnt=iCnt+1;
            }
            System.out.println();
        }
    }
}
class Program365
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
