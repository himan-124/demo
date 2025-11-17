import pyttsx3
import sounddevice as sd
import queue
import json
import sys
import os
from vosk import Model, KaldiRecognizer
from datetime import datetime

# Initialize text-to-speech engine
engine = pyttsx3.init()
engine.setProperty('rate', 165)

# Function to make SARA speak
def sara_speak(text):
    print("SARA 💬:", text)
    engine.say(text)
    engine.runAndWait()

# Load Vosk model
if not os.path.exists("vosk-model-small-en-us-0.15"):
    print("Please download the Vosk model and place it in the project folder.")
    sys.exit()

model = Model("vosk-model-small-en-us-0.15")
recognizer = KaldiRecognizer(model, 16000)

# Queue to hold audio data
q = queue.Queue()

# Callback to feed audio into the queue
def callback(indata, frames, time, status):
    if status:
        print(status, file=sys.stderr)
    q.put(bytes(indata))

# Start audio stream
def listen_to_user():
    with sd.RawInputStream(samplerate=16000, blocksize=8000, dtype='int16',
                           channels=1, callback=callback):
        print("🎙️ SARA is listening... Say something!")
        while True:
            data = q.get()
            if recognizer.AcceptWaveform(data):
                result = json.loads(recognizer.Result())
                return result.get("text", "")

# SARA's friendly brain
def process_command(command):
    command = command.lower()
    if "hello" in command or "hi" in command:
        sara_speak("Hey bestie! So happy to hear your voice!")
    elif "how are you" in command:
        sara_speak("I'm glowing, thanks to you! How about you?")
    elif "time" in command:
        now = datetime.now().strftime("%I:%M %p")
        sara_speak(f"It's {now}, my favorite human.")
    elif "your name" in command:
        sara_speak("I'm SARA, your AI best friend forever!")
    elif "bye" in command or "exit" in command:
        sara_speak("Aww, already? Talk to you soon, bestie!")
        sys.exit()
    else:
        sara_speak("Hmm, I didn't get that. But I'm always here for you!")

# Main loop
if __name__ == "__main__":
    sara_speak("Hey! I'm SARA, your AI bestie. Let's chat!")
    while True:
        user_input = listen_to_user()
        if user_input:
            print("You 🗣️:", user_input)
            process_command(user_input)