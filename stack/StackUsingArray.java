package stack;

public class StackUsingArray {

    private static final int MAX_CAPACITY = 1000;
    private int top;
    int[] array = new int[MAX_CAPACITY];

    StackUsingArray() {
        top = -1;
    }

    boolean isEmpty() {
        return top < 0;
    }

    void push(int element) {
        if (top >= MAX_CAPACITY - 1) {
            System.out.println("Stack overflow");
        } else {
            top++;
            array[top] = element;
            System.out.println(element + " is pushed into stack");
        }
    }

    int pop() {
        if (top < 0) {
            System.out.println("Stack underflow");
            return 0;
        } else {
            return array[top--];
        }
    }

    int peek() {
        if (top < 0) {
            System.out.println("Stack underflow");
            return 0;
        } else {
            return array[top];
        }
    }

    public static void main(String[] args) {
        StackUsingArray stack = new StackUsingArray();
        stack.push(20);
        stack.push(43);
        stack.push(11);
        System.out.println(stack.pop() + " popped from stack");
        System.out.println("Top element is " + stack.peek());
    }
}
