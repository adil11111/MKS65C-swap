#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int ray[10];
  int * rp=ray;
  int i;
  int j,k,l;
  srand(time(NULL));
  
    
  for (int i=0;i<9;i++){
    ray[i]=rand();
  }
  ray[9]=0;
  
  printf("first array: [");
  for (int j=0;j<10;j++){
    printf("%d,",ray[j]);
    //printf("%d\n",*rp);
    //rp++;
  }
  printf("]\n");

  int newR[10];
  int * np=newR;
  rp+=9;
  
  for(int k=0;k<10;k++){
    //printf("%d\n",*rp);
    *(newR+k)=*rp;
      rp--;
  }
  
  printf("second array: [");
  for (int l=0;l<10;l++){
    printf("%d,",newR[l]);
    //printf("%d\n",*rp);
    //rp++;
  }
  printf("]\n");

  /*
  for(int i=0;i<10;i++){
    ray[i]=i+100;
  }
    printf("first:%d\n",*ray);
    printf("%d\n",*rp);

    rp++;
    printf("second:%d\n",*ray);
    printf("second:%d\n",*(ray+1));
    printf("%d\n",ray[0]);
    printf("%d\n",ray[1]);
    printf("%d\n",ray[2]);
    printf("%d\n",*rp);
  */


  

  return 0;
}
