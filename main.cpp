#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>
#include <cctype>
std::string* load_prompts(int& size); // loads our prompts
std::string* give_response1(int size, std::string user_name); // returns a response for response1
std::string* give_response2(int size, std::string user_name); // returns a response for response1
std::string* give_response3(int size, std::string username);


void write_response(std::string response, int size, std::string file_name); // a universal response writer for response1 , response 2 , response 3 responses.
std::string lowercase_generator(std::string prompt); // prompt ka lowercase version deita hae
int main()
{


	int size;

	//load_prompts(size);
	
	std::string* loaded_prompts = load_prompts(size); // this will be a pointer to that array which was stored in the heap 
	std::cout << "Loaded Prompts : " << size << std::endl;
	std::string user_name;
	std::cout << "What's your name?" << std::endl;
	std::cin >> user_name;

	std::string prompt; // a prompt from loaded_prompts 
	std::string* response1 = give_response1(size, user_name); // returns a pointer to dynamic array in give_response1 function
	std::string* response2 = give_response2(size, user_name);
	std::string* response3 = give_response3(size, user_name);
	int i = 0;
	
	while(i < size) // loop will terminate when count has reached the no of prompts.
	{
		
		prompt = lowercase_generator(loaded_prompts[i]);

		std::cout << "Entered Prompt : " << prompt << std::endl;

		if (prompt == "hello")
		{
			std::cout << response1[0] << std::endl;
			write_response(response1[0], size, "response1.txt");
			write_response(response2[0], size, "response2.txt");
			write_response(response3[0], size, "response3.txt");
			
		}
		else if (prompt == "how are you?")
		{
			std::cout << response1[1] << std::endl;
			write_response(response1[1], size, "response1.txt");
			write_response(response2[1], size, "response2.txt");
			write_response(response3[1], size, "response3.txt");
		}
		
		else if (prompt == "macaroni")
		{
			std::cout << response1[2] << std::endl;
			write_response(response1[2], size, "response1.txt");
			write_response(response2[2], size, "response2.txt");
			write_response(response3[2], size, "response3.txt");

		}
		else if (prompt == "pizza")
		{
			std::cout << response1[3] << std::endl;
			write_response(response1[3], size, "response1.txt");
			write_response(response2[3], size, "response2.txt");
			write_response(response3[3], size, "response3.txt");
		}
		else if (prompt == "burger") 
		{

		}
		else
		{
			std::cout << "Couldn't understand that..." << std::endl;
			write_response("Couldn't understand that...", size, "response1.txt");
		}

		i++;
	
	}

	delete[] loaded_prompts;
	delete[] response1;
	delete[] response2;
	delete[] response3;
	
	return 0;
}

std::string* load_prompts(int& size)
{
	std::ifstream file("prompts.txt");
	if (!file)
	{
		std::cout << "Failed to open prompts.txt" << std::endl;
		return nullptr;
	}

	std::string count_str;
	std::getline(file, count_str);
	size = std::stoi(count_str);
	std::string* prompts = new std::string[size];

	// reading our prompts
	for (int i = 0; i < size; i++)
	{
		std::getline(file, prompts[i]);
//		std::cout// << prompts[i] << std::endl;
	}

	file.close();
	//std::cout << "Loaded " << size << "prompts successfully." << std::endl;
	

	std::ofstream responsefile("response1.txt");

	responsefile << size << '\n';


	return prompts;
}

