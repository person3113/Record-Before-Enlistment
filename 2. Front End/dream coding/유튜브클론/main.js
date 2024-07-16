const title = document.querySelector(".info .metaData .titleAndBtn .title");
const moreBtn = document.querySelector(".info .metaData .titleAndBtn .moreBtn");

moreBtn.addEventListener("click", () => {
  title.classList.toggle("clamp");
  moreBtn.classList.toggle("clicked");
});
