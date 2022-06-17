var userName = prompt("İsim? =")

let myName = document.querySelector("#myName")
let myClock = document.querySelector("#myClock")

if (userName.length > 0) {
	myName.innerHTML = userName;
  } else {
	prompt("İsminizi Giriniz!");
	console.log("No user input");
  }
  
  function showTime() {
	const d = new Date();
	const hour = d.getHours();
	const minutes = d.getMinutes();
	const seconds = d.getSeconds();
	let day = d.getDay();
  
	switch (day){
		case 1:
			day = "Pazartesi"
			break;
		case 2:
			day = "Salı"
			break;
		case 3:
			day = "Çarşamba"
			break;
		case 4:
			day = "Perşembe"
			break;
		case 5:
			day = "Cuma"
			break;
		case 6:
			day = "Cumartesi"
			break;
		case 7:
			day = "Pazar"
			break;
		}
	setTimeout(showTime, 1000);
  
	myClock.innerHTML = `${hour}:${minutes}:${seconds} ${day}`;
  }
  
  showTime();