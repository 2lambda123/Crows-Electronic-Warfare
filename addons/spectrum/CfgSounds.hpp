class CfgSounds
{
	class radiocheck
	{
		name = "radiocheck";
		sound[] = {PATHTOF(data\voice\radiocheck.ogg), db+6, 1};
		titles[] = {0, "10 seconds radio check. Go to secure channel"};
	};	
	class bolembuggy
	{
		name = "Bolem Buggy received";
		sound[] = {PATHTOF(data\voice\bolembuggy.ogg), db+6, 1};
		titles[] = {
			0, "Have you seen the new Bolem Buggys we just received?",
			3, "Yeah they are great right?"
			};
	};
	class garbled
	{
		name = "garbled radio sound";
		sound[] = {PATHTOF(data\voice\garbled.ogg), db+6, 1};
		titles[] = {};
	};
	class jamcharging
	{
		name = "drone jammer charging";
		sound[] = {PATHTOF(data\sound\jam_power_on.wav), db+6, 1};
		titles[] = {};
	};
	class spectrumjamloop
	{
		name = "drone jam loop";
		sound[] = {PATHTOF(data\sound\jam_loop.wav), db+6, 1};
		titles[] = {};
	};
	class spectrumjamerror
	{
		name = "drone jam error";
		sound[] = {PATHTOF(data\sound\jam_error.wav), db+6, 1};
		titles[] = {0, "ERROR: Too weak Signal"};
	};
};