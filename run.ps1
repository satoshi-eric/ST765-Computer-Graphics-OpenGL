param($name, $option="")

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
    $expression = "Move-Item ./main.o ./" + $name + "/bin/" 
    Invoke-Expression $expression
}
elseif ($option -eq "run")
{
    $command = "./" + $name + "/bin/main.exe"
    Invoke-Expression $command
}
elseif ($option -eq "remove")
{
    $command = "Remove-Item ./" + $name + "/bin/*" 
    Invoke-Expression $command
}
else
{
    Write-Output $manual
}


# (Get-ChildItem).Name -split "`n"
# $var = [int](Get-ChildItem).Name.length
# (Get-Location).path