//
//  main.c
//  assignment8-1a
//  Copyright © 2020 Yunji Choe. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME_MAX 1024
int pgm_read(char *fname, unsigned char*pgm_image, int dimx, int dimy)
{ /* Read in a grayscale image as a PGM file. */
  FILE *in_file;
  int levels, numpix, i;
  unsigned char fmt1, fmt2;

  in_file = fopen(fname, "rb");
  if (!in_file) {
      fprintf(stderr, "\nFile %s does not exist\n\n", fname);
      exit(8);
  }
  fmt1 = fgetc(in_file);
  fmt2 = fgetc(in_file);

  if ((fmt1 != 'P') || (fmt2 != '5')) {
       fprintf(stderr, "\n Cannot read file format \n\n");
       fclose(in_file);
       exit(8);
   }
  fscanf(in_file, "\n%d %d\n%d\n", &dimx, &dimy, &levels);

  if ((dimx <= 0) || (dimy <= 0) || (dimx > 10000) ||
      (dimy > 10000) || (levels < 0) || (levels > 255)) {
      fprintf(stderr, "\n Invalid file format \n\n");
      fclose(in_file);
      exit(8);
  }
    
  /* PGM header was all OK; proceed to load in image */
    
  numpix = dimx * dimy;
  pgm_image = (unsigned char *) malloc(numpix);

    for (i = 0; i < numpix; i++){
        if (feof(in_file)) /* Fill with black if it is too short */
            (pgm_image)[i] = (unsigned char) 0;
        else
            (pgm_image)[i] = (unsigned char) fgetc(in_file);
    }
  fclose(in_file);
  return (0);        /* Success */
}



int pgm_write (unsigned char *pgm_image, int dimx, int dimy, char *fname)
{
    FILE *out_file = fopen(fname, "wb");
    int i;
    
    if (!out_file){
        fprintf(stderr, "\nFile %s should not be written\n\n", fname);
        exit(8); /*Failure*/
    }
    
    
    fprintf(out_file, "P5\n %d %d\n %d\n", dimx, dimy, 255);
    for (i = 0; i < dimx*dimy; i++){
        pgm_image[i] = 255 - pgm_image[i];
        fputc(pgm_image[i], out_file);
    }
    
    fclose(out_file);
    return(0);
}



int main() {
    int d_x;
    int d_y;
    unsigned char * testpgm = NULL;
    char filename1[1000];
    char filename2[1000];
    printf("File 1: ");
    scanf("%s", filename1);
    printf("\nFile 2: ");
    scanf("%s", filename2);
    
    pgm_read(filename1, testpgm, d_x, d_y);
    pgm_write(testpgm, d_x, d_y, filename2);
    

    



    return 0;
}

