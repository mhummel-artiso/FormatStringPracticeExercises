# Code Kompilieren
Zum Kompiliern der Aufgaben das script `compile.sh` ausführen

# Antworten

Die Antworen bitte in [Antwort.md](./Antwort.md) schreiben

# Verfügbare tools

- Compiler: 
  - gcc (mit gef / CLI)
- Debugger: 
  - dgb (CLI)
  - GDB Debugger - Beyond (VS Code Debugger)
    - Configurierbar in [launch.json](./.vscode/launch.json) z.B. für start Argumente
  - C/c++ (VS Code Debugger)
    - Configurierbar in [launch.json](./.vscode/launch.json) z.B. für start Argumente
- Decompiler:
  - Disassembly Explorer (VS code)
  - objdump (CLI)
- Zusätzliches
  - Hex Editor (VS Code)

# Aufgaben

## [Aufgabe 1](./ex1.c):
Gib den Stack hexcodiert aus und
identifiziere die drei lokalen Variablen.
> Tipp: Wir sind auf einem 64-Bit System und müssen das im Format Identifier berücksichtigen.

```bash
./compile.sh ex1
```

## [Aufgabe 2](./ex2.c):
Gib nur die Variable num1 als Dezimalzahl aus.
Tipp: Mit n$ kannst du an die n-te Stelle gehen. Das englische Wikipedia zu printf ist dein Freund.
> Tipp: Um mit $ auf Linux nicht zu escapen, musst du ihn einpacken.

```bash
./compile.sh ex2
```

## [Aufgabe 3](./ex3.c):
Lies den String als String aus.
> Tipp: Was braucht der String-Format-Identifier als Parameter? Sei schlau und nutze, was du kriegst.

```bash
./compile.sh ex3
```

## [Aufgabe 4](./ex4.c): 
Sorry, die ist schwierig.
Schreibe 3 in die target-Variable.
> Tipp: Entscheide dich für den richtigen Format Identifier und finde die Adresse.

```bash
./compile.sh ex4
```
