-- MySQL dump 10.13  Distrib 8.0.25, for Win64 (x86_64)
--
-- Host: localhost    Database: airline_info
-- ------------------------------------------------------
-- Server version	8.0.25

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `booking_details`
--

DROP TABLE IF EXISTS `booking_details`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `booking_details` (
  `id` int NOT NULL AUTO_INCREMENT,
  `first_name` varchar(45) NOT NULL,
  `last_name` varchar(45) NOT NULL,
  `date_of_birth` varchar(45) NOT NULL,
  `email` varchar(45) NOT NULL,
  `phone` varchar(45) NOT NULL,
  `payment` varchar(45) NOT NULL,
  `outbound` varchar(45) NOT NULL,
  `inbound` varchar(45) NOT NULL,
  `date` varchar(45) NOT NULL,
  `carrier` varchar(45) NOT NULL,
  `price` varchar(45) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=37 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `booking_details`
--

LOCK TABLES `booking_details` WRITE;
/*!40000 ALTER TABLE `booking_details` DISABLE KEYS */;
INSERT INTO `booking_details` VALUES (0,'Ryan','Tyler','01-01-2000','ryan@gmail.com','456648946','Visa','Amsterdam','Amsterdam','Date:2021-05-30	Time:13:09:00','Air India Express','8658'),(11,'Zack','Lee','08-05-1992','zack@live.com','915766846','MasterCard','Chicago (ORD)','Amsterdam (AMS)','Date:2021-05-31	Time:01:11:00','KLM','57548'),(26,'Shaha','Rahim','08-05-1980','shaha@gmail.com','565645845','Visa','Mumbai (BOM)','New York (JFK)','2021-05-31','Etihad Airways','40999'),(27,'Daniel','Phillips','17-03-2005','daniel@gmail.com','56891234','Net Banking','New York (JFK)','San Francisco (SFO)','2021-06-01','Alaska Airlines','25466'),(28,'Jonathan','Swift','17-05-2001','jon@hotmail.com','84525205','e-Wallet','Singapore (SIN)','Tokyo (NRT)','2021-06-01','Singapore Airlines','20189'),(29,'Raj','Kulkarni','19-07-2001','raj@yahoo.com','7899985456','MasterCard','Kolkata (CCU)','Frankfurt (FRA)','2021-05-29','SpiceJet','25772'),(31,'Varuna','Deshmukh','10-02-2001','varuna@live.com','8645131984','e-Wallet','Atlanta (ATL)','Denver (DEN)','21-07-11','Spirit Airlines','6396'),(32,'Karan','Singh','14-09-1984','karan@gmail.com','4864561151','Net Banking','Frankfurt (FRA)','Dubai (DXB)','2021-07-11','Aeroflot','26047'),(34,'Jon','Tyrell','08-01-1991','jon@gmail.com','84561751615','MasterCard','London (LHR)','Las Vegas (LAS)','2021-09-17','Virgin Atlantic','65610'),(35,'Arun','Misal','06-11-1987','arun@hotmail.com','984156187','e-Wallet','Amsterdam (AMS)','Los Angeles (LAX)','2021-08-13','easyJet','51073'),(36,'Umar','Motiwala','06-11-1990','umar@live.com','6564981616','MasterCard','Los Angeles (LAX)','Delhi (DEL)','2021-06-20','Emirates','42531');
/*!40000 ALTER TABLE `booking_details` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-06-04 22:36:21
