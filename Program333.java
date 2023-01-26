import java.util.*;
class DigitX
{
    public int no;
    public DigitX(int iVal)
    {
        no=iVal;
    }
    public int CountDigit()
    {
        int irem=0;
        int iCnt=1;
        while(no!=0)
        {
                irem=no%10;
                if(irem==0)
                {
                    irem=1;
                }
                iCnt=iCnt*irem;
                no=no/10;
        }
        return iCnt;
    } 
}
class Program333
{
    public static void main(String arsg[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter No to find even no from Digit");
        int no=sc.nextInt();
        DigitX obj=new DigitX(no);
        int iret=obj.CountDigit();
        System.out.println("even count is :"+iret);

    }
}