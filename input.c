#include <stdio.h>//キーボード入力、画面出力のため
#include <stdlib.h>//EXIT_SUCCESS マクロのため
#include <string.h>//strlen()関数のため

/*
	項目　金額　残高
	の収支のテキストファイルを作る
	プログラム
*/
int main (void)
{
	#define STRING_MAX 256
	
	// 変数宣言
	int sum = 0 ; // 残高初期値に0を代入
	char sum1[STRING_MAX];// 既存のファイルの最後の残高の文字列を格納する
	int value; //　日本語全角には対応できない、商品の値段を代入 支出のときのみマイナス判定をするため
			   //unsignedをつけてないためマイナス扱える
	char string[STRING_MAX]; //データを追加する前にそれ以前のデータの残高を算出
	char item[STRING_MAX]; // 商品名
	char Filename[STRING_MAX];// スラッシュを使ったファイル名を入力してもファイルは作成されない
								//アンダーバーならOK
	int i;
	FILE* fp;
	
	//ファイル名入力
	printf( "ファイル名を入力してください>>>");
	scanf( "%s", &Filename);
	
	//既存のファイルが存在した場合最後の行の残高をsumに代入
	fp = fopen( Filename, "r");
	while( fgets(string, STRING_MAX, fp ))
	{
		sscanf(string, "%*s %*s %s", &sum1); 
		sum = atoi( sum1);
	}
	fclose( fp );
	
	//　ファイルにデータを追加する処理
	fp = fopen( Filename, "a");
	do
	{
		printf( "項目を入力してくだい\n");
		scanf( "%s", &item );
		// 項目入力のときに半角数字の0を入力すると正常終了
		if( item[0] == '0' )
		{
			fclose( fp );
			printf( "プログラムを終了します\n");
			break;
		}
		printf( "値段を半角数字で入力してください。支出の場合は-マイナス記号を数字の前につけてください\n");
		scanf( "%d", &value);
		sum += value;
		// 項目は全角なら１０文字半角なら20文字,金額・残高は１０文字半角文字で整形
		fprintf(fp, " %20s\t\t\t\t%10d\t\t\t\t%10d\n", item, value, sum);
		printf( "Debug : %20s\t\t%10d\t%10d\n", item, value, sum);
	}while( 1 );
	fclose( fp );
	
	return EXIT_SUCCESS;
}