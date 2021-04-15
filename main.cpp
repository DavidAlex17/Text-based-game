#include <iostream>
#include <string>
using namespace std;


void WWest() //Function for west. basically Game scene two.
{
    cout << "After a few days ashore...\n\n"
    << "ALAS! you finally see land up ahead.\n\n"
    << "you depart your ship to the coast line, and the same with your other viking leaders.\n"
    << "you look into the sand and prepare yourself just to be sure today might be the day\n"
    << "you enter Valhalla. You get up and decide where you should set camp...\n\n";

    int Camp; // variable for the camp switch statement
    int str = 10; // variable for your strength

    string C; // string variable for press c to continue.

    do{ // Do while loop for the two options listed.
        cout << "Where would you like to to take your to decision? (Go in order) \n\n"
             << "--------------------------------------------------------------------------------------------\n"
             << "1 - set camp next to your ships\n"
             << "2 - set camp right next to the land\n"
             << "--------------------------------------------------------------------------------------------\n"
             << "Please enter either (1),(2), or (3)\n\n";
        cin >> Camp;
        cout << "\n";

        switch (Camp)  //switch statement for camp.
        {

            case 1:
                cout << "you set camp next to your ships.\n\n";
                break; // Terminates the loop early

            case 2:
                cout << "you set camp next to the grassy area.\n\n";
                break; // Terminates the loop early

        }
    }while(Camp != 1 & Camp !=2); // Loop will stop once it does not equal to one nor two.

    str -= 9; // Subtracted by 9

    cout << "You look into the sky...\n\n"
    << "you feel as if something is skeptical around here.\n"
    << "your men and leaders gather up for the next morning to prepare for battle...\n\n"
    << "Next morning...\n\n"
    << "you and your whole united army of vikings march down to the castle of king Nicolas\n"
    << "To get through his kingdom you must enter the forest...\n\n"
    << "Your army is in the open and exposed... But you think nothing of it... you continue.\n"
    << "you feel alot more sketchy about everything. you stop...\n\n"
    << "You look around. You hear noises...\n\n"
    << "You hear the charge of infantry on the north side of the forest! you tell your viking\n"
    << "to form a flank for the north!\n\n"
    << "All of a sudden a group of infantry come out throught the west! you quickly shield\n"
    << "wall and stop their west flank from advancing! things just got worse...\n\n"
    << "Both the south and the east come out not infantry but amored horses and charges against\n"
    << "against your two exposed side...\n\n"
    << "the horsemen come down charging breaking your line and crumbling the vikings...\n\n"
    << "your strength as decreased in numbers badly...\n\n";
    cout << "Your stats are now " << str << "\n\n";

    cout << "You see the chaos in that is happening around. you cry to Odin for help...\n\n"
    << "you took an arrow to the knee, you fail cowardly into a trap. one of your leaders\n"
    << "yells 'RETREAT' as your men get slandered on the field...\n\n"
    << "At this point you have no hope but lay there to die...\n\n"
    << "One of your jarl leaders damian comes in to save you from death!\n"
    << "Jarl Damian: ITS NOT OVER YET! *Slays two enemies to save me* com'on get up now!\n"
    << "As he picks me up jarl damian single handily takes out enemies as we leave.\n\n"
    << "As i look up once more i see the enemy king Nicholas smirking as he wins this\n"
    << "battle.\n\n"
    << "You promise your sacred ring and vowel to slay King Nicholas for his actions...\n\n"
    << "\t\t\t\t\t End of scene\n\n"
    << "\t\t\t*__________________________*\n"
    << "\t\t\t        End of Level 1       \n"
    << "\t\t\t*__________________________*\n\n\n\n"
    << "\nPress C to continue... ";
    cin >> C;
    cout << "\n\n";

}


