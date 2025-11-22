# SARA AI - Advanced Version with Fun Facts
# Author: Himanshu

import random
from datetime import datetime

def sara_ai():
    print("\t\t\t\t   === Hey ===")
    print("\t\t\t\t SARA This Side!! ")
    print("\t\t\t\t ALWAYS FOR YOU!!!!")
    print("Hello Himanshu, Ask me anything!")

    memory = []  # store past questions

    while True:
        question = input("\nYou: ")

        # Exit condition
        if question.lower() in ["exit", "quit", "tata", "miss you", "take care sara", "see you soon", "bye"]:
            print("SARA: Goodbye Himanshu! Here are the things you asked me today:")
            for i, q in enumerate(memory, 1):
                print(f"{i}. {q}")
            break

        # Save the question in memory
        memory.append(question)

        # Responses
        if "hello" in question.lower():
            responses = [
                "Hello Himanshu! Nice to talk to you again.",
                "Hii Himanshu, how's your day going?",
                "Hey Himanshu! Always happy to chat with you."
            ]
            print("SARA:", random.choice(responses))

        elif "time" in question.lower():
            now = datetime.now().strftime("%H:%M:%S")
            responses = [
                f"The current time is {now}, Himanshu.",
                f"Right now it's {now}, Himanshu.",
                f"It's {now} on the clock, Himanshu."
            ]
            print("SARA:", random.choice(responses))

        elif "date" in question.lower():
            today = datetime.now().strftime("%d-%m-%Y")
            responses = [
                f"Today's date is {today}.",
                f"It's {today} today.",
                f"Mark the calendar, Himanshu — {today}!"
            ]
            print("SARA:", random.choice(responses))

        elif "your name" in question.lower():
            responses = [
                "My name is SARA, I'm your personal AI Friend.",
                "I'm SARA, always here for you Himanshu.",
                "You can call me SARA, Himanshu."
            ]
            print("SARA:", random.choice(responses))

        elif "remember" in question.lower():
            print("SARA: Yes Himanshu, I remember you asked me these:")
            for i, q in enumerate(memory, 1):
                print(f"{i}. {q}")

        elif "joke" in question.lower():
            jokes = [
                "🤣 Why don't banks ever play hide and seek? Because good luck hiding your balance!",
                "😂 Why did the computer go to the doctor? Because it caught a virus!",
                "😜 Why don't programmers like nature? Too many bugs!"
            ]
            print("SARA:", random.choice(jokes))

        elif "motivate" in question.lower() or "motivation" in question.lower():
            quotes = [
                "🌟 Believe in yourself, Himanshu. You are stronger than you think!",
                "💪 Keep going, success is just around the corner.",
                "🚀 Every expert was once a beginner. Keep learning!"
            ]
            print("SARA:", random.choice(quotes))

        elif "weather" in question.lower():
            responses = [
                "☀️ It looks sunny outside, perfect for a walk!",
                "🌧️ Seems rainy today, don't forget your umbrella!",
                "❄️ Cold vibes today, stay warm Himanshu!"
            ]
            print("SARA:", random.choice(responses))

        elif "math" in question.lower() or "calculate" in question.lower():
            print("SARA: Sure! Tell me a simple math problem like '2+2' or '10-3'.")
            problem = input("You (math problem): ")
            try:
                answer = eval(problem)  # simple calculator
                print("SARA: The answer is", answer)
            except:
                print("SARA: Sorry, I couldn't calculate that.")

        elif "fact" in question.lower():
            facts = [
                "🌍 Did you know? The Earth is the only planet not named after a god.",
                "🐬 Dolphins have names for each other and can recognize themselves in mirrors.",
                "🚀 The footprints on the Moon will stay there for millions of years.",
                "📚 The Great Wall of China is over 21,000 km long.",
                "🦉 An owl can rotate its head almost 270 degrees!"
            ]
            print("SARA:", random.choice(facts))

        else:
            responses = [
                f"That's interesting, Himanshu. You asked: '{question}', but I don't have info on that yet.",
                f"Hmm, good one Himanshu. You said: '{question}', but I can't answer that right now.",
                f"I see, Himanshu. You're curious about: '{question}', but I don't know much about it."
            ]
            print("SARA:", random.choice(responses))


sara_ai()