# Die class. This is where the dice is rolled
class Die 
	def initialize(sides) # initialize function
		@sides = sides
	end
	
	def roll(number = 1) # Dice rolling function
		roll_array = []
		
		number.times do # Roll the dice a certain number of times
			roll_value = rand(@sides) + 1 
			roll_array << roll_value
		end
		
		total = 0 
		
		roll_array.each do |roll| # Loop for rolling the dice
			new_total = total + roll
			total = new_total
		end
		
		total 
	end 
end

10.times do #rolls two 6 sided die and adds their total value
	puts Die.new(6).roll + Die.new(6).roll
	sleep 1 #sleeps for two seconds in between rolls
end

# By the way, im only putting this here because I have it for an assignment.
