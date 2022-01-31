
interface Remuneravel {
  remuneracao: () => number;
}

class contratoCLT implements Remuneravel {

  public horasExtras: number;
  public impostoMensal: number;
  constructor(horasExtras: number, impostoMensal: number) {
    this.horasExtras = horasExtras;
    this.impostoMensal = impostoMensal;
  }

  public remuneracao() {
    return 3000 + (this.horasExtras) - this.impostoMensal;
  }
}

class contratoPJ implements Remuneravel {
  public horasTrabalhadas: number;
  public valorHora: number;

  constructor(horasTrabalhadas: number, valorHora: number) {
    this.horasTrabalhadas = horasTrabalhadas;
    this.valorHora = valorHora;
  }

  public remuneracao() {
    return this.horasTrabalhadas * this.valorHora;
  };
}

class folhaDePagamento {
  static calcular(funcionario: Remuneravel) {
    return funcionario.remuneracao();
  }
}

const funcionarioCLT = new contratoCLT(10, 400);
const funcionarioJP = new contratoPJ(168, 43);

console.log("salarios:");
console.log("CLT:", folhaDePagamento.calcular(funcionarioCLT));
console.log("PJ:", folhaDePagamento.calcular(funcionarioJP));