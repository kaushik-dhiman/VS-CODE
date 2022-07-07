let saveFile = () => {
    const name = document.getElementById("username");
    const email = document.getElementById("email");
    const phone = document.getElementById("phone");
    const msg = document.getElementById("message");

    let data = "\r Name: " + name.value + " \r\n "  + "Email: " + email.value + " \r\n " + "phone: " + phone.value + " \r\n " + "Message: " + msg.value;
    console.log(data);

    const textToBLOB = new Blob([data], { type: "text/plain" });

    const sFileName = abc.txt; 

    let newLink = document.createElement("a");
    newLink.download = new Date();

    if (window.webkitURL != null) {
        newLink.href = window.webkitURL.createObjectURL(textToBLOB);
    } else {
        newLink.href = window.URL.createObjectURL(textToBLOB);
        newLink.style.display = "none";
        document.body.appendChild(newLink);
    }

    newLink.click();
};