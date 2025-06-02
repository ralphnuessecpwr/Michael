 /*********************************************************************/
 /*                 INCLUDE - MEMBER F]R PGU996                */
 /*********************************************************************/

    %IF NOT_DEFINED ('PGU9971')
    %THEN %DO;

   /**
    * Geldbetrag (Dezimalzahl mit zwei Nachkommastellen und dreizehn
    * Vorkommastellen)
    */
   DEFINE ALIAS GELDBETRAG                   DEC FIXED (15,2);


   /**
    * Einfaches Datum in der Form YYYYMMDD, wobei YYYY das Jahr
    * (immer vierstellig), MM in [01,12] den Monat (numerisch)
    * und DD in [01,31] den Tag (des Monats) darstellt
    */
   DEFINE ALIAS DATUM                        CHARACTER (08);



   DEFINE STRUCTURE 1 TILGUNGSRATE,
       /**
        * Betrag
        */
       5 TILGUNGSBETRAG                             TYPE GELDBETRAG,

       /**
        * Datum
        */
       5 TILGUNGSDATUM                              TYPE DATUM;


    %INCLUDE PGU996I;

   /**
    * PL/I Demo Unterprogramm als Case f}r TotalTest
    *
    * §name       Sample 1 for TotalTest: Funktion
    *
    * Parameter:
    * §param in   Summand 1
    *             Die erste der zu addierenden Zahlen
    * §param in   Summand 2
    *             Die zweite der zu addierenden Zahlen
    *
    * §returns    Die Summe
    */
    DCL PGU9961         ENTRY (dec fixed(15,2), dec fixed(15,2))
                              returns (dec fixed(15,2));


   /**
    * PL/I Demo Unterprogramm als Case f}r TotalTest
    *
    * §name       Sample 2 for TotalTest: Funktion
    *
    * Parameter:
    * §param in   Summand 1
    *             Die erste der zu addierenden Zahlen
    * §param in   Summand 2
    *             Die zweite der zu addierenden Zahlen
    *
    * §returns    Die Summe
    */
    DCL PGU9962         ENTRY (bin fixed(31), bin fixed(31))
                              returns (bin fixed(31));

   /**
    * PL/I Demo Unterprogramm als Case f}r TotalTest
    *
    * §name       Sample 3 for TotalTest: Funktion mit Aliases
    *
    * Parameter:
    * §param in   Summand 1
    *             Die erste der zu addierenden Zahlen
    * §param in   Summand 2
    *             Die zweite der zu addierenden Zahlen
    *
    * §returns    Die Summe
    */
    DCL PGU9963         ENTRY (TYPE GELDBETRAG, TYPE GELDBETRAG)
                              returns (TYPE GELDBETRAG);


   /**
    * PL/I Demo Unterprogramm als Case f}r TotalTest
    *
    * §name       Sample 4 for TotalTest: Berechne Tilgungsplan
    *                             in alter Struktur
    *
    * Parameter:
    * §param in   Startdatum
    *             Die erste der zu addierenden Zahlen
    * §param in   Rate
    *             Die zweite der zu addierenden Zahlen
    *
    * §param out  Der Plan
    */
    DCL PGU9964         ENTRY (char(8), dec fixed(15,2),
                                  dec fixed(15,2), *);


   /**
    * PL/I Demo Unterprogramm als Case f}r TotalTest
    *
    * §name       Sample 5 for TotalTest: Berechne Tilgungsplan
    *                             mit def. stracture
    *
    * Parameter:
    * §param in   Startdatum
    *             Die erste der zu addierenden Zahlen
    * §param in   Rate
    *             Die zweite der zu addierenden Zahlen
    *
    * §param out  Der Plan
    */
    DCL PGU9965         ENTRY (TYPE DATUM, TYPE GELDBETRAG,
                        TYPE GELDBETRAG, (*) ctl TYPE TILGUNGSRATE);


    %END;