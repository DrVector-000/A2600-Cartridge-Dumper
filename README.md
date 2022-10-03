# Atari 2600 Cartridge Dumper

Il progetto nasce in un contesto più ampio di conservazione della tecnologia software e hardware dei primi anni dell'informatica applicata a dispositivi di gioco.

E' composto da Hardware e software studiati per il backup di cartucce di gioco della console Atari 2600.

La componente Hardware utilizza la scheda Arduino Nano (ATMega328P) come controllore e degli Shift Register (74HC595) per estenderne gli I/O; mentre la parte software è formata dal firmware caricato sull'Arduino ed un client Windows in C# per .Net Framework.

## Connettore
La prima fase del progetto consiste nel recuperare o riprodurre il connettore di inserimento della cartuccia del gioco.
Visto che il recupero di un connettore originale prevede la ricerca di una scheda madre guasta e la dissaldatura del pezzo necessario, operazione non semplice e piuttosto onerosa dal punto di vista del costo e del tempo, si è pensato di procedere alla riproduzione del connettore.
La riproduzione è risultata abbastanza semplice, nonostante la particolarità del pezzo, fortunatamente si tratta di un (quasi) comune connettore Edge Card 12x2 Pin; la configurazione di pin 12x2 non è fra le più comuni ma comunque reperibile.
Il supporto che accompagna la cartuccia è stato riprodotto in stampa 3D, cercando su internet si trovano vari modelli 3D pronti all'uso.

<p align="center" width="100%">
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Connettore_1.JPG" alt="Connettore" width="200"/>
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Connettore_2.JPG" alt="Connettore" width="200"/>
</p>
<br/>
<p align="center" width="100%">
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Connettore_3.JPG" alt="Connettore" width="200"/>
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Connettore_4.JPG" alt="Connettore" width="200"/>
</p>
<br/>

## Prototipo
![alt text](https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Prototipo_4.JPG?raw=true)

## Licenza
[MIT](https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/LICENSE)
