## What I learned while studying

### scanf

---

scanf는 python에서 input() 부분처럼 입력이 불가능 하다  
그리고 실행할때 무한이 아무 숫자나 무작위로 반복되거나 코드가 실행이 안 될 수 있다.  
따로 오류 코드가 뜨지 않기 때문에 주의하자!!

예) scanf("오류 문구 없음 : %d",&n); -> 불가능

### 파일명

---

오늘 코드를 실행하면서 `zsh : no matches found error`가 발생하였다.  
처음에는 zsh 설정 문제 인줄 알고 zsh 설정에서 ZSH_DISABLE_COMPFIX="true" 를 추가하였다.  
하지만 zsh 문제가 아니라 파일을 cd 형식으로 실행할 때 파일 명에 (괄호)가 들어가서 실행이 되지 않았던 것이였다.

상위 폴더 이름의 괄호를 제거하니 바로 실행이 되었다.

**알게 된 점**
zsh에서 몇몇 특수문자를 명령어로 인식한다고 한다. 그래서 zsh error가 났던 것이다.
