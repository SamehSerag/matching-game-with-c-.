#include <iostream>
#include <cstdlib> //rand
#include <ctime> //time of laptop
#include <vector>
using namespace std;

void fillArry(int arr[4][4]);
void coutArrys(char arr[4][4]);
void coutArry(int arr[4][4]);
void coutArryC(char arr[4][4]);



int main()
{
 int arr[4][4], x=0, y=0, m=0, n=0 , flag = 0;
 char arr2[4][4], index ,start;

while (true){
    cout << "if you want to play please enter s or enter q  to exit " << endl ;
    cin >> start ;
    if(start == 's'){
        fillArry(arr);
        coutArrys(arr2);
        coutArry(arr);


        while (true){
        cout << endl << "Please choose two elements to be match  " << endl ;
        cin >> x >> y >> m >> n ;

        if (arr[x-1][y-1] == arr[m-1][n-1]){

            index = arr[x-1][y-1] + '0';
            cout <<"index 1= "<< arr[x][y] << endl;
            arr2[x-1][y-1] = index  ;
            arr2[m-1][n-1] = index  ;

            coutArryC(arr2);
            cout << endl  <<  endl << endl << endl << endl ;
            flag ++ ;
            if (flag == 8){
                cout << "Great you have won " << endl ;
                break ;
            }



        }
        else {
            char index2 = '*' ;
           // index = arr2[x][y] ;
           // index2 = arr2 [m][n] ;
                    cout <<"index 2 = "<< index << endl;

            arr2[x-1][y-1] = arr[x-1][y-1] + '0' ;
            arr2[m-1][n-1] = arr[m-1][n-1] + '0' ;

            cout << endl  <<  endl << endl << endl << endl ;
            coutArryC(arr2);

            arr2[x-1][y-1] = index2 ;
            arr2[m-1][n-1] = index2  ;


        }
        }
    }
    else
        break ;
}
            return 0;
}



void fillArry( int arr[4][4]){
    vector <int> vec  ;
    int indx = 0 ;
    char indx2;

    for (int j =0 ; j <2 ; j++){
        for (int i =0 ; i <8 ; i++){
            vec.push_back(i+1);
           // cout << "Vectot " <<i<<" = " << vec[i] << " " << endl;
            }
    }

    srand(time(0)) ;
    for (int i = 0; i<4; i++){
        for (int j =0; j<4; j++){
            indx = 1+rand()% vec.size()-1 ;
           // cout <<"index ="<<indx << endl ;
            //cout << "vector in arry = "<< vec[indx] <<endl ;
            arr[i][j] = vec[indx]   ;
          //  cout << "the arr 1 = " << arr[i][j] << endl ;
            vec.erase(vec.begin() + indx); //feha m4kla w lma b3ml comment by4t8l
                //vec.remove(arr[i][j]);


        }


    }
vec.clear() ;
}
void coutArrys(char arr[4][4]){
    cout <<"   " << "1 2 3 4 " << endl <<" ---------"<< endl;
    for (int i = 0; i<4; i++){
        cout << i+1 << "|" << " ";
        for (int j =0; j<4; j++){
           // cout << arr[i][j] << " ";
           arr[i][j] = '*';
           cout << arr[i][j] << " " ;
        }
        cout << endl;
    }


}

void coutArry(int arr[4][4]){
    cout <<"   " << "1 2 3 4 " << endl <<" ---------"<< endl;
    for (int i = 0; i<4; i++){
        cout << i+1 << "|" << " ";
        for (int j =0; j<4; j++){
           cout << arr[i][j] << " " ;
        }
        cout << endl;
    }


}

void coutArryC(char arr[4][4]){
    cout <<"   " << "1 2 3 4 " << endl <<" ---------"<< endl;
    for (int i = 0; i<4; i++){
        cout << i+1 << "|" << " ";
        for (int j =0; j<4; j++){
           cout << arr[i][j] << " " ;
        }
        cout << endl;
    }


}
