#[cfg(target_os = "macos")]
fn main() {
    let mut build = cc::Build::new();
    build.file("src/cocoa_colors.m");
    build.compile("cocoa_colors");
}

