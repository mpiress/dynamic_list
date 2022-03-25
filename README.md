# Listas Dinâmicas: Implementação em C

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
<a href="https://github.com/mpiress/midpy/issues">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat"/>
<img align="center" height="20px" width="80px" src="https://badgen.net/badge/license/MIT/green"/>
</a> 
</div>

<p> </p>
<p> </p>


<p align="justify">
A lista dinâmica é uma variante do modelo estático [vide git](https://github.com/mpiress/linear_list). Antes de iniciarmos as modificações existêntes nessa implementação, vejamos uma representação gráfica do modelo dinâmico em questão. Observe as nomenclaturas utilizadas na figura, essas são utilizadas na implementação fornecida.
</p>

<p align="center">
	<img src="imgs/lista.png"/> 
</p>

<p align="justify">
Note que, o primeiro bloco armazenado em RAM não apresenta o tipo dado como parte da estrutura, mas sim um valor 0 <b>"simbólico"</b>. Isso ocorre porque precisamos do que chamaremos de cabeça da lista. A cabeça de uma lista nada mais é que um ponteiro vazio (i.e., um tipo similar ao void) que indica qual posição de memória será utilizada para começar o preenchimento da lista inicializada. 
</p>

<p align="justify">
Uma outra nomenclatura a ser observada é a existência de um ponteiro <b>prox</b>. Este tem por objetivo apontar para o próximo bloco de memória que conterá o novo dado ou para NULL para facilitar a idenficação do fim da lista. Além disso, as inserções, remoções, pesquisas e impressões da lista são apoiadas por dois outros ponteiros, nomeados como <b>primeiro</b> e <b>último</b>.
</p>