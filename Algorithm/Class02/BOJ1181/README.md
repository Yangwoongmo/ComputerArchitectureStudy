# BOJ1181

## #include <algorithm>의 find() 함수

find 함수는 start, last, index 를 매개변수로 받는다
시작에서 끝까지 인자 값이 있는지를 확인하고
있다면 index의 반복자를 return, 없다면 last를 return한다

범위는 start <=   < last 이다

따라서 vector 안에 str값이 없다면 vec.end() 를 return 하게 되므로
== 연산자로 해당 값이 vec.end()와 같은지 확인하고

같다면 str은 vector안에 없는 것이기 때문에 push_back으로 넣어준다


## #include <algorithm>의 sort() 함수

길이를 오름차순으로 정렬하며
길이가 같다면 사전순으로 정렬해야한다

sort()함수를 사용해보았다

sort()함수는 begin, end, 
그리고 세 번째 인자로 compare , greater<자료형>(), less<자료형>() 중 하나를 받습니다

사전순으로 정렬이 추가로 필요하기 때문에 compare, 사용자 정의 함수를 넣어서 정렬하였고

a와 b의 길이가 같다면 사전순으로, 아니라면 길이순으로 정렬하게하는 Compare함수를 만들어서 세 번째 매개변수로 넣어서 정렬해주었다