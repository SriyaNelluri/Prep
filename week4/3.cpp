
/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
long long int ans=0,res=0;
while(l1!=NULL)
{
ans=(ans*10+l1->data)%1000000007;
l1=l1->next;
}
while(l2!=NULL)
{
res=(res*10+l2->data)%1000000007;
l2=l2->next;
}
return (ans*res)%1000000007;
}
