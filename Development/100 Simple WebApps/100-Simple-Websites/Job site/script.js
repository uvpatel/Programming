// Function to filter job listings based on search input
function filterJobs() {
    const searchQuery = document.getElementById('job-search').value.toLowerCase();
    const jobListings = document.querySelectorAll('.job-card');
    
    jobListings.forEach((job) => {
      const jobTitle = job.getAttribute('data-title').toLowerCase();
      if (jobTitle.includes(searchQuery)) {
        job.style.display = 'block';
      } else {
        job.style.display = 'none';
      }
    });
  }
  