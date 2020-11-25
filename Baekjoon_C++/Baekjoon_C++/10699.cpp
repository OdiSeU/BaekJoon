#include <iostream>
#include <ctime>

//int main() {
//	time_t now = time(NULL);
//	struct tm t;
//	localtime_s(&t, &now);
//	printf("%d-%d-%d", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday);
//	return 0;
//}

int main() {
	time_t now = time(NULL);
	struct tm* t = localtime(&now);
	printf("%d-%d-%d", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
	return 0;
}