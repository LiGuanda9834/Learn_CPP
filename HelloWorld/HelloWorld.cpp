#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <string.h>
#include <cstring>

#include "cat.h"

using namespace std;

int main(){

	int* a = new int[10];

	for(int i = 0; i < 10; i++){
		a[i] = i;
	}

	cat my_cat1(10, 20, 5);
	cat my_cat2(20, 30, 10);


	cat alskjlxkzjclqurlin(10, 20, 5);

	cat* my_cat4 = new cat(10, 20, 5);

	my_cat1.fish;

	my_cat4 -> fish;

	cat& my_cat3 = alskjlxkzjclqurlin;

	vector<vector<cat>> cats(10, vector<cat>(10, my_cat3));


	int** fish_groups = new int*[2];

	fish_groups[1] = new int[3];
	fish_groups[2] = new int[4];


	int* fish_group_happy = fish_groups[1];

	int temp_height;
	int temp_weight;

	cin >> temp_height >> temp_weight;

	my_cat1.print();
	my_cat2.print();

	// ListNode* node_5 = new ListNode(5, nullptr);
	// ListNode* node_4 = new ListNode(4, node_5);
	// ListNode* node_3 = new ListNode(3, node_4);
	// ListNode* node_2 = new ListNode(2, node_3);
	// ListNode* node_1 = new ListNode(1, node_2);
	// ListNode* temp_node = node_1;
	// for(int i = 0; i < 5; i++){
	// 	cout << temp_node -> val << " ";
	// 	temp_node = temp_node -> next;
	// }
	// temp_node = reverse_k(node_1, 2);
	// for(int i = 0; i < 5; i++){
	// 	cout << temp_node -> val << " ";
	// 	temp_node = temp_node -> next;
	// }
}

// class ListNode{
// public:
// 	int val;
// 	ListNode* next;

// 	ListNode(int val_, ListNode* next_){
// 		val = val_;
// 		next = next_;
// 	}
// };


// ListNode* reverse_k(ListNode* root, int k){
// 	vector<ListNode*> save_nodes(k, nullptr);
// 	bool finished = false;
// 	ListNode* temp_node = root;
// 	ListNode* pre_node = new ListNode(-1, root);
// 	ListNode* temp_begin = pre_node;
// 	int counter = 0;
// 	ListNode* return_node = root;
// 	while(!finished){
// 		for(int i = 0; i < k; i++){
// 			if(temp_node){
// 				save_nodes[i] = temp_node;
// 				temp_node = temp_node -> next;
// 			}
// 			else{
// 				finished = true;
// 				break;
// 			}
// 		}
// 		ListNode* temp_end = temp_node -> next;
// 		temp_begin -> next = save_nodes[k - 1];
// 		for(int i = k-1; i >= 1 ; i--){
// 			save_nodes[i] -> next = save_nodes[i - 1];
// 		}
// 		save_nodes[0] -> next = temp_end;
// 		temp_begin = save_nodes[0];
// 		if(counter == 0){
// 			return_node = save_nodes[k - 1];
// 		}
// 		counter++;
// 	}
// 	return return_node;
// }


// int main(){

// 	cat my_cat1(10, 20);
// 	cat my_cat2(20, 30);

// 	my_cat1.print();
// 	my_cat2.print();

// 	// ListNode* node_5 = new ListNode(5, nullptr);
// 	// ListNode* node_4 = new ListNode(4, node_5);
// 	// ListNode* node_3 = new ListNode(3, node_4);
// 	// ListNode* node_2 = new ListNode(2, node_3);
// 	// ListNode* node_1 = new ListNode(1, node_2);
// 	// ListNode* temp_node = node_1;
// 	// for(int i = 0; i < 5; i++){
// 	// 	cout << temp_node -> val << " ";
// 	// 	temp_node = temp_node -> next;
// 	// }
// 	// temp_node = reverse_k(node_1, 2);
// 	// for(int i = 0; i < 5; i++){
// 	// 	cout << temp_node -> val << " ";
// 	// 	temp_node = temp_node -> next;
// 	// }
// }






