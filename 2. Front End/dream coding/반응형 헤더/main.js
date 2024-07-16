const toogleBtn = document.querySelector(".navBarToogleBtn");
const menu = document.querySelector(".navBarMenu");
const icons = document.querySelector(".navBarIcons");

toogleBtn.addEventListener("click", () => {
  menu.classList.toggle("active");
  icons.classList.toggle("active");
});
