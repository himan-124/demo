#SARA AI
import random
from datetime import datetime
def sara_ai():
    print("\t\t\t\t   === Hey ===\n\t\t\t\t SARA This Side!! \n\t\t\t\tALWAYS FOR YOU!!!!")
    print("Hello Himanshu, Ask me anything!")

    memory = []  #this is the list to store past questions like database storage

    while True:
        question = input("\nYou: ")

        # Exit condition
        if question.lower() in ["exit", "quit", "tata","miss you","take care sara","see you soon","bye"]:
            print("SARA: Goodbye Himanshu! Here are the things you asked me today:")
            for i, q in enumerate(memory, 1):
                print(f"{i}. {q}")
            break

        # Save the question in memory
        memory.append(question)

        # Randomized responses
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
                f"Right now it’s {now}, Himanshu.",
                f"It’s {now} on the clock, Himanshu."
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

        else:
            responses = [
                f"That's interesting, Himanshu. You asked: '{question}',But I'm very sorry I cann't answer about these",
                f"Hmm, good one Himanshu. You said: '{question}',But I'm very sorry I cann't answer about these",
                f"I see, Himanshu. You’re curious about: '{question}',But I'm very sorry I cann't answer about these"
            ]
            print("SARA:", random.choice(responses))


sara_ai()