/*

vector<double> get_equ(vector<int> vals){
	vector<double> result_vals;
	int val_size = vals.size();
	priority_queue<int, vector<int>, less<int>> queMin;
	priority_queue<int, vector<int>, greater<int>> queMax;
	for(int i = 0; i < val_size; i++){
		int temp_val = vals[i];
		if(queMin.empty() || temp_val < queMin.top()){
			queMin.push(temp_val);
			if(queMax.size() + 1 < queMin.size()){
				queMax.push(queMin.top());
				queMin.pop();
			}
		}
		else{
			queMax.push(temp_val);
			if(queMax.size() > queMin.size()){
				queMin.push(queMax.top());
				queMax.pop();
			}
		}
		double temp_res;
		if(queMin.size() > queMax.size()){
			temp_res = static_cast<double>(queMin.top()) ;
			//cout << "Min top : " << queMin.top() << endl;
		}
		else{
			temp_res = static_cast<double>(queMin.top() + queMax.top()) / 2.0;
			//cout << "Avg : " << queMin.top() << ", " << queMax.top() << endl;
		}
		
		result_vals.push_back(temp_res);
	}
	return result_vals;
}
*/
// vector<int> get_once(int num, vector<int> a, vector<int> b){
// 	vector<double> return_val;
// 	long long sum = num * (num + 1) / 2;
// 	for(int i = 0; i < num - 1; i++){
// 		sum -= b[i];
// 	}
// 	int last_pos = static_cast<int>(sum);
// 	b.push_back(last_pos);
// 	vector<int> new_vec;
// 	for(int i = num - 1; i >= 0; i--){
// 		//cout << b[i] << " ";
// 		new_vec.push_back(a[b[i] - 1]);
// 	}
// 	/*
// 	cout << "sort" << endl;
// 	for(int i = 0; i < num; i++){
// 		cout << new_vec[i] << ' ';
// 	}
// 	cout << endl;
// 	*/
// 	return new_vec;
// }
// int main(){
//     int T;
//     cin >> T;
//     vector<long long> record(T, 0);
//     for(int i = 0; i < T; i++){
//         int n, k;
//         cin >> n >> k;
//         int get = n - k;
//         long long ans = pow(2, get) - 1;
//         record[i] = ans % (1000000000+7);
//     }
//     for(int i = 0; i < T; i++){
//         cout << record[i] << endl;
//     }
// }
// /*
// int main(){
//     int t;
//     cin >> t;
// 	vector<vector<double> > res;
// 	for(int i = 0; i < t; i++){
// 		int m_num;
// 		cin >> m_num;
// 		vector<int> temp_a(m_num , 0);
// 		vector<int> temp_b(m_num - 1, 0);
// 		for(int j = 0; j < m_num; j++){
// 			cin >> temp_a[j];
// 		}
// 		for(int j = 0; j < m_num - 1; j++){
// 			cin >> temp_b[j];
// 		}
// 		vector<int> new_ints = get_once(m_num, temp_a, temp_b);
// 		vector<double> new_doubles = get_equ(new_ints);
// 		res.push_back(new_doubles);
// 	}
// 	for(int i = 0; i < t; i++){
// 		vector<double> new_doubles = res[i];
// 		for(int j = 0; j < new_doubles.size(); j++){
// 			double temp_val = new_doubles[new_doubles.size() - 1 - j];
// 			if(temp_val - floor(temp_val) > 0.1){
// 				printf("%.1f ", temp_val);
// 			}
// 			else{
// 				int int_val = static_cast<int>(temp_val);
// 				cout << int_val << " ";
// 			}
			
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }
// */

// 	/*
// 	vector<double> res = get_equ(test);
// 	for(int i = 0; i < res.size(); i++){
// 		if(res[i] - floor(res[i]) > 0.1){
// 			printf("%.1f ", res[i]);
// 		}
// 		else{
// 			int int_val = static_cast<int>(res[i]);
// 			cout << int_val << " ";
// 		}
// 	}
// 	*/


// /*
// 2
// 5
// 2 2 1 3 5
// 3 1 2 5
// 4
// 1 1 1 1
// 1 2 3
// */