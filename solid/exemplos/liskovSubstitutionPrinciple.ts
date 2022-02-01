class A {
  public getName(): string {
    return "Meu nome é A";
  }
}

class B extends A {
  override getName(): string {
    return "Meu nome é B";
  }
}

class P {
  static execute(o: A): string {

    return o.getName();
  }
}

const objA = new A();
const objB = new B();

console.log(P.execute(objA));
console.log(P.execute(objB));