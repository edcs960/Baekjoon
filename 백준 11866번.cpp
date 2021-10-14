#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	struct Node *next;
	int data;
}Node;

Node *head = (Node*)malloc(sizeof(Node));
int tmp_node_data;
int count = 1;
int output[1000];

void make_queue(int n){
	Node *tmp = head;
	head->data = 1;
	head->next = head;
	if(n != 1)
	{
		for(int i = 1; i<n;i++){
			Node *t_node = (Node*)malloc(sizeof(Node));
			tmp->next = t_node;
			t_node->data = i+1;
			t_node->next = head;
			tmp = t_node;
		}
	}
}

void remove_queue(Node *target){
	if(target == NULL)
		return;

	Node *tmp = target->next;
	target->next = tmp->next;
	tmp_node_data = tmp->data;
	free(tmp);

	return;
}

int main(){
	int n,m,i=0,a;

	scanf("%d %d",&n,&m);

	make_queue(n);

	Node *curr = head;
	while(curr != NULL){
		if(i == n)
			break;
		if(m == 1){
			output[i] = i+1;
			i++;
		}
		else if(count % m == m-1){
			count = 1;
			remove_queue(curr);
			output[i] = tmp_node_data;
			i++;
			curr = curr->next;
			continue;
		}else{
			count++;
			curr = curr->next;
		}
	}
	printf("<");
	for(int j = 0; j<n;j++){
		if(j == n-1)
			printf("%d",output[j]);
		else
			printf("%d, ",output[j]);
	}
	printf(">");
}