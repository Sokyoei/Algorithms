$root_cache_paths = @(
    ".\build"
    ".\target"
)
foreach ($path in $root_cache_paths) {
    if (Test-Path $path) {
        Remove-Item $path -Recurse -Force
    }
}

$recurse_cache_paths = @(
    "__pycache__"
    "build"
    "target"
    "*.exe"
    "tempCodeRunnerFile.*"
)
foreach ($path in $recurse_cache_paths) {
    Remove-Item * -Include $path -Recurse -Force
}
