# app.py
from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def index():

    return render_template('project1.html', title='My Python App')

# Run the application
if __name__ == '__main__':

    app.run(debug=True)