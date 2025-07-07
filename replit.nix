{ pkgs }: {
	deps = [
   pkgs.unzip
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}