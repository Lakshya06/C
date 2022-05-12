#include <string.h>
#include <stdio.h>

#include <bits/stdc++.h>
#include <sstream>

using namespace std;

void split(const string &s, char delimiter,
                     vector<string> &words)
{
    string token;
    stringstream tokenStream(str);
 
    while (getline(tokenStream, token, delimiter))
        words.push_back(token);
}

int dist(char *str, char *w1, char *w2)
{
	
	
}

int main()
{

	int n, lenStr;
	char str[100] = "practice makes a man perfect";
	char w1[10] = "practice";
	char w2[10] = "man";
	char modStr[100][50];
	lenStr = strlen(str);
	
	printf("%d", lenStr);
	
	for(i=0; i<lenStr; i++)
	{
		
		
	}
	
	
	
//	scanf("%d", &n);

	

    return 0;
}