void GameScene1() // Function to starting the game
{

    int str = 10, luck = 10, spch = 5, agil = 10, hp = 25;    // Stats variables that will
                                                              // occur around the story-line.
    string ATK1, ATK2; // The string is for the
                             // attack scenes through
                             // out this function.

    string order;            // This string applies for
                             // specific command dialogue's
                             // throughout the function.

    string C;                // The string variable C will
                             // be used throughout the
                             // storyline for the
                             // purpose of 'Press...
                             // to continue.'

    cout << "\t\t\t*__________________________*\n"
         << "\t\t\t      Level 1: West        \n"
         << "\t\t\t*__________________________*\n\n\n"
         << "after gathering your viking men, you set sail to the west coast of Northumbria for\n"
         << "a glorious raid among the close shore villages.\n\n"
         << "As you arrive, you see two men scouting your position and retreat with on.\n"
         << "horses\n\n"
         << "You tell your men to gear up and be ready for any possible attack along the way.\n\n"
         << "One of your scouts inform you there's a road near that leads to another area.\n"
         << "\nDo you want to order your men to head to the road? (Enter yes or no):  ";
    cin >> order;
    cout << "\n";

    if (order == "yes")                                            // The if statement is so that
    {                                                              // the user has the option of
        cout << "You order your men to head to the road.\n";       // either choice.
    } else {
        cout << "Your men are furious, so you change your mind instead and head\n"
             << "to the road.\n\n";
    }

    cout << "As you lead your man towards the path road, you see a few open places\n"
         << "Your men will follow you as you choose where to go first.\n";

    int Choice1;       // The local variable will be used for the do-
                       // while loop that's coming up.

    string coin;        //This variable will occur for case 1 in the if statement

    do {       // The do-while loop will allow the four choices
               // to return again for the user to choose again.

        cout << "Where would you like to to take your to search? (A wise leader would search every area)\n\n"
             << "--------------------------------------------------------------------------------------------\n"
             << "1 - Nearby shack\n"
             << "2 - Abandoned village\n"
             << "3 - Monk monastery\n"
             << "4 - You had enough, now you retreat\n"
             << "--------------------------------------------------------------------------------------------\n"
             << "Please enter either (1),(2),(3) or (4)\n\n";

        cin >> Choice1;
        cout << "\n";

        switch (Choice1) // Here the switch statement is for the four choices.
        {
            case 1:
                cout << "You enter through the sketchy doors, revealing fresh baked\n"
                     << "food's. After snatching a few eggs, you notice a golden\n"
                     << "coin on the floor by the doorway.\n\n"
                     << "\nWould you like to pick the coin up? Enter (yes) or (no): ";
                cin >> coin;
                cout << "\n";

                if (coin == "yes") // The if statement allows the option for the user
                {                  // have two choices

                    luck += 2; // Add two points to the users stats.

                    cout << "You pick up the coin, it has the words 'Hail King Nicolas' engraved on\n"
                         << "the side of it.\n\n"
                         << "Your luck skill has increased and is now " << luck << "\n\n";
                } else {
                    cout << "You choose to ignore the coin and exit the shack\n\n";
                }
                break; // Terminates the loop early

            case 2:
                cout << "You look around the village, you notice nothing is valuable. Your crew says they \n"
                     << "must've retreated to the fortress nearby.\n\n"
                     << "You then leave the village\n\n";
                break; // Terminates the loop early

            case 3:

                spch -= 3; // These two variables subtract the user stats.
                str -= 4;

                cout << "You see a church like place which looks like a monastery, you gather your\n"
                     << "your men to storm in. Your men line up in front of the gates that are protecting\n"
                     << "the church itself. It seems suspicious to you because you dont hear a sound.\n"
                     << "your men are waiting for you to signal the charge against the door, but you're\n"
                     << "still unsure if going through thr front gates is good idea.\n"
                     << "You start over thinking...\n"
                     << "Now you're wondering if the front door is a trap...\n"
                     << "its been 10 min, and your men are still waiting...\n"
                     << "your men lose patience over your weak leadership skills and now they think you\n"
                     << "a loser.\n\n"
                     << "stats will decrease \n\n"
                     << "Your stats are now: \n\n"
                     << spch << " speech\n"
                     << str << " strength\n\n"
                     << "you're ashamed, so now you just let your men charge through the gate...\n\n"
                     << "*Gates are struck down*\n\n"
                     << "Your men see no sign of people.\n"
                     << "they must've left to hiding somewhere else. You break down the church doors and\n"
                     << "a priest jumps out of of hiding and scared. You threaten the priest by telling him\n"
                     << "you'll make him listen to 'BTS' the korean boy band everyone hates unless he\n"
                     << "reveals where the gold is, and he responds:\n\n"
                     << "Monk: NO NO NOTHING BUT THAT PLEASE, OKAY OKAY, ILL SHOW YOU WHERE THE GOLD IS\n\n"
                     << "The priest opens a wooded panel under the floor and reveals a pot of gold.\n"
                     << "you and your men successfully got what your looking for and head back to the\n"
                     << "the road with your treasure.\n"
                     << "You also take the priest with you\n";
                break;

            case 4:
                cout << "You and your men make haste towards your boats, heading back to your\n" // Case 4 stops the
                     << "land with your new found slave priest.\n\n";                            // loop here.
                break; // Terminates the loop early

            default:
                cout << "Invalid Character entered\n";
                break; // Terminates the loop early

        }
    } while (Choice1 != 4); //Do-while loop does not equal to four.

    // do-while ends here^

    int AngloHP = 5; // The variable here occurs int the attack scenes
                     // to add a dramatic detail effect to the
                     // action in the dialogue.

    cout << "As you begin to leave the monastery, you hear the silverware clicking of\n"
         << "enemies marching in the distance. All of a sudden one of your crewmen\n"
         << "shouts 'Look! Behind us!' The puny heathens head toward the you and\n"
         << "your men. your men are waiting for your order? Run or Attack? (Please\n"
         << "enter 'run' or 'attack')\n\n";
    cout << "Enemy HP: " << AngloHP << "     Your HP: " << hp << "\n\n"; // ATK1 starts here.
    cin >> ATK1;

    if (ATK1 == "run") // if statement for the command above.
    {
        if (agil > 12) { // if agil is higher than 12 it'll go to else.

            cout << "You escape\n";
        } else {

            cout << "No running from here wimpy,\n\n";
        }
    } else {

        cout << "\t\t\t*__________________________*\n"      // Fight scene for ATK1.
             << "\t\t\t      Enemy attack     \n"
             << "\t\t\t*__________________________*\n\n\n"
             << "*Wide shot view of the enemy*\n\n"
             << "you look in the enemy and analyze their defence.\n"
             << "\nYou attack the enemy flank & do 3 damage\n\n";
        AngloHP -= 3;

        cout << "Enemy HP: " << AngloHP << "\n\n";
        cout << "The enemy flank now attacks you and does 5 damage\n\n";
        hp -= 5; // Health subtracted to five

        cout << "Your HP: " << hp << "\n\n";
        cout << "You attack the enemy flank & do 3 damage\n\n";
        AngloHP -= 3; // Enemies health subtracted to 3

        cout << "Enemy HP: " << AngloHP << "\n\n"
             << "After a hard fight, you defeat your enemies. This \n"
             << "attack caused some damage and you now have " << hp << " HP.\n\n";
    }

    cout << "your men now rage in victory and praise the god Odin for keeping them alive,\n"
         << "and hardy. You now charge your men to get back to the ships before another\n"
         << "attack occurs. Alas! your men have gathered to their ships and ready to get back\n"
         << "to their motherland! As the ships sail away from shore, you look off your priest\n"
         << "slave who prays for safety to his god. You reach into your pocket and throw to your\n"
         << "priest an Mp3 player that features only BTS music, the korean band. As the priest\n"
         << "cries in despair. you merely laugh and jokingly say,\n"
         << "'What ha ha they're not that bad! com'on its their latest album AHA'\n\n"
         << "\t\t\t\t\t End of scene\n\n"
         << "\t\t\t*__________________________*\n"
         << "\t\t\t        End of Level 1       \n"
         << "\t\t\t*__________________________*\n\n\n\n"
         << "\nPress C to continue... ";
    cin >> C;
    cout << "\n\n";

    // Level one ends here

    // Level two starts here

    cout << "\t\t\t*__________________________*\n"
         << "\t\t\t     Level 2: Resentment    \n"
         << "\t\t\t*__________________________*\n\n\n"
         << "As you walk back on the ports of your viking doc, you go to your wife and kids.\n"
         << "As you hug your family. You show them your new slave priest, you let the priest\n"
         << "know to take care of the kids to let him know you trust him. He was surprised...\n\n"
         << "while you attend the great hall with your warriors and drink mead all night and\n"
         << "feast till you knock out.\n"
         << "next morning...\n\n"
         << "you travel to the kingdom of Wingsteg with a group warriors and your brother Ralo.\n"
         << "you to meet inside the tent of your neighbor jarl Damian of Wingsteg to discuss\n"
         << "plans to raid the west but you need more ships. Jarl Damian proposes a deal that \n"
         << "if you remove the jarl James off his land, hell join you in raiding the west.\n"
         << "You think deliberately about your choices, type (yes) to agree (no) to disagree.\n\n";

    cin >> order;
    cout << "\n";

    if (order == "yes")
    {
        cout << "You agree to Jarl Damian\n";
    } else {
        cout << "You tell jarl damian in one condition...\n\n"
        << "you ask to talk it out with jarl James before using action on him.\n"
        << "Jarl grunts, but agree's either way.\n\n";
    }

    cout << "\nPress C to continue... ";
    cin >> C;
    cout << "\n\n";
    cout << "--------------------------------------------------------------------------------------------\n"
         << "You head to the forest of wingsteg where you set camp with your warriors.\n\n"
         << "Your scouts encounter a beautiful woman near the river, you tell them to\n"
         << "invite her over.\n\n"
         << "She arrives...\n"
         << "you have conversions with her all day as the sun falls down...\n\n"
         << "The next day...\n\n"
         << "you enter the the hall of jarl james and discuss what jarl Damian has\n"
         << "proposed...\n\n";
    cout << "\nPress C to continue... ";
    cin >> C;
    cout << "\n\n";

    int Choice2;            // Choice two is for the do-while loop section.
    int JamesTeamHP = 20;   // The enemies health for the fighting section.

    do{ // Do-while loop

        cout << "Where would you like to to take your to decision? (Go in order) \n\n"
             << "--------------------------------------------------------------------------------------------\n"
             << "1 - Fight jarl James\n"
             << "2 - Propose james a plan now\n"
             << "--------------------------------------------------------------------------------------------\n"
             << "Please enter either (1),(2), or (3)\n\n";

        cin >> Choice2;
        cout << "\n";

        switch (Choice2) // Switch statement
        {
            case 1:
                cout << "Jarl james: i will not give up this land. This is my land and it should be Damian\n"
                     << "who should leave my land at once!\n"
                     << "Me: it did'int have to be like this but ok...\n\n"
                     << "So what stance would you like to take? offensive of defensive?\n"
                     << "-----------------------------------------------------------------------------\n";
                cout << "Jarl James vikings: " << JamesTeamHP << "     Your vikings HP: " << hp << "\n\n";
                cin >> ATK2;

                if (ATK2 == "offensive"){  // if statement for the
                                           // offensive or defensive
                                           // option.
                    // Fight scene
                    // for ATK2.

                    cout << "\t\t\t*__________________________*\n"                   // Offense option first.
                         << "\t\t\t      Jump attack!     \n"
                         << "\t\t\t*__________________________*\n\n\n"
                         << "\nYou attack the enemy vikings & do 5 damage\n\n";
                    JamesTeamHP -= 5; // Enemies Health subtracts by 5

                    cout << "Jarl James Vikings HP: " << JamesTeamHP << "\n\n";
                    cout << "The enemy vikings now attack you and does 10 damage\n\n";
                    hp -= 10; // Your health subtracts by 5
                    cout << "Your HP: " << hp << "\n\n";
                    cout << "You attack the enemy vikings & do 5 damage\n\n";
                    JamesTeamHP -= 5; // Enemies Health subtracts by 5

                    cout << "Jarl James Vikings HP: " << JamesTeamHP << "\n\n"
                    << "after your encounter, you manage to win, with jarl James retreating.\n"
                    << "You gather up your men and head back to jarl James to announce the\n"
                    << "agreement has been settled or else... And now you plan to settle your \n"
                    << "own ambitious plans to raid to the west\n\n";
                    cout << "\nPress C to continue... ";
                    cin >> C;
                    cout << "\n\n";
                }
                else {                                                      // Defence option second.

                    cout << "\t\t\t*__________________________*\n"
                         << "\t\t\t       Shield Wall!      \n"
                         << "\t\t\t*__________________________*\n\n\n"
                         << "\nYou attack the enemy vikings & do 4 damage\n\n";
                    JamesTeamHP -= 4;

                    cout << "Jarl James Vikings HP: " << JamesTeamHP << "\n\n";
                    cout << "The enemy vikings now attack you and does 5 damage\n\n";
                    hp -= 5;
                    cout << "Your HP: " << hp << "\n\n";
                    cout << "You attack the enemy vikings & do 4 damage\n\n";
                    JamesTeamHP -= 4;

                    cout << "Jarl James Vikings HP: " << JamesTeamHP << "\n\n"
                    << "after your encounter, you manage to win, with jarl James retreating.\n"
                    << "You gather up your men and head back to jarl Damian to announce the\n"
                    << "agreement has been settled. And now you plan to settle your own\n"
                    << "ambitious plans to raid to the west\n\n";
                    cout << "\nPress C to continue... ";
                    cin >> C;
                    cout << "\n\n";
                }
                break; // Terminates the loop early

            case 2:

                spch += 2; // variable for the coin

                cout << "You talk to jarl James about your journey to the west. You plan on\n"
                << "on hitting big next time you land, This time to King nicolas kingdom.\n"
                << "Jarl James doesnt seem convinced with these lands to the west...\n\n"
                << "Quickly you remember the gold coin you picked up the last time you were\n"
                << "in the west...\n\n"
                << "\nWould you like to hand over the gold coin to jarl James? (yes) or (no): ";
                cin >> coin;

                cout << "\n\n"
                << "Jarl James seems impressed...\n\n"
                << "Your speech skill has increased and is now " << spch << "\n\n";

                cout << "After jarl James agrees, you irrupt...\n"
                << "Me: Only in one condition...\n"
                << "jarl James: what is it?\n"
                << "Me: Only if you give up the lands to jarl Damian.\n"
                << "Jarl James gruntly thinks but finally accepts...\n\n"
                << "\t\t\t\t\t End of scene\n\n"
                << "\t\t\t*__________________________*\n"
                << "\t\t\t        End of Level 2      \n"
                << "\t\t\t*__________________________*\n\n\n\n"
                << "\nPress C to continue... ";
                cin >> C;
                cout << "\n\n";
                break; // Terminates the loop early

            default:
                cout << "Invalid Character entered\n";
                break; // Terminates the loop early
        }

    }while (Choice2 != 2);   // Do-while loop will stop looping
                             // at three.

    cout << "\t\t\t*__________________________*\n"
         << "\t\t\t      Level 3: Invasion     \n"
         << "\t\t\t*__________________________*\n\n\n"
         << "As you're back home, you're in the highest power as ever, and more than ready\n"
         << "to go raid in the west once spring time is in. All of a sudden...\n\n"
         << "the woman you met at the forest, comes into your hall in front of your wife,\n"
         << "And open says shes with child... ands its your son...\n\n"
         << "Your wife looks like she wants to kill you...\n\n"
         << "*INTENSE LA ROSA DE GUADALUPE MUSIC COMES ON*\n\n"
         << "After an intense fight with your wife, she leaves and you never see her again...\n"
         << "you soon remarry, and become a drinker...\n\n"
         << "Spring has come...\n\n"
         << "both leaders jarl Damian and jarl James head to your kingdom to prepare with\n"
         << "their warriors and their ships. You meet at the great hall for the final preparations\n"
         << "for the attack. After that, you and your vikings set the ships ready for sail. You\n"
         << "now tell your new wife goodbye.\n\n"
         << "As you walk out the doc onto your ships, jarl Damian and and James walk beside you and\n"
         << "hop on their ships\n\n"
         << "Head West? Yes or no.\n\n";

    if (order == "yes") // if statement, both lead to the next function regardless.
    {
        cout << "You head west\n";

        WWest();
    } else {
        cout << "Your forgot your Mps player... now you head west\n";

        WWest();
    }



}

