

## Product Backlog

| User story | Priority | Complexity |
|-------|----------|------------|
| **As a Hiring Manager, I want** to define job requirements in detail **so that** the system can accurately match candidates against specific criteria. | 1 | M |
| **As a Recruiter, I want** the system to automatically rank candidates based on job requirements and their qualifications **so that** I can focus on the most promising applicants. | 2 | L |
| **As a Hiring Manager, I want** to review the ranked list of candidates **so that** I can approve or suggest adjustments to the shortlist for the role. | 3 | M |
| **As a Recruiter, I want** the system to parse resumes and extract key qualifications **so that** I can filter candidates based on their relevant skills and experience. | 4 | L |
| **As a Data Analyst, I want** to track and visualize the ranking accuracy of the AI model **so that** I can refine the algorithm for better candidate matching. | 5 |

### Task breakdown and acceptance criteria
> Even though the exercise only requested tickets for one of the stories, i decided to break down tasks for 3 out of the 5 prioritized stories above.

#### User story: As a Hiring Manager, I want to define job requirements in detail so that the system can accurately match candidates against specific criteria.

**1. UI Design**
**Task 1.1**: Create wireframes and high-fidelity mockups for the job requirements form.
**Task 1.2**: Validate the design with key stakeholders to ensure it meets user needs.

**2. Backend Development**
**Task 2.1**: Design the database schema for storing job requirements.
**Task 2.2**: Implement the API endpoints for job requirements in Python in a test-driven way, including backend validation and API documentation.
**Task 2.3**: Deploy API endpoints to production

**3. Frontend Development**
**Task 3.1**: Develop the job requirements form UI in a test-driven way, using React based on the approved mockups, including client-side validation and documentation.
**Task 3.2**: Deploy form to production

**Acceptance criteria**
- **Accurate Job Requirement Input**: The hiring manager can input detailed job requirements, including job title, skills, and experience, and the system accurately saves these details.
- **Candidate Matching Readiness**: The job requirements entered by the hiring manager are available for recruiters to use in the candidate matching process.
- **Review and Update**: The hiring manager can review and update the job requirements, and the system reflects these changes accurately.

#### User story: As a Recruiter, I want the system to automatically rank candidates based on job requirements and their qualifications so that I can focus on the most promising applicants.

**1. UI Design**
**Task 1.1**: Create wireframes and high-fidelity mockups for the ranked candidates UI.
**Task 1.2**: Validate the design with key stakeholders to ensure it meets user needs.

**2. Backend Development**
**Task 2.1**: Design the database schema for storing and managing candidate ranking data.
**Task 2.2**: Implement the API endpoints for ranking candidates in Python in a test-driven way, ensuring the API fetches job requirements and applicant data, applies ranking logic, and returns ranked candidates. Include backend validation and API documentation.
**Task 2.3**: Deploy API endpoints to production.

**3. Frontend Development**
**Task 3.1**: Develop the ranked candidates UI in a test-driven way, using React based on the approved mockups, including client-side validation and documentation.
**Task 3.2**: Deploy ranked candidates UI to production.

**Acceptance criteria**
- **Accurate Ranking**: The system accurately ranks candidates based on the provided job requirements and their qualifications.
- **Dynamic Updates**: Changes to job requirements or candidate qualifications trigger the system to automatically update the ranked list of candidates.
- **Auditability and Security**: The system logs ranking operations and user actions while ensuring only authorized users can access the ranked candidates.

#### User story: As a Hiring Manager, I want to review the ranked list of candidates so that I can approve or suggest adjustments to the shortlist for the role

**1. UI Design**
**Task 1.1**: Create wireframes and high-fidelity mockups for the ranked list review and adjustment UI.
**Task 1.2**: Validate the design with key stakeholders to ensure it meets user needs.

**2. Backend Development**
**Task 2.1**: Design the database schema to store approved and suggested shortlist adjustments.
**Task 2.2**: Implement the API endpoints to fetch the ranked list, handle approvals, and process adjustments in a test-driven way. Include backend validation and API documentation.
**Task 2.3**: Deploy API endpoints to production.

**3. Frontend Development**
**Task 3.1**: Develop the ranked list review UI in a test-driven way, using React based on the approved mockups, including client-side validation and documentation.
**Task 3.2**: Implement the ability to approve and suggest adjustments directly in the UI.
**Task 3.3**: Deploy the review and adjustment UI to production.

**Acceptance criteria**
- **Ranked List Access**: The hiring manager can access and view the ranked list of candidates based on the approved job requirements.
- **Approve and Adjust**: The hiring manager can approve candidates directly or suggest adjustments to the shortlist.
- **Auditability and Security**: The system logs review and adjustment actions while ensuring only authorized users have access to these features.