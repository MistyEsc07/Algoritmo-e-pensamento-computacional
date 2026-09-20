# Código explicado

No programa, inicialmente, o usuário informa um limite e a quantidade de temperaturas que deseja registrar. Importantes para o seguimento do código, especificamente o relatório do final.

O programa utiliza um do while para validar o limite e um for para receber as temperaturas. Durante a execução, são calculadas a média, a maior e a menor temperatura, além da quantidade de valores acima do limite. 

Uma das tentativas era atender a proposta de encerrar o programa após três temperaturas consecutivas acima do limite, mas em minhas tentativas o programa entrou em um loop indefinidamente. E no fim acabei escolhendo uma forma mais simples, que no caso o usuário define a quantidade de temperaturas que serão analisadas. Assim, o programa recebe os dados e, ao final, apresenta um relatório com os principais resultados.

A minha escolha foi encima do do...while porque precisava pedir o limite de temperatura pelo menos uma vez e depois verificar se o valor estava correto. Se o usuário digitasse um valor menor que zero, o programa repetia a pergunta. A diferença foi importante porque o do...while verifica a condição depois de executar o código.
