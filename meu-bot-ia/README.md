# Estudos C++

Codigos de estudo em C++.

## Astrobot AI

Terminal em C++ que envia sua mensagem para a API da Groq, mostra a resposta e
le a resposta em voz alta no Windows. A chave da API fica fora do codigo.

### Compilar

```powershell
g++ astrobot.cpp -o output\astrobot.exe
```

### Usar

Configure a chave sem colocar ela no codigo:

```powershell
$env:GROQ_API_KEY = "sua-chave-aqui"
.\output\astrobot.exe
```

Dentro do chat, digite `sair` para fechar.

Opcionalmente, escolha outro modelo:

```powershell
$env:GROQ_MODEL = "openai/gpt-oss-20b"
```
