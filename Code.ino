
int led11 = 13, led12 = 12, led13 = 11, led14 = 10, led15 = 9, led16 = 8, led17 = 7;
int led21 = 6, led22 = 5, led23 = 4, led24 = 3, led25 = 2, led26 = 1, led27 = 0;

void setup () {
	pinMode(led11, OUTPUT);
	pinMode(led12, OUTPUT);
	pinMode(led13, OUTPUT);
	pinMode(led14, OUTPUT);
	pinMode(led15, OUTPUT);
	pinMode(led16, OUTPUT);
	pinMode(led17, OUTPUT);
	pinMode(led21, OUTPUT);
	pinMode(led22, OUTPUT);
	pinMode(led23, OUTPUT);
	pinMode(led24, OUTPUT);
	pinMode(led25, OUTPUT);
	pinMode(led26, OUTPUT);
	pinMode(led27, OUTPUT);
}

void High(int a[], int len)
{
	for(int i = 0; i < len; i++)
		digitalWrite(a[i], HIGH);
}

void LowAll(int a[], int len)
{
	for(int i = 0; i < len; i++)
		digitalWrite(a[i], LOW);
}

void BatLed(int led, int so)
{
	if(led == 1)
	{
		if(so == 0)
		{
			int a[6] = {led11, led12, led13, led14, led15, led16};
			High(a, 6);
		}
		if(so == 1)
		{
			int a[2] = {led12, led13};
			High(a, 2);
		}
		if(so == 2)
		{
			int a[5] = {led11, led12, led14, led15, led17};
			High(a, 5);
		}	
		if(so == 3)
		{
			int a[5] = {led11, led12, led13, led14, led17};
			High(a, 5);
		}
		if(so == 4)
		{
			int a[4] = {led12, led13, led16, led17};
			High(a, 4);
		}
		if(so == 5)
		{
			int a[5] = {led11, led13, led14, led16, led17};
			High(a, 5);
		}
		if(so == 6)
		{
			int a[6] = {led11, led13, led14, led15, led16, led17};
			High(a, 6);
		}
		if(so == 7)
		{
			int a[3] = {led11, led12, led13};
			High(a, 3);
		}
		if(so == 8)
		{
			int a[7] = {led11, led12, led13, led14, led15, led16, led17};
			High(a, 7);
		}
		if(so == 9)
		{
			int a[6] = {led11, led12, led13, led14, led16, led17};
			High(a, 6);
		}
	}
	if(led == 2)
	{
		if(so == 0)
		{
			int a[6] = {led21, led22, led23, led24, led25, led26};
			High(a, 6);
		}
		if(so == 1)
		{
			int a[2] = {led22, led23};
			High(a, 2);
		}
		if(so == 2)
		{
			int a[5] = {led21, led22, led24, led25, led27};
			High(a, 5);
		}	
		if(so == 3)
		{
			int a[5] = {led21, led22, led23, led24, led27};
			High(a, 5);
		}
		if(so == 4)
		{
			int a[4] = {led22, led23, led26, led27};
			High(a, 4);
		}
		if(so == 5)
		{
			int a[5] = {led21, led23, led24, led26, led27};
			High(a, 5);
		}
		if(so == 6)
		{
			int a[6] = {led21, led23, led24, led25, led26, led27};
			High(a, 6);
		}
		if(so == 7)
		{
			int a[3] = {led21, led22, led23};
			High(a, 3);
		}
		if(so == 8)
		{
			int a[7] = {led21, led22, led23, led24, led25, led26, led27};
			High(a, 7);
		}
		if(so == 9)
		{
			int a[6] = {led21, led22, led23, led24, led26, led27};
			High(a, 6);
		}
	}
}

void loop() {
	for(int i = 0; i < 100; i++)
	{
		int soThuNhat = i /10;
		int soThuHai = i % 10;
		BatLed(1, soThuNhat);
		BatLed(2, soThuHai);
		delay(1000);
		int a[7] = {led11, led12, led13, led14, led15, led16, led17};
		int b[7] = {led21, led22, led23, led24, led25, led26, led27};
		LowAll(a, 7);
		LowAll(b, 7);
		delay(100);
	}
}



