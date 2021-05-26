/*#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>*/
/*struct DongShuZu
{
	int* pShuZuTou;  //记录首地址
	unsigned int iRongLiang;  //可存储的容量
	unsigned int iShuLiang;   //已存储的数据总量
};*/
/*void ChuShiHua(struct DongShuZu* pStShuZu); //初始化函数
void ZengJia(struct DongShuZu* pStShuZu, int iShuJu); //尾部添加 函数  把首地址传递进来还有数据
void ShuChu(struct DongShuZu* pStShuzu);//输出函数
void ZengJiaZhong(struct DongShuZu* pStShuZu, int iShuJu, unsigned int iXiaBiao); //中间添加函数 ，三个参数，地址，数据，下标 
void ZengJiaKong(struct DongShuZu* pStShuZu);//申请空间的函数
void ShanChuWei(struct DongShuZu* pStShuZu);//删除尾部的函数,如果要删除多个就for循环呗
void ShanChuQuanBu(struct DongShuZu* pStShuZu);//删除全部即重置，数量=0,只是清空数据
void ShiFang(struct DongShuZu* pStShuZu);//删除整个动态数组 释放的是里面的数组头
void ShanChuZhong(struct DongShuZu* pStShuZu,unsigned int iWeiZhi);//思路：将后面的元素向前挪一个*/
/*int main()
{
	struct DongShuZu stShuzu;
	ChuShiHua(&stShuzu);//传地址过去

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
		printf("参数错误!\n");
		return;
	}
	pStShuZu->iRongLiang = 5; //5个数
	pStShuZu->pShuZuTou = (int*)malloc(sizeof(int) * pStShuZu->iRongLiang);
	pStShuZu->iShuLiang = 0;
}*/
/*void ZengJia(struct DongShuZu* pStShuZu, int iShuJu)
{
	if (NULL == pStShuZu)
	{
		printf("参数错误!\n");
		return;
	}
	//判断是否满了
	ZengJiaKong(pStShuZu);
	//添加数据
	pStShuZu->pShuZuTou[pStShuZu->iShuLiang] = iShuJu;//这里的最后一个是数量的个数就是结构体里的iShuLiang，下标从0 开始，注意细节哦
	pStShuZu->iShuLiang++;
}*/
/*void ShuChu(struct DongShuZu* pStShuzu)
{
	//先判断是否为空,减少bug,参数为指针的都要判断一下
	if (NULL == pStShuzu)
	{
		printf("参数错误!\n");
		return;
	}
	printf("容量：%u  已储存的数据总量：%u\n", pStShuzu->iRongLiang, pStShuzu->iShuLiang);
	printf("数据：");
	for (unsigned int i = 0; i < pStShuzu->iShuLiang; i++)
	{
		printf("%d ", pStShuzu->pShuZuTou[i]);
	}
	printf("\n");
}*/
/*void ZengJiaZhong(struct DongShuZu* pStShuZu, int iShuJu, unsigned int iXiaBiao)    //三个参数，动态数组 数据  插入的位置（下标）
{
	//当下标大于数量，就插入到最后一个位置，还要判断是否满了然后申请空间
	if (NULL == pStShuZu )//参数合法性检测|| iXiaBiao+1>=pStShuzu->iShuLiang
	{
		printf("动态数组参数错误!\n");
		return;
	}
	//判断是否满了然后增加空间
	ZengJiaKong(pStShuZu);
	if (iXiaBiao > pStShuZu->iShuLiang)//下标大了放在尾部
	{
		iXiaBiao = pStShuZu->iShuLiang;
	}
	//如果刚好下标等于数量就直接跳到赋值语句哪里去了
	//向后挪
	for (unsigned int i = pStShuZu->iShuLiang; i >= iXiaBiao; i--)
	{ //这里>=或者>没有什么区别，只是>=把要插入的前一个元素也往后挪了一下
		pStShuZu->pShuZuTou[i] = pStShuZu->pShuZuTou[i - 1];
	}
	//数据赋值到指定位置
	pStShuZu->pShuZuTou[iXiaBiao] = iShuJu;
	//数量+1
	pStShuZu->iShuLiang++;
}*/
/*void ZengJiaKong(struct DongShuZu* pStShuZu)
{
	if (pStShuZu == NULL)
	{
		printf("参数错误！\n");
		return;
	}
	if (pStShuZu->iRongLiang == pStShuZu->iShuLiang)
	{
		//容量变大
		pStShuZu->iRongLiang += 10;
		//申请空间
		int* pTemp = (int*)malloc(sizeof(int) * pStShuZu->iRongLiang);
		memset(pTemp, 0, pStShuZu->iRongLiang);
		//将元素赋值进来
		for (unsigned int i = 0; i < pStShuZu->iShuLiang; i++)
		{
			pTemp[i] = pStShuZu->pShuZuTou[i];
		}
		//将原空间释放
		free(pStShuZu->pShuZuTou);
		//将数组头指针指向新空间
		pStShuZu->pShuZuTou = pTemp;
	}
}*/
/*void ShanChuWei(struct DongShuZu* pStShuZu)
{
	if (pStShuZu == NULL)
	{
		printf("参数错误！\n");
		return;
	}
	pStShuZu->iShuLiang--;

}*/
/*void ShanChuQuanBu(struct DongShuZu* pStShuZu)
{
	if (NULL == pStShuZu)
	{
		printf("参数错误!\n");
		return;
	}
	pStShuZu->iShuLiang = 0;
	//如果要删除整个动态数组
	//pStShuZu->iRongLiang = 0;
	//free(pStShuZu->pShuZuTou);
	//pStShuZu->pShuZuTou = NULL;
}*/
/*void ShiFang(struct DongShuZu* pStShuZu)
{
	if (NULL == pStShuZu)
	{
		printf("参数错误!\n");
		return;
	}
	pStShuZu->iShuLiang = 0;
	pStShuZu->iRongLiang = 0;
	free(pStShuZu->pShuZuTou);
	pStShuZu->pShuZuTou = NULL;
}*/
/*void ShanChuZhong(struct DongShuZu* pStShuZu, unsigned int iWeiZhi)//这里指的是第几个元素，比如iweizhi=3，下标就是2
{
	if (pStShuZu == NULL||iWeiZhi>pStShuZu->iShuLiang)
	{
		printf("参数错误!\n");
		return;
	}
	//位置后边的往前移动
	for (unsigned int i = iWeiZhi - 1; i < pStShuZu->iShuLiang-1; i++)//-1是为了防止下面i+1越界
	{
		pStShuZu->pShuZuTou[i] = pStShuZu->pShuZuTou[i + 1];
	}//移完了数量-1
	pStShuZu->iShuLiang--;
}*/