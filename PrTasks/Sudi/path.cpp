//указать имя файла субтитров
string subtitles_file_name = "The Magicians.US.S03E12 - The Fillorian Candidate.1080p.WEB.x264-TBS - HI.srt";

string s_f_m = subtitles_file_name.substr(0, subtitles_file_name.size() - 4);

string f1_path_editS = "Subtitles\\" + s_f_m + ".srt";
string f1_path1 = "Subtitles\\" + s_f_m + "(edit).srt";
string f1_path2 = "TempFiles\\" + s_f_m + ".srt";
string f1_path3 = "ForStudying\\" + s_f_m + ".srt";
string f1_path4 = "ForStudying\\" + s_f_m + "WordsForStudying.txt";

string f2_path1 = "dic.txt";