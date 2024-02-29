  /********************************************************************/
  /*                                                                  */
  /*                 INCLUDE - MEMBER FUER PP0057                     */
  /*                         (NOT_DEFINED)                            */
  /*                                                                  */
  /*                                                                  */
  /********************************************************************/

         %DCL #PP0057_MEMBER_STRING#       CHAR;

         %#PP0057_MEMBER_STRING# = '';
         %DEACTIVATE #PP0057_MEMBER_STRING#;

         %DCL NOT_DEFINED                  ENTRY;

 %NOT_DEFINED: PROCEDURE (MEMBER)
              RETURNS   (CHARACTER);

 /*------------------------------------------------------------------*/
 /*                P A R A M E T E R                                 */
 /*------------------------------------------------------------------*/

         DCL MEMBER                               CHAR;

 /*------------------------------------------------------------------*/
 /*               B U I L T I N  -  F U N K T I O N E N              */
 /*------------------------------------------------------------------*/

         DCL INDEX                                BUILTIN;

 /*------------------------------------------------------------------*/
 /*                    VERARBEITUNG                                  */
 /*------------------------------------------------------------------*/

         DCL MEMBER_B                             CHAR;

         MEMBER_B = ' ' !! MEMBER !! ' ';

         IF INDEX (#PP0057_MEMBER_STRING#, MEMBER_B) > 0
         THEN DO;
            RETURN ( '0' );
         END;
         ELSE DO;
            #PP0057_MEMBER_STRING#
              = #PP0057_MEMBER_STRING# !! MEMBER_B;
            RETURN ( '1' );
         END;

 END_NOT_DEFINED: ; %END NOT_DEFINED;