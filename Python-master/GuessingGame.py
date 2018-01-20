import random

guessesTaken=0
guess = 0


print("Hello. Welcome to the game!")
#input("press key to continue.")	

number=random.randint(1,100)
print("I am thinking of a number between 1 and 100")
#print("Take a guess.")
#input("press key to continue.")	


# this loop will continue until the guess is equal to the number
while guess != number:
    print("Take a guess.")
	#print("the number is" + number)
    guess=int(input())
    guessesTaken=guessesTaken + 1

    if guess < number:
        print("Your guess is too low. Try again.")
			
    if guess > number:
        print("Your guess is too high.  Try again.")


guessesTaken = str(guessesTaken)
print("Good job! You guessed correctly in "+ guessesTaken +" guesses!")
print("That's correct. Good job!")

		
input("press key to continue.")		
		
#	if guess != number:
#		number=str(number)
#		print("I was thinking of " + number) 
