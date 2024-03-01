 /*********************************************************************/
 /*                 INCLUDE - MEMBER F]R PGU996                       */
 /*********************************************************************/

   DCL TOTAL_TEST_SUMME   GENERIC (
          PGU9961 WHEN (dec fixed(15, 2), dec fixed(15, 2)),
          PGU9962 WHEN (bin fixed(31), bin fixed(31))
      );

   DCL TOTAL_TEST_SUMME_TYPE   GENERIC (
          PGU9963 WHEN (TYPE GELDBETRAG, TYPE GELDBETRAG)
      );

   DCL TOTAL_TEST_TILGUNGSPLAN  GENERIC (
          PGU9964 WHEN (char, dec fixed(15, 2), dec fixed(15, 2), (*))
      );

   DCL TOTAL_TEST_TILGUNGSPLAN_TYPE  GENERIC (
          PGU9965 WHEN (TYPE DATUM, TYPE GELDBETRAG,
                               TYPE GELDBETRAG, (*) )
      );

