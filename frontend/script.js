document.getElementById('medicationForm').addEventListener('submit', function (e) {
    e.preventDefault();
  
    const name = document.getElementById('name').value;
    const time = document.getElementById('time').value;
  
    if (!name || !time) return;
  
    const li = document.createElement('li');
    li.textContent = `${name} at ${time}`;
  
    const deleteBtn = document.createElement('button');
    deleteBtn.textContent = "❌";
    deleteBtn.className = "delete-btn";
    deleteBtn.style.marginLeft = "10px";
    deleteBtn.onclick = () => li.remove();
  
    li.appendChild(deleteBtn);
    document.getElementById('medications').appendChild(li);
  
    // Optionally clear input fields
    document.getElementById('name').value = '';
    document.getElementById('time').value = '';
  
    // Optional notification
    new Notification("Medication Reminder Set!", {
      body: `${name} scheduled at ${time}`
    });
  });
  
  // Request permission for browser notifications
  if (Notification.permission !== 'granted') {
    Notification.requestPermission();
  }
  