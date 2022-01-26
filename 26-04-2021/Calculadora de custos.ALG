Algoritmo "Calculadora de custos"
Var
parcela, opcao: inteiro
preco: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva ("Informe o valor do produto:  ")
   Leia (preco)

   Escreval ("Qual sera o meio de pagamento?")
   Escreval ("[1]Parcelado")
   Escreval ("[2]A vista")
   Leia (opcao)
   
   Se (opcao = 1) entao
    Escreva ("Por favor, informe a quantidade de parcelas:  ")
    Leia (parcela)
   
    Escreval ("Voce ira pagar ",preco/parcela," reais por parcela, totalizando R$",preco)

     Senao se (opcao = 2) entao
     Escreval ("Voce ira pagar ",preco-preco * 0.1," reais, pois recebeu um desconto de R$",preco*0.1)
   fimse

Fimalgoritmo