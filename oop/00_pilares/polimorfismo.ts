class Animal {
  public comer() {
    console.log('Animal comendo...');
  }
}

class Cachorro extends Animal {
  public comer(): void {
    console.log('Cachorro comendo...');
  }
}

class Peixe extends Animal {
  public comer(): void {
    console.log('Peixe comendo...');
  }
}

const animal = new Animal();
const cachorro = new Cachorro();
const peixe = new Peixe();

animal.comer();
cachorro.comer();
peixe.comer();

