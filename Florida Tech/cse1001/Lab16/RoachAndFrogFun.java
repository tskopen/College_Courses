import java.util.Scanner;

class RoachAndFrogFun {
    public static void main(String[] args) {
        Scanner keyboard = new Scanner(System.in);

        // Growth rates and individual volumes
        double GROWTH_RATE = 0.95;       // Roach growth rate
        double ONE_BUG_VOLUME = 0.002;   // Volume of one roach (cubic feet)
        double FROG_GROWTH_RATE;         // Will be read from input
        double ONE_FROG_VOLUME;          // Will be read from input

        double houseVolume, population, totalBugVolume;
        double populationFrogs, totalFrogsVolume;
        double bugsEatenByAFrogPerWeek;

        // Input
        System.out.print("Enter total house volume (cubic feet): ");
        houseVolume = keyboard.nextDouble();

        System.out.print("Enter initial number of roaches: ");
        population = keyboard.nextDouble();

        System.out.print("Enter initial number of frogs: ");
        populationFrogs = keyboard.nextDouble();

        System.out.print("Enter volume of an individual frog (cubic feet): ");
        ONE_FROG_VOLUME = keyboard.nextDouble();

        System.out.print("Enter reproductive rate of the frogs: ");
        FROG_GROWTH_RATE = keyboard.nextDouble();

        System.out.print("Enter number of roaches per week that an individual frog can consume: ");
        bugsEatenByAFrogPerWeek = keyboard.nextDouble();

        System.out.println();
        System.out.println("House volume: " + houseVolume + " cubic feet");
        System.out.println("Initial roach population: " + (int) population);
        System.out.println("Initial frog population: " + (int) populationFrogs);
        System.out.println();

        int countWeeks = 0;
        totalBugVolume = population * ONE_BUG_VOLUME;
        totalFrogsVolume = populationFrogs * ONE_FROG_VOLUME;

        // Loop until the combined volume fills the house or roaches are extinct
        while (totalBugVolume + totalFrogsVolume < houseVolume && population > 0) {
            countWeeks++;

            // Roach natural growth
            population = population + (GROWTH_RATE * population);

            // Frog natural growth
            populationFrogs = populationFrogs + (FROG_GROWTH_RATE * populationFrogs);

            // Frogs eat roaches
            double roachesEaten = populationFrogs * bugsEatenByAFrogPerWeek;
            if (roachesEaten > population) {
                population = 0; // Can't have negative roaches
            } else {
                population = population - roachesEaten;
            }

            // Update volumes
            totalBugVolume = population * ONE_BUG_VOLUME;
            totalFrogsVolume = populationFrogs * ONE_FROG_VOLUME;
            double totalVolume = totalBugVolume + totalFrogsVolume;

            // Output per week
            System.out.println("Week " + countWeeks + ":");
            System.out.println("  Roaches: " + (int) population + " | Total roach volume: " + totalBugVolume);
            System.out.println("  Frogs: " + (int) populationFrogs + " | Total frog volume: " + totalFrogsVolume);
            System.out.println("  Total volume (roaches + frogs): " + totalVolume);
            System.out.println();
        }

        // Final information
        System.out.println("Simulation ended after " + countWeeks + " weeks.");
        System.out.println("Final roach population: " + (int) population);
        System.out.println("Final frog population: " + (int) populationFrogs);
        System.out.println("Final total roach volume: " + totalBugVolume);
        System.out.println("Final total frog volume: " + totalFrogsVolume);
        System.out.println("Final combined volume: " + (totalBugVolume + totalFrogsVolume));
    }
}
