-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jan 08, 2023 at 07:14 AM
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
-- Database: `assignment22`
--

-- --------------------------------------------------------

--
-- Table structure for table `COM_PARTS`
--

CREATE TABLE `com_parts` (
  `PRO_ID` int(100) NOT NULL,
  `PRO_NAME` varchar(20) NOT NULL,
  `PRO_PRICE` int(11) NOT NULL,
  `PRO_CODE` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `COM_PARTS`
SELECT PRO_NAME,PRO_PRICE
	FROM COM_PARTS
    WHERE PRO_PRICE >= 250
    ORDER BY PRO_PRICE ASC , PRO_NAME;
--

INSERT INTO `COM_PARTS` (`PRO_NAME`, `PRO_PRICE`) VALUES
('Mouse', 250),
('ZIP Drive', 250),
('Refill Cartridge', 350),
('Key Board', 450),
('Speaker', 550),
('CD Drive', 800),
('DVD Drive', 900),
('Printer', 2600),
('Mother Board', 3200),
('Monitor', 5000);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `COM_PARTS`
--
ALTER TABLE `COM_PARTS`
  ADD PRIMARY KEY (`PRO_ID`),
  ADD KEY `PRO_ID` (`PRO_ID`),
  ADD KEY `PRO_ID_2` (`PRO_ID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `COM_PARTS`
--
ALTER TABLE `COM_PARTS`
  MODIFY `PRO_ID` int(100) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=100;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
