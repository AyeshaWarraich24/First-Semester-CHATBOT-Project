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
            std::cout << response1[4] << std::endl;
			write_response(response1[4], size, "response1.txt");
			write_response(response2[4], size, "response2.txt");
			write_response(response3[4], size, "response3.txt");
		
		}
		else if (prompt == "biryani")
		{
			std::cout << response1[5] << std::endl;
			write_response(response1[5], size, "response1.txt");
			write_response(response2[5], size, "response2.txt");
			write_response(response3[5], size, "response3.txt");
		}
		else if (prompt == "pasta")
		{
			std::cout << response1[6] << std::endl;
			write_response(response1[6], size, "response1.txt");
			write_response(response2[6], size, "response2.txt");
			write_response(response3[6], size, "response3.txt");
        }
		else if (prompt == "fried rice")
		{
			std::cout << response1[7] << std::endl;
			write_response(response1[7], size, "response1.txt");
			write_response(response2[7], size, "response2.txt");
			write_response(response3[7], size, "response3.txt");
        }
		else if (prompt == "sandwich")
		{
			std::cout << response1[8] << std::endl;
			write_response(response1[8], size, "response1.txt");
			write_response(response2[8], size, "response2.txt");
			write_response(response3[8], size, "response3.txt");
        }
		else if (prompt == "omelette")
		{
			std::cout << response1[9] << std::endl;
			write_response(response1[9], size, "response1.txt");
			write_response(response2[9], size, "response2.txt");
			write_response(response3[9], size, "response3.txt");
        }
		else if (prompt == "salad") 
		{
			std::cout << response1[10] << std::endl;
			write_response(response1[10], size, "response1.txt");
			write_response(response2[10], size, "response2.txt");
			write_response(response3[10], size, "response3.txt");
        }
		else if (prompt == "soup")
		{
			std::cout << response1[11] << std::endl;
			write_response(response1[11], size, "response1.txt");
			write_response(response2[11], size, "response2.txt");
			write_response(response3[11], size, "response3.txt");
        }
		else if (prompt == "fries")
		{ 
			std::cout << response1[12] << std::endl;
			write_response(response1[12], size, "response1.txt");
			write_response(response2[12], size, "response2.txt");
			write_response(response3[12], size, "response3.txt");
        }
		else if (prompt == "cake")
		{
			std::cout << response1[13] << std::endl;
			write_response(response1[13], size, "response1.txt");
			write_response(response2[13], size, "response2.txt");
			write_response(response3[13], size, "response3.txt");
        }
		else if (prompt == "pancakes")
		{
			std::cout << response1[14] << std::endl;
			write_response(response1[14], size, "response1.txt");
			write_response(response2[14], size, "response2.txt");
			write_response(response3[14], size, "response3.txt");
		}
        else if (prompt == "paratha")
		{
			std::cout << response1[15] << std::endl;
			write_response(response1[15], size, "response1.txt");
			write_response(response2[15], size, "response2.txt");
			write_response(response3[15], size, "response3.txt");
        }
		else if (prompt == "samosa")
		{
			std::cout << response1[16] << std::endl;
			write_response(response1[16], size, "response1.txt");
			write_response(response2[16], size, "response2.txt");
			write_response(response3[16], size, "response3.txt");
        }
		else if (prompt == "kebab")
		{
			std::cout << response1[17] << std::endl;
			write_response(response1[17], size, "response1.txt");
			write_response(response2[17], size, "response2.txt");
			write_response(response3[17], size, "response3.txt");
        }
		else if (prompt == "ice cream")
		{
			std::cout << response1[18] << std::endl;
			write_response(response1[18], size, "response1.txt");
			write_response(response2[18], size, "response2.txt");
			write_response(response3[18], size, "response3.txt");
        } 
		else if (prompt == "milkshake")
		{
			std::cout << response1[19] << std::endl;
			write_response(response1[19], size, "response1.txt");
			write_response(response2[19], size, "response2.txt");
			write_response(response3[19], size, "response3.txt");
        }
		else if (prompt == "smoothie")
		{
			std::cout << response1[20] << std::endl;
			write_response(response1[20], size, "response1.txt");
			write_response(response2[20], size, "response2.txt");
			write_response(response3[20], size, "response3.txt");
        }
		else if (prompt == "chicken curry")
		{
			std::cout << response1[21] << std::endl;
			write_response(response1[21], size, "response1.txt");
			write_response(response2[21], size, "response2.txt");
			write_response(response3[21], size, "response3.txt");
        }
		else if (prompt == "Rice")
		{
			std::cout << response1[22] << std::endl;
			write_response(response1[22], size, "response1.txt");
			write_response(response2[22], size, "response2.txt");
			write_response(response3[22], size, "response3.txt");
        }
		else if (prompt == "lasagna")
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
	response1[4] = "Cool" + username + "Let's cook Classic Beef Burger." +"\n"+ "Ingredients:" +"\n"+ "1 Beef patty, 1 burger bun, Lettuce leaves, Tomato slices, Cheese slice, Mayonnaise." +"\n"+ "Steps:" +"\n"+ "1. Grill beef patty until fully cooked." +"\n"+ "2. Lightly toast the bun." +"\n"+ "3. Assemble bun with patty, cheese, lettuce, tomato and mayo." +"\n"+ "4. Serve immediately.";                                                                                                                                                                                                                                    
	response1[5] = "Good" + username + "Here is the recipe of Chicken Biryani." + "\n" + "Ingredients : 500g chicken, 2 cups basmati rice, 1 cup yogurt, 2 onions(sliced), 2 tpsp biryani masala, Cooking oil." + "\n" + "Steps :" + "\n" + "1. Fry onions until golden." + "\n" + "2. Add chicken and biryani masala and cook for 10 minutes." + "\n" + "3. Add yogurt and cook until oil separates." + "\n" + "4. Boil rice until 70% cooked." + "\n" + "5. Layer rice and chicken." + "\n" + "6. Cover and steam on low heat for 15 minutes.";                                                                                                                                                                                                                                                                                                                                                                 
	response1[6] = "Yes" + username + "Here is exactly what you need to cook White Sauce Pasta." + "\n" + "Ingredients : 2 cups pasta, Butter, flour, Milk, Mushrooms." + "\n" + "Steps :" + "\n" + "1. Boil pasta until tender." + "\n" + "2. Prepare white sauce using butter, flour and milk." + "\n" + "3. Add mushrooms." + "\n" + "4. Mix pasta with sauce and serve.";                                                                                                                            
	response1[7] = "Alright" + username + "Let's learn how to cook egg fried rice step by step." + "\n" + "Ingredients : 3 cups cooked rice(cold), 2 eggs, 2 tbsp oil, 1 tpsp garlic(chopped), 2 tbsp soy sauce, 1 and a half tbsp black pepper, Salt to taste, Spring onions for garnish." + "\n" + "Steps :" + "\n" + "1. Heat oil in a work over high heat." + "\n" + "2. Add garlic and sauce for 30 seconds." + "\n" + "3. Crack eggs into pan and scramble lightly." + "\n" + "4. Add cooked rice and mix well." + "\n" + "5. Add soy sauce, salt and black pepper." + "\n" + "6. Stir fry for 2-3 minutes on high flame." + "\n" + "7. Garnish with spring onions and serve hot.";                                                                                                                                                                                                                                                                                                                                         
	response1[8] = "No worries" + username + "I've got you! Below is the recipe of club sandwich." + "\n" + "Ingredients : 3 bread slices, 1 boiled egg(sliced), Cooked chicken slices, Lettuce, Mayonnaise." + "\n" + "Steps :" + "\n" + "1. Toast bread slices lightly." + "\n" + "2. Spread mayonnaise on each slice." + "/n" + "3. Layer chicken, egg and lettuce." + "\n" + "Stack and cut into halves. Serve.";
	response1[9] = "Okay" + username + "Here is the clear and simple recipe of Plain Omelette." + "\n" + "Ingredients : 2 eggs, Salt, Black pepper, 1 tbsp oil." + "\n" + "Steps :" + "\n" + "1. Beat eggs with salt and pepper." + "\n" + "2. Heat oil in pan." + "\n" + "3. Pour eggs and cook until set." + "\n" + "4. Fold and serve.";                                          
	response1[10] = "Got it" + username + "This is how we'll make Garden Salad." + "\n" + "Ingredients : Lettuce, Cucumber, Tomato, Lemon juice, Olive oil." + "\n" + "Steps :" + "\n" + "1. Chop all vegetables." + "\n" + "2. Mix with lemon juice and oil." + "\n" + "3. Serve fresh.";                                                                                               
	response1[11] = "Absolutely" + username + "let me explain how to make Chicken Corn Soup." + "\n" + "Ingredients : Chicken broth, Chicken shredded, Corn kernels, Cornflour, Black pepper." + "\n" + "Steps :" + "\n" + "1. Heat broth and add chicken and corn." + "\n" + "2. Add cornflour slurry to thicken." + "\n" + "3. Season with pepper and salt." + "\n" + "3. Simmer and serve hot.";
	response1[12] = "Sure" + username + "Here is the breakdown of classic crispy french fries recipe." + "\n" + "Ingredients : 4 large potatoes, Cold water(for soaking), Oil for deep frying, 1 tbsp salt." + "\n" + "Steps :" + "\n" + "1. Peel potatoes and cut into even sticks." + "\n" + "2. Soak in cold water for 30 minutes to remove excess starch." + "\n" + "3. Heat oil on medium heat and fry potatoes for 4-5 minutes until pale." + "\n" + "4. Remove and rest for 10 minutes." + "\n" + "5. Fry again on high heat until golden and crispy." + "\n" + "6. Sprinkle salt and serve hot.";                                                                                                          
	response1[13] = "Let's do this" + username + "Here is the solution to bake Moist Chocolate Cake." + "\n" + "Ingredients : 1 and a half cup flour, 1 cup sugar, Half cup cocoa powder, 2 eggs, Half cup oil, 1 cup milk, 1 tbsp baking powder." + "\n" + "Steps :" + "\n" + "1. Preheat oven to 180 degree celsius and grease a cake pan." + "\n" + "2. Sift flour, cocoa, and baking powder togrther." + "\n" + "3. In another bowl, whisk eggs and sugar until light." + "\n" + "4. Add oil and milk, then mix dry ingredients gradually." + "\n" + "5. Pour it into pan and bake for 30-35 minutes ot until toothpick comes out clean.";                                                                                                            
	response1[14] = "Perfect" + username + "Below is super easy recipe to bake Classic Breakfast Pancakes." + "\n" + "Ingredients : 1 cup flour, 1 cup milk, 1 egg, 1 tbsp baking powder, 1 tbsp sugar." + "\n" + "Steps :" + "\n" + "1. Mix dry ingredients in a bowl." + "\n" + "2. Add milk and egg, whisk until smooth." + "\n" + "3. Heat non-stick pan and lightly grease." + "\n" + "4. Pour batter and cook until bubbles form." + "\n" + "5. Flip and cook other side. Serve warm.";                                                                                         
	response1[15] = "This is how we cook Plain Paratha" + username + "\n" + "Ingredients : 2 cups wheat flour, Water, Oil or ghee, Salt." + "\n" + "Steps :" + "\n" + "1. Knead soft dough using flour, salt and water." + "\n" + "2. Rest dough for 20 minutes." + "\n" + "3. Roll into flat circles." + "\n" + "4. Cook on hot pan using oil until golden spots appear.";                                                                                                                                                                                                                                                                                                                                                                 
	response1[16] = "Sure" + username + "Here i exactly what you need to cook Classic Potato Samosa" + "\n" + "Ingredients : Potatoes, Peas, Spices." + "\n" + "Steps :" + "\n" + "1. Cook potatoes with spices." + "\n" + "2. Cool filling" + "\n" + "3. Fill sheets, seal edges." + "\n" + "4. Fry on mediun heat until crisp.";                                                                                                   
	response1[17] = "Alright" + username + "Here is how we'll cook Chicken Seekh Kebab" + "\n" + "Ingredients : 500g boneless chicken (minced), 1 small onion (finely chopped), 1 tbsp ginger garlic paste, 1 tbsp red chilli powder, 1 tbsp cumin powder, 1 tbsp garam masala, 1 tbsp breadcrumbs, Salt to taste, Oil for brushing." + "\n" + "Steps :" + "\n" + "1. Place minced chicken in a bowl and squeeze out excess moisture." + "\n" + "2. Add onion, ginger-garlic paste, spices, salt, and breadcrumbs." + "\n" + "3. Mix thoroughly until mixture binds well." + "\n" + "3. Shape mixture onto skewers in long kebab shapes." + "\n" + "5. Grill on medium heat or bake at 200 degree celsius for 20 minutes, turning halfway." + "\n" + "6. Brush lightly with oil and cook until golden. Serve hot.";                                                                                                                                                                                                                                                                                                                                  
	response1[18] = "Sure" + username + "let's make Vanilla Ice Cream step by step." + "\n" + "Ingredients :" + "\n" + "2 cups fresh cream, 1 cup condensed milk, 1 tbsp vanilla essence." + "\n" + "Steps :" + "\n" + "1. Whip cream until thick but not stiff." + "\n" + "2. Gently fold in condensed milk and vanilla." + "\n" + "3. Pour mixture into a container." + "\n" + "4. Freeze for 6-8 hours, stirring once after 3 hours for smooth textures." + "\n" + "5. Scoop and serve chilled.";
	response1[19] = "Perfect" + username + "This is how we'll prepare Chocolate Milkshake." + "\n" + "Ingredients : 2 cups cold milk, 3 tbsp chocolate syrup, 1 scoop vanilla icecream." + "\n" + "Steps :" + "\n" + "1. Add milk, syrup and ice cream to blender.";
	response1[20] = "Yes" + username + "Here is exactly what you need to make Mango Banana Smoothie." + "\n" + "Ingredients : 1 cup mango chunks, 1 banana, 1 cup milk." + "\n" + "Steps :" + "\n" + "1. Blend mango and banana first." + "\n" + "2. Add milk and blend again." + "\n" + "3. Serve immediately.";
	response1[21] = "Alright" + username + "Let's learn how to cook Traditional Chicken Curry." + "\n" + "Ingredients : 500g chicken, 2 onions, 2 tomatoes, 1 tbsp ginger-garlic paste, 1 tbsp tumeric, 1 tbsp red chilli powder, Oil and salt." + "\n" + "Steps :" + "\n" + "1. Heat oil and fry onions until golden." + "\n" + "2. Add ginger-garlic paste and spices." + "\n" + "3. Add tomato puree and cook until oil separates." + "\n" + "4. Add chicken and mix well." + "\n" + "5. Cover and cook on medium heat for 20 minutes." + "\n" + "6. Add water if needed and simmer.";
	response1[22] = "No worries" + username + "I've got you. Below is the recipe of Plain Steamed White Rice." + "\n" + "Ingredients : 2 cups basmati rice, 4 cups water, 1 tbsp salt." + "\n" + "Steps :" + "\n" + "1. Wash rice 2-3 times until water runs clear." + "\n" + "2. Soak rice for 20 minutes, then drain." + "\n" + "3. Bring water to a boil in a pot and add salt." + "\n" + "4. Add rice and cook uncovered on medium heat for 10 minutes." + "\n" + "5. When rice is soft, drain excess water." + "\n" + "6. Cover and let rest for 5 minutes before serving.";
	response1[23] = "Perfect" + username + "I've super easy recipe for you to cook Classic Beef Lasagna." + "\n" + "Ingredients : Lasagna sheets, 500g minced beef, 2 cups tomato sauce, 1 cup white sauce, 1 and a half cup mozarella cheese, Oil, Salt and pepper." + "\n" + "Steps :" + "\n" + "1. Cook beef with oil, salt and pepper until browned." + "\n" + "2. Add tomato sauce and simmer for 10 minutes." + "\n" + "3. Boil lasagna sheets according to package instructions." + "\n" + "4. In a baking dish, layer meat sauce, sheets, and white sauce." + "\n" + "5. Repeat layers and top with cheese." + "\n" + "6. Bake at 180 degree celsius for 30 minutes. Let rest before slicing.";
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
	response2[4] = username + "Let's cook Crispy Chicken Burger." + "\n" + "Ingredients :" + "\n" + "Fried Chicken fillet, Burger bun, Lettuce, Mayo." +"\n"+ "Steps :" +"\n"+ "1. Fry chicken until golden and crispy." +"\n"+ "2. Toast bun lightly." +"\n"+ "3. Add lettuce, chicken and mayo." +"\n"+ "4. Close bun and serve.";                                                                                                                                                      
	response2[5] = "Sure" + username + "Here is the recipe of Beef Biryani." + "\n" + "Ingredients :" + "\n" + "500g beaf, Rice, Yogurt, Biryani masala" + "\n" + "Steps :" + "\n" + "1. Cook beaf with spices until tender." + "\n" + "2. Layer with partially cooked rice." + "\n" + "3. Steam and serve.";                                                                                                                                                                                
	response2[6] = "Yes" + username + "Here is exactly what you need to cook Red Sauce Pasta" + "\n" + "Ingredients : Pasta, Tomatpes, Garlic, Olive oil" + "\n" + "Steps :" + "\n" + "1. Cook tomatoes with garlic and oil." + "\n" + "2. Blend into sauce." + "\n" + "3. Mix pasta and cook briefly.";                                                                                                                                                           
	response2[7] = "Alright" + username + "Let's learn how to cook Chicken Fried Rice." + "\n" + "Ingredients : 3 cups cooked rice, 1 cup boneless chicken, 1 tbsp oil, 1 tbsp garlic paste, 1 and a half cup mixed vegetables, 2 tbsp soy sauce, Salt and pepper." + "\n" + "Steps :" + "\n" + "1. Heat oil in a pan and cook chicken until done." + "\n" + "2. Add garlic paste and vegetables." + "\n" + "3. Add rice, soy sauce, salt and pepper." + "\n" + "4. Stir fry on high heat for 3 minutes." + "\n" + "5. Serve hot.";                                                                                                                                                                                              
	response2[8] = "No worries" + username + "I've got you. Below is the recipe of Grilled Cheese Sandwich." + "\n" + "Ingredients : Bread slices, Butter, Cheddar cheese." + "\n" + "Steps :" + "\n" + "1. Butter one side of bread." + "\n" + "2. Place cheese between slices." + "\n" + "3. Grill until golden and cheese melts.";                                                              
	response2[9] = "Okay" + username + "Here is the clear and simple recipe of Cheese Omelette." + "\n" + "	Ingredients : 2 eggs, 1/4 cup grated cheese, Salt, Pepper." + "\n" + "Steps :" + "\n" + "1. Beat eggs and pour into pan." + "\n" + "2. Sprinkle cheese on top." + "\n" + "3. Fold once cooked and serve.";                                                                                                                     
	response2[10] = "Got it" + username + "This is how we'll make Chicken Caesar Salad." + "\n" + "Ingredients : Grilled chicken, Lettuce, Croutons, Caesar dressing." + "\n" + "Steps :" + "\n" + "1. Chop lettuce and chicken." + "\n" + "2. Add croutons and dressing." + "\n" + "3. Toss and serve.";                                                                                                                                                                            
	response2[11] = "Absolutely" + username + "Let me explain how to make tomato soup." + "\n" + "Ingredients : Tomatoes, Garlic, Cream." + "\n" + "Steps :" + "\n" + "1. Cook tomatoes and garlic." + "\n" + "2. Blend smooth" + "\n" + "3. Reheat, add cream, and serve.";
	response2[12] = "Sure" + username + "Here is the breakdown of spicy masala fries recipe." + "\n" + "Ingredients : 4 potatoes, Oil for frying, 1 and a half tbsp chilli powder, 1 and a half tbsp paprika, 1 and a half tbsp chaat masala, Salt to taste." + "\n" + "Steps :" +  "\n" + "1. Prepare fries as in classic method." + "\n" + "2. After final frying, place fries in a bowl." + "\n" + "3. Sprinkle all spices evenly." + "4. Toss well so that fries are fully coated." + "5. Serve immediately with ketchup or mayo.";                                                                                                             
	response2[13] = "Let's do this" + username + "Here is the solution to bake Vanilla Sponge Cake." + "\n" + "Ingredients : Flour, Sugar, Eggs, Butter, Vanilla essence." + "\n" + "Steps :" + "\n" + "1. Cream butter and sugar until fluffy." + "\n" + "2. Add eggs one by one." + "\n" + "3. Fold in flour gently." + "\n" + "4. Bake at 180 degree celsius until golden.";                                                                                                                
	response2[14] = "Perfect" + username + "Below is super easy recipe to bake Banana Pancakes." + "\n" + "Ingredients : Mashed banana, Flour, Milk, Egg." + "\n" + "Steps :" + "\n" + "1. Mix banana with batter ingredients." + "\n" + "2. Cook pancakes on low heat." + "\n" + "3. Serve with honey.";
	response2[15] = "This is how we cook Aloo Paratha" + username + "\n" + "Ingredients : Boiled potatoes, Spices, Dough." + "\n" + "Steps :" + "\n" + "1. Mash potatoes with spices." + "\n" + "2. Stuff into dough balls." + "\n" + "3. Roll gently and cook with ghee.";
	response2[16] = "Sure" + username + "Here i exactly what you need to cook Chicken samosa." + "\n" + "Ingredients : Minced chicken, Onion, Spices." + "\n" + "Steps :" + "\n" + "1. Cook chicken with spices." + "\n" + "2. Cook filling until dry and then cool it." + "\n" + "3. Fill sheets and seal edges." + "\n" + "4. Fry samosa on medium heat.";
	response2[17] = "Alright" + username + "Here is how we will cook Beef Chapli kebab." + "\n" + "Ingredients : 500g beef mince, 1 onion, 1 tomato, 2 green chillies, 1 tbsp coriander powder, 1 tbsp red chilli flakes, Salt to taste, Oil for shallow frying." + "\n" + "Steps : " + "\n" + "1. Combine beef mince, onion, tomato, chillies, spices, and salt in a bowl." + "\n" + "2. Mix gently to avoid over-mashing the meat." + "\n" + "3. Shape into flat round patties." + "\n" + "4. Heat oil in a frying pan on medium heat." + "\n" + "5. Fry kebabs until cooked through and crisp on both sides."  + "\n" + "6. Serve with naan and chutney.";                                                                                                 
	response2[18] = "Sure" + username + "Let's make Chocolate Ice Cream step by step." + "\n" + "Ingredients : 2 cups fresh cream, 1 cup condensed milk, 3 tbsp cocoa powder." + "\n" + "Steps :" + "\n" + "1. Sift cocoa powder to remove lumps." + "\n" + "2. Whip cream until thick." + "\n" + "3. Fold in condensed milk and cocoa powder." + "\n" + "4. Freeze mixture, stirring once halfway through." + "\n" + "5. Serve when fully set.";
	response2[19] = "Got you" + username + "Let's start making Strawberry milkshake." + "\n" + "Ingredients : 1 cup fresh strawberries, 2 cups cold milk, 2 tbsp sugar." + "\n" + "Steps :" + "\n" + "1. Blend strawberries with sugar until smooth." + "\n" + "2. Add milk and blend again." + "\n" + "3. Chill for 10 minutes and serve.";
	response2[20] = "Yes" + username + "Here is exactly what you need to make Green Detox Smoothie." + "\n" + "Ingredients : Spinach leaves, Green apple, Lemon juice, Water." + "\n" + "Steps :" + "\n" + "1. Chop apple and wash spinach." + "\n" + "2. Blend with water and lemon juices." + "\n" + "3. Serve fresh.";
	response2[21] = "Alright" + username + "Let's learn how to cook Butter Chicken." + "\n" + "Ingredients : Cooked chicken pieces, Butter, Tomato puree, Cream, Garam masala." + "\n" + "Steps :" + "\n" + "1. Heat butter and add tomato puree." + "\n" + "2. Cook until thick and glossy." + "\n" + "3. Add chicken and garam masala." + "\n" + "4. Stir in cream and simmer for 5 minutes." + "\n" + "5. Serve hot with naan.";
	response2[22] = "No worries" + username + "I've got you. Below is the recipe of Jeera (Cumin) Rice." + "\n" + "Ingredients : 2 cups basmati rice, 2 tbsp oil or ghee, 1 tbsp cumin seeds, 4 cups water, Salt to taste." + "\n" + "Steps :" + "\n" + "1. Wash and soak rice for 20 minutes." + "\n" + "2. Heat oil or ghee in a pot on medium heat." + "\n" + "3. Add cumin seeds and let them crackle." + "\n" + "4. Add drained rice and stir gently for 1 minute." + "\n" + "5. Add water and salt." + "\n" + "6. Cook until rice is fluffy and grains are separate.";
	response2[23] = "Perfect" + username + "I've super easy recipe for you to cook Chicken Lasagna." + "\n" + "Ingredients : Cooked shredded chicken, Lasagna sheets, White sauce, Mozarella cheese." + "\n" + "Steps :" + "\n" + "1. Mix chicken with white sauce and seasoning." + "\n" + "2. Boil lasagna sheets and drain." + "\n" + "3. Layer chicken mixture and sheets in a baking dish." + "\n" + "4. Top with cheese." + "\n" + "5. Bake at 180 degree celsius for 25-30 minutes."; 

	
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
    response3[4] = username + "Let's cook veggie burger." +"\n"+ "Ingredients :" +"\n"+ "Potato patty, Burger bun, Onion slices, Mint chutney." +"\n"+ "Steps :" +"\n"+ "1. Shallow fry potato slices until crisp." +"\n"+ "2. Toast bun lightly." +"\n"+ "3. Assemble burger with chutney and onions" +"\n"+ "4. Serve hot.";                                                                                                                                                                
	response3[5] = "Sure" + username + "Here is the recipe of Vegetable Biryani." + "\n" + "Ingredients : Mixed vegetables, Rice, Biryani masala." + "\n" + "Steps :" + "\n" + "1. Cook vegetables with masala." + "\n" + "2. Layer with rice." + "\n" + "3. Steam and serve.";                                                                                
	response3[6] = "Yes" + username + "Here is exactly what you need to cook Pesto Pasta." + "\n" + "Ingredients : Pasta, Basil pesto, Parmesan cheese." + "\n" + "Steps :" + "\n" + "1. Boil pasta and drain." + "\n" + "2. Mix with pesto sauce." + "\n" + "3. Top with cheese and serve.";                                                                                             
	response3[7] = "Alright" + username + "Let's learn how to cook Vegetable fried rice." + "\n" + "Ingredients : 3 cups cooked rice, 1 cup mixed vegetables, 2 tbsp oil, Soy sauce, Black pepper." + "\n" + "Steps :" + "\n" + "1. Heat oil and add vegetables." + "\n" + "2. Stir fry until tender." + "\n" + "3. Add rice and seasonings." + "\n" + "4. Mix well and cook for 2 minutes.";                                                                                  
	response3[8] = "No worries" + username + "I've got you. Below is the recipe of Vegetable sandwich." + "\n" + "Ingredients : Bread slices, Cucumber, Tomato, Onion, Butter or chutney." + "\n" + "Steps :" + "\n" + "1. Spread butter or chutney on bread." + "\n" + "2. Add vegetables and close sandwich." + "\n" + "3. Cut and serve."; 
	response3[9] = "Okay" + username + "Here is the clear and simple recipe of Vegetable Omelette." + "\n" + "Ingredients : Eggs, Onion, Capsicum, Salt, Pepper." + "\n" + "Steps :" + "\n" + "1. Mix vegetables into beaten eggs." + "\n" + "2. Cook in pan until firm." + "\n" + "3. Serve hot.";                                                                                                  
	response3[10] = "Got it" + username + "This is how we'll make Pasta Salad." + "\n" + "Ingredients : Boiled pasta, Olives, Vegetables, Dressing." + "\n" + "Steps :" + "\n" + "1. Mix pasta with vegetables." + "\n" + "2. Add dressing and toss well." + "\n" + "3. Chill and serve.";                                                                                                     
	response3[11] = "Absolutely" + username + "Let me explain how to make vegetable soup." + "\n" + "Ingredients : Mixed vegetables, Vegetable stock." + "\n" + "Steps :" + "\n" + "1. Cook vegetables in stock." + "\n" + "2. Simmer until tender." + "\n" + "3. Season and serve.";
	response3[12] = "Sure" + username + "Here is the breakdown of cheese loaded fries." + "\n" + "Ingredients : Cooked french fries, 1 cup cheddar cheese sauce, 1 tbsp butter, Black pepper." + "\n" + "Steps :" + "\n" + "1. Prepare crispy fries and transfer it to a serving plate." + "\n" + "2. Heat cheese sauce gently with butter." + "\n" + "3. Pour hot cheese sauce over fries." + "\n" + "4. Sprinkle black pepper and serve while hot.";                                                                                                           
	response3[13] = "Let's do this" + username + "Here is the solution to bake Red Velvet cake." + "\n" + "Ingredients : Flour, Cocoa powder, Red food color, Cream cheese frosting." + "\n" + "Steps :" + "\n" + "1. Prepare batter with cocoa and color." + "\n" + "2. Bake cake layers." + "\n" + "Cool completely and frost generously.";
	response3[14] = "Perfect" + username + "Below is super easy recipe to bake Chocolate Chip Pancakes." + "\n" + "Ingredients : Pancake batter, Chocolate chips" + "\n" + "Steps :" + "\n" + "1. Pour batter onto pan." + "\n" + "2. Sprinkle chocolate chips."  + "\n" + "3. Flip carefully and serve."; 
	response3[15] = "This is how we cook Chicken Paratha" + username + "\n" + "Ingredients : Cooked chicken, Paratha, Sauce." + "\n" + "Steps :" + "\n" + "1. Cook paratha." + "\n" + "Place chicken and sauce inside." + "\n" + "3. Roll tightly and serve.";
	response3[16] = "Sure" + username + "Here is exactly what you need to cook Cheese Samosa" + "\n" + "Ingredients : Cheese cubes, Sheets, Spices." + "\n" + "Steps :" + "\n" + "1. Fill sheets with filling and cheese." + "\n" + "2. Fry samosa until golden.";
	response3[17] = "Alright" + username + "Here is how we will cook Vegetable Kebab" + "\n" + "Ingredients : 2 cups mixed vegetables (potato, carrot, peas), 2 tbsp cornflour, 1 tbsp cumin powder, Half tbsp black pepper, Salt to taste, Oil for frying." + "\n" + "Steps :" + "\n" + "1. Boil vegetables until soft, then mash coarsely." + "\n" + "2. Add cornflour, spices, ans salt. Mix well." + "\n" + "3. Shape mixture into small patties." + "\n" + "4. Heat oil on medium heat." + "\n" + "5. Shallow fry kebabs until golden on both sides." + "\n" + "6. Serve hot with sauce.";
	response3[18] = "Sure" + username + "Let's make Mango Ice Cream step by step." + "\n" + "Ingredients : 1 and a half cups mango pulp, 1 and a half cup fresh cream, 3 quarters of a cup condensed milk." + "\n" + "Steps :" + "\n" + "1. Whip cream lightly until creamy." + "\n" + "2. Fold in mango pulp and condensed milk." + "\n" + "3. Pour into container and freeze for 6 hours." + "\n" + "4. Allow to soften slightly before serving.";                                                                                   
	response3[19] = "Got you" + username + "Let's start making Banana milkshake" + "\n" + "Ingredients :" + "\n" + " 2 ripe bananas, 2 cups cold milk, 1 tbsp honey." + "\n" + "Steps :" + "\n" + "1. Peel and slice bananas." + "\n" + "2. Blend bananas with milk and honey until smooth." + "\n" + "3. Serve immediately for best taste.";                                                                                                    
	response3[20] = "Yes" + username + "Here is exactly what you need to make Berry Smoothie." + "\n" + "Ingredients : 1 cup mixed berries, 1 cup yogurt, Half cup milk, Honey to taste." + "\n" + "Steps :" + "\n" + "1. Add all ingredients to blender." + "\n" + "2. Blend until thick and smooth." + "\n" + "3. Serve chilled.";
	response3[21] = "Alright" + username + "Let's learn how to cook Chicken Karahi." + "\n" + "Ingredients : Chicken, Tomatoes, Green Chillies, Ginger slices, Karahi masala." + "\n" + "Steps :" + "\n" + "1. Cook chicken on high heat with oil." + "\n" + "2. Add tomatoes and spices." + "\n" + "3. Cook uncovered until oil separates." + "\n" + "4. Garnish with ginger and chillies. Serve hot.";
	response3[22] = "No worries" + username + "I've got you. Below is the recipe of Vegetable Rice." + "\n" + "Ingredients : 2 cups rice, 1 cup mixed vegetables (carrot, peas, beans), 2 tbsp oil, Half tbsp black pepper, Salt to taste." + "\n" + "Steps :" + "\n" + "1. Wash and soak rice for 20 minutes." + "\n" + "2. Heat oil in a pot and saute vegetables for 3 minutes." + "\n" + "3. Add rice, water, salt, and pepper." + "\n" + "4. Cook covered on medium heat until rice is done." + "\n" + "5. Fluff gently and serve hot.";
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

