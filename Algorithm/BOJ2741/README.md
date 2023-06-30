# endl과 '\n'

1부터 입력받은 숫자 n까지의 출력을 해야 하는 문제
한 줄에 숫자를 하나씩 출력해야 했기에 
무의식적으로 << endl 을 사용하여 개행을 시도했는데, 타임아웃이 뜨며 실패했다

이후 원인을 찾아보니 endl이 문제였다
endl과 '\n'는 엄청난 속도 차이가 있는데, 그 이유는 바로 endl은 버퍼를 비우는 과정이 포함되어 있어서 그렇다고 한다

버퍼가 그래서 뭐냐?
버퍼를 사용하지 않는 입력은, 키보드를 누르자마자 프로그램에 다이렉트로 전달이 된다
하지만 버퍼를 사용한다면 입력을 버퍼에 전달하다가, 버퍼가 가득 차거나 개행 문자가 나타나면 버퍼의 내용을 한 번에 전송한다

## 버퍼란

버퍼는 임시 메모리 공간이다, 입출력을 바로바로 전달하는 것이 아니라 버퍼에 담아둘 수 있다
버퍼를 사용하면서 얻을 수 있는 장점은
1. 문자를 한번에 전달하므로 전송시간이 적게 걸림
2. 문자를 잘못 입력할 경우 수정 가능
3. 시스템콜을 적게 호출해 자원을 아낌

이렇게 임시적으로 버퍼에 저장하는것을 버퍼링이라고 칭한다
버퍼링의 방식엔 두 가지가 있는데

1. 버퍼가 다 찰 때까지
2. 개행을 의미하는 문자가 나타날 때까지

## 버퍼를 비운다는 것

버퍼에 저장돼있던 내용을 내보낸다는 것이다. stdout 버퍼를 비우면 화면으로 그 내용이 출력되는데, 이것을 flush한다고 한다

버퍼를 비우는 케이스는 버퍼링 방식을 뒤집으면 된다

1. 버퍼가 다 찼을 경우
2. 개행문자가 나타났을 경우

앞선 2번의 예를 들자면 

int main(void)
{
    std::cout << "hello" << std::endl;
    sleep(5);
    return (0);
}

이 코드는 hello 가 출력된 후 5초뒤에 종료된다

int main(void)
{
    std::cout << "hello";
    sleep(5);
    return (0);
}

이 코드는 5초 뒤에 hello가 출력된 후 종료된다

앞선 코드는 버퍼를 비우라는 endl 이 나왔기 때문에, hello를 바로 버퍼에서 비우고 (출력하고) 종료한다
하지만 뒤의 코드는 버퍼를 비우라는 사인이 없었기 때문에 버퍼에 hello가 쌓인 상태로 5초가 지나고, 프로그램이 종료되면서 커널에 의해 버퍼를 비우게 된 것이다

한가지가 더 있는데, 인위적으로 비워주는 경우도

3. C 표준 라이브러리 fflush() 를 사용할 때

int main(void)
{
    std::cout << "hello";
    fflush(stdout);
    sleep(5);
    return (0);
}

맨 처음 코드와 같이 출력 후 5초가 지난다

## endl 과 \n의 차이

endl은 버퍼를 비우는 과정이 포함되어 있다고 말했다
endl이 입력되는 순간, 버퍼를 비우게 된다

하지만 \n의 경우 버퍼를 비우지 않는다, 다만 구현체에 따라서 endl처럼 버퍼를 비우도록 처리하는 경우도 있다고 한다
그렇지만 장담할 수 없으므로, 버퍼를 비우고 싶으면 확실하게 endl을 사용하도록 하자

속도도 크게 차이난다, 매 호출마다 버퍼를 비우는 작업을 하는 endl은 그냥 버퍼가 다 찰때까지 데이터를 쌓아 자동으로 비우는 \n에 비해 굉장히 느리다

굳이 즉시 출력해줘야 하는 경우가 아니라면, \n으로 모아뒀다가 한번에 출력하는게 시간을 크게 단축할 수 있다

내가 경험한 타임아웃은 이래서이다


~~ 
이 둘이 비우는 버퍼가 
endl은 buffered IO
\n은 streamed IO

로 다르다고 하는데 구체적인 자료는 찾지 못했다