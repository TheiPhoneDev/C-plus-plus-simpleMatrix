#include <iostream>


using namespace std;

const int N=3;
const int M=4;

//prototipi
void caricaMatrice(int matrix[N][M]);
void visualizzaMatrice(int matrix[N][M]);
void maggioreMinoreRighe(int matrix[N][M]);
void maggioreMinoreColonne(int matrix[N][M]);
int Menu();


int main() {

  int scelta;
  int matrix[N][M];

  do {
    scelta=Menu();
    switch(scelta) {
      case 1:
        caricaMatrice(matrix);
      break;
      case 2:
        visualizzaMatrice(matrix);
      break;
      case 3:
        maggioreMinoreRighe(matrix);
      break;
      case 4:
        maggioreMinoreColonne(matrix);
      break;
      case 0:
        cout<<"Esci"<<endl;
      break;
      default:
        cout<<"Attenzione, scelta sbagliata!"<<endl;
      break;
    }
  }while(scelta!=0);

  
}

int Menu() {
  int scegli;
  cout<<"-----------------MENU-----------------"<<endl;
  cout<<"1-Carica matrice"<<endl;
  cout<<"2-Visualizza matrice"<<endl;
  cout<<"3-Trova valore massimo e minimo per ogni riga"<<endl;
  cout<<"4-Trova valore massimo e minimo per ogni colonna"<<endl;
  cout<<"0-Fine"<<endl;
  cout<<"Scegli un operazione: "<<endl;
  cin>>scegli;

  return scegli;
}


void caricaMatrice(int matrix[N][M]) {
  
  for(int i=0;i<N;i++) {
    for(int j=0;j<M;j++) {
      cout<<"Inserisci valore: "<<i+1<<" "<<j+1<<" : ";
      cin>>matrix[i][j];
    }
  }
  
}



void visualizzaMatrice(int matrix[N][M]) {

  cout<<endl;
  
  for(int i=0;i<N;i++) {
    for(int j=0;j<M;j++) {
      cout<<matrix[i][j]<<"\t";
    }
    cout<<endl;
  }

  cout<<endl;
  
}

void maggioreMinoreRighe(int matrix[N][M]) {
  int max;
  int min;
  for(int i=0;i<N;i++) {
    max=matrix[i][0];
    min=matrix[i][0];
    for(int j=0;j<M;j++) {
      if(matrix[i][j]>max) {
        max=matrix[i][j];
      }

      if(matrix[i][j]<min) {
        min=matrix[i][j];

      }
    }
    cout<<"Il valore massimo della riga"<<i+1<<" e' : "<<max<<endl;
    cout<<"Il valore minimo della riga"<<i+1<<" e' : "<<min<<endl;

  }
}


void maggioreMinoreColonne(int matrix[N][M]) {
  int max;
  int min;
  for(int i=0;i<M;i++) {
    max=matrix[0][i];
    min=matrix[0][i];
    for(int j=0;j<N;j++) {
      if(matrix[j][i]>max) {
        max=matrix[j][i];
      }

      if(matrix[j][i]<min) {
        min=matrix[j][i];
      }
    }
    cout<<"Il valore massimo della colonna"<<i+1<<" e' : "<<max<<endl;
    cout<<"Il valore minimo della colonna"<<i+1<<" e' : "<<min<<endl;

  }
}
