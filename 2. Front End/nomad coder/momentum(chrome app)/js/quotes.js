const quotes = [
  {
    quote: "1. Don't belive wise saying except this.",
    author: "unknown 1",
  },
  {
    quote: "2. Don't belive wise saying except this.",
    author: "unknown 2",
  },
  {
    quote: "3. Don't belive wise saying except this.",
    author: "unknown 3",
  },
  {
    quote: "4. Don't belive wise saying except this.",
    author: "unknown 4",
  },
  {
    quote: "5. Don't belive wise saying except this.",
    author: "unknown 5",
  },
  {
    quote: "6. Don't belive wise saying except this.",
    author: "unknown 6",
  },
  {
    quote: "7. Don't belive wise saying except this.",
    author: "unknown 7",
  },
  {
    quote: "8. Don't belive wise saying except this.",
    author: "unknown 8",
  },
  {
    quote: "9. Don't belive wise saying except this.",
    author: "unknown 9",
  },
  {
    quote: "10. Don't belive wise saying except this.",
    author: "unknown 10",
  },
];
const quote = document.querySelector("#quote span:first-child");
const author = document.querySelector("#quote span:last-child");

const todaysQuote = quotes[Math.floor(Math.random() * quotes.length)];
quote.innerText = todaysQuote["quote"];
author.innerText = todaysQuote["author"];
