const getUserChoice = userInput => {
  userInput = userInput.toLowerCase();
if (userInput === 'rock' || userInput === 'paper'|| userInput === 'scissors')
  {
    return userInput;
  }
	else {
    console.log('Error!');
  }
  }

const getComputerChoice= () => {
  randomNumber = Math.floor(Math.random() * 3);
  switch (randomNumber){
    case 0:
      return 'rock';
      break;
    case 1:
      return 'paper';
      break;
    case 2:
      return 'scissors';
      break;
  }
  }

const determineWinner = (userChoice ,computerChoice) => {
  if (userChoice === computerChoice)
    {
      return 'game is a tie';
    }
 if (userChoice === 'rock')
    {
      if (computerChoice === 'paper')
        {
          return 'the computer won';
        }
     else
        {
          return 'you win';
        }
    }
if (userChoice === 'paper')
    {
      if (computerChoice === 'scissors')
        {
          return 'the computer won';
        }
     else
        {
          return 'you win';
        }
		}
if (userChoice === 'scissors')
    {
      if (computerChoice === 'rock')
        {
          return 'the computer won';
        }
     else
        {
          return 'you win';
        }
    }
}
const playGame = () =>
{
 const userChoice = getUserChoice('paper');
 const computerChoice = getComputerChoice();
 console.log(userChoice);
 console.log(computerChoice);
 console.log(determineWinner(userChoice, computerChoice));
}

playGame();
