# Projetos em linguagem de programação C

Para executar um código escrito na linguagem C, você precisa seguir três etapas principais:

---

### ✅ 1. **Escrever o código**

Crie um arquivo com a extensão `.c`, por exemplo: `meuprograma.c`.
Exemplo de código simples em C:

```c
#include <stdio.h>

int main() {
    printf("Olá, mundo!\n");
    return 0;
}
```

---

### ✅ 2. **Compilar o código**

Você precisa de um **compilador C**, como:

* **GCC** (Linux, Windows via MinGW, Mac)
* **Clang** (Mac e Linux)
* **TCC** (Tiny C Compiler)
* **MSVC** (Microsoft C Compiler – no Windows)

#### 🖥️ Exemplo com GCC (mais comum):

Abra o terminal ou prompt de comando, vá até o diretório onde está o arquivo `.c` e digite:

```bash
gcc meuprograma.c -o meuprograma
```

* `gcc`: chama o compilador
* `meuprograma.c`: é o seu código-fonte
* `-o meuprograma`: diz que o executável gerado será chamado `meuprograma`

Se não houver erros, um executável será criado.

---

### ✅ 3. **Executar o programa**

* No **Linux/Mac**:

  ```bash
  ./meuprograma
  ```

* No **Windows**:

  ```cmd
  meuprograma.exe
  ```

Você verá no terminal a saída do seu programa, como:

```
Olá, mundo!
```

---

### 💡 Dica: Instalando o GCC

* **Linux (Debian/Ubuntu)**:

  ```bash
  sudo apt update
  sudo apt install build-essential
  ```

* **Mac** (com Xcode):

  ```bash
  xcode-select --install
  ```

* **Windows**:

  * Baixe o [MinGW](https://www.mingw-w64.org/) ou use o [WSL](https://learn.microsoft.com/pt-br/windows/wsl/) com Ubuntu.

---


