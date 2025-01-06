class Node 
{

    int key;
    int height;
    Node left,right;
    Node(int key)
    {
    this.key=key;
    height=0;
    left=right=null;
     }
}

class AVLTree
{
    public static int Height(Node node)
    {
        return node==null?-1:node.height;
    }

    public static Node leftrotate(Node k2)
    {
        Node k1=k2.left;
        k2.left=k1.right;
        k1.right=k2;
        k2.height=Math.max(Height(k2.left),Height(k2.right))+1;
        k1.height=Math.max(Height(k1.left),Height(k1.right))+1;
        return k1;
        }
    public static Node rightrotate(Node k1)
        {
            Node k2=k1.right;
            k1.right=k2.left;
            k2.left=k1;
            k1.height=Math.max(Height(k1.left),Height(k1.right))+1;
            k2.height=Math.max(Height(k2.left),Height(k2.right))+1;
            return k2;
        }
    public static Node doubleleftright(Node k3)
    {
        k3.left=leftrotate(k3.left);
        return rightrotate(k3);
    }
    public static Node doublerightleft(Node k4)
    {
        k4.right=rightrotate(k4.right);
        return leftrotate(k4);
    }
    public static Node insert(Node node,int key)
    {
        if(node==null)
        {
            return new Node(key);
        }
        else if(key<node.key)
        {
            node.left=insert(node.left,key);
            if(Height(node.left)-Height(node.right)==2)
            {
                if(key<node.left.key)
                {
                    node=leftrotate(node);
                }
                else
                {
                    node=doublerightleft(node);
                }
            }
        }
        else if(key>node.key)
        {
            node.right=insert(node.right,key);
            if(Height(node.right)-Height(node.left)==2)
            {
                if(key>node.right.key)
                {
                    node=rightrotate(node);
                }
                else
                {
                    node=doublerightleft(node);
                }
            }
        }
        return node;
        
           
    }
    public static Node delete(Node node,int key)
    {
        if(node==null)
        {
            return node;
        }
        else if(key<node.key)
        {
            node.left=delete(node.left,key);
        }
        else if(key>node.key)
        {
            node.right=delete(node.right,key);
        }
        else
        {
            if(node.left==null)
            {
                return node.right;
            }
            else if(node.right==null)
            {
                return node.left;
            }
            else
            {
                Node temp=node.right;
                while(temp.left!=null)
                {
                    temp=temp.left;
                    }
                    node.key=temp.key;
                    node.right=delete(node.right,temp.key);
                    }
                    }
                    
                    return node;
                    }
    public static void inorder(Node node){
    if(node!=null){
            inorder(node.left);
            System.out.print(node.key+" ");
            inorder(node.right);
    }
    }
    public static void main(String[] args) {
        if(args.length>0){

            Node node = new Node(Integer.parseInt(args[0]));
            for (int i = 1; i < args.length; i++) {
                node = insert(node, Integer.parseInt(args[i]));
            }  
            inorder(node);
        }
    }
}
