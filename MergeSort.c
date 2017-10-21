//创建merge方法，用于将相邻两组数组有序合并
void Merge(int[] array,int start,int mid,int end)
{
    int i=start;
    int j=mid;

    int[end-start+1] temp;
    int k=0;
    //将一个数组分成两半，看成两数组，一对一比较放入临时数组中保存
    while(i<=mid && j<=end)
    {
        if(array[i]<array[j])
        {
            temp[k++]=array[i++];
        }
        else
        {
            temp[k++]=array[j++];
        }
    }
    //后半段比较完成后，前半段若没全部比较，则一次性全部放入临时数组
    while(i<mid)
    {
        temp[k++]=array[i++];
    }
    //前半段比较完成后，后半段若没全部比较，则一次性全部放入临时数组
    while(j<end)
    {
        temp[k++]=array[j++];
    }
    //将临时数组中的数覆盖原来被分成两半的数组
    int k=0;
    int i=start;
    while(i<=end)
    {
        array[i++]=temp[k++];
    }
}

//创建mergelist方法，面向整个数组归并,定义num,用于表示每次要归并的两个子数组的总长度
void Mergelist(int[] array2,int length,int num)
{
    //定义i，用于表示每次使用merge的数组的起始位置
    int i=0;
    //声明merge函数
    void Merge(int[] array,int start,int mid,int end);

    for(i=0;i+num-1<=length;i=i+num)
    {
        merge(array2,i,i+0.5*num,i+num-1);
    }
    if(i+num-1>length)
    {
        merge(array2,i,0.5*(i+length-1),length-1);
    }
}
//创建sort方法，每次两倍增加num的值，即每次mergelist的两个子数组长度逐渐增加
void sort(int[] array3,int length_array3)
{
    //声明
    void Merge(int[] array,int start,int mid,int end);
    void Mergelist(int[] array2,int length,int num)
    //每次要归并的两个子数组的总长度
    int sumLength;
    for(sumLength=2;sumLength<length_array3;sumLength=sumLength*2)
    {
        Mergelist(array3,length_array3,sumLength);
    }
    //剩下一小撮
    merge(array3,0,sumLength,length_array3-1);
}
