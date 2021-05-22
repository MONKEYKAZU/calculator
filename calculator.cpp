#include<iostream>
using namespace std;

/**定数**/
const int zero = 0;
const int one = 1;
const int two = 2;

int main(void) {
	int judge = two;
	int a = 0;
	int b = 0;
	int con = 0;
	int tmp = 0;

	cout << "電卓を起動します" << endl;
	while (true) {
		cout << "aの数字を入力してください >>";
		cin >> a;

		cout << "bの数字を入力してください >>";
		cin >> b;

		tmp = judgement(a, b, con, &tmp);

		cout << "終了しますか？　1/YES　2/NO >>" << endl;
		cin >> judge;
		if (judge == one) {
			break;
		}
		else if (judge == two) {
			cout << "tmpの値を使いますか？　1/YES　2/NO >>";
			cin >> con;
			if (con == one) {
				cout << "tmpの値 >>" << tmp << endl;
				tmp= judgement(a, b, con, &tmp);
			}
			else {
				/**何もしない**/
			}
			continue;
		}
		else {
			cout << "強制終了します";
			break;
		}
	}
	return 0;
}

int judgement(int a, int b, int con, int *tmp) {
	/*変数定義*/
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

	cout << "演算子を入力";
	cin >> oper;

	if (con == one) {
		cout << "tmpの演算子を入力してください >>";
		cin >> tmp_oper;
		cout << "tmpをa,bどちらに演算子を使いますか？ >>";
		cin >> ab;

		if (ab == 'a') {
			//tmpはポインター型なので、メモリから参照する
			//mainで参照する
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
			cout << "bを使用します";
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
				cout << "ゼロを割るなばかもの" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val / b_val;
			}
			cout << localtemp << endl;
			break;

		case '%':
			if ((a_val = zero) || (b_val == 0)) {
				cout << "ゼロを割るなばかもの" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val % b_val;
			}
			cout << localtemp << endl;
			break;

		default:
			cout << "エラー" << endl;
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
				cout << "ゼロを割るなばかもの" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val / b_val;
			}
			cout << localtemp << endl;
			break;

		case '%':
			if ((a_val = zero) || (b_val == 0)) {
				cout << "ゼロを割るなばかもの" << endl;
				localtemp = 0;
			}
			else {
				localtemp = a_val % b_val;
			}
			cout << localtemp << endl;
			break;

		default:
			cout << "エラー" << endl;
			break;
		}
	}
	return localtemp;
}