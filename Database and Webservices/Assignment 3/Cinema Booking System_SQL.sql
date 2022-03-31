CREATE TABLE Customer(
    customer_id INT,
    name CHAR(20),
    email CHAR(40),
    password CHAR(20),
    PRIMARY KEY(customer_id);
)
CREATE TABLE Member(
    membership_id INT,
    PRIMARY KEY(membership_id),
    FOREIGN KEY(customer_id) REFERENCES Customer ON DELETE CASCADE;
)
CREATE TABLE Regular(
    FOREIGN KEY(customer_id) REFERENCES Customer ON DELETE CASCADE;
)
CREATE TABLE Reservation(
    reservation_id INT,
    payment CHAR(10),
    PRIMARY KEY(reservation_id),
    FOREIGN KEY(customer_id) REFERENCES Customer,
    FOREIGN KEY(schedule_id) REFERENCES Scheduled_Movie;
)
CREATE TABLE Scheduled_Movie(
    schedule_id INT,
    date CHAR(10),
    PRIMARY KEY(schedule_id),
    FOREIGN KEY(reservation_id) REFERENCES Reservation,
    FOREIGN KEY(room_id) REFERENCES Room,
    FOREIGN KEY(movie_id) REFERENCES Movie;
)
CREATE TABLE Movie(
    movie_id INT,
    name CHAR(20),
    description CHAR(40),
    duration FLOAT,
    PRIMARY KEY(movie_id),
    FOREIGN KEY(schedule_id)REFERENCES Scheduled_Movie ON DELETE CASCADE;
)
CREATE TABLE Accomodation(
    cost FLOAT,
    FOREIGN KEY(reservation_id) REFERENCES Reservation,
)
CREATE TABLE Seat(
    seat_id INT,
    number INT,
    row INT,
    PRIMARY KEY(seat_id),
    FOREIGN KEY(room_id) REFERENCES Room;
)
CREATE TABLE Room(
    room_id INT,
    number INT,
    PRIMARY KEY(room_id),
    FOREIGN KEY(seat_id) REFERENCES Seat,
    FOREIGN KEY(schedule_id) REFERENCES Scheduled_Movie;
)
CREATE TABLE Snack(
    snack_id INT,
    description CHAR(40),
    name CHAR(20),
    PRIMARY KEY(snack_id),
)
CREATE TABLE Food(
    quantity_g FLOAT,
    FOREIGN KEY(snack_id) REFERENCES Snack ON DELETE CASCADE;
)
CREATE TABLE Drink(
    quantity_ml FLOAT,
    FOREIGN KEY(snack_id) REFERENCES Snack ON DELETE CASCADE;
)




















































