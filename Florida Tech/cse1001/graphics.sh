#!/bin/bash
name=$(zenity --entry --title "Your Name" --text "Here type your name:" --entry-text "John Smith")

name=$(zenity --warning --title "Warning Message" --width 500 --height 150 --text "Unforntunately $name, you are not a system administrator!")


