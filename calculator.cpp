#include<iostream>
using namespace std;

/**�萔**/
const int zero = 0;
const int one = 1;
const int two = 2;

int main(void) {
	int judge = two;
	int a = 0;
	int b = 0;
	int con = 0;
	int tmp = 0;

	cout << "�d����N�����܂�" << endl;
	while (true) {
		cout << "a�̐�������͂��Ă������� >>";
		cin >> a;

		cout << "b�̐�������͂��Ă������� >>";
		cin >> b;

		tmp = judgement(a, b, con, &tmp);

		cout << "�I�����܂����H�@1/YES�@2/NO >>" << endl;
		cin >> judge;
		if (judge == one) {
			break;
		}
		else if (judge == two) {
			cout << "tmp�̒l���g���܂����H�@1/YES�@2/NO >>";
			cin >> con;
			if (con == one) {
				cout << "tmp�̒l >>" << tmp << endl;
				tmp= judgement(a, b, con, &tmp);
			}
			else {
				/**�������Ȃ�**/
			}
			continue;
		}
		else {
			cout << "�����I�����܂�";
			break;
		}
	}
	return 0;
}

int judgement(int a, int b, int con, int *tmp) {
	/*�ϐ���`*/
	char oper;
	char tmp_oper;
	char ab;
	int locala = 0;
	int localb = 0;
	int localtemp = 0;
	int a_val = 0;
	int b_val = 0;

	locala = a;
	localb = b;

	cout << "���Z�q�����";
	cin >> oper;

	if (con == one) {
		cout << "tmp�̉��Z�q����͂��Ă������� >>";
		cin >> tmp_oper;
		cout << "tmp��a,b�ǂ���ɉ��Z�q���g���܂����H >>";
		cin >> ab;

		if (ab == 'a') {
			//tmp�̓|�C���^�[�^�Ȃ̂ŁA����������Q�Ƃ���
			//main�ŎQ�Ƃ���
			b_val = *tmp;
			a_val = locala;
		}
		else if (ab == 'b') {
			a_val = *tmp;
			b_val = localb;
		}
		else {
			a_val = *tmp;
			b_val = localb;
			cout << "b���g�p���܂�";
		}

		switch (tmp_oper) {
		case '+':
			localtemp = a_val + b_val;
			cout << localtemp << endl;
			break;

		case '-':
			localtemp = a_val - b_val;
			cout << localtemp << endl;
			break;

		case '*':
			localtemp = a_val * b_val;
			cout << localtemp << endl;
			break;

		case '/':
			if ((a_val == zero) || (b_val == 0)) {
				cout << "�[��������Ȃ΂�����" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val / b_val;
			}
			cout << localtemp << endl;
			break;

		case '%':
			if ((a_val = zero) || (b_val == 0)) {
				cout << "�[��������Ȃ΂�����" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val % b_val;
			}
			cout << localtemp << endl;
			break;

		default:
			cout << "�G���[" << endl;
			break;
		}
	}
	else
	{
		switch (tmp_oper) {

		case '+':
			localtemp = a_val + b_val;
			cout << localtemp << endl;
			break;

		case '-':
			localtemp = a_val - b_val;
			cout << localtemp << endl;
			break;

		case '*':
			localtemp = a_val * b_val;
			cout << localtemp << endl;
			break;

		case '/':
			if ((a_val == zero) || (b_val == 0)) {
				cout << "�[��������Ȃ΂�����" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val / b_val;
			}
			cout << localtemp << endl;
			break;

		case '%':
			if ((a_val = zero) || (b_val == 0)) {
				cout << "�[��������Ȃ΂�����" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val % b_val;
			}
			cout << localtemp << endl;
			break;

		default:
			cout << "�G���[" << endl;
			break;
		}
	}
	return localtemp;
}