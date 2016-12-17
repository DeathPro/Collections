package javaileprogramlama;

class Employee {
	private static int count = 0; // number of Employees created
	private String firstname;
	private String lastname;

	public Employee(String firstname, String lastname) {
		this.firstname = firstname;
		this.lastname = lastname;
		++count;
		// System.out.printf("Employee Constuctor : %s %s ; count =
		// %d\n",firstname,lastname,count);
	}

	public String getFirstName() {
		return firstname;
	}

	public String getLastName() {
		return lastname;
	}

	public static int getCount() {
		return count;
	}
}

public class EmployeeTest {

	public static void main(String[] args) {
		System.out.println(Employee.getCount());
		Employee e1 = new Employee("Susan", "Baker");
		Employee e2 = new Employee("Bob", "Blue");
		System.out.println(Employee.getCount());//static oldugundan dolayi class tan cagirabiliyorum 
		System.out.println(Employee.getCount());//ama istersemde class nesnesinden de çağırabilirim...
		System.out.println(Employee.getCount());
		System.out.println(e1.getFirstName() + " " + e1.getLastName());
		System.out.println(e2.getFirstName() + " " + e2.getLastName());

	}

}
