set nocompatible              " be iMproved, required
filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/vimfiles/bundle/Vundle.vim
call vundle#begin('~/vimfiles/bundle/')
" alternatively, pass a path where Vundle should install plugins
"call vundle#begin('~/some/path/here')

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'
" My plugins
Plugin 'tpope/vim-fugitive'
Plugin 'scrooloose/syntastic'
Plugin 'kien/ctrlp.vim'
Plugin 'tpope/vim-surround'
Plugin 'scrooloose/nerdcommenter'
Plugin 'Raimondi/delimitMate'
Plugin 'octol/vim-cpp-enhanced-highlight'
Plugin 'chriskempson/base16-vim'
Plugin 'ScrollColors'
Plugin 'taglist.vim'
" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required
" To ignore plugin indent changes, instead use:
"filetype plugin on
"
" Brief help
" :PluginList       - lists configured plugins
" :PluginInstall    - installs plugins; append `!` to update or just :PluginUpdate
" :PluginSearch foo - searches for foo; append `!` to refresh local cache
" :PluginClean      - confirms removal of unused plugins; append `!` to auto-approve removal
"
" see :h vundle for more details or wiki for FAQ
" Put your non-Plugin stuff after this line
" allow backspacing over everything in insert mode
set backspace=indent,eol,start
set nobackup
set noswapfile
set history=50		" keep 50 lines of command line history
set ruler		" show the cursor position all the time
set showcmd		" display incomplete commands
set incsearch		" do incremental searching
syntax on
set hlsearch
autocmd FileType text setlocal textwidth=78
" In many terminal emulators the mouse works just fine, thus enable it.
if has('mouse')
  set mouse=a
endif
:set tabstop=4 softtabstop=4 shiftwidth=4 noexpandtab
set ts=4 sts=4 sw=4 noet
set guifont=Consolas:h12:cANSI
set cursorline
set relativenumber
set number
set wildmenu
set wildmode=list:longest,full
inoremap jj <ESC>
" For cpp_enhanced_syntax plugin
let g:cpp_class_scope_highlight=1
let g:cpp_experimental_template_highlight=1
let base16colorspace=256
set background=dark
colorscheme base16-default
set ffs=unix,dos
set hidden
set autoindent
set copyindent
set showmatch
" Uncomment this if syntastic gives errneous errors!
let g:syntastic_cpp_compiler_options = '-std=c++11 -Wall'
set clipboard=unnamed
let g:ctrlp_map = '<c-p>'
let g:ctrlp_cmd = 'CtrlP'
cd ~\
