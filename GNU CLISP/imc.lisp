(format t "Digite massa: ")
(setq m (read))
(format t "Digite altura: ")
(setq a (read))
(setq imc (/ m (* a a)))
(format t "IMC: ")
(print imc)
(if (> imc 28) (format t "OBESO") (format t "NORMAL"))