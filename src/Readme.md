# Übungsblatt - Format Strings

## Code

Das Repository für das Übungsblatt befindet sich unter https://github.com/mhummel-artiso/FormatStringPracticeExercises
Per Code -> Codespaces kann eine virtuelle Entwicklungsumgebung gestartet werden, in der die Aufgaben zu lösen sind.

## Code ausführen

Zum Kompilieren der ersten Aufgabe den Befehl `./compile.sh ex1` ausführen.\
**Achtung**: Es muss zunächst etwas gewartet werden, bevor dieser Befehl ausgeführt werden kann, da zuvor noch die Permissions gesetzt werden.\
Über `./ex1.out` kann nun das Programm ausgeführt werden. Argumente sind bei diesem Befehl anzuhängen.

## Antworten

Die Antworen bitte in [Antwort.md](./Antwort.md) schreiben. Den Text dann als Lösung abgeben: erathp.tin21@student.dhbw-heidenheim.de

## Aufgaben

### [Aufgabe 1](./ex1.c):

Lass dir den Stack ausgeben und identifiziere die drei lokalen Variablen.

Gib als Antwort die Werte der drei Variablen hexcodiert an.

> Tipp: Wir sind auf einem 64-Bit System und müssen das im Format Identifier berücksichtigen.

```bash
./compile.sh ex1
```

### [Aufgabe 2](./ex2.c):

Gib nur die Variable num1 als Dezimalzahl aus.

Gib als Antwort den Befehl an, der dir nur diese Variable ausgibt.

> Tipp 1: Mit n$ kannst du an die n-te Stelle gehen. Das englische Wikipedia zu printf ist dein Freund.

> Tipp 2: Um mit $ nicht zu escapen, musst du den Befehl als 'String' eingeben.

```bash
./compile.sh ex2
```

### [Aufgabe 3](./ex3.c):

Lies str als String aus.

Gib als Antwort den Befehl an, der str als String ausgibt.

> Tipp: Was braucht der String-Format-Identifier als Argument?

```bash
./compile.sh ex3
```

### [Aufgabe 4](./ex4.c):

Schreibe 3 als Integer in die target-Variable.

> Tipp: Entscheide dich für den richtigen Format Identifier und finde die Adresse.

Gib als Antwort den Befehl an, der str als String ausgibt.

```bash
./compile.sh ex4
```
