#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	#define STRING_MAX 256
	// 変数宣言
	int sum = 0 ; // 残高初期値に0を代入
	char value[10]; //　商品の値段を代入 支出のときのみマイナス判定をするため文字列
	int data; //文字列valueを数字にしたデータを格納
	char item[STRING_MAX]; // 商品名
	char Filename[FILENAME_MAX]; //FILENAME_MAXはその処理系で扱える最大文字数のファイル名をC言語でマクロ定義している
	FILE*fp;
	
	// フィアル名の入力
	printf("これから扱うファイル名を入力してください>>");
	scanf ( "%s", Filename);
	//　ファイルオープン（ファイルの追加出力モード）、ファイル作成
	if ( (fp = fopen(Filename, "w" )) == NULL )
	{
		printf( "ファイルが作成できませんでした\n");
		printf( "プログラムを終了します。\n");
		exit ( EXIT_FAILURE );
	}
	// ファイルの終端か確認
      // この処理は後回し
	// ファイルがなかったら ファイル名を入力して新規作成
	　　// この処理は後回し
	// 残高の入力
	printf (" 残高を入力してください\n ");
	fgets( value, 9, stdin);
	value[(strlen(value)-1)] = '\0';
	data = atoi(value);
	fprintf(fp, "残高\t\t%d\n", value);
	// 商品名入力
	printf( "商品名を入力してください。\n");
	fgets(item,STRING_MAX,stdin);
	item[(strlen(item)-1)] = '\0';
	// 値段入力
	printf( "値段を入力してください\n");
	printf( "支出の場合は数字の前に'-'（マイナス符号）をつけてください\n"）;
	printf( "例；　-300000);
	fgets( value, 10, stdin);
	// もし値段の最初に-または－（全角半角のマイナス）がついていたら引き算
	if ( value[0] == '-')
	{
		for( i = 0; i <= 9; i++)
		{
			value[i] = value[i+1];
		}
		data = atoi(value);
		sum -= data;
	} else //　それ以外は足し算
	{
		data = atoi(value);
		sum += value;
	}
	//　商品名と値段と残高表示
	printf(fp,"%s\t\t%d\n"item, data)
	//　ファイル出力
	fprintf(fp,"%s\t\t%d\n"item, data)
	// もし商品名に０（全角または半角が入力されたらループを抜ける
	　　//あとで処理
	//　もしEOFまたはエラーで返ってきた場合は
	　　//あとで処理
	//　新しいファイルを作るエラーメッセージ
	　　//あとで処理
	fclose(fp);
	return EXIT_SUCCESS
}