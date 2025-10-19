# Super-Trunfo

Jogo desenvolvido em C

## Sobre
Implementação em C do jogo de cartas "Super Trunfo" (variante do "Top Trumps"). Dois jogadores (humano x CPU ou humano x humano) com baralhos de cartas que possuem atributos; o objetivo é vencer as cartas do adversário escolhendo atributos mais fortes.

## Requisitos
- GCC (ou outro compilador C compatível)
- Linux (testado em distribuições GNU/Linux)

## Compilar
Abra um terminal na pasta do projeto e execute:
```bash
gcc -o super_trunfo src/main.c src/game.c src/deck.c -Wall -Wextra
```
(adapte nomes/paths dos arquivos fonte conforme a estrutura do projeto)

## Executar
```bash
./super_trunfo
```

## Como jogar (resumo)
- Cada jogador recebe metade do baralho.
- No turno, o jogador ativo vê a sua carta do topo e escolhe um atributo (ex.: força, velocidade, inteligência).
- Os valores são comparados; o vencedor fica com ambas as cartas (colocando-as no final do seu baralho).
- Se houver empate, aplica-se a regra de "batalha" (empilhar cartas e comparar novamente) — ver implementação.
- O jogo termina quando um jogador fica sem cartas.

## Estrutura do projeto (exemplo)
- src/       — código fonte (.c, .h)
- tests/     — testes unitários (se houver)
- data/      — arquivos de cartas (opcionais)
- README.md  — documentação

## Contribuição
- Abra uma issue para discutir mudanças.
- Envie pull requests com código formatado e testado.
- Mantenha mensagens de commit claras.

## Licença
Coloque aqui a licença do projeto (ex.: MIT) ou remova conforme necessário.
