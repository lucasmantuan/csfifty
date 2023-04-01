-- Em 8.sql, escreva uma consulta SQL para listar os nomes de todas as pessoas que estrelaram Toy Story.
-- Sua consulta deve gerar uma tabela com uma única coluna para o nome de cada pessoa.
-- Você pode presumir que há apenas um filme no banco de dados com o título Toy Story.

SELECT name FROM people
WHERE

SELECT AVG(rating) FROM ratings
WHERE movie_id IN (
    SELECT id FROM movies
    WHERE year = 2012
);