void Manual() // Function for the games' manual
{
    string C;

    cout << "\n|---------------------------------------------|"
         << "\n|---------------------------------------------|"
         << "\n|--------------------MANUAL-------------------|"
         << "\n|---------------------------------------------|"
         << "\n|---------------------------------------------|"
         << "\n"
         << "\n"
         << "\n"
         << "\t\t\t\t\t\tt\t\t\t\tCONTENTS\n\n\n"
         << "CONTROLS\n\n"
         << "Directions;\n\n"
         << "N = North\n"
         << "E = East\n"
         << "S = South\n"
         << "W = West\n\n\n\n"
         << "\nPress C to continue ";
    cin >> C;
    cout << "\n\n";
}

void About() // Function About the game
{
    string C; // String variable for the 'press C to continue.'

    cout << "\n\n\n"
         << "\t\t\t\t\t\t\t\t The Viking\n\n"
         << "\t'Power is always dangerous. It attracts the worst and corrupts the best.'\n\n"
         << "\t\t\t\t\t\t\t\tby David Alex\n\n"
         << "\t\t\t\t\tThe fate of a king depends on his choices.\n\n"
         << "\t\t\t\t\t\t  The Viking is a C++ project\n\n"
         << "\t\t\t\t\t\t\t Created, May 2020\n\n"
         << "\t\t\t\t\t 3201 W Pecan Blvd, McAllen, TX 78501\n\n\n"
         << "\nPress C to continue ";
    cin >> C;
    cout << "\n\n";

}

