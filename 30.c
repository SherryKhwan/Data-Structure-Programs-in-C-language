#include <stdio.h>
int n, top = -1;
int stack[50];
// Stack DSA project (Media player App)

void push_next(int s){

  if(top != -1 && s == -1){
    printf("This is the last song of the playlist!!\n");
  }
  else if (s == -1){
    printf("Playlist is Empty.\n");
  }
  else{
    top++;
    stack[top] = s;
  }
}

int pop_previous(){

  int item;
  if(top < 1){
    printf("\nNot Available!\n");
     return 0;
  }
  else{
    top--;
    item = stack[top];
    return item;
  }
}

void top_play(){
  int s;
  if(top != -1){
    s = stack[top];
    printf("Now playing Song %d. \n",s);
  }
}

void display(int stack[]){
  int i;
  for(i=top; i>=0 ; i--){ 
    printf("%d",stack[i]);
    printf("\t");
  }
}

void option_3(int playlist[]){
  if (playlist[0] == -1){
    printf("Playlist is Empty.\n");
  }
  else{
    int l, ch, k = 0;
    l = playlist[k];
    push_next(l);
    while (ch != 3){
      top_play();
      printf("1) Previous   2) Next     3) End\nAnswer: ");
      scanf("%d", &ch);
      if (ch == 1){
        l = pop_previous();
        k--;
      }
      else if (ch == 2){
        k++;
        l = playlist[k];
        push_next(l);
      }
    }
  }
}

int main() {
  int nu, k;
  int playlist[30];
  for (int c = 0; c < 30; c++){
    playlist[c] = -1;
  }
  printf("Instructions: The application I created is a media player similar to VLC media player. We can add a playlistt and then play it. The data structures, I used in this application is Stack that I applied on previous and next buttons, when a playlist is being played.\n");
  while (nu != 6){
    printf("\nChoose an action:  \n1) Create Playlist   2) View Playlist  \n3) Play Playlist     4) Search Playlist \n5) Delete Playlist   6) End Program\nEnter any Number: ");
    scanf("%d", &nu);
    if (nu == 1){
      printf("Enter Number of Songs you want to add in the playlist: ");
      scanf("%d", &k);
      for (int i = 0; i < k; i++){
        playlist[i] = i + 1;
      }
      printf("%d songs has been successfully added to the playlist.\n", k);
    }
    else if (nu == 2){
      if (playlist[0] == -1){
        printf("Not Available..!\n");
      }
      else{
        printf("\nPlaylist:\n=========\n");
        for (int i = 1; i <= k; i++){
          printf("Song %d\n", i);
        }
      }
    }
    else if (nu == 3){
      option_3(playlist);
     
    }
    else if (nu == 4){
      if (playlist[0] == -1){
        printf("Not Available..!\n");
      }
      else{
        int ts;
        printf("Enter the song you wanna search in the playlist: Song ");
        scanf("%d", &ts);
        int i, c, size,find,f,l,m;
        c = 0;
        while (playlist[c] != -1){
          c++;
        }
        f = 0;
        l = c;
        while (f<=l){ 
          m = (f + l) / 2;
          if(playlist[m]< ts){
            f = m + 1;
          }
          else if(playlist[m] == ts){
            printf("Present!");
            break;
          }
          else{
          l = m - 1;
          }
        }
        if(f > l){
        printf("Absent.\n");
        }
      }
    }
    else if (nu == 5){
      if (playlist[0] == -1){
        printf("Not Available..!\n");
      }
      else{
        for (int c = 0; c < 30; c++){
        playlist[c] = -1;
        }
        printf("Playlist has been successfully deleted..!\n");
      }
    }
  }
}
