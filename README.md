# Trajectory Optimization in the Restricted Three-Body Problem

This repository contains the code developed for my Master's Thesis in Space Engineering at Politecnico di Milano.

**Thesis Link:**  
[Trajectory optimization and optimal guidance in the restricted three-body problem (ResearchGate)](https://www.researchgate.net/publication/386552265_Trajectory_optimization_and_optimal_guidance_in_the_restricted_three-body_problem)

---

## 1. Thesis Overview

The goal of this thesis is to develop and implement an algorithm for optimal trajectory design for a low-thrust spacecraft performing an Earth–Moon transfer. The spacecraft is equipped with an electric propulsion system. Due to the low thrust, the trajectory is long and complex, requiring advanced numerical optimization techniques.

Key aspects:

- **Optimal Control Approach:** The problem is formulated using Pontryagin's Maximum Principle (PMP), aiming to determine the optimal thrust direction.
- **Global and Local Optimization:** 
  - A Particle Swarm Optimization (PSO) algorithm provides an initial guess for the costate.
  - Local refinement is performed using Newton-based optimization.
- **Problem Dynamics:** The mission is modeled within the framework of the Restricted Three-Body Problem (RTBP).
- **Homotopy Method:** To compute solutions for low thrust levels, a continuation approach gradually decreases the thrust-to-initial-mass ratio using previous solutions as initial guesses.

In the second part, the **Neighboring Optimal Guidance (NOG)** algorithm is implemented to correct deviations caused by small perturbations (e.g., solar radiation pressure, non-uniform thrust). Users can simulate disturbances and observe how the algorithm reacts to restore the trajectory.

---

## 2. Code Structure

The project is organized into three main modules that are available in the 'MATLAB-Script' baranch (which also contains most of the MATLAB code). Additionally, 'C-Code' contains the code generated using MATLAB's coder toolbox, along with its dedicated script in 'codegen-script'. 'solutions' is a collection of variables and costate values that can be used to reproduce sample solution that were found during the thesis work. A brief summary of the code structure is presented below:

### 'Main_3BP' – Problem Setup
- Mission and spacecraft parameters are defined.
- Initializes the problem type and defines the equations of motion derived from the system's Hamiltonian.
- Symbolic expressions are converted into efficient MATLAB scripts for performance and compatibility with MATLAB Coder.

### 'Main_Extremal' – Trajectory Optimization
- Solves the trajectory optimization using global (PSO) and local (Newtonian) methods.
- Includes functions like:
  - 'objfun_S', 'objfunSTM_S': compute trajectories from a given costate.
  - '_mex' C-coded versions for performance.
- Supports three problem classes: minimum-time, minimum-energy, and minimum-fuel.
- Contains the 'homotopy' function to perform thrust continuation.
- Has the possibility to plot the trajectory or a multitude of important variables

### 'Main_Suff' – Neighboring Optimal Guidance
- Verifies second-order optimality conditions.
- Simulates perturbations (position, velocity, mass) and applies NOG corrections.
- If the disturbance is too large, correction may fail, as expected for local guidance strategies.

---

## 3. Getting Started

**Requirements:**
- MATLAB (tested with R2022b)
- Symbolic Math Toolbox, Global Optimisation Toolbox
- MATLAB Coder (for C-code generation, optional)

**How to Run:**
1. Start from 'Main_3BP' to initialize parameters.
2. Use 'Main_Extremal' to compute the optimal trajectory.
3. Run 'Main_Suff' to test NOG corrections under user-defined disturbances.

---

## 4. Notes

- For a full explanation of the theory, derivations, and implementation details, please refer to the full thesis using the link above.
- This repository is intended for educational and research purposes.

---

## Acknowledgments

This work was completed as part of the Master’s Thesis at Politecnico di Milano under the supervision of Prof. Francesco Topputo in collaboration with Leonardo Mazzini (Thales Alenia Space). A special thanks goes to Veronica Danesi who helped me with the mathematical formulations of the problem.

