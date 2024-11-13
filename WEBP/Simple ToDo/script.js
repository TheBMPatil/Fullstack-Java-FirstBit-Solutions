const apiUrl = 'api/';

// Fetch tasks
function fetchTasks() {
  fetch(`${apiUrl}getTasks.php`)
    .then(response => response.json())
    .then(tasks => {
      const taskList = document.getElementById('task-list');
      taskList.innerHTML = '';
      tasks.forEach(task => addTaskToDOM(task));
    });
}

// Add a new task
function addTask() {
  const taskInput = document.getElementById('task-input');
  const description = taskInput.value.trim();
  if (!description) return alert('Please enter a task.');

  fetch(`${apiUrl}addTask.php`, {
    method: 'POST',
    headers: { 'Content-Type': 'application/x-www-form-urlencoded' },
    body: new URLSearchParams({ description })
  })
    .then(response => response.json())
    .then(newTask => {
      addTaskToDOM(newTask);
      taskInput.value = '';
    });
}

// Update task completion
function toggleComplete(id, completed) {
  fetch(`${apiUrl}updateTask.php`, {
    method: 'POST',
    headers: { 'Content-Type': 'application/x-www-form-urlencoded' },
    body: new URLSearchParams({ id, completed })
  }).then(() => fetchTasks());
}

// Delete task
function deleteTask(id, li) {
  fetch(`${apiUrl}deleteTask.php`, {
    method: 'POST',
    headers: { 'Content-Type': 'application/x-www-form-urlencoded' },
    body: new URLSearchParams({ id })
  }).then(() => li.remove());
}

// Initial load
fetchTasks();
