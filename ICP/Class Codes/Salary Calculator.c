#include<stdio.h>
int main(){
	char gen,edu;
	int sy;
	printf("For Education:-\nIf Employee Is\nPost Graduate=p\nGraduate=g\n\nFor Gender\nIf Employee Is\nMale=m\nFemale=f\n");
	printf("Enter Your Gender & Years Of Experiance & Qualification:-");
	scanf("%c %d %c",&gen,&sy,&edu);
	if(gen=='m'){
		'm'='Male';
	}
	else{
		'f'='Female';
	}
	if(edu=='p'){
		'p'='Post-Graduate';
	}
	else{
		'g'='Graduate';
	}
	printf("Employee's Gender Is %c\n",gen);
	printf("Employee's Education Is %c\n",edu);
	printf("Employee's Experience Of Service Is %d\n",sy);
	if(gen=='Male'){
		if(sy>=10){
			if(edu=='Post-Graduate'){
				printf("Your Salary Is 15K");
			}
			else{
				printf("Your Salary Is 10K");
			}
		}
		else{
			if(edu=='Post-Graduate'){
				printf("Your Salary Is 10K");
			}
			else{
				printf("Your Salary Is 7K");
			}
		}
	}
		else{
			if(sy>=10){
				if(edu=='Post-Graduate'){
					printf("Your Salary Is 12K");
				}
				else{
					printf("Your Salary Is 9K");
				}
			}
			else{
				if(edu=='Post-Graduate'){
					printf("Your Salary Is 10K");
				}
				else{
					printf("Your Salary Is 6K");
				}
			}
		}
//        if(gen=='m' && sy>=10 && edu=='p'){
//	                printf("Your Salary Is 15K");
//            }
//        else if(gen=='m' && sy>=10 && edu=='g'){
//	                printf("Your Salary Is 10K");
//            }
//        else if(gen=='m' && sy<10 && edu=='p'){
//	                printf("Your Salary Is 10K");
//            }
//        else if(gen=='m' && sy<10 &&edu=='g'){
//	                printf("Your Salary Is 7K");
//            }
//        else if(gen=='f' && sy>=10 && edu=='p'){
//	                printf("Your Salary Is 12K");
//            }
//        else if(gen=='f' && sy>=10 &&edu=='g'){
//	                printf("Your Salary Is 9K");
//            }
//        else if(gen=='f' && sy<10 && edu=='p'){
//  	                printf("Your Salary Is 10K");
//            }
//        else if(gen=='f' && sy<10 && edu=='g'){
//	                printf("Your Salary Is 6K");
//            }
	return 0;
}