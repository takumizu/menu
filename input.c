#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	#define STRING_MAX 256
	// �ϐ��錾
	int sum = 0 ; // �c�������l��0����
	char value[10]; //�@���i�̒l�i���� �x�o�̂Ƃ��̂݃}�C�i�X��������邽�ߕ�����
	int data; //������value�𐔎��ɂ����f�[�^���i�[
	char item[STRING_MAX]; // ���i��
	char Filename[FILENAME_MAX]; //FILENAME_MAX�͂��̏����n�ň�����ő啶�����̃t�@�C������C����Ń}�N����`���Ă���
	FILE*fp;
	
	// �t�B�A�����̓���
	printf("���ꂩ�爵���t�@�C��������͂��Ă�������>>");
	scanf ( "%s", Filename);
	//�@�t�@�C���I�[�v���i�t�@�C���̒ǉ��o�̓��[�h�j�A�t�@�C���쐬
	if ( (fp = fopen(Filename, "w" )) == NULL )
	{
		printf( "�t�@�C�����쐬�ł��܂���ł���\n");
		printf( "�v���O�������I�����܂��B\n");
		exit ( EXIT_FAILURE );
	}
	// �t�@�C���̏I�[���m�F
      // ���̏����͌��
	// �t�@�C�����Ȃ������� �t�@�C��������͂��ĐV�K�쐬
	�@�@// ���̏����͌��
	// �c���̓���
	printf (" �c������͂��Ă�������\n ");
	fgets( value, 9, stdin);
	value[(strlen(value)-1)] = '\0';
	data = atoi(value);
	fprintf(fp, "�c��\t\t%d\n", value);
	// ���i������
	printf( "���i������͂��Ă��������B\n");
	fgets(item,STRING_MAX,stdin);
	item[(strlen(item)-1)] = '\0';
	// �l�i����
	printf( "�l�i����͂��Ă�������\n");
	printf( "�x�o�̏ꍇ�͐����̑O��'-'�i�}�C�i�X�����j�����Ă�������\n"�j;
	printf( "��G�@-300000);
	fgets( value, 10, stdin);
	// �����l�i�̍ŏ���-�܂��́|�i�S�p���p�̃}�C�i�X�j�����Ă���������Z
	if ( value[0] == '-')
	{
		for( i = 0; i <= 9; i++)
		{
			value[i] = value[i+1];
		}
		data = atoi(value);
		sum -= data;
	} else //�@����ȊO�͑����Z
	{
		data = atoi(value);
		sum += value;
	}
	//�@���i���ƒl�i�Ǝc���\��
	printf(fp,"%s\t\t%d\n"item, data)
	//�@�t�@�C���o��
	fprintf(fp,"%s\t\t%d\n"item, data)
	// �������i���ɂO�i�S�p�܂��͔��p�����͂��ꂽ�烋�[�v�𔲂���
	�@�@//���Ƃŏ���
	//�@����EOF�܂��̓G���[�ŕԂ��Ă����ꍇ��
	�@�@//���Ƃŏ���
	//�@�V�����t�@�C�������G���[���b�Z�[�W
	�@�@//���Ƃŏ���
	fclose(fp);
	return EXIT_SUCCESS
}