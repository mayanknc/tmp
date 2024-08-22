function setDOBMax() {
    var dobInput = document.getElementById('dob');
    var today = new Date();
    var maxDate = today.toISOString().split('T')[0];
    dobInput.setAttribute('max', maxDate);
}
