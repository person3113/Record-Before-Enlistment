let count = 0;

const show = document.querySelector("#show");
const btns = document.querySelectorAll(".btn");

btns.forEach((btn) => {
  btn.addEventListener("click", (event) => {
    const btnClasses = event.currentTarget.classList;
    if (btnClasses.contains("decrease")) {
      count--;
    } else if (btnClasses.contains("increase")) {
      count++;
    } else {
      count = 0;
    }
    if (count < 0) {
      show.style.color = "red";
    } else if (count > 0) {
      show.style.color = "green";
    } else {
      show.style.color = "black";
    }
    show.textContent = count;
  });
});
