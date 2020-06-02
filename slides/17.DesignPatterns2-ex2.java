interface User {
    public void print();
}

class UserImpl implements User {
    private String name;
    private String address;

    public UserImpl(String name, String address) {
	this.name = name;
	this.address = address;
    }
    
    public void print() {
	System.out.println(name);
	System.out.println(address);
    }
}

class VIP implements User {
    private UserImpl user;
    private String account;

    public VIP(String name, String address, String account) {
	user = new UserImpl(name, address);
	this.account = account;
    }
    
    public void print() {
	user.print();
	System.out.println(account);
    }
}

class Main {
    static void printUser(User user) {
	user.print();
    }
    public static void main(String[ ] args) {
	UserImpl user = new UserImpl("sunghwan","SNU");
	VIP vip = new VIP("gil", "SNU", "1234");

	printUser(user);
	printUser(vip);
    }
}
