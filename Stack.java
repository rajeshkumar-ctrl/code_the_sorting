public class StackJava{
	public int arr[];
	public int sizeOfStack;
	public int top;
	StackJava(int size){
		arr = new int[size];
		sizeOfStack = size;
		top = -1;
	}
	
	public void push(int x){
		if (isFull())
        {
            System.out.println("OverFlow");
            System.exit(1);
        }
		System.out.println(x);
		arr[++top] = x;

	}
	
	public int pop()
    {
        if (isEmpty())
        {
            System.out.println("UnderFlow");
            System.exit(1);
        }
        System.out.println(peek());
 
        return arr[top--];
    }
	public int peek()
    {
        if (!isEmpty())
            return arr[top];
        else
            System.exit(1);
 
        return -1;
    }
	public int size()
    {
        return top + 1;
    }
	public Boolean isEmpty()
    {
        return top == -1;  
    }
	public Boolean isFull()
    {
        return top == sizeOfStack - 1;   
    }
	public static void main (String[] args)
    {
        StackJava stack = new StackJava(3);
 
        stack.push(1);        
        stack.push(2);        
 
        stack.pop();        
        stack.pop();        
 
        stack.push(3);        
 
        System.out.println("Top element is: " + stack.peek());
 
        stack.pop();        
 
        if (stack.isEmpty())
            System.out.println("Stack Is Empty");
        else
            System.out.println("Stack Is Not Empty");
    }
}
