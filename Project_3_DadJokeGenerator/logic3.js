const jokegenerator = document.getElementById("btn");
const jokeE1 = document.getElementById("heading");


const apikey = "VeGFKfh1Gyzv8/mlhpCouA==rkitABgBFOzB4MbP";


const options = {
   method: "GET",
   headers: {
      "X-Api-Key": apikey,
   },
};

const apiURL = " https://api.api-ninjas.com/v1/dadjokes?limit=1"


async function getjoke() {



   jokeE1.innerHTML = "updating...";
   jokegenerator.disabled = true;
   jokegenerator.innerHTML = "LOADING...";
   const response = await fetch(apiURL, options);
   const data = await response.json();
   jokeE1.innerText = data[0].joke;
    jokegenerator.disabled = false;
   jokegenerator.innerHTML = "TELL ME A JOKE ";

   
}


jokegenerator.addEventListener("click", getjoke);







