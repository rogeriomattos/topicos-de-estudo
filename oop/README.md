# Orientação a Objetos

## O que é?

A	Orientação a Objetos é um paradigma de análise, projeto e programação de sistemas de software baseado na composição e interação entre diversas unidades de software chamadas de objetos.  OOP torna mais fácil atingirmos reúso, acoplamento, entre outras técnicas que visam tornar o código mais profissional	e	de fácil manutenção.

## Diferenças entre OOP e o paradigma estruturado

## Pilares

### 1. Abstração

"Processo	pelo qual se isolam características de um objeto, considerando os que tenham em comum certos grupos de objetos". Esse conseito defique que ao criar um objeto ele deve ser único no sistema e deve ter as caracteristicas fundamentais da entidade que você esta tentando representar. Para isso, é preciso verificar três pontos na abstração:

**Identidade** ao objeto que vai ser criado. Essa identidade deve ser única dentro do sistema, para que não haja conflito, ou seja, sem repetições.

**Característica do objeto**. Dentro da programação orientada a objetos, as características são nomeadas como propriedades. Por exemplo, as propriedades de um objeto “pessoa” poderiam ser “peso”, “tamanho” e “idade”.

**Ações** que o objeto irá executar, chamadas de métodos. Eles podem ser muito variados, dependendo do tipo de solução desenvolvida. 

### 2. Encapsulamento

Se trata de um dos elementos que adicionam segurança à aplicação em uma programação orientada a objetos pelo fato de esconder as propriedades, criando uma espécie de caixa preta.

A maior parte das linguagens orientadas a objetos implementam o encapsulamento baseado em propriedades privadas, ligadas a métodos especiais chamados getters e setters, que irão retornar e setar o valor da propriedade, respectivamente. Essa atitude evita o acesso direto a propriedade do objeto, adicionando uma outra camada de segurança à aplicação.

Para fazermos um paralelo com o que vemos no mundo real, temos o encapsulamento em outros elementos. Por exemplo, quando clicamos no botão ligar da televisão, não sabemos o que está acontecendo internamente. Podemos então dizer que os métodos que ligam a televisão estão encapsulados.

### 3. Herança

O reuso de código é uma das grandes vantagens da programação orientada a objetos. Muito disso se dá por uma questão que é conhecida como herança. Essa característica otimiza a produção da aplicação em tempo e linhas de código.

Para entendermos essa característica, vamos imaginar uma família: a criança, por exemplo, está herdando características de seus pais. Os pais, por sua vez, herdam algo dos avós, o que faz com que a criança também o faça, e assim sucessivamente.

O objeto abaixo na hierarquia irá herdar características de todos os objetos acima dele, seus “ancestrais”. A herança a partir das características do objeto mais acima é considerada herança direta, enquanto as demais são consideradas heranças indiretas. Por exemplo, na família, a criança herda diretamente do pai e indiretamente do avô e do bisavô.

### 4. Polimorfismo

Na natureza, vemos animais que são capazes de alterar sua forma conforme a necessidade, e é dessa ideia que vem o polimorfismo na orientação a objetos. Como sabemos, os objetos filhos herdam as características e ações de seus “ancestrais”. Entretanto, em alguns casos, é necessário que as ações para um mesmo método seja diferente. Em outras palavras, o polimorfismo consiste na alteração do funcionamento interno de um método herdado de um objeto pai.

Como um exemplo, temos um objeto genérico “Eletrodoméstico”. Esse objeto possui um método, ou ação, “Ligar()”. Temos dois objetos, “Televisão” e “Geladeira”, que não irão ser ligados da mesma forma. Assim, precisamos, para cada uma das classes filhas, reescrever o método “Ligar()”.

## Referências
<ul>
  <li>
  <a href="https://pt.wikipedia.org/wiki/Orienta%C3%A7%C3%A3o_a_objetos">
    Wiki: Orientação a objetos
  </a>
  </li>
  <li>
  <a href="https://www.digitalhouse.com/br/blog/programacao-orientada-a-objetos-o-que-e">
    O que é programação orientada a objetos? Pilares e vantagens da POO
  </a>
  </li>
  <li>
    <a href="https://www.devmedia.com.br/os-4-pilares-da-programacao-orientada-a-objetos/9264">
      Os 4 pilares da Programação Orientada a Objetos
    </a>
  </li>
</ul>



