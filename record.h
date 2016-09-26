/* This will manage employees basic data */ 

typedef struct data {
	int id;	
	char name[32];
	char post;
	int salary;
	int mob;
}data;

/* This will manage employees daily data */

typedef struct ddata {
	int id;
	time_t intime;
	time_t outtime;
	int dhrs;
}ddata;





