//html element를 가져오고 저장함
const loginForm = document.querySelector("#login-form");
const loginInput = document.querySelector("#login-form input");
const greeting = document.querySelector("#greeting");

//string 변수: 같은 string이 계속 사용되면, 자바스크립트가 이게 같은지 확인해주지 않음. error를 방지하기 위해 사용함
const HIDDEN_CLASSNAME = "hidden";
const USERNAME_KEY = "username";

function onLoginSubmit(event) {
  //새로고침 막기
  event.preventDefault();
  //form 태그 숨기기
  loginForm.classList.add(HIDDEN_CLASSNAME);
  //username 저장하기
  const username = loginInput.value;
  localStorage.setItem(USERNAME_KEY, username);
  //h1 태그에 username 표시하기
  paintGreeting(username);
}

function paintGreeting(username) {
  greeting.innerText = `Hello, ${username}!!`;
  greeting.classList.remove(HIDDEN_CLASSNAME);
}

//storage에서 가져온 변수
const savedUsername = localStorage.getItem(USERNAME_KEY);

if (savedUsername === null) {
  //form tag를 보여줌
  loginForm.classList.remove(HIDDEN_CLASSNAME);

  //login submit event를 들으면 정해 준 함수를 실행
  loginForm.addEventListener("submit", onLoginSubmit);
} else {
  paintGreeting(savedUsername);
}
