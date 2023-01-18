# Atari 2600 Cartridge Dumper

Il progetto nasce in un contesto più ampio di conservazione della tecnologia software e hardware dei primi anni dell'informatica applicata a dispositivi di gioco.

E' composto da Hardware e software studiati per il backup di cartucce di gioco della console Atari 2600.

La componente Hardware utilizza la scheda Arduino Nano (ATMega328P) come controllore e degli Shift Register (74HC595) per estenderne gli I/O; mentre la parte software è formata dal firmware caricato sull'Arduino ed un client Windows in C# per .Net Framework.

<br/>

## Connettore
La prima fase del progetto consiste nel recuperare o riprodurre il connettore di inserimento della cartuccia del gioco.

Visto che il recupero di un connettore originale prevede la ricerca di una scheda madre guasta e la dissaldatura del pezzo necessario, operazione non semplice e piuttosto onerosa dal punto di vista del costo e del tempo, si è pensato di procedere alla riproduzione del connettore.

La riproduzione è risultata abbastanza semplice, nonostante la particolarità del pezzo, fortunatamente si tratta di un (quasi) comune connettore Edge Card 12x2 Pin; la configurazione di pin 12x2 non è fra le più comuni ma comunque reperibile.

Il supporto che accompagna la cartuccia è stato riprodotto in stampa 3D, cercando in rete si trovano vari modelli 3D pronti all'uso.

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

## Pinout della cartuccia

Per poter leggere la ROM presente nella cartuccia di gioco dobbiamo conoscere la piedinatura della scheda. Come si può vedere dall'immagine seguente la scheda gestisce i seguenti pin di ingresso/uscita per pilotare la lettura della ROM presente al suo interno:

	1  | A7		13 | D3
	2  | A6		14 | D4
	3  | A5		15 | D5
	4  | A4		16 | D6
	5  | A3		17 | D7
	6  | A2		18 | A12
	7  | A1		19 | A10
	8  | A0		20 | A11
	9  | D0		21 | A9
	10 | D1		22 | A8
	11 | D2		23 | +5V 
	12 | GND	24 | GND

<p align="center" width="100%">
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/A2600%20Cartridge%20Pinout.jpg" alt="Cartridge pinout" width="400"/>
</p>
<br/>

## Prototipo
Vista la quantità di ingressi ed uscite necessarie verranno utilizzati due shift register 74HC595 a 8 bit per pilotare l'indirizzamento in uscita. Mentre utillizzeremo un Arduino Nano come controllore e per acquisire gli 8 bit di dati in ingresso.

Di seguito lo schema hardware:

<p align="center" width="100%">
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Docs/Atari%202600%20Cartridge%20Dumper%20-%20Schema.jpg" alt="Schema" width="600"/>
</p>
<br/>

Il prototipo viene costruito saldando i componenti su basetta millefori.

<p align="center" width="100%">
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Prototipo_4.JPG" alt="Connettore" width="200"/>
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/Prototipo_5.JPG" alt="Connettore" width="200"/>
</p>
<br/>

## Firmware & Software

<br/>

## Ingegnerizzazione

<p align="center" width="100%">
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/SchedaSopra.JPG" alt="Connettore" width="200"/>
	<img src="https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/Images/SchedaSotto.JPG" alt="Connettore" width="200"/>
</p>
<br/>

## Licenza
[MIT](https://github.com/DrVector-000/A2600-Cartridge-Dumper/blob/main/LICENSE)
