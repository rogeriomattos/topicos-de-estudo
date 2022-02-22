class Pessoa {
  public nome: string;
  public cpf: string;
  public dataDeNascimento: Date;

  constructor(nome: string, cpf: string, dataDeNascimento: Date) {
    this.nome = nome;
    this.cpf = cpf;
    this.dataDeNascimento = dataDeNascimento;
  }

  public getInformacoesPessoais() {
    return `Nome: ${this.nome}\nCPF: ${this.cpf}\nData de Nascimento: ${this.dataDeNascimento.toLocaleDateString('pt-br')}`
  }
}

class Aluno extends Pessoa {
  public matricula: string;

  constructor(nome: string, cpf: string, dataDeNascimento: Date) {
    super(nome, cpf, dataDeNascimento);
    this.matricula = '007023';
  }
}

class Professor extends Pessoa {
  public salario: number;
  public disciplina: string;

  constructor(nome: string, cpf: string, dataDeNascimento: Date) {
    super(nome, cpf, dataDeNascimento);
    this.salario = 5000;
    this.disciplina = 'Orientação a Objetos';
  }
}


const professor1 = new Professor('Rogerio', '123456789-00', new Date('01-01-1998'));
const aluno1 = new Aluno('Enzo', '123456789-00', new Date('05-01-2003'));

console.log('\nProfessor');
console.log(professor1.getInformacoesPessoais());
console.log('Disciplina:', professor1.disciplina);

console.log('\nAluno');
console.log(aluno1.getInformacoesPessoais());
console.log('Matricula:', aluno1.matricula);