


CREATE TABLE users (
			user_id	NUMBER(3)	NOT NULL,
			passwd	VARCHAR2(20)	NOT NULL,
			email	VARCHAR2(30)	NOT NULL,
			name	VARCHAR2(20)	NOT NULL,
			age	NUMBER(3)	NOT NULL,
			address	VARCHAR2(200)	NOT NULL,
			img_cont_type	VARCHAR2(20)	,
			img_file_name	VARCHAR2(20)	,
			backnum	NUMBER(3)	NOT NULL,
			member_auth	VARCHAR2(1),
			position	VARCHAR2(2),
            joindate DATE DEFAULT SYSDATE
		);
        ALTER TABLE users 
        ADD CONSTRAINT  user_id_pk PRIMARY KEY (
			user_id
		);

		CREATE TABLE quarter (
			quarter_id	NUMBER(3)	NOT NULL,
			quarter_time	NUMBER(4),
			outcome	NUMBER(2),
			match_id	NUMBER(3)	NOT NULL
		);
        ALTER TABLE quarter
    ADD (
            CONSTRAINT quarter_id_pk PRIMARY KEY(quarter_id),
            CONSTRAINT match_id_fk FOREIGN KEY(match_id) REFERENCES match(match_id) 
    );

		CREATE TABLE match (
			match_id	NUMBER(3)	NOT NULL,
			match_date	DATE	NOT NULL,
			opteam	VARCHAR2(20)	,
			match_regdate	DATE DEFAULT SYSDATE,
			match_img_type	VARCHAR2(20)	,
			match_img_name	VARCHAR2(20)	,
			match_place	VARCHAR2(100)	,
			user_id	NUMBER(3)	
		);
          ALTER TABLE match
    ADD (
            CONSTRAINT match_id_pk PRIMARY KEY(match_id),
            CONSTRAINT user_id_fk FOREIGN KEY(user_id) REFERENCES users(user_id) 
    );

		CREATE TABLE entry (
			entry_id	VARCHAR(255)	NOT NULL,
			match_id	NUMBER(3)	NOT NULL,
			user_id	NUMBER(3)	NOT NULL
		);
          ALTER TABLE entry
    ADD (
            CONSTRAINT entry_id_pk PRIMARY KEY(entry_id),
            CONSTRAINT e_match_id_fk FOREIGN KEY(match_id) REFERENCES match(match_id), 
            CONSTRAINT e_user_id_fk FOREIGN KEY(user_id) REFERENCES users(user_id) 
    );

		CREATE TABLE lineup (
			lineup_id	NUMBER(3)	NOT NULL,
			goal	NUMBER(3)	,
			assist	NUMBER(3)	,
			point	NUMBER(3)	,
			quarter_id	NUMBER(3)	NOT NULL,
			entry_id	NUMBER(3)	NOT NULL
		);
		ALTER TABLE lineup
    ADD (
            CONSTRAINT lineup_id_pk PRIMARY KEY(lineup_id),
            CONSTRAINT l_quarter_id_fk FOREIGN KEY(quarter_id) REFERENCES quarter(quarter_id), 
            CONSTRAINT l_entry_id_fk FOREIGN KEY(entry_id) REFERENCES users(entry_id) 
    );

		
