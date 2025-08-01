# [Silver IV] 성냥 - 2029 

[문제 링크](https://www.acmicpc.net/problem/2029) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2025년 6월 23일 20:09:00

### 문제 설명

<p>24개의 성냥이 아래 그림과 같이 3x3 크기의 격자에 배치되어 있다. 두 개의 연속된 '-'는 가로로 놓은 성냥을 나타내고, 두 개의 연속된 '|'는 세로로 놓은 성냥을 나타낸다.</p>

<pre>+--+--+--+
|..|..|..|
|..|..|..|
+--+--+--+
|..|..|..|
|..|..|..|
+--+--+--+
|..|..|..|
|..|..|..|
+--+--+--+</pre>

<p>위 그림에서 검정색으로 표시된 부분이 바로 24개의 성냥을 나타낸다. '+'는 두 개 이상의 성냥이 만날 수 있는 부분들을 나타낸 것으로, 위의 그림과 같이 총 16개가 위치하고 있다. 그 외의 칸은 배경으로, 모두 '.'으로 나타낸다.</p>

<p>위의 그림과 같이 24개의 성냥을 모두 배치하면, 찾을 수 있는 정사각형이 총 14개라는 것을 알 수 있다. (9개+4개+1개) 하지만 몇 개의 성냥을 제거하면, 찾을 수 있는 정사각형의 개수가 줄어들기도 한다. 예를 들어 아래와 같은 경우는 24개 중 5개의 성냥을 제거하여 14개 중 4개의 정사각형만을 남겨 둔 경우이다.</p>

<pre id="sample-output-1">+--+--+--+
|..|..|..|
|..|..|..|
+--+--+..+
|.....|..|
|.....|..|
+--+--+..+
|........|
|........|
+--+--+--+</pre>

<p>이처럼 성냥의 배치를 알면, 이 배치가 24개 중 A개의 성냥을 제거하여 14개 중 B개의 정사각형만을 남겨 둔 배치라는 것을 구할 수 있다. (1≤A≤24, 1≤B≤14인 정수) 성냥의 배치가 주어졌을 때, A와 B를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫째 줄부터 열 개의 줄에 걸쳐 성냥의 배치가 위의 예제와 같은 형식으로 들어온다. 각 줄에는 10개의 문자가 있다. 입력은 '-', '|', '+', '.'만으로 이루어져 있으며, 항상 위에 주어진 형식에 맞는 배치만이 입력으로 주어진다.</p>

### 출력 

 <p>첫째 줄에 A와 B를 빈 칸을 사이에 두고 출력한다.</p>

