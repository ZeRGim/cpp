int SimpleFunc(int a=10)
{
    return a+1;
}

int SimpleFunc(void)
{
    return 10;
}

//위와 같은 오버로딩이 문제가 되는 이유: SimpleFunc() 를 호출했을때 SimpleFunc(10) 인지 SimpleFunc()인지 구분이 안됨.