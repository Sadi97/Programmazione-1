lude<iostream>
using namespace std;
//non ci provo neanche a scrivere gli invarianti!!
int PM(char*T,int rig, int col, char*P, int dimP)
{int conta=0, index=-1;
bool esci=false;
for(int i=0;i<rig-(dimP-conta)+1&&!esci;i++)
	{ bool trovato=false;
	  for(int j=0;j<col && !trovato;j++)
		if(*(T+i*col+j)==P[conta])
		{conta++;
		 trovato=true;
		}
	  if(conta==dimP)
		{esci=true;
		index=i-dimP+1;
    	}
	if(!trovato && !esci)
	   {i=i-conta;
		conta=0;
		}
}
return index;
}
main()
{char T[8]={'a','a','b','a','a','a','c','a'}, P[2]={'a','x'};
	int  rig=4, col=2, dimP=2, indice;
	indice=PM(T, rig, col, P, dimP);
	if(indice>-1)
	cout << indice << endl;
	else
	cout<<"non c'è"<<endl;
}
    