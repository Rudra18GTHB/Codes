function validate(event){
    const usernamne = document.getElementById('username').value;
    const password = document.getElementById('password').value;
    document.getElementById('Passerror').innerText = '';
    document.getElementById('Usererror').innerText = '';
    if(usernamne.length < 3){
        document.getElementById('Usererror').innerText = 'User name must be at least 3 characters';
        return;
    }
    if(password.length < 6){
        document.getElementById('Passerror').innerText = 'Password must be at least 6 characters';
        return;
    }
    alert("Form Submitted Successfully");
}
