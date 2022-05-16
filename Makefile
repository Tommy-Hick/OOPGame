git:
	git add -A 
	git commit -m "function working"
	git push
	git pull

run:
	g++ character.cpp player.cpp display.cpp move.cpp game.cpp main.cpp
