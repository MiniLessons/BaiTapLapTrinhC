//#include<stdio.h>
//#include<conio.h>
//
//#define MAXSIZE 1000
//
////Viet ham Nhap mang 1 chieu chua cac so nguyen
//void NhapMang1Chieu(int a[], int &n)
//{
//	do
//	{
//		printf("Nhap so phan tu mang:");
//		scanf("%d", &n);
//
//	} while (n <= 0);
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("Gia tri phan tu a[%d]=", i);
//		scanf("%d", &a[i]);
//	}
//}
//
////Viet ham Xuat mang 1 chieu chua cac so nguyen
//void XuatMang1Chieu(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%4d", a[i]);
//}
//
////Viet ham Xuat cac gia tri chan cua mang 1 chieu
//void XuatSoChanMang1Chieu(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] % 2 == 0)		//Kiem tra 1 phan tu co la so chan khong
//			printf("%4d", a[i]);
//	}
//		
//}
//
////Viet ham Tinh tong cac gia tri cua mang
//int TongMang1Chieu(int a[], int n)
//{
//	int Tong = 0;
//	for (int i = 0; i < n; i++)
//		Tong = Tong + a[i];
//	return Tong;
//}
//
////Viet ham Tinh tong cac gia tri la SO CHAN cua mang
//int TongChanMang1Chieu(int a[], int n)
//{
//	int TongChan = 0;
//	for (int i = 0; i < n; i++)
//		if (a[i] % 2 == 0)
//			TongChan = TongChan + a[i];
//
//	return TongChan;
//}
//
////Chuong trinh chinh
//void main()
//{
//	int A[MAXSIZE];
//	int N;
//	NhapMang1Chieu(A, N);
//
//	printf("\nCac phan tu cua Mang da nhap la:");
//	XuatMang1Chieu(A, N);
//
//	printf("\nCac phan tu la SO CHAN cua Mang da nhap la:");
//	XuatSoChanMang1Chieu(A, N);
//
//	int sum = TongMang1Chieu(A, N);
//	printf("\nTong cua cac phan tu trong Mang da nhap la: %d", sum);
//	
//	int sum_chan = TongChanMang1Chieu(A, N);
//	printf("\nTong cua cac phan tu la SO CHAN trong Mang da nhap la: %d", sum_chan);
//	getch();
//}