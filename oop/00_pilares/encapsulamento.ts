class Carro {
  private gasolinaLitros: number;
  private isLigado: boolean;
  private velocidade: number;
  private nivelCDeBateria: number;

  constructor(gasolinaLitros: number) {
    this.gasolinaLitros = gasolinaLitros;
    this.isLigado = false;
    this.velocidade = 0;
    this.nivelCDeBateria = 50;
  }

  public getStatus() {
    if (this.isLigado)
      return `\nSeu carro está ligado\nLitros de gasolina:${this.gasolinaLitros}\nVelocidade:${this.velocidade}`;

    return `\nSeu carro está desligado`;
  }

  public ligar() {
    this.ativarMotor();
  }

  public acelerar() {
    this.aumentarVelocidade();
  }

  private aumentarVelocidade() {
    if (this.isLigado && this.gasolinaLitros > 0) {
      this.velocidade++;
      this.gasolinaLitros = this.gasolinaLitros - 0.5;
    }
  }

  private ativarMotor() {
    if (this.nivelCDeBateria > 0) {
      this.isLigado = true;
    }
  }
}

const carro = new Carro(50);
console.log(carro.getStatus());
carro.ligar();
console.log(carro.getStatus());
carro.acelerar()
console.log(carro.getStatus());