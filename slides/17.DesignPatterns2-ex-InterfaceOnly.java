interface Fruit {
    public void setName(String name);
    public String getName();
    public void print();
}

class FruitBase implements Fruit {
    private String name;

    public FruitBase() { name = ""; }
    public void setName(String name) { this.name = name; }
    public String getName() { return name; }
    public void print() {
	System.out.print("My name is " + getName() + "\n");
    }
}

class Apple implements Fruit {
    Fruit base;
    public Apple() { base = new FruitBase(); }; // composition for code reuse
    public void setName(String name) { base.setName(name); }
    public String getName() { return base.getName(); }
    public void print() {
	base.print();
	System.out.print("Moreover, I am an apple.\n");	
    }
}

class Orange implements Fruit {
    Fruit base;
    public Orange() { base = new FruitBase(); }; // composition for code reuse
    public void setName(String name) { base.setName(name); }
    public String getName() { return base.getName(); }
    public void print() {
	base.print();
	System.out.print("Moreover, I am an orange.\n");	
    }
}

class Main {
    static void printFruit(Fruit fruit) {
	fruit.setName("Gil");
	fruit.print();
    }
    
    public static void main(String[ ] args) {
	Apple apple = new Apple();
	Orange orange = new Orange();
	printFruit(apple);
	printFruit(orange);
    }
}