std::string* give_response1(int size, std::string username) // a function that will create and return dynamic array of responses.
{
	std::string* response1 = new std::string[50];
	response1[0] = "Hi " +  username + " I am Tarkabot, how may I help you?";
	response1[1] = "I am fine and what about you?";
	response1[2] = "Good " + username + "We are cooking Classic Creamy Macroni." + "\n" + "Ingredients : 2 cups macaroni, 2 tbsp butter, 2 tbsp flour, 1 and a half cups milk, 1 cup cheddar cheese , salt & black pepper." + "\n" + "Steps: " + "\n" + "1.Boil Macaroni in salted water until soft. Drain." + "\n" + "2. Melt butter in a pan, add flour , cook 1 minute." + "\n" + "3. Slowly add milk, stirring to avoid lumps." + "\n" + "4. Add cheese, salt, and pepper." + "\n" + "5. Mix macaroni with sauce and serve hot.";
	response1[3] = "Now we will cook a margherita pizza " + username + "\n" + "Ingredients: 1 pizza base , 1 and a half cup pizza sauce, 1 and a half cups mozzarella cheese and fresh basil leaves." + "\n" + "Steps: " + "\n" + "1.Preheat oven to 220°C." + "\n" + "2.Spread pizza sauce evenly on the base." + "\n" + "3. Add mozzarella cheese and basil leaves." + "\n" + "4.Bake for 12-15 minutes until cheese melts." + "\n" + "5.Slice and serve hot.";
	return response1;
}
std::string* give_response2(int size, std::string username) // a function that will create and return dynamic array of responses.
{
	//std::cout << "We are in response 2 function " << std::endl;
	std::string* response2 = new std::string[52];
	response2[0] = "Hi " + username + " I am Tarkabot, how may I help you?";
	response2[1] = "I am doing fine and what about you?";
	response2[2] = "Good " + username + " We are cooking Spicy Tomato Macaroni." + "\n" + "Ingredients : 2 cups macaroni, 2 tbsp oil, 1 onion (chopped), 2 tomatoes(blended), 1 tbsp chilli flakes, 1 tbsp garlic paste, Salt" + "\n" + "Steps: " + "\n" + "1.Boil Macaroni in salted water until soft. Drain." + "\n" + "2. Heat oil, fry onion and garlic." + "\n" + "3. Add tomato puree, spices and salt." + "\n" + "4.Cook until thick." + "\n" + "5. Mix macaroni and cook 2 minutes.";
	response2[3] = username + "Let's cook Chicken Tikka Pizza" + "\n" + "Ingredients:" + "\n" + "Pizza base, 1 cup cooked chicken tikka, 1 and a half cup pizza sauce, 1 and a half cup mozarella cheese, 1 and a half cup sliced onions." + "\n" + "Steps :" + "\n" + "1. Spread sauce on pizza base." + "\n" + "2. Add chicken tikka and onions." + "\n" + "3. Cover with cheese." + "\n" + "4. Bake at 220°C for 15 minutes." + "\n" + "5. Serve hot.";
	return response2;
}
std::string* give_response3(int size, std::string username) // a function that will create and return dynamic array of responses.
{
	//std::cout << "We are in response 3 function " << std::endl;
	std::string* response3 = new std::string[52];
	response3[0] = "Hi " + username + " I am Tarkabot, how may I help you?";
	response3[1] = "I am doing fine and what about you?";
	response3[2] = "Good " + username + " We are cooking Baked Chicken Macaroni." + "\n" + "Ingredients : 2 cups boiled macaroni, 1 cup cooked chicken, 1 cup white sauce, 1 cup mozarella cheese, Salt" + "\n" + "Steps: " + "\n" + "1.Mix macaroni , chicken and sauce." + "\n" + "2.Transfer to baking dish." + "\n" + "3. Top with cheese." + "\n" + "4.Bake at 180°C for 15 minutes.";
	response3[3] = username + "Get ready to cook Vegetable pizza together!" + "\n" + "Ingredients :" + "\n" + "Pizza base, Capsicum, Mushrooms, Olives, Pizza Sauce, Mozarella cheese." + "\n" + "Steps :" + "1. Spread sauce over base." + "\n" + "2. Add vegetables evenly." + "\n" + "3.Sprinkle cheese on top." + "\n" + "4. Bake until crust is crisp and cheese melts.";

	return response3;
}

 
void write_response(std::string response, int size, std::string file_name) // a universal response writer , can be used for all response1, response2 and response3 responses.
{
	std::ofstream file1{ file_name, std::ios::app};

	if (!file1)
	{
		std::cout << "failed to load " << file_name << ".txt ...." << std::endl;
	}
	//file1 << size;
	file1 << response << "\n";
	file1.close();

}

std::string lowercase_generator(std::string prompt) // gives lowercased version of prompt
{

	std::transform(prompt.begin(), prompt.end(), prompt.begin(), ::tolower);
	//std::cout << "LowerCased Prompt is " << prompt << std::endl;
	return prompt;
}

