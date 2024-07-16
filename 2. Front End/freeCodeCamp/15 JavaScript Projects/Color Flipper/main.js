const btn = document.querySelector("button");
const hexShow = document.querySelector("p");
const hexArr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "A", "B", "C", "D", "E", "F"];

btn.addEventListener("click", () => {
  let hexString = "#";
  for (let i = 0; i < 6; i++) {
    hexString += hexArr[getRandomNumber()];
  }
  hexShow.textContent = hexString;
  document.body.style.backgroundColor = hexString;
});

const getRandomNumber = () => {
  return Math.floor(Math.random() * hexArr.length);
};
