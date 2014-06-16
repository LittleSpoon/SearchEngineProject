-- phpMyAdmin SQL Dump
-- version 4.1.12
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Jun 16, 2014 at 10:58 PM
-- Server version: 5.6.16
-- PHP Version: 5.5.11

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `projet`
--

-- --------------------------------------------------------

--
-- Table structure for table `insignificantkeywords`
--

CREATE TABLE IF NOT EXISTS `insignificantkeywords` (
  `insignificantKeyword_id` int(11) NOT NULL AUTO_INCREMENT,
  `insignificantKeyword` varchar(30) NOT NULL,
  PRIMARY KEY (`insignificantKeyword_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=3 ;

--
-- Dumping data for table `insignificantkeywords`
--

INSERT INTO `insignificantkeywords` (`insignificantKeyword_id`, `insignificantKeyword`) VALUES
(1, 'de'),
(2, 'la');

-- --------------------------------------------------------

--
-- Table structure for table `keywords`
--

CREATE TABLE IF NOT EXISTS `keywords` (
  `keyword_id` int(11) NOT NULL AUTO_INCREMENT,
  `keyword` varchar(30) NOT NULL,
  `keyword_websites` int(11) NOT NULL,
  PRIMARY KEY (`keyword_id`),
  KEY `keyword_websites` (`keyword_websites`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=6 ;

--
-- Dumping data for table `keywords`
--

INSERT INTO `keywords` (`keyword_id`, `keyword`, `keyword_websites`) VALUES
(1, 'test', 1),
(3, 'supinfo', 1),
(5, 'supinfo', 3);

-- --------------------------------------------------------

--
-- Table structure for table `websites`
--

CREATE TABLE IF NOT EXISTS `websites` (
  `website_id` int(11) NOT NULL AUTO_INCREMENT,
  `website` varchar(30) NOT NULL,
  `url` varchar(256) NOT NULL,
  PRIMARY KEY (`website_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `websites`
--

INSERT INTO `websites` (`website_id`, `website`, `url`) VALUES
(1, 'test', 'test.test.supinfo'),
(3, 'Supinfo', 'www.supinfo.com'),
(4, 'Test2', 'test2.supinfo.com');

--
-- Constraints for dumped tables
--

--
-- Constraints for table `keywords`
--
ALTER TABLE `keywords`
  ADD CONSTRAINT `keywords_ibfk_1` FOREIGN KEY (`keyword_websites`) REFERENCES `websites` (`website_id`) ON DELETE CASCADE ON UPDATE CASCADE;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
