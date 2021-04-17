<#
Use:
./run.ps1 -Program-Name [name] -option [option]
    name: Name of the program. Needs to be the name of the directory program.
    option: Can be the folowing arguments "build",  "run" or "remove".
#>

param($name, $option="run")

$manual = 
@"
Use:
./run.ps1 -Program-Name [name] -option [option]
    [name]: Name of the program. Needs to be the name of the directory program.
    [option]: Can be the folowing arguments 'build',  'run' or 'remove'.
"@

if ($option -eq "build")
{
    $command = "gcc ./" + $name + "/src/main.c -c "
    Invoke-Expression $command
    $command = "gcc main.o -o ./" + $name + "/bin/main.exe -lfreeglut -lopengl32 -lglu32"
    Invoke-Expression $command
    mv main.o ./bin/
}
elseif ($option -eq "run")
{
    echo "./" + $name + "/bin/main.exe"
    Invoke-Expression "./" + $name + "/bin/main.exe"
}
elseif ($option -eq "remove")
{
    rm "./" + $name "/bin/*"
}
else
{
    echo $manual
}


# (Get-ChildItem).Name -split "`n"
# $var = [int](Get-ChildItem).Name.length
# (Get-Location).path