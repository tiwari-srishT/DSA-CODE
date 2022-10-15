public class Linkedlist {
   

  
// head is the first node of the linked list  
static LinkedListNode head;  
  
// class for creating the node of the linked list  
// a node of the linked lists fetches two things: one is the dataue of the node  
// and other is the pointer that points to the other node  
static class LinkedListNode   
{  
  
int data;   
LinkedListNode next;  
  
// constructor of the class LinkedListNode  
LinkedListNode(int no)  
{  
data = no;  
next = null;  
}  
}  
  
// Method for reversing the linked list  
LinkedListNode reverse(LinkedListNode node)  
{  
  
LinkedListNode previous = null;  
LinkedListNode curr = node;  
LinkedListNode next = null;  
  
  
while (curr != null)   
{  
next = curr.next;  
curr.next = previous;  
previous = curr;  
curr = next;  
}  
node = previous;  
return node;  
}  
  
// displays the content of the linked list  
void printList(LinkedListNode nde)  
{  
while (nde != null)   
{  
System.out.print(nde.data + " ");  
nde = nde.next;  
}  
}  
  

public static void main(String argvs[])  
{  
// creating an object of the class Linkedlist 
Linkedlist listObj = new Linkedlist();  
  

listObj.head = new LinkedListNode(7);  
  
 
listObj.head.next = new LinkedListNode(8);  
  

listObj.head.next.next = new LinkedListNode(6);  
 
listObj.head.next.next.next = new LinkedListNode(5);  

listObj.head.next.next.next.next = new LinkedListNode(2);  
  
listObj.head.next.next.next.next.next = new LinkedListNode(1);  
   
listObj.head.next.next.next.next.next.next = new LinkedListNode(4);  

listObj.head.next.next.next.next.next.next.next = new LinkedListNode(3);  
  
  
System.out.println("The Linked list before reversal is: ");  
listObj.printList(head);  
head = listObj.reverse(head);  
System.out.println("\n");  
System.out.println("After reversal, the linked list is: ");  
listObj.printList(head);  
}  
}  

