-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 30, 2023 at 07:54 AM
-- Server version: 10.4.25-MariaDB
-- PHP Version: 7.4.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `task_3`
--
CREATE DATABASE IF NOT EXISTS `task_3` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `task_3`;

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--
-- Creation: Mar 26, 2023 at 11:39 AM
-- Last update: Mar 26, 2023 at 11:49 AM
--

DROP TABLE IF EXISTS `employee`;
CREATE TABLE `employee` (
  `Employee_ID` int(10) NOT NULL,
  `First_name` varchar(30) NOT NULL,
  `Last_name` varchar(30) NOT NULL,
  `Salary` bigint(12) NOT NULL,
  `Joining_date` datetime NOT NULL DEFAULT current_timestamp(),
  `Department` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- RELATIONSHIPS FOR TABLE `employee`:
--

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`Employee_ID`, `First_name`, `Last_name`, `Salary`, `Joining_date`, `Department`) VALUES
(1, 'John', 'Abraham', 1000000, '2013-01-01 17:10:12', 'Banking'),
(2, 'Michael', 'Clarke', 800000, '2013-01-01 17:13:16', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-02-01 17:14:49', 'Banking'),
(4, 'Tom', 'Jose', 600000, '2013-02-01 17:15:39', 'Insurance'),
(5, 'Jerry', 'Pinto', 650000, '2013-02-01 17:16:22', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '2013-01-01 17:17:11', 'Services'),
(7, 'Test', 'Name', 650000, '2013-01-01 17:18:10', 'Services'),
(8, 'Test2', 'Name', 600000, '2013-02-01 17:19:06', 'Insurance');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--
-- Creation: Mar 30, 2023 at 05:09 AM
--

DROP TABLE IF EXISTS `incentive`;
CREATE TABLE `incentive` (
  `Employee_ref_id` int(10) NOT NULL,
  `Incentive_date` date NOT NULL DEFAULT current_timestamp(),
  `incentive_amount` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- RELATIONSHIPS FOR TABLE `incentive`:
--   `Employee_ref_id`
--       `employee` -> `Employee_ID`
--

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`Employee_ref_id`, `Incentive_date`, `incentive_amount`) VALUES
(1, '2013-02-01', 5000),
(2, '2013-02-01', 3000),
(3, '2013-02-01', 4000),
(1, '2013-01-01', 4500),
(2, '2013-01-01', 3500);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`Employee_ID`);

--
-- Indexes for table `incentive`
--
ALTER TABLE `incentive`
  ADD KEY `Employee_ref_id` (`Employee_ref_id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `Employee_ID` int(10) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `incentive`
--
ALTER TABLE `incentive`
  ADD CONSTRAINT `incentive_ibfk_1` FOREIGN KEY (`Employee_ref_id`) REFERENCES `employee` (`Employee_ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
