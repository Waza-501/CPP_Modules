#include <string>
#include <exception>
//#include

class ScalarConverter
{
	private:
		ScalarConverter() = delete;
	public:
		static void convert(std::string literal);
		class DoesNotConvertException : public std::exception
		{
			public:
				const char *what() const throw()
				{ 
					return "non displayable";
				}
		};
		
};



