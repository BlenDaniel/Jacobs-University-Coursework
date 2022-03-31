--1 Movies that will be projected on a certain date
SELECT DISTINCT M.name
FROM Scheduled_Movies M
WHERE M.date = ‘2021-11-18’

--2 Seats that are not reserved for a given projection
SELECT S.row, S.number
FROM Seats S, Scheduled_Movies M, Reservations R
WHERE M.room_id = S.room_id AND S.seat_id NOT IN ANY R.seat_id

--3 Projections planned for a given room and their date
SELECT M.name, M.date
FROM Scheduled_Movies M, Rooms R
WHERE M.room_id = R.room_id
ORDER BY M.date

--4 Rooms that contain 50 or more seats 
FROM Scheduled_Movies S
WHERE S.date = ‘2021-11-18’
GROUP BY S.time
HAVING COUNT (*) > 1

--5 Available food under 200g:
SELECT S.name
FROM Snack S, Food F
WHERE F.quantity <= 200

--6 Available drinks under 500ml:
SELECT S.name
FROM Snack S, Drink D
WHERE D.quantity <= 500

--7 Names of customers who are members:
SELECT C.name
FROM Customers C, Member M
WHERE C.customer_id = M.membership_id

--8 Reservation IDs of bookings with accommodation cost greater than 50EUR
SELECT R.reservation_id
FROM   Reservations R, Accommodation A
WHERE A.cost > 50

--9 Names of customers who have reserved both food and a drink
SELECT C.name
FROM Customers C, Reservations R
WHERE R.reservation_id = C.reservation_id AND\
EXISTS (SELECT *
FROM Foods F
WHERE F.snack_id = R.snack_id)
INTERSECT
SELECT C.name
FROM Customers C, Reservations R
WHERE R.reservation_id = C.reservation_id AND\
EXISTS (SELECT *
FROM Foods F
WHERE F.snack_id = R.snack_id)


--10 Customer emails for non-members
SELECT C.email
FROM Customer C, Member M
WHERE C.customer_id NOT IN M.customer_id

--11 Movies over 2h:
SELECT M.name
FROM Scheduled_Movies M
WHERE M.duration >= 120

--12 The ID of the reservation with the most expensive payment
SELECT R.reservation_id, R.payment
FROM Reservations R
WHERE R.payment = 
	(SELECT MAX(R.payment)
	FROM Reservations R)

 

