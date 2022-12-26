//26. Файловые потоки.Основные операции с файловыми потоками : открытие,
//закрытие, ввод - вывод.


ifstream файловые потоки ввода

ofstream файловые потоки вывода

fstream двунаправленные файловые потоки


ofstream myfile;
myfile.open("example.txt");
myfile << "Writing this to a file.\n";
myfile.close();


string line;
ifstream myfile("example.txt");
if (myfile.is_open())
{
    while (getline(myfile, line))
    {
        cout << line << '\n';
    }
    myfile.close();
}