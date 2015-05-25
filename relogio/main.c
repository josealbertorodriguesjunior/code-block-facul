#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int SEGUNDO , MINUTO , HORA ;


    for (SEGUNDO = 1 ; SEGUNDO < 60 ; SEGUNDO ++)
    {

        sleep(0);
        fflush(stdout);
        printf("\n %d:%d:%d", HORA, MINUTO, SEGUNDO);



            if (SEGUNDO == 59)
            {
                while (MINUTO <59)
                {
                    sleep(0);
                    fflush(stdout);
                    MINUTO  ++;
                    SEGUNDO = 0;

                        if (MINUTO == 59)
                        {
                            while (HORA <23)
                            {
                                sleep(0);
                                fflush(stdout);
                                HORA ++;
                                MINUTO = 0;
                                SEGUNDO = 0;
                            }
                        }
                }


            }

    }

    return 0;
}
