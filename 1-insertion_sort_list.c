/*
 * task 1-insertion_sort_list.c
 * Made by Facundo Diaz to Holberton School
 * Date - 01/02/2021
 */
#include "sort.h"
/**
 * insertion_sort_list - sorted a list
 * @list: list received
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *estoyaca = NULL, *sig = NULL, *anterior = NULL;

	if (!list || !(*list) || (!(*list)->next))
		return;
	if (list != NULL || *list != NULL || (*list)->next != NULL)
	{
		estoyaca = (*list)->next;
		while (estoyaca)
		{
			sig = estoyaca->next;
			while (estoyaca->prev != NULL && estoyaca->prev->n > estoyaca->n)
			{
				anterior = estoyaca->prev;
				anterior->next = estoyaca->next;
				if (estoyaca->next != NULL)
					estoyaca->next->prev = estoyaca->prev;
				estoyaca->next = anterior;
				estoyaca->prev = anterior->prev;
				anterior->prev = estoyaca;
				if (estoyaca->prev == NULL)
					*list = estoyaca;
				else
					estoyaca->prev->next = estoyaca;
				print_list(*list);
			}
			estoyaca = sig;
		}
	}
}
/*
 *void swapNode(list *listNode, char nameA[30], char nameB[30])
 *{
 *    node *A = NULL, *B = NULL;
 *    node *temp = listNode->head;
 *
 *    for (int i = 0; i < listNode->count; i++)
 *    {
 *        if (compareName(temp->name, nameA))
 *            A = temp;
 *        else if (compareName(temp->name, nameB))
 *    B = temp;
 * temp = temp->next;
 *  if (A && B)
 *       break;
 *}
 *if (!A || !B)
 *     return false;
 *  else if (A == B)
 *       return false;
 *
 * node p=*A;
 *  *A=*B;
 *   *B=p;
 *
 *  B->next = A->next;
 *   B->prev = A->prev;
 *
 *   A->next = p.next;
 *    A->prev = p.prev;
 *}
 */
