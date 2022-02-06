# SOLID

## O que é?

O SOLID é uma junção de princípios e boas práticas que visam melhorar a arquitetura e design de um projeto, além de ter como intuito facilitar sua manutenção e compreensão.

SOLID é um acrônimo para 5 postulados, que são:

1. Single Responsiblity Principle (Princípio da responsabilidade única)
2. Open-Closed Principle (Princípio Aberto-Fechado)
3. Liskov Substitution Principle (Princípio da substituição de Liskov)
4. Interface Segregation Principle (Princípio da Segregação da Interface)
5. Dependency Inversion Principle (Princípio da inversão da dependência)


### 1. Single Responsiblity Principle (Princípio da responsabilidade única)

Uma classe deve ter um, e somente um, motivo para mudar.

Esse princípio declara que uma classe deve ser especializada em um único assunto e possuir apenas uma responsabilidade dentro do software, ou seja, a classe deve ter uma única tarefa ou ação para executar.

As famosas "God Class" infligem esse princípio, pois elas possuem várias responsabildades e execultam funções de escopo totalmente distintos. 

### 2. Open-Closed Principle (Princípio Aberto-Fechado)

Princípio Aberto-Fechado — Objetos ou entidades devem estar abertos para extensão, mas fechados para modificação, ou seja, quando novos comportamentos e recursos precisam ser adicionados no software, devemos estender e não alterar o código fonte original.

### 3. Liskov Substitution Principle (Princípio da substituição de Liskov)

O Princípio de Substituição de Liskov diz que objetos podem ser substituídos por seus subtipos sem que isso afete a execução correta do programa.

Se para cada objeto O1, do tipo S, há um objeto O2, do tipo T, de tal forma que um programa P definido em termos de T, o comportamento de P não é alterado quando O1 é substituído por O2. Então S é um subtipo de T.

Trocando em miúdos, se você tem duas classes (tanto faz se elas herdam da mesma classe ou implementam uma interface em comum) e ao passá-las para um código, nada precisa ser alterado nesse código, então elas são subtipos uma da outra. Ou seja, o programa que recebe esses objetos não pode precisar saber qual o tipo exato ele está recebendo e tão pouco precisar ser modificado por este motivo.

O LSP tem como objetivo manter o funcionamento do código íntegro no processo de acoplamento de funcionalidades na aplicação. Esse princípio é quebrado em situações nas quais uma subclasse deixa de herdar um comportamento da classe pai, seja sobrescrevendo um método e lançando uma exceção ou não tirando proveito de todas as funcionalidades dela.

### 4. Interface Segregation Principle (Princípio da Segregação da Interface)

Esse princípio basicamente diz que é melhor criar interfaces mais específicas ao invés de termos uma única interface genérica.

“Classes não devem ser forçadas a depender de métodos que não usam.” 

Quando você aplica o princípio de herança, fazendo uma classe herdar da outra, sua classe filha é obrigada a implementar os métodos da classe pai e como você já deve estar imaginando, isso vai contra os princípios do SOLID, pois não é nada interessante que uma classe implementa métodos que não é útil para ela.


#### Referências
<ul>
  <li>
  <a href="https://medium.com/desenvolvendo-com-paixao/o-que-%C3%A9-solid-o-guia-completo-para-voc%C3%AA-entender-os-5-princ%C3%ADpios-da-poo-2b937b3fc530">
    O que é SOLID: O guia completo para você entender os 5 princípios da POO
  </a>
  </li>
  <li>
    <a href="https://blog.betrybe.com/linguagem-de-programacao/solid-cinco-principios-poo/">
      SOLID: guia completo sobre os 5 princípios da POO!
    </a>
  </li>
  <li>
    <a href="https://www.campuscode.com.br/conteudos/s-o-l-i-d-principio-de-substituicao-de-liskov">
      S.O.L.I.D.: Princípio de Substituição de Liskov
    </a>
  </li>
  <li>
    <a href="https://www.blogdoft.com.br/2020/03/15/solid-de-verdade-liskov-substitution-principle-lsp/">
      SOLID de verdade – Liskov Substitution Principle (LSP)
    </a>
  </li>
</ul>

