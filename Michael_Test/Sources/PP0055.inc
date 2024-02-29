1/********************************************************************/
 /*                                                                  */
 /*                INCLUDE-MEMBER FUER PP0055                        */
 /*                  (SELECT_SUBSET)                                 */
 /*                                                                  */
 /* STRING_IN_HOCHKOMMA (PP0055): FUNKTION                           */
 /*                                                                  */
 /* DIE FUNKTION SETZT EINEN EINGEGEBENEN TEXT IN HOCHKOMMA.         */
 /*                                                                  */
 /*                                                                  */
 /*          BEISPIEL:                                               */
 /*                                                                  */
 /*          CREATOR_NAME = STRING_IN_HOCHKOMMA (CREATOR)            */
 /*                                                                  */
 /********************************************************************/

         %DCL STRING_IN_HOCHKOMMA                ENTRY;

 %STRING_IN_HOCHKOMMA: PROCEDURE (TEXT)
                       RETURNS   (CHARACTER);

 /********************************************************************/
 /*             P A R A M E T E R                                    */
 /********************************************************************/

         DCL TEXT                                CHAR;

 /********************************************************************/
 /*               B U I L T I N  -  F U N K T I O N E N              */
 /********************************************************************/

         DCL PARMSET                             BUILTIN;
         DCL SUBSTR                              BUILTIN;
         DCL LENGTH                              BUILTIN;

 /********************************************************************/
 /* PARAMETER "SET" MUSS ANGEGEBEN SEIN                              */
 /********************************************************************/

         IF ^PARMSET(TEXT)
         THEN DO;
           NOTE('FALSCHER AUFRUF FUER PRAEPROZESOR-PROZEDUR '     !!
                '"PP0055"',8);
           RETURN('/* UNGUELTIGER AUFRUF VON PROZEDUR "PP0055": ' !!
                  'PARAMETER "TEXT" FEHLT */');
         END;

 /********************************************************************/
 /*             ENTFERNEN DER HOCHKOMMATA                            */
 /********************************************************************/

         IF SUBSTR (TEXT,1,1) = ''''
         THEN
            TEXT = SUBSTR (TEXT,2);

         IF LENGTH (TEXT) > 0
         THEN DO;
            IF SUBSTR (TEXT,LENGTH(TEXT),1) = ''''
            THEN
               TEXT = SUBSTR (TEXT,1,LENGTH(TEXT) - 1);
         END;

 /********************************************************************/
 /*             TEXT IN HOCHKOMMA                                    */
 /********************************************************************/

         RETURN ('''' !! TEXT !! '''');

 END_STRING_IN_HOCHKOMMA: ; %END STRING_IN_HOCHKOMMA;