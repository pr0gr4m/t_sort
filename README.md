# [BOB6]A02_알고리듬_특기병_박강민

BBC 알고리즘 영상에 나오는 병합 정렬과 짧게 소개된 삽입 정렬을 구현하고, 삽입 정렬에 대한 개선안인 쉘 정렬 및 배열 정렬에 대한 개선안인 정렬된 리스트를 구현한다.

정렬 시간 복잡도는 아래와 같으며, 정렬된 리스트는 하나의 push 당 O(n) -> O(1)의 시간 복잡도를 가지지만 정렬 작업을 따로 거치지 않아 O(1)로 표기한다.

쉘 정렬은 gap의 크기에 따라 실행 시간의 차이가 크며 일부 경우 삽입 정렬보다 성능이 좋지 않을 수 있다.

comp는 정렬 알고리즘의 일반적인 비교를 위하여 같은 원소를 100번 반복하여 저장한다. 출력은 반복 간격(배열 확장 간격)만큼 뛰어 넘어 인위적인 중복을 피한다. 


Time Complexity
---------------

### Insert Sort
* Worst-case : O(n^2)
* Best-case : O(n)
* Average : O(n^2)

### Shell Sort
* Worst-case : O(nlog_2^2 n)
* Best-case : O(nlog n)
* Average : Depends on gap

### Merge Sort
* Worst-case : O(nlog n)
* Best-case : O(nlog n) -> O(n)
* Average : O(nlog n)

### No Sort
* Worst-case : O(1)
* Best-case : O(1)
* Average : O(1)


Build
=======

all
-----

```
 $cd src/

 $make
```


part
-----

```
 $make merge

 $make insert

 $make shell

 $make nos

 $make comp
```



Usage
=======

실행 파일을 실행시키고, 최대 20개의 양의 정수를 입력한다. 정수의 크기는 int형 범위로 제한된다.

20개의 정수를 입력하기 전에 프로그램을 종료하고 싶으면 음수를 입력한다.

예시)

```
 $./comp

 >>6

 >>24

 >>8231

 >>3

 >>444

 >>-5
```



Output
=======

```
----- INSERT -----

    Time to insert sort : 0s.282163ns
 ascending power >>
 3  6  24  444  8231

    Time to insert sort : 0s.551401ns
 descending power >>
 8231 444 24 6 3

----- SHELL -----

    Time to insert sort : 0s.312257ns
 ascending power >>
 3  6  24  444  8231

    Time to insert sort : 0s.550728ns
 descending power >>
 8231 444 24 6 3

 ----- INSERT -----

    Time to insert sort : 0s.136101ns
 ascending power >>
 3  6  24  444  8231

    Time to insert sort : 0s.108074ns
 descending power >>
 8231 444 24 6 3

```
