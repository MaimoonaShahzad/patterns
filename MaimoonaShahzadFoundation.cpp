#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{
	system("cls");
    int i,j;
    // M STARTS//
    for(i=2,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=2,j=2;j<=5,i<=5;j++,i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=5,j=5;i<=8,j>=2;i++,j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=8,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // A STARTS//
    for(i=10,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=10,j=2;i<=17;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=17,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=10,j=5;i<=17;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // I STARTS//
    for(i=20,j=2;i<=28;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=24,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=20,j=8;i<=28;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }


    // M STARTS//
    for(i=31,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=31,j=2;i<=34,j<=5;i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=34,j=5;i<=37,j>=2;i++,j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=37,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // O STARTS//
    for(i=40,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=40,j=2;i<=47;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=47,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=40,j=8;i<=47;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // SECOND O STARTS//
    for(i=50,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=50,j=2;i<=57;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=57,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=50,j=8;i<=57;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // N STARTS//
    for(i=60,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=60,j=2;i<=67,j<=8;i++,j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=66,j=7;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // A STARTS //
    for(i=69,j=8;j>=2;j--)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=69,j=2;i<=76;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=76,j=2;j<=8;j++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }

    for(i=69,j=5;i<=76;i++)
    {
        Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
    }
    // S STARTS//
    for(i=2,j=12;i<=9;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=2,j=12;j<=15;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=2,j=15;i<=9;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=9,j=15;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=2,j=18;i<=9;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    //H STARTS//
    for(i=12,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=19,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=12,j=15;i<=19;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    //A STARTS//
    for(i=22,j=18;j>=12;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=22,j=12;i<=29;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=29,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=22,j=15;i<=29;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    //H STARTS//
    for(i=32,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=39,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=32,j=15;i<=39;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    //Z STARTS//
    for(i=42,j=12;i<=48;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=48,j=12;i>=42,j<=18;i--,j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=42,j=18;i<=48;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    //A STARTS//
    for(i=52,j=18;j>=12;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=52,j=12;i<=59;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=59,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=52,j=15;i<=59;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    //D STARTS//
    for(i=62,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=62,j=12;i<=69;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=69,j=12;j<=18;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=62,j=18;i<=69;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // F STARTS//
      for(i=2,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=2,j=22;i<=7;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=2,j=25;i<=7;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // O STARTS//
    for(i=10,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=10,j=22;i<=17;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=17,j=22;j<=28;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=10,j=28;i<=17;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // U STARTS//
    for(i=20,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=20,j=28;i<=27;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=27,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // N STARTS//
    for(i=30,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=30,j=22;i<=37,j<=28;i++,j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=36,j=27;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // D STARTS//
    for(i=40,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=40,j=22;i<=47;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=47,j=22;j<=28;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=40,j=28;i<=47;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // A STARTS//
    for(i=50,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=50,j=22;i<=57;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=57,j=22;j<=28;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=50,j=25;i<=57;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // T STARTS//
    for(i=60,j=22;i<=67;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=63,j=22;j<=28;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // I STARTS//
    for(i=70,j=22;i<=77;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=73,j=22;j<=28;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=70,j=28;i<=77;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // O STARTS//
    for(i=80,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=80,j=22;i<=87;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=87,j=22;j<=28;j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=80,j=28;i<=87;i++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    // N STARTS//
    for(i=90,j=28;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=90,j=22;i<=97,j<=28;i++,j++)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    for(i=96,j=27;j>=22;j--)
    {
    	Sleep(100);
        system("color 04");
        gotoxy(i,j);
        cout<<"*";
	}
    getch();

}


