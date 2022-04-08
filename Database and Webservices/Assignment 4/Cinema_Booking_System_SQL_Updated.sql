CREATE OR REPLACE TABLE Customer(
    customer_id INT,
    name CHAR(20),
    email CHAR(40),
    password CHAR(20),
    PRIMARY KEY(customer_id)
);

CREATE OR REPLACE TABLE Member(
    membership_id INT,
    PRIMARY KEY(membership_id),
    customer_id INT,
    FOREIGN KEY(customer_id) REFERENCES Customer(customer_id) ON DELETE CASCADE
);

CREATE OR REPLACE TABLE Regular(
    customer_id INT,
    FOREIGN KEY(customer_id) REFERENCES Customer(customer_id) ON DELETE CASCADE
);

CREATE OR REPLACE TABLE Reservation(
    reservation_id INT,
    payment CHAR(10),
    customer_id INT,
    schedule_id INT,
    PRIMARY KEY(reservation_id),
    FOREIGN KEY(customer_id) REFERENCES Customer(customer_id) ON DELETE CASCADE,
    FOREIGN KEY(schedule_id) REFERENCES Scheduled_Movie(schedule_id) ON DELETE CASCADE
);

CREATE OR REPLACE TABLE Scheduled_Movie(
    schedule_id INT,
    date CHAR(10),
    movie_id INT,
    reservation_id INT,
    room_id INT,
    PRIMARY KEY(schedule_id),
    FOREIGN KEY(reservation_id) REFERENCES Reservation(reservation_id),
    FOREIGN KEY(room_id) REFERENCES Room(room_id),
    FOREIGN KEY(movie_id) REFERENCES Movie(movie_id)
);

CREATE OR REPLACE TABLE Movie(
    movie_id INT,
    name CHAR(20),
    description CHAR(40),
    duration FLOAT,
    schedule_id INT,
    PRIMARY KEY(movie_id)
);

CREATE OR REPLACE TABLE Accomodation(
    cost FLOAT,
    reservation_id INT,
    FOREIGN KEY(reservation_id) REFERENCES Reservation(reservation_id)
);

CREATE OR REPLACE TABLE Seat(
    seat_id INT,
    number INT,
    row INT,
    room_id INT,
    PRIMARY KEY(seat_id),
    FOREIGN KEY(room_id) REFERENCES Room(room_id)
);

CREATE OR REPLACE TABLE Room(
    room_id INT,
    number INT,
    schedule_id INT,
    seat_id INT,
    PRIMARY KEY(room_id),
    FOREIGN KEY(seat_id) REFERENCES Seat(seat_id)
);

CREATE OR REPLACE TABLE Snack(
    snack_id INT,
    description CHAR(40),
    name CHAR(20),
    PRIMARY KEY(snack_id),
);

CREATE OR REPLACE  TABLE Food(
    quantity_g FLOAT,
    snack_id INT,
    FOREIGN KEY(snack_id) REFERENCES Snack(snack_id) ON DELETE CASCADE
);

CREATE OR REPLACE  TABLE Drink(
    quantity_ml FLOAT,
    snack_id INT,
    FOREIGN KEY(snack_id) REFERENCES Snack(snack_id) ON DELETE CASCADE
);