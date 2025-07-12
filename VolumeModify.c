#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int HEADER_SIZE = 44;
int main(int argc, char *const argv[])

{
    if(argc != 4)
    {
        printf("Usage:./SoundVolumeInc raw.wav Output.wav Factor\n");
    }

    // Open the wav file
    FILE *raw = fopen(argv[1], "rb");
    if(raw == NULL)
    {
        printf("Could not open raw(1)");
        return 1;
    }

    FILE *Output = fopen(argv[2], "wb");
    if(Output == NULL)
    {
        printf("Could not open Output(2)");
        return 1;
    }

    float factor = atof(argv[3]);

    // Copy Header file 
    uint8_t header[HEADER_SIZE];
    fread(header,HEADER_SIZE,1,raw);
    fwrite(header,HEADER_SIZE,1,Output);

    // Update the Output file
    int16_t temporary;
    while(fread(&temporary,sizeof(int16_t),1,raw) != 0)
    {
        temporary = temporary * factor;
        fwrite(&temporary,sizeof(int16_t),1,Output);
    }

    // Close the file
    fclose(raw);
    fclose(Output);

}