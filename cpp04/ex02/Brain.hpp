#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain
{
private:
	std::string thoughts[100];

public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();
	std::string	*getThoughts();
	std::string	getThought(int index);
	void		setThoughts(const std::string idea, int index);
	void		fillThoughts(std::string thought);
};

#endif