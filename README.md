# Cycle Rental System

A comprehensive campus cycle rental platform built in C++ that enables students to rent cycles and cycle owners to manage their rental inventory.

## Overview

This project is a console-based cycle rental management system designed for campus use. It provides a dual-role system where users can act as either **customers** (renters) or **owners** (cycle providers). The system manages user authentication, cycle inventory, rental transactions, and user profiles.

## Features

### User Roles

#### **Customer (Renter)**
- User registration and login
- Browse available cycles for rent
- Rent cycles for hourly or daily rates
- View rental history
- Edit profile information
- Rate and review rental experiences

#### **Owner (Cycle Provider)**
- User registration and login
- Add new cycles to rental inventory
- Edit cycle details (name, color, rent rates, status)
- View cycles available for rent
- Monitor rental activity
- Edit profile information
- Track cycle availability status

### Core Functionalities

- **Authentication**: Secure login and registration system for both customers and owners
- **Cycle Management**: Add, edit, and manage cycle inventory with details including:
  - Cycle name and color
  - Hourly and daily rental rates
  - Owner contact information
  - Availability status
- **Rental System**: Browse and rent available cycles
- **Profile Management**: Edit and manage user profiles
- **Data Persistence**: Store user and cycle data in text files
- **User Interface**: Interactive menu-driven console interface

## Project Structure

### Source Files

```
├── main.cpp              # Entry point with main menu logic
├── login.cpp/login.h     # Authentication module for login functionality
├── registration.cpp/.h   # User registration module
├── customer.cpp/.h       # Customer class and operations
├── owner.cpp/.h          # Owner class and operations
├── cycle.cpp/.h          # Cycle class and rental management
├── edit.cpp/.h           # Profile and data editing module
├── student.h             # Base student class
├── login.h               # Login header file
└── Cycle rental system.cbp    # Code::Blocks project file
```

### Data Files

```
├── customers.txt         # Stored customer data
├── owners.txt           # Stored owner data
└── cycle.txt            # Stored cycle inventory data
```

## Technology Stack

- **Language**: C++
- **IDE**: Code::Blocks
- **Storage**: File-based text data persistence
- **Platform**: Console-based application

## Installation & Compilation

### Prerequisites
- C++ compiler (GCC/Clang)
- Code::Blocks IDE (optional)
- Standard C++ libraries

### Build Instructions

Using Code::Blocks:
1. Open `Cycle rental system.cbp`
2. Build the project (Ctrl+F9)
3. Run the executable (Ctrl+F10)

Using command line:
```bash
g++ -o cycle_rental main.cpp login.cpp registration.cpp customer.cpp owner.cpp cycle.cpp edit.cpp student.cpp -std=c++11
./cycle_rental
```

## Usage

### Starting the Application
```
1. Run the executable
2. Welcome menu presents three options:
   - Login (existing users)
   - Register (new users)
   - Exit
```

### Customer Workflow
1. Register as a Customer
2. Login with credentials
3. Browse available cycles
4. Select and rent a cycle
5. Specify rental duration (hourly/daily)
6. Manage profile and rental history

### Owner Workflow
1. Register as an Owner
2. Login with credentials
3. Add cycles to your inventory
4. Set rental rates (hourly and daily)
5. Edit cycle details as needed
6. Monitor rental activity

## Class Hierarchy

```
student (Base class)
├── customer (Customer/renter)
└── owner (Cycle owner/provider)

cycle (Cycle rental item)
```

## Key Classes

### `student`
Base class for all users containing common user information

### `customer : public student`
Inherits from student, represents renters with rental-specific operations

### `owner : public student`
Inherits from student, represents cycle owners with inventory management

### `cycle`
Represents individual cycles with properties:
- Name, color
- Owner information
- Hourly and daily rates
- Contact information
- Availability status

## Data Persistence

- User credentials and profiles stored in text files (`customers.txt`, `owners.txt`)
- Cycle inventory stored in `cycle.txt`
- File-based database for simple data management

## Future Enhancements

- Database integration (MySQL/SQLite)
- Rating and review system implementation
- Payment gateway integration
- Graphical User Interface (GUI)
- Cycle tracking and maintenance scheduling
- Advanced search and filter options
- Email notifications for bookings

## Developer

**Author**: rokon2007060

**Project Created**: May 29, 2023

## License

This project is open source and available for educational and personal use.

## Notes

- This is a console-based application designed for educational purposes
- Data is stored locally in text files
- The system uses a menu-driven interface for ease of use
- All user interactions are handled through command-line input/output
