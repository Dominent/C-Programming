;;=============================================================================== 
;; Author: Petromil "Dominent" Pavlov
;; Last Revision: 25.02.2017
;;===============================================================================
;; TODO(Domi): Fix Shift + Tab
;; TODO(Domi): Add Compilation Command
;; TODO(Domi): Add Header Format
;; TODO(Domi): Add Rectangular selection
;; TODO(Domi): Add Move Text Left And Right
;;===============================================================================

;; Package Managers
(package-initialize)
(setq package-archives
      '(("gnu" . "http://elpa.gnu.org/packages/")
	("marmalade" . "http://marmalade-repo.org/packages/")
	("melpa" . "http://melpa.milkbox.net/packages/")))
;;---------------------------------------------------------------------------->

(global-visual-line-mode t)

(fset 'yes-or-no-p 'y-or-n-p)

(setq-default truncate-lines 1) 
(setq-default global-visual-line-mode t)

;; Split Window On Startup
(split-window-right)

; Display Line Numbers
(global-linum-mode t)

;; Deletes Current Selection
(delete-selection-mode t)
;; Cursor Blink Enabled
(blink-cursor-mode t)

;; Displays Closing Brace
(show-paren-mode t)

;; Disable Backup Files
(setq make-backup-file nil)

(setq auto-save-default nil)
(setq inhibit-startup-message t)

;; TAB Adventure
;(global-set-key (kbd "RET") 'newline-and-indent)
;(global-set-key (kbd "TAB") 'self-insert-command)
;(global-set-key (kbd "<backtab>") 'indent-code-rigidly);
(setq-default c-basic-offset 4)
;;---------------------------------------------------------------------------->

;; Move Line Up Or Down
(defun move-line (n)
  "Move the current line up or down by N lines."
  (interactive "p")
  (setq col (current-column))
  (beginning-of-line) (setq start (point))
  (end-of-line) (forward-char) (setq end (point))
  (let ((line-text (delete-and-extract-region start end)))
    (forward-line n)
    (insert line-text)
    ;; restore point to original column in moved line
    (forward-line -1)
    (forward-char col)))

(defun move-line-up (n)
  "Move the current line up by N lines."
  (interactive "p")
  (move-line (if (null n) -1 (- n))))

(defun move-line-down (n)
  "Move the current line down by N lines."
  (interactive "p")
  (move-line (if (null n) 1 n)))

(global-set-key (kbd "M-<up>") 'move-line-up)
(global-set-key (kbd "M-<down>") 'move-line-down)
;;---------------------------------------------------------------------------->

;; Disables Toolbar And Scrollbar
(when(window-system)
  (scroll-bar-mode -1)
  (tool-bar-mode -1))
;;---------------------------------------------------------------------------->

; Bright Red TODO
 (setq fixme-modes '(c++-mode c-mode emacs-lisp-mode))
 (make-face 'font-lock-fixme-face)
 (make-face 'font-lock-study-face)
 (make-face 'font-lock-important-face)
 (make-face 'font-lock-note-face)
 (mapc (lambda (mode)
	 (font-lock-add-keywords
	  mode
	  '(("\\<\\(TODO\\)" 1 'font-lock-fixme-face t)
	    ("\\<\\(STUDY\\)" 1 'font-lock-study-face t)
	    ("\\<\\(IMPORTANT\\)" 1 'font-lock-important-face t)
            ("\\<\\(NOTE\\)" 1 'font-lock-note-face t))))
	fixme-modes)
 (modify-face 'font-lock-fixme-face "Red" nil nil t nil t nil nil)
 (modify-face 'font-lock-study-face "Yellow" nil nil t nil t nil nil)
 (modify-face 'font-lock-important-face "Yellow" nil nil t nil t nil nil)
 (modify-face 'font-lock-note-face "Dark Green" nil nil t nil t nil nil)
;;---------------------------------------------------------------------------->

;; Duplicate Line
(defun duplicate-line ()
  "Duplicates the current line."
  (interactive )
  (move-beginning-of-line 1)
  (kill-line)
  (yank)
  (open-line 1)
  (next-line 1)
  (yank))

(global-set-key (kbd "C-d") 'duplicate-line)
(global-set-key (kbd "<delete>") 'delete-char)
;;---------------------------------------------------------------------------->

(keyboard-translate ?\C-k ?\C-l)
(keyboard-translate ?\C-l ?\C-k)

(add-to-list 'custom-theme-load-path "~/.emacs.d/themes/")

(global-hl-line-mode 1)
(set-face-background 'hl-line "green")

(global-set-key (kbd "M-p") 'ace-window)

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages
   (quote
    (ace-window dracula-theme color-theme-sanityinc-tomorrow)))
 '(show-paren-mode t)
 '(tool-bar-mode nil))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(default ((t (:family "Liberation Mono" :foundry "outline" :slant normal :weight normal :height 102 :width normal)))))
