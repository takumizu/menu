#include <stdio.h>

int main( void )
{
	char mon[3],day[3],hour[3],min[3],store[64];
	char item[20][128];
	int i, cnt, cnt2, money[20];
	
	printf( "���H>>>" );
	gets( mon );
	printf( "���H>>>" );
	gets( day );
	printf( "�����H�H>>>" );
	gets( hour );
	printf( "�����H>>>" );
	gets( min );
	printf( "���X�̖��O�́H>>>" );
	gets( store );
	/* ���i�������[�v�œ��� */
	printf( "�w���������i�̐��́H");
	scanf("%d", &cnt);
	cnt2 = cnt;

	for( i = 0 ; cnt != 0 ; i++)
	{
		printf( "���i���́H�@�����炾�����H>>>");
		gets( item[i]);
		cnt--;
	}
	
	printf( "���Ȃ��̓��͂���������\n" );
	printf( "%s��%s��\n", mon,&day );
	printf( "�@�@%s��%s��\n", &hour, &min);
	printf( "\t%s\n", &store );
	for( i = 0; cnt2 != 0; i++)
	{
		printf( "\t\t%s\n", item[i]);
		cnt2--;
	}
	return 0;
}
	
	/*�@���i�������[�v�ŕ\�� */
	/* dentaku.c */

// #include <stdio.h>

// int main ()
// {
	/* �O���̎c������g�p�������z�������Ďc����\�����邾���̃v���O���� */
	/* ���Z�����邾���̍��ڂ����ꂽ�j */
// 	int value, sum, flag;
// 	CHANGE_MODE:;
	/* ���[�h�I�� */
// 	printf(" 0:�c���v�Z���[�h\n");
// 	printf(" 1:���Z���[�h\n");
// 	printf(" ���[�h����͂��Ă�������\n");
// 	scanf("%d", &flag);
// 	while (1)
// 	{
		/* �c���v�Z */
// 		if( flag == 0) {
// 			printf("�c���v�Z���[�h�ł� \n");
			/* �O���̎c������ */
// 			printf(" �O���̎c������͂��Ă�������>>>");
// 			scanf("%d", &sum);
// 			printf(" �a���������o�������z�́H>>>");
// 			scanf( "%d", &value);
// 			sum = sum + value;
// 			printf("���݂̎c����\t%d�~�ł��B\n",sum);
// 			while( value >= 0 )
// 			{
				/* ���i���� */
// 				printf("������g�����H>>> ");
// 				scanf("%d",&value);
				/* �c���̌v�Z */
// 				sum = sum - value;
				/* �c���̕\�� */
// 				printf("�c����\t%d �ł�\n",sum);
				/* �g�������z��0����͂���ƃv���O�����������I������ */
// 				if (value == 0) {
// 					break;
// 				}
// 			}
// 		}
// 		else if (flag == 1) {
// 			sum = 0;
// 			printf(" ���Z���[�h�ł��B\n");
// 			while( sum >= 0 ){
// 				printf( " ���Z�z��? >>> ");
// 				scanf( "%d", &value);
// 				sum = sum + value;
// 				printf(" ���v���z��\t %d�~�ł��B\n", sum);
// 				if ( value == 0 ) {
// 					break;
// 				}
// 			}
// 		}
		/*���[�h�ύX���邩�H*/
// 		printf(" ���[�h�ύX���܂����H\n");
// 		printf("���[�h�ύX����ꍇ�F�@0�@����͂��Ă�������\n");
// 		printf("�v���O�������I������ꍇ�F�@1�@����͂��Ă�������\n");
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
