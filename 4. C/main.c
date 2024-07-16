#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct STUDENT_INFO // 노드(구조체) 선언
{
  char id[16];
  char name[16];
  int score;
  struct STUDENT_INFO *next;
} SINFO;
//listhead가 가리키는 노드가 첫 번째(제일 값이 큰) 노드가 됨
SINFO *listhead = NULL; 

void insert_node(SINFO *student);  // 함수 선언
void get_studentinfo();
void print_list();
void delete_list();

int main() {
  get_studentinfo(); // 학생 정보를 저장하고
  print_list();      // 결과를 출력하고
  delete_list();     // 각 노드(구조체)에 할당받은 공간을 반납
}
void get_studentinfo() {
  SINFO student; // 학생 정보를 입력 받기 위한 임시 변수
  printf("학생 정보를 입력하세요.\n"); // 안내문을 출력한다.
  printf("입력을 마치려면 학번에 -1을 넣으세요.\n\n");
  while (1) // 다음을 반복한다.
  {
    printf("학번: ");        // 학번을 입력 받는다.
    scanf("%s", student.id); // id가 문자열이므로 &를 붙이지 않는다.
    if (strcmp(student.id, "-1") != 0) // 학번이 –1이 아니면
    {
      printf("이름: "); // 이름을 입력 받는다.
      scanf("%s", student.name);
      printf("성적: "); // 성적을 입력 받는다.
      scanf("%d", &student.score);
      insert_node(&student); // 학생 정보를 정렬하여 저장한다.
      printf("\n");
    } else   // 학번이 -1이면
      break; // 입력을 중단한다.
  }
}
void insert_node(SINFO *student) {
  /*
  search: 탐색을 위한 노드(구조체) 포인터
  search의 역할: search가 가리키는 노드 앞에 새로운 노드를 추가한다.
  previous: search가 가리키는 노드의 앞에 있는 노드를 가리키는 포인터
  */ 
  SINFO *search, *previous; 
  
  /*
  temp: 삽입할 노드를 가리키는 포인터
  malloc: 노드 할당
  */
  SINFO *temp = (SINFO *)malloc(sizeof(SINFO));
  // 노드 복사
  strcpy(temp->id, student->id);                
  strcpy(temp->name, student->name);
  temp->score = student->score;
  
  search = listhead; // search 초기화
  previous = NULL;   // previous 초기화
  while (search != NULL) {
    if (temp->score < search->score) // 학생의 성적(temp->score)이 search 노드보다 작으면
    {
      previous = search; // 다음 노드로 이동
      search = search->next;
    } else   // 삽입 위치를 찾았으면
      break; // 반복문을 벗어난다.
  }
  if (previous == NULL) // 삽입 위치가 맨 앞인 경우
  {
    temp->next = listhead; // temp->next를 head가 가리키는 노드로 연결한다
    listhead = temp;
  } else // 삽입 위치가 중간 혹은 끝인 경우
  {
    temp->next = search;
    previous->next = temp;
  }
}
void print_list() {
  SINFO *search;     // 연결리스트를 추적하기 위한 포인터
  search = listhead; // 포인터 초기화
  printf("\n%16s%16s%6s\n", "학번", "이름", "성적");
  printf("======================================\n");
  while (search != NULL) // 리스트의 끝까지
  {
    printf("%16s", search->id); // 데이터를 출력하고
    printf("%16s", search->name);
    printf("%6d\n", search->score);
    search = search->next; // 다음 노드로 이동한다.
  }
}
void delete_list() {
  SINFO *temp = listhead;  // temp를 초기화 한다.
  while (listhead != NULL) // 연결리스트의 끝에 도달할 때까지
  {
    listhead = listhead->next; // 리스트 헤드를 다음 노드로 옮기고
    free(temp);                // temp가 가리키는 노드를 해제한다.
    temp = listhead;           // temp를 수정한다.
  }
}
