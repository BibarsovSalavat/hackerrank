package main

// Day 4: Class vs. Instance
// https://www.hackerrank.com/challenges/30-class-vs-instance/problem

/*
 * Objective
 * In this challenge, we're going to learn about the difference between a class and an instance;
 * because this is an Object Oriented concept, it's only enabled in certain languages. Check
 * out the Tutorial tab for learning materials and an instructional video!

 * Task
 * Write a Person class with an instance variable, age, and a constructor that takes an integer,
 * initialAge, as a parameter. The constructor must assign initialAge to age after confirming
 * the argument passed as initialAge is not negative; if a negative argument is passed as
 * initialAge, the constructor should set age to 0 and print "Age is not valid, setting age to 0.".
 * In addition, you must write the following instance methods:
 * 1. yearPasses() should increase the age instance variable by 1.
 * 2. amIOld() should perform the following conditional actions:
 *   - If age < 13, print "You are young.".
 *   - If age >= 13 and age < 18, print "You are a teenager.".
 *   - Otherwise, print "You are old.".
 * To help you learn by example and complete this challenge, much of the code is provided for you,
 * but you'll be writing everything in the future. The code that creates each instance of your
 * Person class is in the main method. Don't worry if you don't understand it all quite yet!

 * Note: Do not remove or alter the stub code in the editor.

 * Input Format
 * Input is handled for you by the stub code in the editor.
 * The first line contains an integer, T (the number of test cases), and the T subsequent
 * lines each contain an integer denoting the age of a Person instance.

 * Constraints
 * 1 <= T <= 4;
 * -5 <= age <= 30;

 * Output Format
 * Complete the method definitions provided in the editor so they meet the specifications outlined
 * above; the code to test your work is already in the editor. If your methods are implemented
 * correctly, each test case will print 2 or 3 lines (depending on whether or not a valid
 * initialAge was passed to the constructor).

 * Sample Input
 * >>> 4
 * >>> -1
 * >>> 10
 * >>> 16
 * >>> 18

 * Sample Output
 * <<< Age is not valid, setting age to 0.
 * <<< You are young.
 * <<< You are young.

 * <<< You are young.
 * <<< You are a teenager.

 * <<< You are a teenager.
 * <<< You are old.

 * <<< You are old.
 * <<< You are old.

 * The extra line at the end of the output is supposed to be there and is trimmed before being
 * compared against the test case's expected output. If you're failing this challenge,
 * check your logic and review your print statements for spelling errors.
*/

import "fmt"

type person struct {
	age int
}

func (p person) NewPerson(initialAge int) person {
	//Add some more code to run some checks on initialAge

	if initialAge < 0 {
		fmt.Println("Age is not valid, setting age to 0.")
		p.age = 0
	} else {
		p.age = initialAge
	}

	return p
}

func (p person) amIOld() {
	//Do some computation in here and print out the correct statement to the console

	if p.age < 13{
		fmt.Println("You are young.")
	} else if p.age < 18{
		fmt.Println("You are a teenager.")
	} else {
		fmt.Println("You are old.")
	}
}

func (p person) yearPasses() person {
	//Increment the age of the person in here

	p.age++
	return p
}

func main() {
	var T,age int

	fmt.Scan(&T)

	for i := 0; i < T; i++ {
		fmt.Scan(&age)
		p := person{age: age}
		p = p.NewPerson(age)
		p.amIOld()
		for j := 0; j < 3; j++ {
			p = p.yearPasses()
		}
		p.amIOld()
		fmt.Println()
	}
}