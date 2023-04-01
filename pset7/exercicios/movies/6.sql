-- Em 6.sql, escreva uma consulta SQL para determinar a avaliação média de todos os filmes lançados em 2012.
-- Sua consulta deve gerar uma tabela com uma única coluna e uma única linha (sem incluir o cabeçalho) contendo a classificação média.

SELECT rating FROM ratings
WHERE movie_id IN (
    SELECT id FROM movies
);

SELECT COUNT(*) FROM movies
WHERE id IN (
    SELECT movie_id FROM ratings
    WHERE rating = 10
);