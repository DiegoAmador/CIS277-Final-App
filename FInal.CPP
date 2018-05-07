//Final App: Hashtag Generator
//Program generates 30 random hashtags that relate to a specific category of picture.
//Name: Diego Amador  
//Date: 3/17/18
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


class hashtags
{
  private:
  //Declaring strings of hashtags that will be randomized later
  string Fashion[60] = { "#fashion " , "#streetwear " , "#wdywt " ,
     "#bestofstreetwear " , "#fashionmodel " , "#mensfashion " , "#topmodel " , "#fashionmodel " 
    , "#ootd " , "#instastyle " , "#streetstyle " , "#fashionblog " , "#fashionblogger " , "#ootdshare "
    , "#malefashion " , "#redditstreetwear " , "#insporation " , "#lookoftheday " , "#hautecouture " 
    , "#outfitpost " , "#artisticphotography " , "#stylegram ", "#simplefits " , "#streetbeast " 
    , "#minimalmovement " , "#highsnobiety " , "#streetdreamsmag " , "#featurepalette " , "#aesthetic "
    , "#snobshots " , "#darkfashion " , "#dailylook " , "#hype " , "#blvck " , "#supreme " , "#offwhite "
    , "#modernnotoriety " , "#minimalism " , "#outfitkillers " , "#hypebae " , "#backtominimal " , "#streetsnap "
    , "#instagood " , "#fashionista " , "#urbanwear " , "#styleblogger " , "#ilovefashion " , "#highfashion " , "#fashionaddict "
    , "#fashionstyle " , "#instafashion " , "#fashiongram " , "#fashiondaily " , "#fashionwear " , "#photooftheday "
    , "#fashionphotography " , "#photoshoot " , "#streetphotography " , "#fashionable " , "#fashionpost " };
    
  string Landscape[50] = { "#pocket_world " , "#ig_landscape " , "#dream_spots " , "#visual_heaven " , "#landscapephoto"
      , "#landscape_lover " , "#natgeoadventure " , "#earthexperience " , "#mthrworld" , "#majestic_earth " , "#igworldglobal "
      , "#ilovenature " , "#ig_divineshots " , "#EarthOfficial " , "#earth_shotz " , "#marvelshots " , "#theworldshotz "
      , "#discoverglobe " , "#landscapelover " , "#landscapehunter " , "#igbest_shotz " , "#natgeoyourshot  " , "#natgeotravelpic "
      , "#epic_captures " , "#awesomeglobe " , "#splendid_earth " , "#earth_portraits " , "#natureperfection " , "#beautyofnature "
      , "#places_wow " , "#nakedplanet " , "#theglobewanderer " , "#roamtheplanet " , "#fantastic_earth " , "#awesome_earthpix "
      , "#earthfocus " , "#colors_of_day " , "#visualambassadors " , "#nature_wizards " , "#ig_countryside  " , "#fiftyshades_of_nature "
      , "#stunning_shots " , "#igersmood " , "#adventurethatislife " , " #nature_brilliance " , "#keepitwild " , "#nature_sultans "
      , "#master_shots " , "#ourplanetdaily " , "#stayandwander " };  
  
  string Portrait[75] = { "#portraitphotographer " , "#portraitphotography " , "#portrait " , "#photooftheday " , "#photographer " 
      , "#posing " , "#instagood " , "#style " , "#oursignaturepose " , "#portrait_perfection " , "#photoshoot " , "#photography " 
      , "#portraitmood " , "#portraits " , "#picoftheday " , "#portraitpage " , "#instadaily " , "#lifestyle " , "#model " , "#life "
      , "#smile " , "#friends " , "#beautiful " , "#headshots " , "#pursuitofportraits " , "#portraitperfection " , "#posepatch "
      , "#portrait  " , "#photoshoot " , "#makeportraits " , "#portraiture " , "#justgoshoot " , "#liveauthentic " , "#modeling "
      , "#photo " , "#lifeofadventure " , "#life_portraits " , "#letsgosomewhere " , "#portraits_ig " , "#pursuitofportraits " , "#portraitoftheday " 
      , "#postthepeople " , "#lifestyle " , "#photographyislifee  " , "#beauty " , "#instafashion " , "#postmoreportraits " , "#portraitsmag "
      , "#quietthechaos ", "#people " , "#discoverportrait " , "#bestoftheday " , "#stylish " , "#memories " , "#instalike " , "#people "
      , "#photoinspiration " , "#portrait_ig " , "#instafamous " , "#pose " , "#closeup " , "#seniorpictures " , "#senioryear " , "#modernteenstyle "
      , "#engaged " , "#shesaidyes  ", "#bride " , "#weddingday " , "#weddinginspiration " , "#momlife " , "#familytime " , "#babylove " , "#mommytobe " 
      , "#instababy " "#babystyle " };
      
      
  public:
    
    int fashion() //Fashion specific generator
    {
  srand ( time(0) ); //initializing time for random generator
  
  for (int i; i < 30; i++) //for loop so that only 30 hashtags (instagram limit) are randomly chosen from pool
  {
    int Randindex = rand() % 60; //randomizes the strings from pool of hashtags
    cout << Fashion[Randindex];
  }
  return 0;
    }

    int landscape() //Landscape specific generator
    {
      
  
  srand ( time(0) );
  
  for (int i; i < 30; i++)
  {
    int Randindex = rand() % 50;
    cout << Landscape[Randindex];
  }
  return 0;
    }
  
    int portrait() //Portrait specific generator
    {
      
  
  srand ( time(0) );
  
  for (int i; i < 30; i++)
  {
    int Randindex = rand() % 75;
    cout << Portrait[Randindex];
  }
  return 0;
    }
};

  int main()
  {
    hashtags m;
    int x;

    cout << "\tHashtag Choices\t\t" "\n1. Fashion \n2. Landscape \n3. Portraits " "\nChoose an option" << endl; //menu so user knows options
    cin >> x;
  
    switch (x) //switch loop so user can input desired hashtag type and 30 hashtags are printed
    {
      case 1:
      m.fashion();
      break;
      
      case 2:
      m.landscape();
      break;
      
      case 3:
      m.portrait();
      break;
      
      default:
      cout << "Invalid choice"; //input validation so user can only pick from menu choices.
    }
    
    return 0;
  }
