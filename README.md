Semplice programma per verificare la validita' delle firme per candidature lista
CCP.
Idea della struttura di una prima versione del programma:
1-Il nome e cognome di ogni iscritto corrisponde ad un oggetto della classe "Iscritti"
2-Tutti questi oggetti andranno creati prendendo i nomi e cognomi da un file.
I puntatori a questi oggetti andranno salvati in un vector (da valutare altri contenitori).
3-Stampare a schermo tutti i nominativi degli Iscritti.

NOTA: per lanciare il programma usare il comando
$ ./NomeEseguibile NomeFileListaIscritti

BUG: la memorizzazione dei nomi e cognomi deve essere fatta riga per riga in una
 unica stringa per evitare problemi con i doppi nomi. Anzi forse è meglio mettere
 degli underscore "_" direttamente nel file di testo sorgente...
