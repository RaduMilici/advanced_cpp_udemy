#ifndef FILES_FILES_H_
#define FILES_FILES_H_


namespace files{
	struct Person{
		char name[50];
		int age;
		double weight;
	};
	void writing_text();
	void reading_text();
	void parsing_text();
	void structs_padding();
	void read_write_binary_files();
}


#endif /* FILES_FILES_H_ */
