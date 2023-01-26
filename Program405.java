import java.util.*;
class Pattern
{
    public int row;
    public int col;
    public Pattern(int i,int j)
    {
            row=i;
            col=j;
    }
    public void PatternDisplay()
    {
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
        if(i==1 || i==row)
        {
            System.out.print(j+"\t");
        }
        else if(i==j)
        {
            System.out.print(i+"\t");
        } 
         else if(j==1)
         {
             System.out.print(j+"\t");
         }
         else if(j==col)
         {
            System.out.print(col+"\t");
         }
        else
        {
            System.out.print(" "+"\t");
        }
    }
    System.out.println();
}
}
}
class Program405
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no of rows :");
        int i=sc.nextInt();
        System.out.println("Enter no of cols :");
        int j=sc.nextInt();
        Pattern obj=new Pattern(i,j);
        obj.PatternDisplay();
    }
}
