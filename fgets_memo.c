// fgets を利用して書いてみる
// 入力される文字数の制限ができる（scanf関数だと指定以上の入力はエラー）
// 空白が含まれていても読み込める
// -> scanf関数で起こり得るエラーを防ぐことができる

// 文字列の末端を表す、特殊文字'/0'に関しては自動で書き込んでくれる
// 

// fgets関数の仕様
// 「fgets」は、Enterを押すまでの内容（サイズ範囲内）がそのまま入力される
// 改行コード「\n」自体も入力される


// fgets関数のサンプル
#include<stdio.h>

int main(){
    char sMojiretu[10];
	
	// case 1
    printf("9文字以内で文字列を入力して下さい\n");

	// 引数, 「9文字 + \n」, stdin:キーボードからの入力の意味
    fgets(sMojiretu, 10, stdin);
    printf("入力された文字列は「%s」です", sMojiretu);

    return 0;

	// 例1
	// 入力 : abcd efghiiiii
	// 出力 : 入力された文字列は「abcd efgh」です

	// 例2
	// 入力 : abcd efg'\n'
	// 出力 : 入力された文字列は「abcd efg
	//		  」です

}