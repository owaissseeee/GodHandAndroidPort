$outFile = "C:\GodHandPort\godhand_latest_changes_bundle.txt"
"===== GIT STATUS & DIFF SUMMARY =====" | Out-File $outFile -Encoding utf8
git -C C:\GodHandPort status -s | Out-File $outFile -Append -Encoding utf8
git -C C:\GodHandPort diff --stat | Out-File $outFile -Append -Encoding utf8
$files = git -C C:\GodHandPort diff --name-only HEAD
foreach ($f in $files) {
    $full = Join-Path "C:\GodHandPort" $f
    if (Test-Path $full) {
        "`n`n================================================================================" | Out-File $outFile -Append -Encoding utf8
        "FILE: $f" | Out-File $outFile -Append -Encoding utf8
        "================================================================================" | Out-File $outFile -Append -Encoding utf8
        Get-Content $full | Out-File $outFile -Append -Encoding utf8
    }
}
Write-Host "Bundled all modified files into $outFile"

