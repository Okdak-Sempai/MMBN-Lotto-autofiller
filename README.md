# MMBN-Lotto-autofiller https://dosprojectsblog.wordpress.com/2023/05/13/mmbn-lotto-autofiller/
This is a script to auto fill the Lotto numbers from Megaman Battle Network 3 to 6.

- [When do you get access to them?](#first-time-you-get-them)
- [Explanations](#explanations)
- [The Software](#the-software)
  - [Initialization](#initialization)
  - [Setup](#setup)
  - [Choices](#choices)
  - [Custom codes usage (Option 7)](#custom_anchor)
  - [Execution](#execution)
- [Links](#links)
- [Sources](#sources)

# First time you get them

-BN6 Just after the first cross, before the Circusman.EXE events. [~2h]
-BN5 After the first liberation mission before the Oran agents event [~3h/6h]
-BN4 Before going to Castillo [~4h/8h]
-BN3 After the Zoo incident event [~3h]

Icons

# Explanations

Lotto numbers are codes given during various events during the GBA era.

There are a total of:

-32 lotto numbers for BN3
-32 lotto numbers for BN4
-51 lotto numbers for Bn5
-26 lotto numbers exclusively for BN5DS
-60 lotto numbers for BN6

That makes a lot of code to input by yourself and could take hours to input.
This is why I made this tool, the MMBN_Lotto_autofiller.exe. To input them automatically so you no one’s loose time doing this. This tool is designed for Emulations or Steam version.

I might try to develop a tool to send the input on a switch, somehow. But at least it's usable on Steam or emulator.
The code is on GitHub so if anyone feels to implements something for the switch(For none modded Switch) feel free, just don't be a trash and credit.

Last disclaimer, this code uses the keyboard to do Inputs, so Windows may be unease with it and flag it as a virus because of that. The soft isn't any malware(as you can see in its code), but the only input used is like w,a,s,d,k,l and esc so there's no harm possible anyways.
This is why I gave the open code on GitHub so if anyone isn't at ease to use the .exe you can just compile the .c yourself.

# The Software

How to use the code?

### Initialization
You only need the game opened and the MMBN_Lotto_autofiller.exe.

### Setup
First note that at any time if you want or need to stop the Software just hold [Esc].
In your game you have to make your inputs match the LC defaults ones.
A quick reminder:
A=[j] B=[k]
UP=[w] LEFT=[a] DOWN=[s] RIGHT=[d]

Now click [ENTER].

### Choices
You have a choice for each set of codes depending on the game used.
For BN3 do(32 lotto numbers): 3
For BN4 do(32 lotto numbers): 4
For BN5 do(51 lotto numbers): 5
For BN5DS do(26 lotto numbers): 55
For BN6 do(60 lotto numbers): 6
If you want to load specific codes in specific order from the "custom_codes.txt" file, press 7

<a name="custom_anchor"></a>
### Custom codes usage (Option 7)
To use that you need to file the "custom_codes.txt" that has to be in the same folder as the code, at the root.

To fill it be very careful, there are some simple rules.
Rule 1. All codes are without spaces. Ex: 12341234(Right) 1234 1234(Wrong)
Rule 2. You have to return line after each code, no spaces after the codes.
Rule 3.The last code has to be the finishing line, so no blank lines after it.
Here a simple example of a "custom_codes.txt":

### Execution
Now the game has to be selected(for the inputs to be inputted on the game) and wait.
There is a progression of the codes done on the Software window.

Example with a set of custom codes(Option 7)

# Links
Website: https://dosprojectsblog.wordpress.com/2023/05/13/mmbn-lotto-autofiller/
GitHub(The Software is there): https://github.com/Okdak-Sempai/MMBN-Lotto-autofiller/releases/tag/V1
MMBN LOTTO Google Sheets(Easier to copy or use or even read): https://docs.google.com/spreadsheets/d/19BxC3WjeXWJjl8Rbtn7t43Nl2N-3qxpOfnq3Mh-a43A/edit?usp=sharing

# Sources

https://megaman.fandom.com/wiki/Lotto_Number

https://www.therockmanexezone.com/wiki/Lotto_Numbers_(MMBN3)

https://www.therockmanexezone.com/wiki/Lotto_Numbers_(MMBN4)

https://www.therockmanexezone.com/wiki/Lotto_Numbers_(MMBN5)

https://www.therockmanexezone.com/wiki/Lotto_Numbers_(MMBN6)

If any error is found, please send a DM on twitter. For questions refer to the twitter.
