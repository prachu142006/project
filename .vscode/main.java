class Teacher{
    String dep_name;
    String subject;
    double salary;
    //constructor

    Teacher(String dep_name,String subject, double salary){
        this.dep_name = dep_name;
        this.subject = subject;
        this.salary = salary;

        //method
        void getInfo(){
            System.out.print("Teacher dep_name"+dep_name + ",subject"+subject +, "salary");
                }

    }
}
public class main{
    public static void main(string []args){
        Teacher myTeacher = new Teacher("IT","DBMS","25000");
        myTeacher.getInfo();


    }
}


