interface User {
    public void print();
}

interface UserFactory {
    public User makeUser(String name, String address);
    public User makeUser(String name, String address, String account, Boolean prettyPrinting);
}

// HEY USER, DO NOT TRY TO READ THE CODE.
// getName() does ...
// getAddress() does ...
interface UserDetails extends User {
    public String getName();
    public String getAddress();
}

class UserImpl implements UserDetails {
    private String name;
    private String address;

    public UserImpl(String name, String address) {
	this.name = name;
	this.address = address;
    }

    public String getName() { return name; }
	
    public String getAddress() { return address; }
    
    public void print() {
	System.out.println(name);
	System.out.println(address);
    }
}

class VIP implements User {
    private UserDetails user;
    private String account;
    private Boolean prettyPrinting;

    public VIP(String name, String address, String account, Boolean prettyPrinting) {
	user = new UserImpl(name, address);
	this.account = account;
	this.prettyPrinting = prettyPrinting;
    }
    
    public void print() {
	if (prettyPrinting) {
	    System.out.println("Name: " + user.getName());
	    System.out.println("Address: " + user.getAddress());
	    System.out.println("Account: " + account);
	} else {
	    user.print();
	    System.out.println(account);
	}
    }
}

class UserFactoryImpl implements UserFactory {
    public User makeUser(String name, String address) {
	return new UserImpl(name, address);
    }
    public User makeUser(String name, String address, String account, Boolean prettyPrinting) {
	return new VIP(name, address, account, prettyPrinting);
    }
}

class Main {
    static void printUser(User user) {
	user.print();
    }
    public static void main(String[ ] args) {
	UserFactory uf = new UserFactoryImpl();
	User user = uf.makeUser("sunghwan","SNU");
	User vip = uf.makeUser("gil", "SNU", "1234", false);
	User vip2 = uf.makeUser("hur", "KAIST", "5678", true);

	printUser(user);
	printUser(vip);
	printUser(vip2);
    }
}