void menu() // Function Menu
{
    
    char Option = 1; // I guess it refers to choice as
                     // one as a whole ??? In that case,
                     // why not use an 'int' for it.
                     // Whatever, it works, so that's that.

    string C; // This variable applies to case four.

    while (Option != '4')                               // While loop will repeat the switch
    {                                                   // statement until the user reaches
        cout << "\t\tThe Viking\n" // Game title        // case four.
             << "\n|--------------------|"
             << "\n|     Main Menu      |"
             << "\n|--------------------|"
             << "\n| 1 - Start New Game |" // Game menu
             << "\n| 2 - Manual         |"
             << "\n| 3 - About          |"
             << "\n| 4 - Quit           |"
             << "\n|--------------------|"
             << "\n"
             << "\nEnter choice: ";
        cin >> Option;

        switch(Option) // Switch statement choices for the menu
        {
            case '1':
                GameScene1();                   // The while loop allows for (1), (2),
                break;                          // (3), and (4) choices allows the user
                                                // to go back to them without running
            case '2':                           // the code again and again. I think...
                Manual();
                break;

            case '3':
                About();
                break; // Terminates the loop early

            case '4':
                cout << "Thank you for playing!\n";
                break; // Terminates the loop early

            default:
                cout << "Invalid Character entered\n\n"
                     << "Press C to continue\n";
                cin >> C;
                cout << "\n\n";
        }
    }
}

int main() // Function Main
{
    string f, l; // string variables for the name.
                 // For someone reason it doesnt work when i use 'name'
                 // for the user to be able to put their first and last
                 // name.

    cout << "\nPlease enter your name: ";
    cin >> f;
    cin >> l;

    cout << "That's a funny name " << f << " " << l << ". HAHA AHAHA, phewww\n\n" // starting intro to the story
         << "anyways...\n\n"
         << "Your story begins in 8th century Scandinavia, you, a warrior and a\n"
         << "farmer who has been working in secret on a project that will turn\n"
         << "the Viking world on its head. You set the journey to the baltic\n"
         << "lands, which managed to plan out with your blood brother Ralo and\n"
         << "your viking crew, who are willing to risk their lives to travel\n"
         << "To travel with your glory, but only for their benefit of riches\n"
         << "as well.\n\n";

    menu(); // After the intro, it will
            // then fall unto the function menu.

    return 0;
}
