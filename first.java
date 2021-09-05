class first
{
    void q1()
    {
        System.out.println("PRAKHAR SINGH PARMAR");
        System.out.println("1905261");
        System.out.println("CSE");
    }

    void q2(int mark)
    {
        if(mark>=90)
            System.out.println("Grade is O");
        else if(mark>=80)
            System.out.println("Grade is E");
        else if(mark>=70)
            System.out.println("Grade is A");
        else if(mark>=60)
            System.out.println("Grade is B");
    }

    void demo3() {
        int d=5;
        switch(d) {
            case 1:
            System.out.println("Monday");
            break;

            case 2:
            System.out.println("Tuesday");
            break;

            case 3:
            System.out.println("Wednesday");
            break;

            case 4:
            System.out.println("Thursday");
            break;
            case 5:
            System.out.println("Friday");
            break;
            case 6:
            System.out.println("Saturday");
            break;
            case 7:
            System.out.println("Sunday");
            break;
        }
    }

    pubglic static void main()
    {
        q1();
        int mark=76;
        q2(mark);
    }
}

