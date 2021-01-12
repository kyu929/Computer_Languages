1. 입력

2. 출력
  소수점 출력)
    cout<<fixed; - 자릿수 고정(cout<<setf(ios::fixed);로 사용가능)
    cout<<unsetf(ios::fixed); - 설정 해제
    cout<<setf(ios::fixed); - 자릿수 고정
    cout.precision(자릿수);
  )

3. abs()
  절댓값 함수. int 타입의 정수 절대값 함수의 오버로딩 <cstdlib>에 존재하고, float, double 타입의 실수 절대값 함수의 오버로딩은 <cmath>에 존재.


4. 증감연산자
  (i++) vs (++i)
  i++는 내부적으로 다음과 같이 동작한다
  (1) i의 현재 값을 보관한다. (현재 실행되는 명령문에서는 이 보관된 값이 사용되어야 하기 때문에)
  (2) i의 값을 1을 더한다.
  (3) 보관했던 값을 반환한다.
  
  ++i는 내부적으로 다음과 같이 동작한다.
  (1) i의 값을 더한다.
  (2) i의 값을 반환한다.

5. 구조체

6. 배열
  2차원 배열 선언 시 1차원 배열과 다르게 각 행과 열을 1000이상으로(정확하지는 않지만) 할 시 메모리가 초과되는 듯하다.(visual studio에서)
  
7. sort함수
  sort함수 사용시 기본 오름차순 sort(시작부분, 끝부분) 내림차순 시 bool desc(int a, int b){ return a > b; } sort(시작부분, 끝부분, desc)
  
8. Vector
  min_element 사용시 range 범위 참고
  Finds the smallest element in the range [first, last).
  
9. memset
