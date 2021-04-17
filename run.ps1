param($name="", $option="")

$manual = 
@"
Use:
./run.ps1 -name [name] -option [option]
    [name]: Program`s name. Needs to be the program`s directory name.
    [option]: Can be the folowing arguments:
        build: compile the main.c in the directory named [name]
        build-all: compile the main.c of all directories. [name] arg needs to be blank ""
        run: run the .exe in the directory named [name]
        remove: remove binaries of the directory named [name]
        remove-all: remove all binaries of all directories. [name] arg needs to be blank "" 
"@

if ($name -eq "")
{
    
}
else
{

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
}



# (Get-ChildItem).Name -split "`n"
# $var = [int](Get-ChildItem).Name.length
# (Get-Location).path