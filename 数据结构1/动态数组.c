/*#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>*/
/*struct DongShuZu
{
	int* pShuZuTou;  //��¼�׵�ַ
	unsigned int iRongLiang;  //�ɴ洢������
	unsigned int iShuLiang;   //�Ѵ洢����������
};*/
/*void ChuShiHua(struct DongShuZu* pStShuZu); //��ʼ������
void ZengJia(struct DongShuZu* pStShuZu, int iShuJu); //β����� ����  ���׵�ַ���ݽ�����������
void ShuChu(struct DongShuZu* pStShuzu);//�������
void ZengJiaZhong(struct DongShuZu* pStShuZu, int iShuJu, unsigned int iXiaBiao); //�м���Ӻ��� ��������������ַ�����ݣ��±� 
void ZengJiaKong(struct DongShuZu* pStShuZu);//����ռ�ĺ���
void ShanChuWei(struct DongShuZu* pStShuZu);//ɾ��β���ĺ���,���Ҫɾ�������forѭ����
void ShanChuQuanBu(struct DongShuZu* pStShuZu);//ɾ��ȫ�������ã�����=0,ֻ���������
void ShiFang(struct DongShuZu* pStShuZu);//ɾ��������̬���� �ͷŵ������������ͷ
void ShanChuZhong(struct DongShuZu* pStShuZu,unsigned int iWeiZhi);//˼·���������Ԫ����ǰŲһ��*/
/*int main()
{
	struct DongShuZu stShuzu;
	ChuShiHua(&stShuzu);//����ַ��ȥ

	ZengJia(&stShuzu, 3);
	ZengJia(&stShuzu, 2);
	ZengJia(&stShuzu, 1);
	ZengJiaZhong(&stShuzu, 5, 3);
	ZengJiaZhong(&stShuzu, 7, 8);
	ShuChu(&stShuzu);
	ShanChuZhong(&stShuzu,5);
	ShuChu(&stShuzu);





	free(stShuzu.pShuZuTou);
	return 0;
}*/
/*void ChuShiHua(struct DongShuZu* pStShuZu)
{
	if (NULL == pStShuZu)
	{
		printf("��������!\n");
		return;
	}
	pStShuZu->iRongLiang = 5; //5����
	pStShuZu->pShuZuTou = (int*)malloc(sizeof(int) * pStShuZu->iRongLiang);
	pStShuZu->iShuLiang = 0;
}*/
/*void ZengJia(struct DongShuZu* pStShuZu, int iShuJu)
{
	if (NULL == pStShuZu)
	{
		printf("��������!\n");
		return;
	}
	//�ж��Ƿ�����
	ZengJiaKong(pStShuZu);
	//�������
	pStShuZu->pShuZuTou[pStShuZu->iShuLiang] = iShuJu;//��������һ���������ĸ������ǽṹ�����iShuLiang���±��0 ��ʼ��ע��ϸ��Ŷ
	pStShuZu->iShuLiang++;
}*/
/*void ShuChu(struct DongShuZu* pStShuzu)
{
	//���ж��Ƿ�Ϊ��,����bug,����Ϊָ��Ķ�Ҫ�ж�һ��
	if (NULL == pStShuzu)
	{
		printf("��������!\n");
		return;
	}
	printf("������%u  �Ѵ��������������%u\n", pStShuzu->iRongLiang, pStShuzu->iShuLiang);
	printf("���ݣ�");
	for (unsigned int i = 0; i < pStShuzu->iShuLiang; i++)
	{
		printf("%d ", pStShuzu->pShuZuTou[i]);
	}
	printf("\n");
}*/
/*void ZengJiaZhong(struct DongShuZu* pStShuZu, int iShuJu, unsigned int iXiaBiao)    //������������̬���� ����  �����λ�ã��±꣩
{
	//���±�����������Ͳ��뵽���һ��λ�ã���Ҫ�ж��Ƿ�����Ȼ������ռ�
	if (NULL == pStShuZu )//�����Ϸ��Լ��|| iXiaBiao+1>=pStShuzu->iShuLiang
	{
		printf("��̬�����������!\n");
		return;
	}
	//�ж��Ƿ�����Ȼ�����ӿռ�
	ZengJiaKong(pStShuZu);
	if (iXiaBiao > pStShuZu->iShuLiang)//�±���˷���β��
	{
		iXiaBiao = pStShuZu->iShuLiang;
	}
	//����պ��±����������ֱ��������ֵ�������ȥ��
	//���Ų
	for (unsigned int i = pStShuZu->iShuLiang; i >= iXiaBiao; i--)
	{ //����>=����>û��ʲô����ֻ��>=��Ҫ�����ǰһ��Ԫ��Ҳ����Ų��һ��
		pStShuZu->pShuZuTou[i] = pStShuZu->pShuZuTou[i - 1];
	}
	//���ݸ�ֵ��ָ��λ��
	pStShuZu->pShuZuTou[iXiaBiao] = iShuJu;
	//����+1
	pStShuZu->iShuLiang++;
}*/
/*void ZengJiaKong(struct DongShuZu* pStShuZu)
{
	if (pStShuZu == NULL)
	{
		printf("��������\n");
		return;
	}
	if (pStShuZu->iRongLiang == pStShuZu->iShuLiang)
	{
		//�������
		pStShuZu->iRongLiang += 10;
		//����ռ�
		int* pTemp = (int*)malloc(sizeof(int) * pStShuZu->iRongLiang);
		memset(pTemp, 0, pStShuZu->iRongLiang);
		//��Ԫ�ظ�ֵ����
		for (unsigned int i = 0; i < pStShuZu->iShuLiang; i++)
		{
			pTemp[i] = pStShuZu->pShuZuTou[i];
		}
		//��ԭ�ռ��ͷ�
		free(pStShuZu->pShuZuTou);
		//������ͷָ��ָ���¿ռ�
		pStShuZu->pShuZuTou = pTemp;
	}
}*/
/*void ShanChuWei(struct DongShuZu* pStShuZu)
{
	if (pStShuZu == NULL)
	{
		printf("��������\n");
		return;
	}
	pStShuZu->iShuLiang--;

}*/
/*void ShanChuQuanBu(struct DongShuZu* pStShuZu)
{
	if (NULL == pStShuZu)
	{
		printf("��������!\n");
		return;
	}
	pStShuZu->iShuLiang = 0;
	//���Ҫɾ��������̬����
	//pStShuZu->iRongLiang = 0;
	//free(pStShuZu->pShuZuTou);
	//pStShuZu->pShuZuTou = NULL;
}*/
/*void ShiFang(struct DongShuZu* pStShuZu)
{
	if (NULL == pStShuZu)
	{
		printf("��������!\n");
		return;
	}
	pStShuZu->iShuLiang = 0;
	pStShuZu->iRongLiang = 0;
	free(pStShuZu->pShuZuTou);
	pStShuZu->pShuZuTou = NULL;
}*/
/*void ShanChuZhong(struct DongShuZu* pStShuZu, unsigned int iWeiZhi)//����ָ���ǵڼ���Ԫ�أ�����iweizhi=3���±����2
{
	if (pStShuZu == NULL||iWeiZhi>pStShuZu->iShuLiang)
	{
		printf("��������!\n");
		return;
	}
	//λ�ú�ߵ���ǰ�ƶ�
	for (unsigned int i = iWeiZhi - 1; i < pStShuZu->iShuLiang-1; i++)//-1��Ϊ�˷�ֹ����i+1Խ��
	{
		pStShuZu->pShuZuTou[i] = pStShuZu->pShuZuTou[i + 1];
	}//����������-1
	pStShuZu->iShuLiang--;
}*/