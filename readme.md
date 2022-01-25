Este repositório servirá para o desenvolvimento de um script para geração de identificadores válidos para conteineres.

Os 11 elementos alfanuméricos significam:

– O código do proprietário: Formado por 04 (quatro) letras do alfabeto, sendo as três primeiras referente ao código de registro ISO do proprietário do contêiner e a última sempre será a letra “U”, indicando “Unit” ou “Unidade”.

– O número de série: Formado por 06 (seis) algarismos romanos, indicando o número do contêiner em relação à sua frota. Existem casos em que a frota não alcança todos os algarismos, nestes casos deve-se preencher as todas as posições com 0 (zero).

– O dígito de controle: Formado por uma operação matemática de soma, onde junta-se o valor das letras e o valor dos números de série, tornando-o assim um número único e diferente para cada contêiner, evitando erros.