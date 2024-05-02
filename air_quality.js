const checkButton = document.getElementById('check-button');
const aqiInput = document.getElementById('aqi-input');
const result = document.getElementById('result');

checkButton.addEventListener('click', () => {
  const aqi = parseInt(aqiInput.value);
  if (aqi >= 0 && aqi < 51) {
    result.textContent = "Good";
  } else if (aqi >= 51 && aqi < 101) {
    result.textContent = "Moderate";
  } else if (aqi >= 101 && aqi < 151) {
    result.textContent = "Unhealthy for sensitive Groups";
  } else if (aqi >= 151 && aqi < 201) {
    result.textContent = "Unhealthy";
  } else if (aqi >= 201 && aqi < 301) {
    result.textContent = "Very Unhealthy";
  } else if (aqi >= 301 && aqi < 501) {
    result.textContent = "Hazardous";
  }
});

