#include <stdio.h>

int main( void )
{
	char mon[3],day[3],hour[3],min[3],store[64];
	char item[20][128];
	int i, cnt, cnt2, money[20];
	
	printf( "月？>>>" );
	gets( mon );
	printf( "日？>>>" );
	gets( day );
	printf( "何時？？>>>" );
	gets( hour );
	printf( "何分？>>>" );
	gets( min );
	printf( "お店の名前は？>>>" );
	gets( store );
	/* 商品名をループで入力 */
	printf( "購入した商品の数は？");
	scanf("%d", &cnt);
	cnt2 = cnt;

	for( i = 0 ; cnt != 0 ; i++)
	{
		printf( "商品名は？　いくらだった？>>>");
		gets( item[i]);
		cnt--;
	}
	
	printf( "あなたの入力した文字は\n" );
	printf( "%s月%s日\n", mon,&day );
	printf( "　　%s時%s分\n", &hour, &min);
	printf( "\t%s\n", &store );
	for( i = 0; cnt2 != 0; i++)
	{
		printf( "\t\t%s\n", item[i]);
		cnt2--;
	}
	return 0;
}
	
	/*　商品名をループで表示 */
	/* dentaku.c */

// #include <stdio.h>

// int main ()
// {
	/* 前日の残金から使用した金額を引いて残高を表示するだけのプログラム */
	/* 加算をするだけの項目もいれた） */
// 	int value, sum, flag;
// 	CHANGE_MODE:;
	/* モード選択 */
// 	printf(" 0:残高計算モード\n");
// 	printf(" 1:加算モード\n");
// 	printf(" モードを入力してください\n");
// 	scanf("%d", &flag);
// 	while (1)
// 	{
		/* 残高計算 */
// 		if( flag == 0) {
// 			printf("残高計算モードです \n");
			/* 前日の残高入力 */
// 			printf(" 前日の残高を入力してください>>>");
// 			scanf("%d", &sum);
// 			printf(" 預金を引き出した金額は？>>>");
// 			scanf( "%d", &value);
// 			sum = sum + value;
// 			printf("現在の残高は\t%d円です。\n",sum);
// 			while( value >= 0 )
// 			{
				/* 価格入力 */
// 				printf("いくら使った？>>> ");
// 				scanf("%d",&value);
				/* 残高の計算 */
// 				sum = sum - value;
				/* 残高の表示 */
// 				printf("残高は\t%d です\n",sum);
				/* 使った金額に0を入力するとプログラムを強制終了する */
// 				if (value == 0) {
// 					break;
// 				}
// 			}
// 		}
// 		else if (flag == 1) {
// 			sum = 0;
// 			printf(" 加算モードです。\n");
// 			while( sum >= 0 ){
// 				printf( " 加算額は? >>> ");
// 				scanf( "%d", &value);
// 				sum = sum + value;
// 				printf(" 合計金額は\t %d円です。\n", sum);
// 				if ( value == 0 ) {
// 					break;
// 				}
// 			}
// 		}
		/*モード変更するか？*/
// 		printf(" モード変更しますか？\n");
// 		printf("モード変更する場合：　0　を入力してください\n");
// 		printf("プログラムを終了する場合：　1　を入力してください\n");
// 		scanf("%d",&flag);
// 		if (flag == 0)
// 		{
// 			goto CHANGE_MODE;
// 		}
// 		else
// 		{
// 			break;
// 		}
// 	}
// 	return 0;
// }
