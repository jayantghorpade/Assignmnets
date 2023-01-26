import java.util.*;
class DigitX
{
    public int no;
    public DigitX(int iVal)
    {
        no=iVal;
    }
    public int EvenDigit()
    {
        int irem=0;
        int iCntE=0, iCntO=0;
        while(no!=0)
        {
                irem=no%10;
                if(irem%2==0)
                {
                    iCntE=iCntE+irem;
                }
                else
                {
                    iCntO=iCntO+irem;
                }
                no=no/10;
        }
        return iCntE-iCntO;
    } 
}
class Program335
{
    public static void main(String arsg[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter No to find even no from Digit");
        int no=sc.nextInt();
        DigitX obj=new DigitX(no);
        int iret=obj.EvenDigit();
        System.out.println("even count is :"+iret);

    }
}