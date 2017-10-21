//����merge���������ڽ�����������������ϲ�
void Merge(int[] array,int start,int mid,int end)
{
    int i=start;
    int j=mid;

    int[end-start+1] temp;
    int k=0;
    //��һ������ֳ����룬���������飬һ��һ�ȽϷ�����ʱ�����б���
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
    //���αȽ���ɺ�ǰ�����ûȫ���Ƚϣ���һ����ȫ��������ʱ����
    while(i<mid)
    {
        temp[k++]=array[i++];
    }
    //ǰ��αȽ���ɺ󣬺�����ûȫ���Ƚϣ���һ����ȫ��������ʱ����
    while(j<end)
    {
        temp[k++]=array[j++];
    }
    //����ʱ�����е�������ԭ�����ֳ����������
    int k=0;
    int i=start;
    while(i<=end)
    {
        array[i++]=temp[k++];
    }
}

//����mergelist������������������鲢,����num,���ڱ�ʾÿ��Ҫ�鲢��������������ܳ���
void Mergelist(int[] array2,int length,int num)
{
    //����i�����ڱ�ʾÿ��ʹ��merge���������ʼλ��
    int i=0;
    //����merge����
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
//����sort������ÿ����������num��ֵ����ÿ��mergelist�����������鳤��������
void sort(int[] array3,int length_array3)
{
    //����
    void Merge(int[] array,int start,int mid,int end);
    void Mergelist(int[] array2,int length,int num)
    //ÿ��Ҫ�鲢��������������ܳ���
    int sumLength;
    for(sumLength=2;sumLength<length_array3;sumLength=sumLength*2)
    {
        Mergelist(array3,length_array3,sumLength);
    }
    //ʣ��һС��
    merge(array3,0,sumLength,length_array3-1);
}
