### 1. Input
input() 의 결과는 문자열(str)로 출력.
출력 타입 변경 시  a = type(input())
split함수를 쓸 경우 여러 개의 입력이 가능하다. [ ex) a = input().split()] (이 때 입력은 리스트 형식으로 입력된다.)
a, b = input().split()으로 쓸 경우 여러 변수에 입력이 가능하다(단, 변수 갯수만큼 입력이 가능하다. and 타입은 str이다.)
map함수를 사용하여 여러 개의 변수의 입력 타입을 한 번에 바꿔줄 수 있다. ex) a, b = map(type, input().split())
   
   
### 2. for
for에 range 대신 리스트를 넣으면 리스트의 요소를 꺼내면서 반복합니다.

list를 for문으로 출력 시)
for i in range(values):       for i in list:        |    for i in list:
   print(list[i])                print(i)           |       print(list[i])
       O                              O                            X                why?

### 3. 람다 표현식
람다 표현식에서 주의할 점은 람다 표현식 안에서는 새 변수를 만들 수 없다는 점입니다. 
따라서 반환값 부분은 변수 없이 식 한 줄로 표현할 수 있어야 합니다. 변수가 필요한 코드일 경우에는 def로 함수를 작성하는 것이 좋습니다.
   
람다 표현식 안에서는 elif를 사용할 수 없다. 따라서 조건부 표현식은 //  식1 if 조건식1 else 식2 if 조건식 else 식3 // 형식처럼 if를 연속으로 사용해야 한다.
   
   
### 4. 함수
고정 인수와 가변 인수를 함께 사용할 시 고정인 고정 매개변수를 먼저 지정하고, 그 다음 매개변수에 *를 붙여주면 된다. 
고정 매개변수보다 앞쪽에 오면 안 된다.
 
재귀함수)
python의 경우, 최대 재귀 깊이(maximum recursion depth)가 1,000으로 정해져 있다. 이 때 최대 재귀 깊이를 초과하면 RecursionError가 발생한다.
최대 재귀 깊이를 얻고 늘리는 방법 reference : https://www.delftstack.com/ko/howto/python/how-to-get-and-increase-the-maximum-recursion-depth-in-python/

### 5. Comprehension
+ List Comprehension (LC)
+ Set Comprehension (SC)
+ Dict Comprehension (DC)
+ Generator Expression (GE)

1. List Comprehension
   리스트를 쉽게 생성하기 위한 방법이다. 이는 파이썬에서 보편적으로 사용되는 기능으로 다양한 조건으로 리스트를 생성할 수 있는 강력한 기능이다.
   ```
   Syntax
   [출력표현식 for 요소 in 입력Sequence [if 조건식]]
   ```
   
   example1
   ```
   oldlist = [1, 2, 'A', False, 3]
   newlist = [i*i for i in oldlist if type(i)==int]
   print(newlist)
   # 출력: [1,4,9]
   ```
   
   example2
   ```
   2d_list = [[1,2],[1,2,3],[3,4,5]]
   1d_list = [ i for sub in 2d_list for i in sub ]
   print(1d_list)
   # 출력: [1,2,1,2,3,3,4,5]
   ```
   
### Python Data Type

Sequence 자료형
list, tuple, range, string처럼 값이 연속적으로 이어진 자료형을 시퀸스 자료형(sequence types)라고 부른다.
