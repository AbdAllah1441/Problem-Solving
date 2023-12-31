/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) 
{
    SinglyLinkedListNode* temp;
    SinglyLinkedListNode* current = llist;
    SinglyLinkedListNode* previous = NULL;
    
    while (current || !previous) 
    {
        temp = current;
        current = current->next;
        temp->next = previous;
        previous = temp;
    }
    return previous;
}
