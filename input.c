#include <stdio.h>//�L�[�{�[�h���́A��ʏo�͂̂���
#include <stdlib.h>//EXIT_SUCCESS �}�N���̂���
#include <string.h>//strlen()�֐��̂���

/*
	���ځ@���z�@�c��
	�̎��x�̃e�L�X�g�t�@�C�������
	�v���O����
*/
int main (void)
{
	#define STRING_MAX 256
	
	// �ϐ��錾
	int sum = 0 ; // �c�������l��0����
	char sum1[STRING_MAX];// �����̃t�@�C���̍Ō�̎c���̕�������i�[����
	int value; //�@���{��S�p�ɂ͑Ή��ł��Ȃ��A���i�̒l�i���� �x�o�̂Ƃ��̂݃}�C�i�X��������邽��
			   //unsigned�����ĂȂ����߃}�C�i�X������
	char string[STRING_MAX]; //�f�[�^��ǉ�����O�ɂ���ȑO�̃f�[�^�̎c�����Z�o
	char item[STRING_MAX]; // ���i��
	char Filename[STRING_MAX]; // �t�@�C������������
							   // WindowsOS�Ńt�@�C�����̕����s�s�g���Ȃ��������g�����t�@�C��������͂��Ă��t�@�C���͍쐬����Ȃ�
							   // �A���_�[�o�[�Ȃ�OK
	int i;
	FILE* fp;
	
	//�t�@�C��������
	// printf( "�t�@�C��������͂��Ă�������>>>");
	// scanf( "%s", &Filename);

	/* ����t�@�C��������͂���͖̂ʓ|�Ȃ̂�
	�@�@ ����1��t�@�C�������Œ�ɂ���
		�ȉ��̓R���p�C���G���[�ƂȂ�
	char Filename[STRING_MAX];
	
	Filename[STRING_MAX] = "2018_09.txt";
	�����Filename[255]��
	*/
	strcpy( Filename, "2018_09.txt");
	//�����̃t�@�C�������݂����ꍇ�Ō�̍s�̎c����sum�ɑ��
	// �t�@�C����ǂݍ��݃��[�h�ŃI�[�v��
	fp = fopen( Filename, "r");
	// fgets �߂�l �t�@�C���|�C���^fp�����s�܂���STRING_MAX�o�C�g�ǂݍ����
	// ���̐擪�A�h���X��Ԃ�
	// �t�@�C���̏I�[�A�܂��̓G���[���ɂ�NULL�i\0)��Ԃ�
	while( fgets(string, STRING_MAX, fp ))
	{
		sscanf(string, "%*s %*s %s", &sum1); 
		sum = atoi( sum1);
	}
	fclose( fp );
	
	//�@�t�@�C���Ƀf�[�^��ǉ����鏈��
	fp = fopen( Filename, "a");
	do
	{
		printf( "���ڂ���͂��Ă����� >>> ");
		scanf( "%s", &item );
		// ���ړ��͂̂Ƃ��ɔ��p������0����͂���Ɛ���I��
		if( item[0] == '0' )
		{
			fclose( fp );
			printf( "�v���O�������I�����܂�\n");
			break;
		}
		printf( "���z����͂��Ă�������>>> ");
		scanf( "%d", &value);
		sum += value;
		// ���ڂ͑S�p�Ȃ�P�O�������p�Ȃ�20����,���z�E�c���͂P�O�������p�����Ő��`
		fprintf(fp, " %-20s\t\t\t\t%10d\t\t\t\t%10d\n", item, value, sum);
		printf( "Debug : %20s\t\t%10d\t%10d\n", item, value, sum);
	}while( 1 );
	fclose( fp );
	
	return EXIT_SUCCESS;
}