       %DCL PTS_MACRO CHAR;
       %PTS_MACRO = '99 PTS_H CHAR(1) INIT(''FF''X),99 PTS_N CHAR(12)';

       %DCL CSDT_DATE_8 CHAR;
       %CSDT_DATE_8 = 'CHAR(8)';

       %DCL CSDT_DATE_10 CHAR;
       %CSDT_DATE_10 = 'CHAR(10)';

       %DCL CSDT_TIMESTAMP CHAR;
       %CSDT_TIMESTAMP = 'CHAR(26)';

       %DCL USER_PACKAGE_SYNTAX          CHAR;

         %INCLUDE PP0055;
         %INCLUDE PP0057;
         %INCLUDE UMG;

         %DCL PLI_BEZEICHNER                     CHAR;
         %PLI_BEZEICHNER = ' ';

         %DCL PLI_BEZEICHNER2                    CHAR;
         %PLI_BEZEICHNER2 = ' ';

         %DCL PLI_STORAGE_CLASS                  CHAR;
         %PLI_STORAGE_CLASS = ' ';

         %DCL PLI_ENDE_ZEICHEN                   CHAR;
         %PLI_ENDE_ZEICHEN  = ' ';

         %DCL PLI_DIMENSION                      CHAR;
         %PLI_DIMENSION  = '(*)';


         %DCL PLI_ELEMENT1                       CHAR;
         %PLI_ELEMENT1 = ' ';

         %DCL PLI_ELEMENT2                       CHAR;
         %PLI_ELEMENT2 = ' ';

         %DCL PLI_ELEMENT3                       CHAR;
         %PLI_ELEMENT3 = ' ';

         %DCL PLI_ELEMENT4                       CHAR;
         %PLI_ELEMENT4 = ' ';

         %DCL PLI_ELEMENT5                       CHAR;
         %PLI_ELEMENT5 = ' ';

         %DCL PLI_ATTRIBUT1                      CHAR;
         %PLI_ATTRIBUT1 = ' ';

         %DCL PLI_ATTRIBUT2                      CHAR;
         %PLI_ATTRIBUT2 = ' ';

         %DCL #SACHGEBIET#                       CHAR;
         %#SACHGEBIET# = '#SG#';

         %DCL OPERATING_SYSTEM                   CHAR;
         %OPERATING_SYSTEM = 'OS390';