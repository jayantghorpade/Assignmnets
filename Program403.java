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
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=col;j++)
        {
        if((i==j || i==1 || j==1 || i== row||j==col))
        {
            System.out.print("*"+"\t");
        }
        else
        {
            System.out.print(""+"\t");
        }
    }
    System.out.println();
}
}
}
class Program403
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
