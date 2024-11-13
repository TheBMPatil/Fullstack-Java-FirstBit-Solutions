const apiUrl = "api/";

// Fetch tasks and display them
function fetchTasks() {
  fetch(`${apiUrl}getTasks.php`)
    .then((response) => {
      if (!response.ok) throw new Error("Failed to fetch tasks.");
      return response.json();
    })
    .then((tasks) => {
      const taskList = document.getElementById("task-list");
      taskList.innerHTML = ""; // Clear the task list
      tasks.forEach((task) => addTaskToDOM(task));
    })
    .catch((error) => console.error("Error fetching tasks:", error));
}

// Add a new task
function addTask() {
  const taskInput = document.getElementById("task-input");
  const description = taskInput.value.trim();

  if (!description) return alert("Please enter a task.");

  fetch(`${apiUrl}addTask.php`, {
    method: "POST",
    headers: { "Content-Type": "application/x-www-form-urlencoded" },
    body: new URLSearchParams({ description }),
  })
    .then((response) => {
      if (!response.ok) throw new Error("Failed to add task.");
      return response.json();
    })
    .then((newTask) => {
      addTaskToDOM(newTask);
      taskInput.value = ""; // Clear the input field
    })
    .catch((error) => console.error("Error adding task:", error));
}

// Toggle task completion
function toggleComplete(id, completed) {
  fetch(`${apiUrl}updateTask.php`, {
    method: "POST",
    headers: { "Content-Type": "application/x-www-form-urlencoded" },
    body: new URLSearchParams({ id, completed: completed ? 1 : 0 }),
  })
    .then((response) => {
      if (!response.ok) throw new Error("Failed to update task status.");
      return response.json();
    })
    .then(() => {
      const taskElement = document.querySelector(`#task-${id} span`);
      taskElement.classList.toggle("completed", completed); // Toggle class based on completed status
      taskElement.textContent = completed ? "Undo" : "Complete";
    })
    .catch((error) => console.error("Error updating task:", error));
}


// Delete task
function deleteTask(id, li) {
  fetch(`${apiUrl}deleteTask.php`, {
    method: "POST",
    headers: { "Content-Type": "application/x-www-form-urlencoded" },
    body: new URLSearchParams({ id }),
  })
    .then((response) => {
      if (!response.ok) throw new Error("Failed to delete task.");
      li.remove(); // Remove the task element from the DOM
    })
    .catch((error) => console.error("Error deleting task:", error));
}

// Add a task item to the DOM
function addTaskToDOM(task) {
  const taskList = document.getElementById("task-list");
  const li = document.createElement("li");
  li.id = `task-${task.id}`; // Unique ID for each task item
  li.className = "task-item";
  li.innerHTML = `
    <span class="${task.completed ? "completed" : ""}">
        ${task.description}
    </span>
    <button onclick="toggleComplete(${task.id}, ${!task.completed})">
        ${task.completed ? "Undo" : "Complete"}
    </button>
    <button onclick="deleteTask(${task.id}, this.parentNode)">Delete</button>
  `;
  taskList.appendChild(li);
}


// Load tasks on initial page load
fetchTasks();
