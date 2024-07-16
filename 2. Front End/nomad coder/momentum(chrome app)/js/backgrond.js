//image 고르기
const images = [
  "cosmic-timetraveler.jpg",
  "patrick-tomasso.jpg",
  "unknown.jpg",
];
const chosenImage = images[Math.floor(Math.random() * images.length)];

//html에 추가할 image tag를 정하고
const bgImage = document.createElement("img");
bgImage.src = `img/${chosenImage}`;
//body에 추가
document.body.appendChild(bgImage);
