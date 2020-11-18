#include <iostream>
using namespace std;

#define NAME_SIZE 10             //�̸�
#define ID_SIZE 10               //�й�
#define STUDENT_MAX 100          //�л� ��
#define DEPARTMENT_SIZE 20       //�а�
#define PHONE_SIZE 20            //��ȭ��ȣ
#define PROFESSOR  10            //����
#define CONSULTING 10            //�������

struct Student
{
	//�л� �����͸� ������ ����ü
	char strName[NAME_SIZE];               //�̸�
	char strDepartment[DEPARTMENT_SIZE];   //�а�
	char strID[ID_SIZE];                   //�й�
	char strPhone[PHONE_SIZE];             //��ȭ��ȣ
	char professor[PROFESSOR];             //��������
	char consulting[CONSULTING];           //�������

	int number;                            //�л���ȣ

	//��հ��� �������� ���� ������
	int DB;                                //DB ����
	int C;                                 //C���α׷��� ����
	int AI;                                //AI ����
	int ESP;                               //ESP ����
	int total;                             //�հ� ����
	float avg;                             //��� ����

};

int main()
{

	Student StudentArr[STUDENT_MAX] = {};
	char strName[NAME_SIZE] = {};
	char strDepartment[DEPARTMENT_SIZE] = {};
	char strID[ID_SIZE] = {};
	char strPhone[PHONE_SIZE] = {};
	char professor[PROFESSOR] = {};
	char consulting[CONSULTING] = {};

	int StudentCount = 0;
	int StudentNum = 1;

	int Menu = NULL;

	while (true)
	{
		// �޴� ���
		cout << "\n ======== <����> �޴��� �Է����ּ���. ========" << endl;
		cout << " 1. �л� ���  " << endl;
		cout << " 2. �л� �˻�  " << endl;
		cout << " 3. ���������л� ����Ʈ  " << endl;
		cout << " 4. �������� ��� ���� Ȯ��  " << endl;
		cout << " 5. �������� ���ư��� " << endl;
		cout << " 6. ���α׷� ���� \n\n" << endl;


		cout << " �޴��� �����ϼ��� : ";

		cin >> Menu;

		switch (Menu) 
		{
		case 1: {
			cout << "\n ======== <���> �л������� �Է����ּ���. ========" << endl;

			if (StudentCount == STUDENT_MAX)
				break;

			//�л������� ����Ѵ�. �̸�, �а�, �й�, ����, ��ȭ��ȣ, ��������, ������� 
			cout << "�̸� : ";
			cin >> StudentArr[StudentCount].strName;

			cin.ignore(1024, '\n');            //cin �� �� ���� ���۷� �Է��ϴµ� �̸� ����ֱ� ����(���� �Է� �Ҷ��� ��� X)              

			cout << "�й� : ";
			cin.getline(StudentArr[StudentCount].strID, ID_SIZE);

			cout << "�а� : ";
			cin.getline(StudentArr[StudentCount].strDepartment, DEPARTMENT_SIZE);

			cout << "��ȭ��ȣ : ";
			cin.getline(StudentArr[StudentCount].strPhone, PHONE_SIZE);

			cout << "�������� : ";
			cin.getline(StudentArr[StudentCount].professor, PROFESSOR);

			
			cout << "�������(T,F) : ";
			cin.getline(StudentArr[StudentCount].consulting, PROFESSOR);


			cout << "DB ���� : ";
			cin >> StudentArr[StudentCount].DB;

			cout << "C ���α׷��� ���� : ";
			cin >> StudentArr[StudentCount].C;

			cout << "AI ���� : ";
			cin >> StudentArr[StudentCount].AI;

			cout << "ESP ���� : ";
			cin >> StudentArr[StudentCount].ESP;

			//������ ���� ���Ѵ�.
			StudentArr[StudentCount].total =
				StudentArr[StudentCount].DB +
				StudentArr[StudentCount].C +
				StudentArr[StudentCount].AI +
				StudentArr[StudentCount].ESP;
			
			//������ ����� ���Ѵ�.
			StudentArr[StudentCount].avg =
				StudentArr[StudentCount].total / 4.f;

			StudentArr[StudentCount].number = StudentNum;

			++StudentNum;
			++StudentCount;
			cout << "======== �л� �߰��� �Ϸ�Ǿ����ϴ�. ========\n" << endl;

			break;
		}
		case 2: {
			cout << "\n======== <�˻�> �л��̸��� �Է����ּ���. ========\n" << endl;

			cin.ignore(1024, '\n');
			cout << "�̸��� �˻��ϼ���. : ";
			cin.getline(strName, NAME_SIZE);

			for (int i = 0; i < StudentCount; ++i)
			{
				if (strcmp(StudentArr[i].strName, strName) == 0)
				{
					cout << "�̸�:" << StudentArr[i].strName ;
					cout << "\t�а�:" << StudentArr[i].strDepartment;
					cout << "\t�й�:" << StudentArr[i].strID;
					cout << "\t��ȭ��ȣ:" << StudentArr[i].strPhone;
					cout << "\t ��������:" << StudentArr[i].professor;
					cout << "\t �������:" << StudentArr[i].consulting;
					cout << "\t DB ����:" << StudentArr[i].DB;
					cout << "\tC ���α׷��� ����:" << StudentArr[i].C;
					cout << "\tAI ����:" << StudentArr[i].AI;
					cout << "\tESP ����:" << StudentArr[i].ESP<<"\n\n";
			
					break;
				}
				else {
					//���� ���� ���ٸ�.
					cout << "\n======== �л������Ͱ� �������� �ʽ��ϴ�. ========\n\n" << endl;
					break;
				}
			}
		}
		case 3: {

		}
		case 4:
		{
			break;
		}
		default: {
			break; 
		}
		
		int Menu = NULL;

		}
	
	}
}