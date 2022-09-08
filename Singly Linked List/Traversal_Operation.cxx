// Traversal Operation

/* Traversing -> Visiting every node in a list at least once */

void traversal(struct Node* node)
{
     printf("\nLinked List elements: ");
     while(node!=Null){
        printf("%d ", node->data);
        node = node->next;
     }
}

void display(struct Node* node) {
  while (node != NULL) {
  printf(" &d ", node->data);
  node = node->next;
  }
}