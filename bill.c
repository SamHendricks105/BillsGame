#include <stdio.h>
#include <stdlib.h>
/*
 ============================================================================
 Name        : Bill Blandman and the pie thief
 Author      : Sam Hendricks
 Version     :
 Copyright   : Your copyright notice
 Description : Help Bill find out which one of his coworkers stole his pie.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>




void intro ()
{
	printf("\n\n\n");
	printf( "Bill Blandman was your every day ordinary person.\n"
			"He lived a happy but some what boring life in his\n"
			"home town of Three Forks Montana\n"
			"He worked back of house at the Iron Horse cafe and pie shop.\n"
			"He enjoyed his life and job in his home town but he\n"
			"felt like his life was a little bland.\n"
			"Much like Bilbo Baggins from The Hobbit, he\n"
			"wanted an adventure. He decided to do some job hunting.\n"
			"He got himself a job working sales at tooth Brushes Are Us\n"
			"in Seattle Washington. He was not particularly passionate\n"
			"about tooth brushes or even teeth for that matter, but\n"
			"it was a new job in a big new city and that's what mattered.\n"
			"His friends in Montana were sad to see him go but happy\n"
			"for the new opportunity ahead of him. Before he left for\n"
			"Seattle, his friends at the Iron Horse Cafe gave hime a\n"
			"Huckleberry pie to take with on his trip. After saying\n"
			"his goodbyes Bill finally felt ready to leave.\n"
			"He was nervous and excited but ready.\n"
			"\n"
			"4 days later....\n"
			"Bill is living his new life in Seattle. He has worked\n"
			"his first 2 days at his new job. It was certainly not the\n"
			"most exciting job in the world. He was selling tooth brushes\n"
			"over the phone after all. He would have liked to have made some\n"
			"new friends by now, but he had found no success. He was much more shy\n"
			"than he imaged he would be. Coming to a big city and knowing no one\n"
			"was very intimidating. There was one thing however, that kept him going.\n"
			"That one thing was his huckleberry pie that he brought with him\n"
			"He has been having just a little bit of it each day and today he\n"
			"was on his last piece. He brought it to work to give himself\n"
			"a little morale boost.\n"
			"\nThe time was now 11:53am.\n"
			"Bill just got of a sales call and he sealed the deal!\n"
			"An order of 200 tooth brushes to a local dentist was a great start to the day!\n"
			"Bill was thrilled and thought that now would be the perfect time to take\n"
			"a victory lunch break and enjoy that last piece of huckleberry pie.\n"
			"As he walked from his office to the second floor break room, he thought to himself\n"
			"\" Maybe I can handle this big city life after all.\"\n"
			"\" Maybe this will be the day that I make some new friends.\"\n"
			"He was feeling so confident after that sale that he even thought about starting up a\n"
			"conversation with Jody, the cute secretary that he had a crush on\n"
			"He entered the break room and  went straight for the fridge.\n"
			"As he opened the fridge, he was struck with horror to find his prized piece\n "
			"of pie missing! This couldn't be who could have done this terrible act?\n"
			"Who could have been heartless enough to take from Bill the last piece\n"
			"of hope that had been holding him together?!!! His feeling of optimism\n"
			"had now been replaced with rage. Lunch and tooth brush sales could wait.\n"
			"There was now nothing more important to him than finding the pie thief.\n"
			"He didn't care if it took him all day. He would find this thief and\n"
			"somehow, he'd get even.\n"
			"And this is where our story truly begins.....\n\n");
}




void display_top_floor()
{

	printf("	Where will you go?    (Top floor)\n"
			"1.Downstairs\n"
			"2.Bosses office\n"
			"3.HR Office\n"
			"4.Bob's office\n"
			"5.Sharon's office\n"
			"6.Jeff's Office\n");
}


void display_middlefloor()
{
	printf("	Where will you go? (Middle Floor)\n"
			"1.Upstairs\n"
			"2.Downstairs\n"
			"3.Your Office\n"
			"4.Jim's office\n"
			"5.Parker's office\n"
			"6.Paul's office\n");
}

void display_bottom_floor()
{
	printf("	Where will you go?    (Bottom floor)\n"
			"1.Upstairs\n"
			"2.Security Room\n"
			"3.Front Desk\n"
			"4.Phil's office\n"
			"5.Dave's office\n"
			"6.Ted's Office\n");
}

int choice()
{
	int c=0;
	printf("Enter Choice: ");
	scanf("%d", &c);
	if ((c < 1) || (c> 6))
	{
		while((c < 1) || (c> 6))
		{
			printf("Invalid Choice\n");
			c=choice();
		}
	}

	return c;
}


int choice2()
{
	int c=0;
	printf("Enter Choice: ");
	scanf("%d", &c);
	if ((c < 1) || (c> 2))
	{
		while((c < 1) || (c> 2))
		{
			printf("Invalid Choice\n");
			c=choice();
		}
	}
	return c;
}

int choice3()
{
	int c=0;
	printf("Enter Choice: ");
	scanf("%d", &c);
	if ((c < 0) || (c> 3))
	{
		while((c < 1) || (c> 3))
		{
			printf("Invalid Choice\n");
			c=choice();
		}
	}
	return c;
}

int choice10()
{
	int c=0;
	printf("Enter Choice: ");
	scanf("%d", &c);
	if ((c < 1) || (c> 10))
	{
		while((c < 1) || (c> 10))
		{
			printf("Invalid Choice\n");
			c=choice();
		}
	}

	return c;
}




void boss_office()
{

	int c;
	printf("You enter you bosses office to find him at his desk.\n"
			"Boss: \"Hey Bill how's the new job treating you?\"\n\n");
	printf("1. It's great. I'm living the dream.\n\n"
			"2. Not so good actually...\n\n");
	c=choice2();

	if (c==1)
	{
		printf("Bill:\"It's great. I'm living the dream.\"\n\n"
				"Boss: \"Good to hear. what can I do for you bill?\"\n\n"
				"1.Could you tell me a little bit about my coworkers?\n"
				"I want to get to know them better and I thought you\n"
				"might be able to help me out with some conversation starters.\n\n"
				"2.I just wanted to see if I could get some sales advice.\n\n");
		c=choice2();
		if (c==1)
		{
			printf("Boss:\"Hey You know what? I was just thinking\n"
					"You should go see Jim! I think he's also from Montana.\n "
					"Maybe you guys will have a thing or 2 in common.\"\n\n "
					"Bill:\"Thanks I'll do that.\n\n");
		}

		else if(c==2)
		{
			printf("Bill:\"I just wanted to see if I could get some sales advice.\"\n\n"
					"Boss:\"Well Bill Best thing I can tell you is confidence. People like\n"
					"hearing a confident speaker. You know what? If I were you I would go talk\n"
					"to Paul. He's one of our top salesmen.\"\n\n"
					"Bill:\"Great I'll go see him.\"\n\n");

		}

	}//end of if c==1

	else if(c== 2)
	{
		printf("Bill:\"Not so good actually...\"\n\n"
				"Boss:\"Oh no! What's going on?\"\n\n");

		printf("1.Who ate my Pie!!!!\n\n"
				"2. Well you see... someone ate my pie and I wonder if you might\n"
				"know who did.\n\n");
		c=choice2();

		if (c==1)
		{
			printf("Bill:\"1.Who ate my Pie!!!!\"\n\n"
					"Boss:\"Woah! Okay um Bill, I am sorry to hear that someone ate your pie\n"
					"Hey why don't you head to the security room? I'm sure Stan our security guy\n"
					"would be happy to let you watch the break room security camera videos.\"\n\n"
					"Bill:\"Oh uh okay thanks... Sorry for the outburst it's just um well,\n"
					"this pie was really delicious.\"\n\n"
					"Boss:\"Yeah.... that's okay bill. I hope you find out who did it.\"\n\n");
		}

		else if(c==2)
		{
			printf("Bill:\" Well you see... someone ate my pie and I wonder if you might\n"
					"know who did.\"\n\n"
					"Boss:\"Bill I am sorry to hear about that. I am not sure who would have done that\n"
					"but I'll keep an ear open and let you know if I hear anything.\"\n\n");
		}



	}// end of else if c==2

}// boss_office

int security_room()
{

	int sr;

	int c;

	printf("You enter the room and see Stan the security guy watching the cameras\n"
			"He turns his head to look at you\n\n"
			"Stan:\"I saw you coming. Hey It's Bill right?\n\n"
			"Bill:\" Yes sir\n\n"
			"Stan:\"Well Mr. Bill What can I do for you?\"\n\n"
			"1. My pie was taken from the fridge in the break room and\n"
			"I would like to see the security footage.\n\n"
			"2. Oh i just wanted to stop by and say Hello.\n\n");
	c= choice2();

	if (c==1)
	{
		printf("Bill\"My pie was taken from the fridge in the break room and\n"
				"I would like to see the security footage.\"\n\n"
				"Stan:\"Sure I would be happy to help. What time did you realize it was missing?\"\n\n"
				"Bill:\"It was 12 when I went to take my lunch break.\"\n\n"
				"Stan:\"Okay then I'll take a look at that break room from the time you came in today until\n"
				"12 and I'll Email you if I find out who did it.\"\n\n"
				"Bill:\"Thank you very much.\"\n\n");
		sr=1;

	}// c==1

	else if(c==2)
	{
		printf("Bill:\"Oh i just wanted to stop by and say Hello.\"\n\n"
				"Stan:\"Well that's nice of you my job can be pretty boring sometimes.\n"
				"I don't usually have anyone to talk to unless someone need's something from me.\n"
				" Why don't You Tell me a little bit about yourself?\"\n\n"
				"Bill proceeds to have a delightful delightful conversation with Stan. Bill learns all of Stan's\n"
				"favorite fishing spots and listens to all of his \"back when I was your age stories\". Stan could have gone\n"
				"on for hours. Bill was happy to listen to an old man talk and it felt nice to have a friendly\n"
				"conversation but there was a pie thief at large so he had to get back to business. Bill waits for Stan to finish\n"
				"one of his stories and then politely ends the conversation.\n\n"
				"Bill:\" It was great talking to you stan but I must be getting on my way someone stole"
				"my pie and I need to find out who.\"\n\n"
				"Stan:\"Hey Let me help you with that. Ill Check the security camera's in the break room\n "
				"and see if i can find out who did. I'll email you if i do.\"\n\n "
				"Bill:\"Thanks! That would be great!\"\n\n"
				"Stan:\" Your'e welcome! I Glad we could talk. You are welcome to swing by my office any time!\n\n");
		sr=2;
	}// c==2

	return sr;
}// security room

int security_room1()
{
	int sr;
	int c;
	printf("Bill enters the room to see Stan typing away at his desk.\n"
			"Stan:\" Oh Hi bill what can I do for you?\"\n\n"
			"1. I want to know if anyone eles's food was stolen today.\n"
			"would you be able to look at some more footage for me?\n\n"
			"2. Oh i just wanted to stop by and say Hello.\n\n");
	c=choice2();
	if (c==1)
	{
		printf("Bill:\"I want to know if anyone eles's food was stolen today.\n"
				"would you be able to look at some more footage for me?\n\n"
				"Stan:\" Well I'm kinda busy so I might not have time.I'll email you again\n"
				"if i see any thing else though.\"\n\n"
				"Bill:\"Okay sounds good.\"\n\n");
	}

	else if (c==2)
	{

		printf("Bill:\"Oh i just wanted to stop by and say Hello.\"\n\n"
				"Stan:\"Well that's nice of you my job can be pretty boring I don't usually have anyone\n"
				"to talk to unless someone need's something from me. Why don't You Tell me a little bit about yourself?\n\n"
				"Bill proceeds to have a delightful delightful conversation with Stan. Bill learns all of Stan's\n"
				"favorite fishing spots and listens to all of his \"back when I was your age stories\". Stan could have gone\n"
				"on for hours. Bill was happy to listen to an old man talk and it felt nice to have a friendly\n"
				"conversation but there was a pie thief at large so he had to get back to business. Bill waits for Stan to finish\n"
				"one of his stories and then politely ends the conversation.\n\n"
				"Bill:\" It was great talking to you stan but I must be gettin on my way\"\n\n"
				"Stan:\"Well Bill it was nice talking. You are welcome to swing by my office any time!\n\n");
		sr=2;
	}


	return sr;
}//security room1

void security_room2()
{
	printf("Stan:\"Hey Bill great to see you again!\"\n"
			"Hey I did some digging and it looks like your not the only one\n"
			"who had food stolen today. I looked at the camera's and saw that\n"
			"Paul came in this morning and put a cake in the fridge. Sharron took\n"
			"it later that day. Jody also had her crab legs taken by Bob. I guess\n"
			"it is possible that Jody and Paul gave their food away but Jody really\n"
			"likes sea food, so I don't think that is likely. I also can't see why Bob\n"
			"or Sharron would take someonelss's food.\"\n\n"
			"Bill:\"That is very strange. Good find Stan I owe you big time.\"\n\n");
}








int jody()
{
	int c=0;
	int jody;
	printf("Bill takes a deep breath before approaching the front desk. This is Jody's desk after all\n"
			"and bill has a big crush on Jody. As bill get's closer to the front desk  he can see that\n"
			"Jody is visibly upset about something this makes Bill nervous but he proceeds to the front\n"
			"desk and says...\n\n"
			"Bill:\"Hello, is everything okay?\"\n\n"
			"Jody's expression seems lighten up as she turns to acknowledge Bill\n\n"
			"Jody:\"Oh hi You must be the new sales guy Bill. I guess you could tell I was annoyed.\n"
			"I just took my lunch break and someone took my snow crab legs that I put in the fridge.\n"
			"I went to the Crab pot last night and brought the leftovers. I just can't believe that\n"
			"someone would be so inconsiderate and eat my food! Anyways I'm sorry to complain to you\n"
			"You don't need to hear my sob story. What can I do for you Bill?\"\n\n"
			"1.What? You too? Someone took my pie today!\n\n"
			"2.Oh that stinks any idea who it might have been?\n\n");

	c=choice2();

	if(c==1)
	{
		printf( "Bill:\"What? You too? Someone took my pie today!\"\n\n"
				"Jody:\"No way! I can't believe that! I'm sorry to hear that Bill\n"
				"I wish people were honest.\"\n\n"
				"Bill:\"Yeah me too. Any Idea who might have taken our food?\"\n\n"
				"Jody:\"I don't know but I bet you Sharon knows something she's\n"
				"always up to date on the office drama.\"\n\n"
				"Bill:\"Thanks I'll see what I can find out and we'll get to the bottom of this.\"\n\n");
		jody=1;
	}



	else if(c==2)
	{
		printf("Bill:\"Oh that stinks any idea who it might have been?\"\n\n"
				"Jody:\"No I don't. If you find out who did let me know.\"\n\n"
				"Bill:\"will do.\"");
		jody=2;
	}

	return jody;

}//jody

void Jody1()
{

	printf("Jody\" Hey Bill, any luck finding the thief?\"\n\n"
			"Bill:\"No not yet but I'll keep looking.\"\n\n");
}//jody1

int jody2()
{
	int jody;
	int c;
	printf("Jody:\"Oh hey your're back. What's up?\n\n"
			"1. Oh nothing I had actually better get going. Those tooth brushes\n"
			"ar'nt going to sell them self's.\n\n"
			"2.Hey I actually was surprised to hear that you food was stolen. My pie\n"
			"was also stolen today and I wonder if it might have been the same person.\n");
	c=choice2();

	if(c==1)
	{
		printf("Bill:\"Oh nothing I had actually better get going. Those tooth brushes\n"
				"ar'nt going to sell them self's.\"\n\n"
				"Jody:\" Okay.... yeah good luck with those sales calls.\"\n\n");
		jody=2;
	}

	else if(c==2)
	{
		printf("Bill:\"Hey I actually was surprised to hear that you food was stolen. My pie\n"
				"was also stolen today and I wonder if it might have been the same person.\"\n\n"
				"Jody:\"No way! I can't believe that! I'm sorry to hear that Bill\n"
				"I wish people were honest.\"\n\n"
				"Bill:\"Yeah me too. Any Idea who might have taken our food?\"\n\n"
				"Jody:\"I don't know but I bet you Sharon knows something she's\n"
				"always up to date on the office drama.\"\n\n"
				"Bill:\"Thanks I'll see what I can find out and we'll get to the bottom of this.\"\n\n"
				"Jody:\"Awesome I hope we find out who did this!\"\n\n");
		jody=1;
	}



	return jody;
}//Jody2


void your_office()
{
	int c;
	char feed_back[1000000];
	printf("Back in his office Bill get's on his computer to check his email.\n"
			"		Inbox\n"
			"Hey welcome to the team      FavoriteBoss@Toothbrushesareus.com\n\n");

	printf("1. open email\n"
			"Or\n"
			"2. leave\n");
	c=choice2();
	if(c==1)
	{
		printf("Hey Bill we are thrilled to have you on board!\n"
				"We hope you are enjoying your first week. The\n"
				"Human resources department would love to hear\n"
				"about your experience working here at Tooth\n"
				"Brushes Are Us! please take our short survey\n"
				"and let us know how we are doing.\n"
				"1. Take survey\n");
		printf("Or \n");
		printf("2. leave\n");
		c=choice2();
		if(c==1)
		{
			printf("Do you feel welcome here? please enter a response from\n"
					"1-10. (10 being very welcome and 2 being not welcome\n"
					"at all)\n\n");
			choice10();
			printf("using that same 1-10 scale how would you rate your training experience?\n"
					"(10 being perfect and 1 being Terrible)\n\n");
			choice10();
			printf("Now pleas tell us what we could do better.\n"
					"Enter feedback:");
			scanf("%s",feed_back);
			printf("\nThank You for taking this survey. Your responses are\n"
					"very important to us\n");

		}
	}

}// your office

int your_office1()
{
	char feed_back[1000];
	int off1;
	int c;
	printf("Back in his office Bill get's on his computer to check his email.\n"
			"		Inbox\n"
			"1.Hey welcome to the team      FavoriteBoss@Toothbrushesareus.com\n"
			"2.Bill It was Phil             SafteyStan@Toothbrushesareus.com\n"
			"Or\n"
			"3.Leave\n\n");
	c=choice3();

	if(c==1)
	{
		printf("Hey Bill we are thrilled to have you on board!\n"
				"We hope you are enjoying your first week. The\n"
				"Human resources department would love to hear\n"
				"about your experience working here at Tooth\n"
				"Brushes Are Us! please take our short survey\n"
				"and let us know how we are doing.\n\n"
				"1. Take survey\n"
				"Or\n"
				"2. leave\n");
		c=choice2();
		if(c==1)
		{
			printf("Do you feel welcome here? please enter a response from\n"
					"1-10. (10 being very welcome and 2 being not welcome\n"
					"at all)\n\n");
			choice();
			printf("using that same 1-10 scale how would you rate your training experience?\n"
					"(10 being perfect and 1 being Terrible)\n\n");
			choice();
			printf("Now pleas tell us what we could do better.\n"
					"Enter feedback:");
			scanf("%s",feed_back);
			printf("\nThank You for taking this survey. Your responses are\n"
					"very important to us\n");

		}


	}

	else if(c==2)
	{
		printf("Hey Bill this is Stan. I just wanted to let you know that\n"
				"it was Phil who took your pie from the break room. That\n"
				"is rather uncharacteristic of him. If I were you i would\n"
				"give him the benefit of the doubt and ask him why he took\n"
				"your pie.\n");
		off1=1;
	}

	return off1;

}// your office 1

void hr_office()
{
	int c;

	printf("Bill Enters the office to see Dan the HR guy.\n\n"
			"Dan:\" Bill! What can I do for you?\"\n\n"
			"1. Someone stole my pie and I was wondering if you knew anything about that.\n\n"
			"2.Oh just wanted to stop by and see how your doing.\n\n");
	c=choice2();
	if (c==1)
	{
		printf("Bill:\"Someone stole my pie and I was wondering if you knew anything about that.\"\n\n"
				"Dan:\" Oh that's terrible! I'm sorry to hear. I don't know who would do that but\n"
				"I'll keep my eyes open.\"\n\n"
				"Bill:\"Thanks\"\n\n");
	}

	else if(c==2)
	{
		printf("Bill:\"Oh just wanted to stop by and see how your doing.\"\n\n"
				"Dan:\" well that's nice of you. I'm doing just fine!\n"
				"I've been keeping busy. Everyone seems to be wanting\n"
				"shift swaps today, so I've been busy with those. How\n"
				"about you Bill How have you been?\n\n"
				"Bill:\"I'm doing great\n\n");
	}

}


int phil()
{
	int phil=1;
	int c;
	printf("Bill Enter's Phil's office to see Phil smiling with an empty\n "
			"Iron Horse pie box on his desk and Huckleberry stains on his shirt....\n"
			"Bill stares at Phil in disgust. The Smile fades from Phil's face as he\n"
			"see's Bill's expression.\n"
			"Phil:\"Uh....what's up bill? Something wrong?\"\n\n"
			"1.My pie!!!!!!!!!(Grab Phil by the collar)\n\n"
			"2.Hey do you know who's pie that was before you ate it?\n\n");
	c=choice2();
	if (c==1)
	{
		printf("Bill:\"1.My pie!!!!!!!!!\"\n\n"
				"Bill proceeds to grab Phil by the collar and lift him higher in his chair\n\n"
				"Phil\"Woah woah woah woah hey I'm sorry I thought it was Jim's pie. He said\n"
				"I could have it!\"\n\n"
				"Bill:\"Oh did he now?! That's my pie and I never said anyone could have it!!\"\n\n"
				"Phil:\"Okay okay man I'm sorry! I just got an email from him. He told me that if I\n"
				"took his Saturday shift he would give me his pie in the break room. I didn't know it\n"
				"was yours I sware!\n\n"
				"Bill releases his grip and steps back.\n\n"
				"1. Show me the email.\n\n"
				"2. Why would Jim want you to take his Saturday?\n\n");
		c=choice2();

		if(c==1)
		{
			printf("Bill:\"Show me the email.\"\n\n"
					"Phil:\"Sure man, I had no idea you could be this intimidating\"\n\n"
					"Phil opens his computer and shows you his email.\n\n"
					"		inbox\n"
					"pie for shift swap?          JimmyJones539@hotmail.com\n"
					"401k update				  DanDanHRman@Toothbrushesareus.com\n"
					"Sales Reports                FavoriteBoss@Toothbrushesareus.com\n"
					"Client phone numbers         JuJuJuJody!@Toothbrushesareus.com\n\n"
					"Phil:\"See.. I did get an email from Jim.\"\n\n"
					"Bill:\"Why is he the only one not using a work email?\"\n\n"
					"Phil:\"I don't know man. I'm really sorry this happened. Jim is\n"
					"not the type of guy to lie so I'd talk to him if I was you.\"\n\n");
			phil=2;

		}

	}
	else if(c==2)
		{
			printf("Phil:\"It was Jim's. He told me I could have it if I took his Saturday shift.\n"
					"Are you okay Bill? You look pretty mad.\"\n\n"
					"Bill:\"That was my pie not Jim's. I don't know why he said you could have it\n"
					"but it was never his pie.\"\n\n"
					"Phil:\"Really? I'm so sorry man. I had no idea. I would go talk to Jim if\n"
					"I were you and I guess I owe you a pie. On the bright side I can talk\n"
					"to Dan about undoing my shift swap for Saturday.\"\n\n"
					"Bill is no longer angry as much as he is puzzled. If Phil is telling the truth than the real"
					"Villain in this story is Jim not Phil, but why would Jim lie? There was only one way to find out\n"
					"Bill: Well I'll go have a little chat with Jim then.\n\n");
		}




	return phil;
}



void jim()
{
	int c;

	printf("Bill enters Jim's office to find Jim leaning back in his chair\n"
			"with his feet on his desk holding a rubiks cube. Jim looks up"
			"at bill as he enters\n\n"
			"Jim:\"Oh hey new guy how are things going? Your name is..oh\n"
			"don't tell me... Mark right?\""
			"Bill:\"No I'm Bill.\"\n\n"
			"Jim:\" Oh right right right I was close\"\n\n"
			"Bill:\".....\"\n\n"
			"Jim:\"What brings you to my office Mr. Bill?\"\n\n"
			"1.Someone stole my pie do you know who it was?\n\n"
			"2.Oh I'm just trying to get to know my coworkers so I thought\n"
			"I would stop by and say hi.\n\n");
	c=choice2();

	if(c==1)
	{
		printf("Bill:\"Someone stole my pie do you know who it was?\"\n\n"
				"Jim:\"Ah man that stinks my dude. I don't know who took it.\n"
				"but I hope you find out\"\n\n"
				"Bill:\"Yeah thanks me too.\"\n\n");
	}

	if (c==2)
	{
		printf("Bill:\"Oh I'm just trying to get to know my coworkers so I thought\n"
				"I would stop by and say hi.\"\n\n"
				"Jim:\" Cool cool my dude it's nice to officially meet. Hey you should\n"
				"come join our office ping pong club we play every friday after work.\n"
				"it's pretty rad dude.\"\n\n"
				"Bill:\"Oh very cool. I'm not that great of a ping pong player but that does\n"
				"sound fun.\"\n\n"
				"Jim:\"Yeah my dude! We'll I ll see you on friday then.\"\n\n"
				"Bill:\"Yeah thanks I'll see you then.\"\n\n");
	}

}// jim

int jim1()
{
	int jim=1;
	int c;
	printf("Bill walks in to Jims office to find him laying fully back in his chair.\n"
			"his head is looking to ceiling as he tosses a tennis ball up in the air\n\n"
			"Jim: Hey man what going on?\n\n"
			"1.(Grab the Tennis ball and throw it out the door.)WHY DID YOU GIVE MY PIE AWAY!!\n\n"
			"2.Hey Phil say's you told him that he could have a pie for taking your Saturday shift.\n\n");
	c=choice2();
	if (c==1)
	{
		printf("Bill Grabs the Tennis ball and throws it out the door.\n\n"
				"BIll:\"WHY DID YOU GIVE MY PIE AWAY!!\"\n\n"
				"JIm:\"Hey my tennis ball, and wait what is this whole pie thing about?\n\n"
				"Bill:\" Don't play dumb. Phil told me You gave him my pie. Why?\"\n\n"
				"Jim sits up in his chair and looks confused.\n\n"
				"Jim:\"Hey look hommie I think you got something confused I never stole a pie\n"
				"and I never asked anyone to cover my Saturday shift.\"\n\n"
				"Bill:\"Then WHy did Phil say that you did?\"\n\n"
				"Jim:\"Hey man I'm just as confused as you are. Now could I get my tennis ball back?\n"
				"I was doing some important time wasting stuff with it.\"\n\n"
				"Bill picks up the ball and hands it back to him. Not sure if he\n"
				"can trust Jim or not gives him one last stare before saying...\n\n"
				"Bill:\"Okay I'll go ask around but I've got my eye on you.\n");
	}



	else if(c==2)
	{
		printf("Bill:\"Hey Phil say's you told him that he could have a pie for taking your Saturday shift.\"\n\n"
				"Jim:\" Well that's news to me. I never asked anyone to cover my Saturday shift. and I defiantly\n"
				"didn't offer anyone a pie.\"\n\n"
				"Bill is now frustrated and confused. He doen't know if he is being lied to or if Jim really is\n"
				"innocent. It's hard to tell.\n\n"
				"Bill:\"Alright well please let me know if you hear any thing.\"\n\n");
	}


	return jim;

}



int jim2()
{
	int jim=2;
	int c;
	printf("Bill walks in to Jims office to find him laying fully back in his chair.\n"
			"his head is looking to ceiling as he tosses a tennis ball up in the air\n\n"
			"Jim: Hey man what going on?\n\n"
			"1.(Grab the Tennis ball and throw it out the door.)WHY DID YOU GIVE MY PIE AWAY!!\n\n"
			"2.Hey Phil say's you told him that he could have a pie for taking your Saturday shift.\n\n");
	c=choice2();
	if (c==1)
	{
		printf("Bill Grabs the Tennis ball and throws it out the door.\n\n"
				"BIll:\"WHY DID YOU GIVE MY PIE AWAY!!\"\n\n"
				"JIm:\"Hey my tennis ball, and wait what is this whole pie thing about?\n\n"
				"Bill:\" Don't play dumb. Phil told me You gave him my pie. Why?\"\n\n"
				"Jim sits up in his chair and looks confused.\n\n"
				"Jim:\"Hey look hommie I think you got something confused I never stole a pie\n"
				"and I never asked anyone to cover my Saturday shift.\"\n\n"
				"Bill:\"Then WHy did Phil say that you did?\"\n\n"
				"Jim:\"Hey man I'm just as confused as you are. Now could I get my tennis ball back?\n"
				"I was doing some important time wasting stuff with it.\"\n\n"
				"Bill:\"Phil said you sent him an email and I saw it, but it wasn't a work email.\"\n\n"
				"Jim:\" I di.. wait did you say not a work email? Was it a hotmail address?\"\n\n"
				"Bill:\" Yeah why?\"\n\n"
				"Jim sighs and leans back in his chair.\n\n"
				"Jim:\"I think that Jeff has been up to no good again.\"\n\n"
				"Bill:\"What do you mean?\"\n\n"
				"Jim: Well Jeff and I are on a kick ball team together with a couple other guys\n"
				"form the office and we have a game on Saturday that Jeff really want's to win\n"
				"I'm supposed to work Saturday and I could'nt find anyone to cover my shift so\n"
				"I wasn't planing on going. Jeff has created fake emails in the past to prank people\n"
				"and they are always hotmail accounts. I think that Jeff made a fake email for me and\n"
				"told Phil to take my Saturday shift in exchange for your pie.\"\n\n"
				"Bill:\"That jerk.\"\n\n"
				"Jim: Yeah I'm pretty sure it was him. You should go try to get him to confess just in case\n"
				"it wasn't him. It should be pretty easy to get him o confess if you just tell him what I told\n"
				"you. He is a terrible liar when you talk face to face. If You can get him to confess come back\n"
				"talk to me and I'll help you make this right.\n");
	}



	else if(c==2)
	{
		printf("Bill:\"Hey Phil say's you told him that he could have a pie for taking your Saturday shift.\"\n\n"
				"Jim:\" Well that's news to me. I never asked anyone to cover my Saturday shift. and I defiantly\n"
				"didn't offer anyone a pie.\"\n\n"
				"Bill:\"Phil said you sent him an email and I saw it, but it wasn't a work email.\"\n\n"
				"Jim:\" I di.. wait did you say not a work email? Was it a hotmail address?\"\n\n"
				"Bill:\" Yeah why?\"\n\n"
				"Jim sighs and leans back in his chair.\n\n"
				"Jim:\"I think that Jeff has been up to no good again.\"\n\n"
				"Bill:\"What do you mean?\"\n\n"
				"Jim: Well Jeff and I are on a kick ball team together with a couple other guys\n"
				"form the office and we have a game on Saturday that Jeff really want's to win\n"
				"I'm supposed to work Saturday and I could'nt find anyone to cover my shift so\n"
				"I wasn't planing on going. Jeff has created fake emails in the past to prank people\n"
				"and they are always hotmail accounts. I think that Jeff made a fake email for me and\n"
				"told phil to take my Saturday shift in exchange for your pie.\"\n\n"
				"Bill:\"That jerk.\"\n\n"
				"Jim: Yeah I'm pretty sure it was him. You should go try to get him to confess just in case\n"
				"it wasn't him. It should be pretty easy to get him o confess if you just tell him what I told\n"
				"you. He is a terrible liar when you talk face to face. If You can get him to confess come back\n"
				"talk to me and I'll help you make this right.\n");
	}

	return jim;

}//jim2


int jim3()
{
	int jim=3;
	printf("Jim:\"Well your back did he confess?\"\n\n"
			"Bill:\"Yes he did.\"\n\n"
			"Jim:\"Well alright then let's head over and we'll get this fixed.\"\n\n");
	return jim;
}

int bob()
{
	int bob=1;
	int c;
	printf("Bill Enters Bob's office to find Bob at his desk eating crab legs with butter.\n\n"
			"Bob: \"Hey Bill how's it going?\"\n\n"
			"Bill:\" Good looks like you have got your self a nice lunch there.\"\n\n"
			"Bob:\" Oh Yeah! Parker gave me his crab legs an all I had to do was swap shifts with\n"
			"him. Can you believe it?\"\n\n"
			"1. That's cool why do you think he wanted to swap shifts so bad?\n\n"
			"2. Huh hey speaking of lunch someone stole my pie today you would'nt happen to\n"
			"know anything about that would you?\n\n");
	c=choice2();
	if (c==1)
	{
		printf("Bill:\"That's cool why do you think Parker wanted to swap shifts so bad?\"\n\n"
				"Bob makes loud slurping noise as he sucks out more crab meet.\n\n"
				"Bob:\"He just sent me any email. Him and a few of the other guys in the office\n"
				"are on a kick ball team together, so they probably have a game this Saturday.\"\n\n"
				"1. Hey so I had my pie taken from the break room fridge. You wouldn't know\n"
				"anything about that would you?"
				"2. Oh I see. I just remembered that I've got some important sales calls to make so I'd better\n"
				"get going.");
		c=choice2();

		if(c==1)

		{
			printf("Bill:\"Hey so I had my pie taken from the break room fridge. You wouldn't know\n"
					"anything about that would you?\"\n\n"
					"Bob:\"No, sorry I cant sayt that I do.\"\n\n"
					"Bill:\"Okay well if you find any thing out please let me know.\n\n");
		}

		else if (c==2)
		{
			printf("Bill:\"Oh I see. I just remembered that I've got some important sales calls to make so I'd better\n"
					"get going.\"\n\n");
		}

	}

	else if(c==2)
	{
		printf("Bill:\"Hey so I had my pie taken from the break room fridge. You wouldn't know\n"
				"anything about that would you?\"\n\n"
				"Bob:\"No, sorry I cant sayt that I do.\"\n\n"
				"Bill:\"Okay well if you find any thing out please let me know.\n\n");
	}



	return bob;
}
int bob2()
{
	int bob=1;
	int c;
	printf("When Bill enters Bob's office he finds Bob on his computer playing solitare.\n"
			"There is an finshed box of crab legs from The Crab Pot sitting on his desk\n"
			"and butter stains on his shirt.\n\n"
			"1. Dude! Those were Jody's crab legs.\n\n"
			"2. Hey Bob hows it going?");
	c=choice2();

	if(c==1)
	{
		printf("Bill:\"Dude! Those were Jody's crab legs.\"\n\n"
				"Bob:\"Huh, no you must be mistaken. Parker gave me these because I am taking his\n"
				"Saturday shift.\"\n\n"
				"Bill:\"I talked to Jody today and those are defiantly her crab legs.\n"
				"I don't know why you think parker gave them to you.\"\n\n"
				"Bob:\"Parker sent me an email and told me I could have them. See look\n"
				"its right here.\"\n\n"
				"Bob pulls up his email and points to Parker's email.\n\n"
				"		Inbox"
				"Crab Pot Crab Legs for my Saturday shift?            Parker753@hotmail.com\n"
				"Please stop putting cheese in the paper shredder     FavoriteBoss@Toothbrushesareus.com\n"
				"Come see me about your office odor complaints        DanDanHRman@Toothbrushesareus.com\n"
				"Did You clog the toilet and leave it again?!         JeffJefferson@Toothbrushesareus.com\n"
				"Your Mom called to ask if you forgot to feed the dog JuJuJuJody!@Toothbrushesareus.com\n\n"
				"Bill:\" Yeah it's there but don't you think it's a little strange that Parker is the\n"
				"only one not using a work email?\"\n\n"
				"Bob\"I guess a little weird but i did'nt question it.\"\n\n"
				"Bill:\"Okay well you might wanna go actually talk to parker and make sure it was\n"
				"really him.\n\n"
				"Bob shrugs his shoulders and lays back further in his chair.\n\n"
				"Bob:\" Yeah maybe I will if i can squeeze in the time. Ive just got a lot of work\n"
				"to do. You know how it is.\"\n\n"
				"Bill:\"....\"\n\n");
		bob=2;
	}
	else if (c==2)
	{
		printf("Bill:\"Hey Bob hows it going?\"\n\n"
				"Bob closes his solitare game and turns around in his chair.\n\n"
				"Bob:\"Oh you know...busy busy busy. Lot's off sales to make.\"\n\n"
				"Bill Uh HUh, how are you sales calls going?\n\n"
				"Bob:\" So good so good. You know I've thought about going to college to\n"
				"study Quantum Zoology engineering or something like that, but I figure I\n"
				"just make more here. I'm just real good at sales you know...\n\n"
				"Bob proceeds to stuff a large amount of potato chips in his mouth.\n\n"
				"Bill:\"Oh yeah.... makes total sense. So... got any plans for the weekend?\"\n\n"
				"Bob:\"Well I'm working Saturday for Parker because he gave me these crab legs.\n"
				"I'll probably go to the gym on Sunday and pick up some chicks after my work out.\"\n\n"
				"Bill:\"....Oh that sounds fun. You look like the kind of guy who gets a lot of chicks\n\n"
				"Bill was lying.\n\n"
				"Bob:\"Yeah people tell me that quite a bit. It's probably because of my shredded body.\n\n"
				"Bob's body was the farthest thing from shreded.\n\n"
				"Bill:\" Ah... yes you are quite strong. Hey I think I better get going.\n"
				"I've got a lot of work that I should be doing.\n\n");
	}


	return bob;
}//bob2

int sharron()
{
	int c;
	int shar=1;
	printf("Bill Enters Sharrons office and finds her listening to a Taylor Swift song\n"
			"as she types on her computer.\n\n"
			"Sharron:\" Oh hey Bill hows it going?\n\n"
			"1. It's going great!\n\n"
			"2. Not so good...\n\n");
	c=choice2();

	if(c==1)
	{
		printf("Bill:\"It's going great!\"\n\n"
				"Sharron:\" That's wonderful Bill. Are you getting the hang of\n "
				"this sales job?\n\n"
				"Bill:\" I sure am.\"\n\n"
				"Sharron:\"Very good. Is there any thing I can help you with?\"\n\n"
				"Bill: It's not exactly sales related, but someone stole my pie from\n"
				"the break room and I was wondering if you might know who took it.\n\n"
				"Sharron: That's terrible dear. I wish I did know. If I had to put my\n"
				"money on any one though it would probably be Bob that guys has been know\n"
				"to take food that does't belong to him.\"\n\n"
				"Bill:\"Thanks I'll check that out.\"\n\n");
	}


	return shar;
}
void parker()
{
	int c;
	printf("You enter parker's office to find him sitting at his desk.\n"
			"There is a picture of his family on his desk as well as some\n"
			"photo's of what looks be kick ball games. Bill recognizes his\n"
			"coworkers Jeff and Jim in the kick ball photo's\n\n"
			"Parker:\"Hey Bill how's it going?\"\n\n"
			"1. Great! I like the pictures you have on your desk.\n\n"
			"2. Not so good actually. Someone stole my pie and I was wondering\n"
			"if you knew anything about that.\n\n");
	c=choice2();

	if(c==1)
	{
		printf("Bill:\"Great! I like the pictures you have on your desk.\"\n\n"
				"Parker:\" Thanks, yeah that's my family and those other ones are of the\n"
				"kick ball team I play on. Jeff and Jim also play.\n\n"
				"Bill:\"That sounds fun.\"\n\n"
				"Parker:\"Yeah it is a lot of fun. If you ever want to join you are welcome to.\"\n\n"
				"Bill:\"Oh I like to play but I'd probably hold you guys back. I'm not that great\n"
				"at kick ball.\"\n\n"
				"Parker:\"That's okay most of us just play for fun. We don't care if we win or lose.\n"
				"Jeff get's pretty competitive. but he's the only one who really takes it seriously.\"\n\n"
				"Bill:\"Cool I'll let you guys know if I want to come join.\"\n\n");
	}

	else if (c==2)
	{
		printf("Bill:\"Not so good actually. Someone stole my pie and I was wondering\n"
				"if you knew anything about that.\"\n\n"
				"Parker:\"Oh man that sucks. I'm sorry to hear that. I don't know who did that but\n"
				"I'll keep my eyes open.\"\n\n");
	}



}//parker

int dave()
{
	int c;
	int dave;
	printf("When Bill Enter's Dave's office he can't help but notice the smell of Marijuana\n"
			"There is a large poster behind his desk with a UFO that say's \"Raid Area 51 free\n"
			"the Aliens\" Dave turns to greet Bill. His Eyes are slightly red.\n\n"
			"Dave:\"Who are you?!!\"\n\n"
			"Bill:\"Hi Dave, I am your new coworker Bill.\"\n\n"
			"Dave:\"Bill?....You aren't one of them government agents are you?\"\n\n"
			"1.Yes I'm with the FBI.\n\n"
			"2. No I'm just a regular guy looking for a pie thief.\"\n\n");

	c=choice2();

	if(c==1)
	{
		printf("Bill:\"Yes I'm with the FBI.\"\n\n"
				"Dave's Eyes widen he rapidly reaches for his desk draw and pull's out what looks to be\n"
				"a taser gun. He points it directly at Bill and yells at the top of his lungs \"I KNEW IT!\n"
				"TAKE THIS YOU LOUSY FED!\"\n\n"
				"Bill: WOAH WOAH WOAH IT WAS JUST A JO...AHHHHHH!\"\n\n"
				"It was too late. The next thing Bill knew he was laying flat on his back getting shocked. Bill could\n"
				"Hear rushed foot steps outside the office. The door is thrown open and Ted runs in. Ted Grabs Dave and\n"
				"wrestles him to the ground. The Tasing stops ans Ted helps Bill in to a chair.\n\n"
				"Ted:\" Dave are you crazy! What Were You thinking?!\n\n"
				"Dave:\"uhhh.... He's a fed!! He was coming to get information out of me!\"\n\n"
				"Ted:\"No Dave you Idiot! He's your coworker and your'e high again arn't you?\n\n"
				"Dave:\"......no\"\n\n"
				"Ted:\" Dave I stuck up for you last time when you brought a chicken in to the office but\n"
				"I can't help you this time. I'm taking you to the bosses office and I'll be amazed if he\n"
				"doen't fire you. Bill are you alright?\"\n\n"
				"Bill:\"Yeah I guess I'm as good as a guy can after getting tased. I think I'm just gonna sit here\n"
				"for a bit.\"\n\n"
				"Ted:\"Okay hang tight I'm gonna take this lunatic up stares and I'll be right back.\"\n\n"
				"Ted Grabs Dave and pulls him out of the room and they head up to the bosses office. Ted\n"
				"Returns 15 minutes later.\n\n"
				"Ted:\"Sorry about that Bill. Dave is crazy. We've had some problems with him in the past but\n"
				"I think this incident takes's the cake. I'm sure this comes at no surprise, but the boss fired\n"
				"him.\"\n\n"
				"Bill:\" Wow that was quite the experience. I really don't wanna do that again. Are there any other maniacs\n"
				"in the office that I should know about?\"\n\n"
				"Ted:\"Thankfully it was just him.\n\n");
		dave=1;
	}

	else if(c==2)
	{
		printf("Bill:\"No I'm just a regular guy looking for a pie thief.\"\n\n"
				"Dave:\" Pie Thief! Where!\"\n\n"
				"Bill:\"....No I mean that someone took my pie from the office break room and I was wondering\n"
				"if you might know who did it.\"\n\n"
				"Dave:\" Oh I know who did it alright! The government! Thats who!\"\n\n"
				"Bill Realizes that this conversation in going no where and decides to leave.\n\n"
				"Bill:\" Thanks Dave, I'll Look in to that.I had better get going.\"\n\n");
	}


	return dave;
}

void dave1()
{
	printf("Nothing to see here. The Office has been locked since Dave got fired earlier today.\n\n");
}
int ted()
{
	int ted;
	int c;
	printf("Bill is welcomed in to Ted's office by a loud friendly...."
			"Ted:\"Bill! Good to see you buddy!\\n"
			"How's it going?\"\n\n"
			"1.I see what's going on here. You're trying to play the nice guy to hide what you've done\n"
			"You stole my pie did'nt you?\n\n"
			"2.I'm doing well. Wow I'm surprised you remembered my name.\n\n");
	c=choice2();
	if(c==1)
	{
		printf("Bill:\"I see what's going on here. You're trying to play the nice guy to hide what you've done\n"
				"You stole my pie did'nt you?\n\""
				"Ted:\"Hahaha good one Bill! Your a funny guy.\"\n\n"
				"Bill:\"... You can pretend all you want. You really did take it did'nt you?\"\n\n"
				"The smile fades from Ted's face.\n\n"
				"Ted:\"Wait did you really have a pie stolen from you?\"\n\n"
				"Bill:\" Yes!\"\n\n"
				"Ted:\"Oh I'm sorry Bill I did'nt take it but I hope you find out who did.\n");
		ted=1;
	}

	else if(c==2)
	{
		printf("\"I'm doing well. Wow I'm surprised you remembered my name.\"\n\n"
				"Ted:Yeah Of course Man! I remember when I was new in the office. I knew no one and\n"
				"I felt a little akward. I know what it's like so I try my best to be welcoming.\n"
				"So tell me Bill, what brings you in to my office?\"\n\n"
				"1.My pie was taken from the office I wonder if you could tell me who took it?\n\n"
				"2. I'm just trying to get to know you guys.\n\n");
		c=choice2();

		if(c==1)
		{
			printf("Bill:\"My pie was taken from the office I wonder if you could tell me who took it?\"\n\n"
					"Ted:\"Well Bill Unfortunately I don't know who took it but I'll let you know\n"
					"if I find out.\"\n\n");
		}
		else if(c==2)
		{
			printf("Bill:\"I'm just trying to get to know you guys.\"\n\n"
					"Ted:\"That's awesome! I'll Tell you a little bit about my self. Like you I am not from\n"
					"Seattle. I am originally from Draper Utah where I was working for Toothbrushes Are Us.\n"
					"I just wanted a little change of scenery so i asked to be transfered to the office up here\n"
					"and that's that. I love it here. I do miss Utah sometimes but I've just made too many good\n"
					"friends here. Like some of the guys at work that I play kick ball with. Hey You should Join\n"
					"Our team! It's me Jim, Jeff and Parker. I think you'd love it!\"\n\n"
					"Bill:\"I'll Consider it. I'm not a great kick ball player but it could be fun.\"\n\n"
					"Ted:\"Well You think about it and feel free to stop by my office an time that you want to chat.\"\n\n"
					"Bill:\"Will do thanks!\"\n\n");
			ted =2;
		}
	}
	return ted;
}//ted

void ted1()
{
	printf("Ted:\"Hi Bill, Any luck finding that pie thief yet?\"\n\n"
			"Bill:\"No not yet but I will.\"\n\n");
}

void ted2()
{
	int c;
	printf("Ted:\"Hey Bill! Welcome! How can I help You?\"\n\n"
			"1.My pie was taken from the office I wonder if you could tell me who took it?\n\n"
			"2. Oh just stopping by to say hi.\n\n");
	c=choice2();
	if(c==1)
	{
		printf("Bill:\"My pie was taken from the office I wonder if you could tell me who took it?\"\n\n"
				"Ted:\"Well Bill Unfortunately I don't know who took it but I'll let you know\n"
				"if I find out.\"\""
				"Bill:\" Have you seen anything that is at all suspicious lately?\"\n\n"
				"Ted:\"You know now that you mention it I did check my schedule and saw that Sharron took my\n"
				"Saturday Shift for me. I never asked her to do it either so I wonder if that could some how\n"
				"be related to you missing cake.\"\n\n"
				"Bill:\" Interesting I'll Check it out.\n\n");
	}
	else if(c==2)
	{
		printf("Bill:\" Oh just stopping by to say hi.\n\n"
				"Ted:\"Well you are welcome here any time and you came at a great time\n"
				"becuase I've been wanting to play a game of rock paper scissors with\n"
				"someone. Would you care to play?\"\n\n"
				"1.Yes\n\n"
				"2.No\n\n");
		c=choice2();

		if(c==1)
		{
			printf("Bill:\"Yes lets play.\"\n\n"
					"Ted:Excellent! Okay I'll say rock, paper, scissors and shoot!\n"
					"Rock, Paper, Scissors, Shoot!\"\n\n"
					"1.Rock\n\n"
					"2.Paper\n\n"
					"3.Scissors\n\n");
			c=choice3();

			if(c==1)
			{
				printf("Ted chose scissors and Bill chose rock\n\n"
						"Ted:\"Good Job Bill You got me!\n\n");
			}
			else if(c==2)
			{
				printf("Ted Chose scissors and Bill chose paper.\n\n"
						"Bill:\"Looks like you win Ted.\"\n\n");
			}
			else if(c==3)
			{
				while(c==3)
				{
					printf("Ted and Bill both chose scissors.\n\n"
							"Ted:\"looks like we will have to play again.\n"
							"Rock, Paper, Scissors, Shoot!\"\n\n");
					c=choice3();
				}
				if(c==1)
				{
					printf("Ted chose scissors and Bill chose rock\n\n"
							"Ted:\"Good Job Bill You got me!\n\n");
				}
				else if(c==2)
				{
					printf("Ted Chose scissors and Bill chose paper.\n\n"
							"Bill:\"Looks like you win Ted.\"\n\n");
				}
			}

			else if(c==2)
			{
				printf("Bill\"No thanks maybe another time.\"\n\n");
			}

		}
	}



}//ted 2

int paul()
{
	int paul=1;
	int c;

	printf("Bill Enters Paul's office to see an annoyed looking Paul.\n\n"
			"Paul:\"Can I help you?\"\n\n"
			"1.Hey Paul are you okay?\n\n"
			"2.Someone took my pie. Did you see anything?\n\n");
	c=choice2();

	if(c==1)
	{
		printf("Bill:\"Hey Paul are you okay?\"\n\n"
				"Paul:\"I'm fine just a little mad because someone ate my cheesecake that\n"
				"I had in the fridge.\"\n\n"
				"Bill:\"What You too? Someone took my pie today!\"\n\n"
				"Paul:\" I can't belive people! I bet it was the same person.\n\n"
				"Bill:\"Well I'm on the hunt for whoever did it. If I find out who did it I'll\n"
				"let you know.\"\n\n"
				"Paul:\"Thanks Bill.\"\n\n");

	}

	else if (c==2)
	{
		printf("Bill:\"Someone took my pie. Did you see anything?\"\n\n"
				"Paul:\"Seriously? Someone took my Cheese cake today.\"\n\n"
				"Bill:\"That's Crazy. I'm going to find out who did this and I'll let you\n"
				"know when I find out.\"\n\n");
	}

	return paul;
}// paul


int jeff()
{
	int jeff=1;
	int c;
	printf("Bill enters Jeff's office to find Jeff listening to very loud Metallica music and head banging\n\n"
			"Bill:\"Hello...\"\n\n"
			"There is no response from Jeff. He doesn't seem to hear you. He Continues to head band and\n"
			"play an invisible guitar."
			"1. HELO THERE!!\n\n"
			"2.(Throw a Pencil at Jeff)\n\n"
			"3. Leave\n\n");
	c=choice3();

	if(c==1)
	{
		printf("\"Bill:Hello THERE!\"\n\n"
				"Jeff turns around and turns down the volume.\n\n"
				"Jeff:\"YO! You scared me. What's up man?\"\n\n"
				"1.Did you see anyone take a pie out of the fridge today?\n\n"
				"2.Hey Nice Music.\n\n");
		c=choice2();

		if(c==1)
		{
			printf("Bill:\"Did you see anyone take a pie out of the fridge today?\"\n\n"
					"Jeff:\"No man I haven't. Are you missing one?\"\n\n"
					"Bill:\"Yes someone took mine and i don't know who it was.\"\n\n"
					"Jeff:\"Hmm that's weird. Sorry to hear that man.\n\n"
					"Bill:\"Yeah well if you hear anything could you pleas let me know.\"\n\n"
					"Jeff:\"For sure man\"\n\n");
		}
		else if(c==2)
		{
			printf("Bill:\"Hey Nice Music.\"\n\n"
					"Jeff:\"Thanks man I'm a big fan of Metallica. I listen to it when I wanna get pumped!\"\n\n"
					"Bill:\"Oh Are you excited about Something?\"\n\n"
					"Jeff:\"Yeah I've got a big kick ball game coming up this Saturday and I'm just really siked\n"
					"about it! I don't wanna be rude but could you let me get back to being siked? You kinda messed\n"
					"with my vibe when you came in.\"\n\n"
					"Bill:\"....Uh yeah sure.\"\n\n"
					"Jeff:\"Thanks man. No disrespect I just wanna keep my Hype mood up.\"\n\n");
		}

	}

	else if(c==2)
	{
		printf("Bill Throws a pencil at Jeff. Jeff lets out a little scream and quickly turns around.\n"
				"He dose an awkward looking kick and then see's Bill at the door.\n\n"
				"Jeff:\"Woah! Dude You scared me! What was that for?\"\n\n"
				"Jeff turns the music volume down a little bit.\n\n"
				"Bill:\"Oh I was just trying to get your attention. The music was pretty loud.\"\n\n"
				"Jeff:\"Well bro you totally ruined the vibe so I'm gonna need you to leave.\"\n\n");
	}

	return jeff;
}//jeff

int jeff3()
{
	int c;
	int jeff=3;
	printf("Bill enters Jeff's office to find Jeff listening to very loud Metallica music and head banging\n\n"
			"Bill:\"Jeff!!\"\n\n"
			"Jeff Pretends not to hear Bill.\n\n"
			"1.(Turn off Jeff's Music.)\n\n"
			"2.(Throw a Pencil at Jeff.)\n\n"
			"3. Leave\n\n");
	c=choice3();

	if(c==1)
	{
		printf("Bill walks over to Jeff's speaker and hit's the power button.\n\n"
				"Jeff:\" What the pringle dude! I was listening to that.\"\n\n"
				"1.Yeah well I found out who ate my Pie and I think I know who told him to eat my pie!\n\n"
				"2.My PIE!!!!!!!!!!!!(Grab Jeff by the collar.)\n\n");
		c=choice2();
		if(c==1)
		{
			printf("Bill:\"Yeah well I found out who ate my pie, and I think I know who told him to eat my pie!\n\n"
					"Jeff starts to sweat just a little bit.\n\n"
					"Jeff:\"Oh you do huh? Who?\"\n\n"
					"Bill:\"Why don't you take one guess?\"\n\n"
					"Jeff:\"Your not Impling that it was me are you?\n\n"
					"Bill:\"That's exactly what I am implying. Why don't you just confess?\"\n\n"
					"Jeff:\"You have no proof!\"\n\n"
					"Bill:\"Let me ask you just one question. If Jim, Parker and Ted chose not to come to\n"
					"your kick ball game this Saturday how would that make you feel?\"\n\n"
					"Jeff: Don't you Dare! I have to beat my stupid brother in law Tim.\"\n\n"
					"Bill:\"Oh So that's why your little game is so important.\"\n\n"
					"Jeff:\"Yeah yeah yeah I admit it! You win okay. I sent a fake eamil to Phil and told him\n"
					"that he could have you pie if he'd cover Jim's shift alright. Please please don't do anything\n"
					"to convince them to skip the game. I need them to win.\"\n\n"
					"Bill:\"Maybe I will Maybe I won't.\"\n\n"
					"Jeff:\'Bill Please please don't!\n");
		}

		else if(c==2)
		{
			printf("Bill Grabs Jeff by the collar and and yanks him up out of his chair.\n\n"
					"Bill:\"My PIE!!!!!!!!!!!! It was you this whole time wasn't it?!\"\n\n"
					"Jeff:\"AhHHH! okay okay okay  yeah yeah it was me! I admit it! please\n"
					"just don't hurt me!\"\n\n"
					"Bill:\"Wow that was easy. Okay thanks.\"\n\n"
					"Bill thinks to him self \"I guess I can go get Jim now and see what he's got planned.\"\n\n");
		}

	}



	return jeff;

}

void win_jim()
{
	printf("Bill and Jim walk in to Jeff's office. Jeff is looking worried but tries his best to put on a\n"
			"confident face.\n\n"
			"Jeff:\"Bill! Jim! What brings you in to my office?\"\n\n"
			"Jim:\"I think you know what brings us in to your office.\"\n\n"
			"Jeff starts to sweat.\n\n"
			"Jim:\" Jeff I like kick ball just as much as you do. Well.., maybe not as much as you do, but\n"
			"You can't just go giving peoples food away just to get our shift's covered. You Really ruined\n"
			"Bill's day. I don't know who else's food you gave away but it must have been more than just Bill's.\"\n\n"
			"Bill:\"I do know! He gave Jody's crab legs away and Paul's cheese cake!\"\n\n"
			"Jim:\"Oh Jeff Seriously?\"\n\n"
			"Jeff:\"Um well.... yeah....I'm sorry....\"\n\n"
			"Jim:\"Well Jeff it looks like you owe Bill some pie. Bill where did you get your pie from?\"\n\n"
			"Bill:\"Oh he won't be able to get the same pie. I brought it from a pie shop back in Montana\"\n\n"
			"Jim:\"Well looks like Jeff has got him self a road trip to Montana.\"\n\n"
			"Jeff:\"What?! Dude! There is no way that's hours from here!\"\n\n"
			"Jim:\"Well if you want me to play on Saturday you'll get Bill his pie.\"\n\n"
			"Bill:\"Yeah and I want Huckleberry!\"\n\n"
			"Jim:\" Well Jeff You heard the man. Bill What's the name of the pie shop\"\n\n"
			"Bill:\"It's the Iron horse cafe in three forks Montana.\"\n\n"
			"Jeff:\"Oh come on guys...... can't we work this out some other way?"
			"Bill & Jim:\"Nope\"\n\n"
			"Jim:\"That's how its gonna be. You get Bill his pie, Jody her crab legs and Paul his cheese cake.\n"
			"or I don't play Saturday, and I'll convince Parker and Ted to skip as well.\"\n\n"
			"Jeff:\"Okay okay okay fine fine! I'll do it but we better win on Saturday!\"\n\n"
			"Jim:\"You get these fine folks their food and I will play my heart and soul out.\"\n\n");

		printf("And that was that. It was a happy ending for all. Bill got his pie, Jody got her crab legs\n"
				"and Paul got his cheese cake. Jody thanked Bill for he persistence and detective\n "
				"work. Bill Even worked up the courge to ask Jody out on a date. They went to the crab\n"
				"pot that Saturday night and there will be more dates to come.\n\n"
				"Even Jeff got his happy ending. Jim, Parker and Ted kicked their way to victory and beat\n"
				"Jeff's stupid brother in law Tim.\n\n"
				"Bill had made may friends along the way and now living in Seattle didn't seem so bad.\n\n");

}



int main(void)

{

	struct hold_value
	{
		int stan;// 1= email sent, 2= had a nice chat
		int jody;// 1= Jody tells bill her food was taken and bill tells jody that his pie was as well.
		//2= Bill knows about Jody's food but jody doesn't know about his pie.
		int off;
		int boss;
		int phil;//1 = told you about Jim
		int jim;//2= Jim offers to help
		int bob;// 1= Bill see's the crab legs and Bob tells him that parker gave them to him.
		int sharron;
		int dave;// 1= dave got fired and bill is tased
		int ted;
		int paul;// 1= Paul and Bill know about each others missing food.
		int jeff;
		int won;
	};

	struct hold_value i={0};
	struct hold_value* value= NULL;
	value=&i;
	int sr=0;
	int jod=0;
	int off=0;
	int phi=0;
	int jimm=0;
	int bo=0;
	int shar=0;
	int dav=0;
	int tedd=0;
	int jefff=0;
	int floor =2; // 1 = bottom, 2 = middle, 3 = top
	int paull=0;

        intro ();
	display_middlefloor();
	int c = choice();

	//***********

	while (value->won !=1)// This is the game's main loop. It will repeat until a game ending decision is made.
	{

		if (c == 1)
		{
			if (floor == 1)
			{
				floor =2;
				display_middlefloor();
			}

			else if (floor ==2)
			{
				floor =3;
				display_top_floor();
			}

			else if(floor == 3)
			{
				floor =2;
				display_middlefloor();
			}

			c = choice();
		}//end of c==1

		else if(c==2)
		{
			if (floor == 1)
			{
				printf("\n");


				if (value->stan == 0)
				{
					sr = security_room();
				}
				else if (value->stan == 1)
				{
					sr=security_room1();
				}

				else if (value->stan == 2)
				{
					security_room2();
				}


				if (sr==1)
				{
					value->stan=1;
				}
				else if(sr==2)
				{
					value->stan=2;
				}
				floor= 1;
				display_bottom_floor();
			}

			else if (floor ==2)
			{
				floor =1;
				display_bottom_floor();

			}

			else if(floor == 3)
			{

				printf("\n");
				boss_office();
				floor=3;
				display_top_floor();
			}
			c = choice();
		}//end of c==2

		else if(c==3)
		{
			if (floor == 1)
			{
				printf("\n");
				if(value->jody==0)
				{
					jod =jody();
				}

				else if(value->jody ==1)
				{
					Jody1();
				}

				else if(value->jody==2)
				{
					jod=jody2();
				}



				if(jod==1)
				{
					value->jody=1;
				}
				if (jod==2)
				{
					value->jody=2;
				}



				floor =1;
				display_bottom_floor();
			}

			else if (floor ==2)
			{
				if(value->stan ==0)
				{
					your_office();
				}

				else if((value->stan ==1) || (value->stan == 2))
				{
					off=your_office1();
				}

				if (off==1)
				{
					value->off=1;
				}

				floor=2;
				display_middlefloor();

			}


			else if(floor == 3)
			{
				hr_office();
				display_top_floor();
			}
			c = choice();
		}//end of c==3

		else if(c==4)
		{
			if (floor == 1)
			{
				if(phi==0 || phi ==1)
				{
					phi=phil();
				}
				if(phi ==1)
				{
					value->phil=1;
				}
				if(phi==2)
				{
					value->phil=2;
				}
				floor=1;
				display_bottom_floor();
			}

			else if (floor ==2)
			{

				if ((value->jim==0)&&(value->phil !=1)&&(value->phil !=2) && (value->jeff!=3))
				{
					jim();
				}

				else if((value->phil==1) && (value->jeff !=3))
				{
					jimm=jim1();
				}

				else if((value->phil==2)&&(value->jeff !=3))
				{
					jimm=jim2();
				}

				else if(value->jeff == 3)
				{
					jimm=jim3();
				}


				if(jimm==1)
				{
					value->jim=1;
				}
				if(jimm==2)
				{
					value->jim=2;
				}
				if(jimm==3)
				{
					value->won =1;

				}
				floor=2;
				if(value->won !=1)
				{
					display_middlefloor();
				}
			}

			else if(floor == 3)
			{

				if ((bo ==0) && (value->jody !=1) &&(value->jody !=2))
				{
					bo=bob();
				}

				if((value->jody ==1)|| (value->jody==2))
				{
					bo=bob2();
				}

				if(bo==1)
				{
					value->bob =1;
				}
				if (bo==2)
				{
					value->bob=2;
				}

				floor=3;
				display_top_floor();
			}
			if(value->won !=1)
			{
				c = choice();
			}
		}//end of else if c==4

		else if(c==5)
		{


			if (floor == 1)
			{
				if(value->dave==0)
				{
					dav=dave();
				}

				else if(value->dave==1)
				{
					dave1();
				}

				if(dav==1)
				{
					value->dave=1;
				}
				floor=1;
				display_bottom_floor();

			}

			else if (floor ==2)
			{
				parker();
				floor =2;
				display_middlefloor();
			}

			else if(floor == 3)
			{
				if(value->sharron==0)
				{
					shar=sharron();
				}

				if(shar==1)
				{
					value->sharron=1;
				}
				if(shar==2)
				{
					value->sharron=2;
				}
				floor=3;
				display_top_floor();
			}
			c = choice();
		}//else if c==5

		else if(c==6)
		{
			if (floor == 1)
			{
				if((value->ted==0)&& (value->dave !=1))
				{
					tedd=ted();
				}
				else if((value->ted==1) && (value->dave !=1))
				{
					ted1();
				}
				else if(value->ted==2 && value->dave !=1)
				{
					ted2();
				}


				if(tedd==1)
				{
					value->ted=1;
				}
				if(tedd==2)
				{
					value->ted=2;
				}
				floor= 1;
				display_bottom_floor();
			}

			else if (floor ==2)
			{

				paull = paul();
				floor=2;
				display_middlefloor();

				if(paull==1)
				{
					value->paul=1;
				}
			}
			else if(floor == 3)
			{

				if((value->jeff==0)&&(value->jim!=2))
				{
					jefff=jeff();
				}

				else if(value->jim==2)
				{
					jefff=jeff3();
				}


				if (jefff==1)
				{
					value->jeff=1;
				}
				if(jefff==3)
				{
					value->jeff=3;
				}

				floor=3;
				display_top_floor();

			}
			c = choice();
		}// else if c==6

}//end of while won !=1

	if(value->jeff==3)
	{
		win_jim();
	}

	return EXIT_SUCCESS;
}


