#include <stdio.h>
#include <string>
int main(){
	printf("\n Oprator Penugasan");
	int a =12;
	int b =6;
	//Pengisian dan penambahan nilai
	b+=a;
	printf("\n Hasil b+=a adalah:%d", b);
	//pengisian dan pengurangan nilai
	b-=a;
	printf("\n Hasil b-=a adalah:%d", b);
	//pengisian dan perkalian nilai
	b*=a;
	printf("\n Hasil b*=a adalah:%d", b);
	//pingisian dan pembagian nilai
	b/=a;
	printf("\n Hasil b/=a adalah:%d", b);
	//pengisian dan sisa bagi
	b%=a;
	printf("\n Hasil b%%=a adalah:%d", b);
	//pengisian dan shift left
	b<<=a;
	printf("\n Hasil b<<=a adalah:%d", b);
	//pengisian dan sift right
	b>>=a;
	printf("\n Hasil b>>=a adalah:%d", b);
	//pengisian dan bitwise and
	b&=a;
	printf("\n Hasil b&=a adalah:%d", b);
	//pengisian dan bitwise or
	b|=a;
	printf("\n Hasil b|=a adalah:%d", b);
	//pengisian dan bitwise xor
	b^=a;
	printf("\n Hasil b^=a adalah:%d", b);
	return 0;
}
