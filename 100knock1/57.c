#include <stdio.h>
/*
まず受験者数を入力させ、
次に受験者数ごとに英語、数学、国語の点数をスペースで区切って入力させる
（具体的な入力方法は下記のscanfの使い方の説明、
および入力データの中身を見よ）。
入力が終了したら、
英語、数学、国語の平均点、
および各受験生の合計点を計算して表示するプログラムを作成せよ。
受験者数は100人までとする。
なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、
入力のためのメッセージは不要である（実行例を参照すること）。

*/
int main(){
        int math = 0;
        int eng = 0;
        int lang = 0;
        int fig = 0;
        int i = 0;
        int Mtotal = 0;
        int Etotal = 0;
        int Ltotal = 0;
        int Alltotal = 0;
        int Eave = 0;
        int Mave = 0;
        int Lave = 0;
    
        printf("受験者を入力してください。\n");
        scanf("%d",&fig);

        for(i = 0; i < fig; i++){
        printf("各受験生の点数を入力してください\n");
        printf("左から英語、数学、国語の点数を入力してください。\n");
        scanf("%d %d %d", &eng, &math, &lang);
        Etotal += eng;
        Mtotal += math;
        Ltotal += lang; 
        Alltotal = eng + math + lang;
        printf("個人の三教科の合計%d\n",Alltotal);
        }

        
                Eave =  Etotal / fig;
                Mave = Mtotal / fig;
                Lave = Ltotal / fig;
                printf("英語平均%d\n",Eave);
                printf("国語平均%d\n",Mave);
                printf("国語の平均%d\n",Lave);
        

}
