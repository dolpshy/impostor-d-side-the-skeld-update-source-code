import flixel.FlxG;

class Ratings {
    public static function GenerateLetterRank(accuracy:Float) // generate a letter ranking
    {
        var ranking:String = "N/A";
		if(FlxG.save.data.botplay)
			ranking = "BotPlay";

        if (PlayState.misses == 0 && PlayState.bads == 0 && PlayState.shits == 0 && PlayState.goods == 0) // Marvelous (SICK) Full Combo
            ranking = "(MFC)";
        else if (PlayState.misses == 0 && PlayState.bads == 0 && PlayState.shits == 0 && PlayState.goods >= 1) // Good Full Combo (Nothing but Goods & Sicks)
            ranking = "(GFC)";
        else if (PlayState.misses == 0) // Regular FC
            ranking = "(FC)";
        else if (PlayState.misses < 10) // Single Digit Combo Breaks
            ranking = "(SDCB)";
        else
            ranking = "(Clear)";

        var wifeConditions:Array<Bool> = [
            accuracy >= 99.9935, // AAAAA
            accuracy >= 99.980, // AAAA:
            accuracy >= 99.970, // AAAA.
            accuracy >= 99.955, // AAAA
            accuracy >= 99.90, // AAA:
            accuracy >= 99.80, // AAA.
            accuracy >= 99.70, // AAA
            accuracy >= 99, // AA:
            accuracy >= 96.50, // AA.
            accuracy >= 93, // AA
            accuracy >= 90, // A:
            accuracy >= 85, // A.
            accuracy >= 80, // A
            accuracy >= 70, // B
            accuracy >= 60, // C
            accuracy < 60 // D
        ];

        for(i in 0...wifeConditions.length)
        {
            var b = wifeConditions[i];
            if (b)
            {
                switch(i)
                {
                    case 0:
                        ranking += " AAAAA";
                    case 1:
                        ranking += " AAAA:";
                    case 2:
                        ranking += " AAAA.";
                    case 3:
                        ranking += " AAAA";
                    case 4:
                        ranking += " AAA:";
                    case 5:
                        ranking += " AAA.";
                    case 6:
                        ranking += " AAA";
                    case 7:
                        ranking += " AA:";
                    case 8:
                        ranking += " AA.";
                    case 9:
                        ranking += " AA";
                    case 10:
                        ranking += " A:";
                    case 11:
                        ranking += " A.";
                    case 12:
                        ranking += " A";
                    case 13:
                        ranking += " B";
                    case 14:
                        ranking += " C";
                    case 15:
                        ranking += " D";
                }
                break;
            }
        }

        if (accuracy == 0)
            ranking = "N/A";
		else if(FlxG.save.data.botplay)
			ranking = "BotPlay";

        return ranking;
    }

    public static function GenerateFCRankPsych() {
        var rankingFC:String = "?";

        if (PlayState.misses == 0 && PlayState.bads == 0 && PlayState.shits == 0 && PlayState.goods == 0)
            rankingFC = "SFC ";
        else if (PlayState.misses == 0 && PlayState.bads == 0 && PlayState.shits == 0 && PlayState.goods >= 1)
            rankingFC = "GFC ";
        else if (PlayState.misses == 0)
            rankingFC = "FC ";
        else if (PlayState.misses < 10)
            rankingFC = "SDCB ";
        else
            rankingFC = "Clear ";

        return rankingFC;
    }

    // for sussy dilemma 2
    public static function GenerateLetterRankPsych(accuracy:Float)
    {
        var ranking:String = " ?";

        var wifeConditions:Array<Bool> = [
            accuracy == 100,
            accuracy >= 90,
            accuracy >= 80,
            accuracy >= 70,
            accuracy > 68 && accuracy < 70,
            accuracy >= 60,
            accuracy >= 50,
            accuracy >= 40,
            accuracy >= 20,
            accuracy < 20
        ];

        for(i in 0...wifeConditions.length)
        {
            var b = wifeConditions[i];
            if (b)
            {
                switch(i)
                {
                    case 0:
                        ranking = " Perfect!!";
                    case 1:
                        ranking = " Sick!";
                    case 2:
                        ranking = " Great";
                    case 3:
                        ranking = " Good";
                    case 4:
                        ranking = " Nice";
                    case 5:
                        ranking = " Meh";
                    case 6:
                        ranking = " Bruh";
                    case 7:
                        ranking = " Bad";
                    case 8:
                        ranking = " Shit";
                    case 9:
                        ranking = " You Suck!";
                }
                break;
            }
        }

		if(FlxG.save.data.botplay)
			ranking = "BotPlay";

        return ranking;
    }
    
    public static function CalculateRating(noteDiff:Float, ?customSafeZone:Float):String // Generate a judgement through some timing shit
    {
        var customTimeScale = Conductor.timeScale;

        if (customSafeZone != null)
            customTimeScale = customSafeZone / 166;

	    if (FlxG.save.data.botplay)
	        return "good";
    
        if (noteDiff > 166 * customTimeScale)
            return "miss";
        if (noteDiff > 135 * customTimeScale)
            return "shit";
        else if (noteDiff > 90 * customTimeScale)
            return "bad";
        else if (noteDiff > 45 * customTimeScale)
            return "good";
        else if (noteDiff < -45 * customTimeScale)
            return "good";
        else if (noteDiff < -90 * customTimeScale)
            return "bad";
        else if (noteDiff < -135 * customTimeScale)
            return "shit";
        else if (noteDiff < -166 * customTimeScale)
            return "miss";
        return "sick";
    }

    public static function CalculateRanking(score:Int,scoreDef:Int,nps:Int,maxNPS:Int,accuracy:Float):String
    {
        return 
        (FlxG.save.data.npsDisplay ? "NPS: " + nps + " (Max " + maxNPS + ")" + (!FlxG.save.data.botplay ? " | " : "") : "") + (!FlxG.save.data.botplay ?	// NPS Toggle
        "Score:" + (Conductor.safeFrames != 10 ? score + " (" + scoreDef + ")" : "" + score) + 									// Score
        " | Combo Breaks:" + PlayState.misses + 																				// Misses/Combo Breaks
        " | Accuracy:" + (FlxG.save.data.botplay ? "N/A" : HelperFunctions.truncateFloat(accuracy, 2) + " %") +  				// Accuracy
        " | " + GenerateLetterRank(accuracy) : ""); 																			// Letter Rank
    }

    public static function CalculateRankingPsych(score:Int,scoreDef:Int,nps:Int,maxNPS:Int,accuracy:Float):String
    {
        if (score != 0) {
            return 
            (FlxG.save.data.npsDisplay ? "NPS: " + nps + " (Max " + maxNPS + ")" + (!FlxG.save.data.botplay ? " | " : "") : "") + (!FlxG.save.data.botplay ?
            "Score:" + (Conductor.safeFrames != 10 ? score + " (" + scoreDef + ")" : "" + score) + 
            " | Misses:" + PlayState.misses + 
            " | Rating: " + GenerateFCRankPsych() + (FlxG.save.data.botplay ? "0" : '(' + HelperFunctions.truncateFloat(accuracy, 2) + " %) -") 
            + GenerateLetterRankPsych(accuracy) : "");
        } else {
            return (!FlxG.save.data.botplay ? "Score: 0 | Misses: 0 | Rating: ?" : ' ');
        }																		
    }
}
