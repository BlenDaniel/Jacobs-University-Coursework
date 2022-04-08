#include<string>

namespace CPPCourse { 
	class FirstExample {
		private:
			std::string name;
		public:
			FirstExample(const std::string &);
			void print() const;
	};
}
