# Digital-Evidence-CMS
secure C++ Digital Forensics system for managing cases, evidence chains, and analyst access controls using advanced OOP principles
# DECMS: Digital Evidence & Case Management System

> **A C++ OOP-based forensic tool for securing the Chain of Custody.**



## Project Overview
**DECMS** (Digital Evidence & Case Management System) is a specialized software solution designed to simulate the workflow of a Digital Forensics Lab. It allows Law Enforcement Officers and Forensic Analysts to securely **register cases**, **log digital evidence**, and track the **Chain of Custody** to ensure admissibility in court.

Unlike standard file managers, DECMS focuses on **Data Integrity** and **Accountability**. It uses Object-Oriented Programming principles to ensure that evidence cannot be tampered with once logged, and every access event is recorded.

## Key Features

### 1. Case Management
* **Case Registration:** Create new cases with unique Case IDs, Suspect Details, and Crime Type.
* **Status Tracking:** Monitor case lifecycle (`OPEN` → `UNDER_INVESTIGATION` → `CLOSED`).
* **Secure Lockdown:** Once a case is "Submitted," critical details become Read-Only to prevent tampering.

### 2. Advanced Evidence Handling
* **Polymorphic Storage:** A unified system to handle various evidence types:
    * **Video Evidence:** Tracks duration, format, and resolution.
    * **Disk Images:** Tracks drive size, hash values, and mount points.
* **Hash Integrity:** Simulates cryptographic hashing (SHA-256) to assign a unique digital fingerprint to every file.

### 3. Chain of Custody (Audit Trail)
* **Automatic Logging:** Every time evidence is viewed or checked out, the system automatically generates a `CustodyRecord`.
* **Accountability:** Records **Who** (Analyst Name), **When** (Timestamp).

### 4. Role-Based Access Control (RBAC)
* **Admin/Chief:** Full access to re-open cases and view all logs.
* **Intake Officer:** Can register cases but cannot modify evidence.
* **Analyst:** Can view and add notes to assigned cases only.
  

## OOP Concepts Applied

| Concept | Implementation in DECMS |
| :--- | :--- |
| **Abstraction** | The `Evidence` class is **Abstract**. It defines a contract (`virtual void examine()`) that all specific evidence types must follow, hiding the complex details of file handling. |
| **Encapsulation** | Sensitive data like `caseID` and `evidenceHash` are `private`. They can only be accessed via "Getters," preventing accidental or malicious modification by other parts of the program. |
| **Inheritance** | `VideoEvidence`, `DeviceDump`, and `LogFile` all inherit from the base `Evidence` class, reducing code duplication. |
| **Polymorphism** | The system uses a `std::vector<Evidence*>` to store different object types in a single container. The `examine()` function behaves differently depending on whether the object is a Video or a Log. |
| **Composition** | A `Case` object *contains* a list of `Evidence` objects and `CustodyRecord` objects, demonstrating strong "Has-A" relationships. |



## Technical Stack
* **Language:** C++ (Standard 11/17 recommended)
* **Paradigm:** Object-Oriented Programming (OOP)
* **Data Persistence:** File I/O (`.txt` or `.csv` based storage) to save case state between sessions.
* **Interface:** Console-Based Interface (CLI)

---

## Project Structure

```text
DECMS/
├── src/
│   ├── Main.cpp             # Application Entry Point & Menu Logic
│   ├── Case.h               # Manages Case Details & Evidence Vector
│   ├── Evidence.h           # Abstract Base Class
│   ├── VideoEvidence.h      # Derived Class for Multimedia
│   ├── DiskImage.h          # Derived Class for Drives
│   ├── User.h               # Base User Class
│   ├── Analyst.h            # Derived User Class with specific permissions
│   └── Logger.h             # Static class for Chain of Custody logs
├── data/                    # Directory for saving case files
├── docs/                    # UML Diagrams and Flowcharts
└── README.md                # Project Documentation
