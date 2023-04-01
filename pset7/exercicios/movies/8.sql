-- Em 8.sql, escreva uma consulta SQL para listar os nomes de todas as pessoas que estrelaram Toy Story.
-- Sua consulta deve gerar uma tabela com uma única coluna para o nome de cada pessoa.
-- Você pode presumir que há apenas um filme no banco de dados com o título Toy Story.

SELECT people.name, movies.title FROM movies
INNER JOIN ratings
ON movies.id = ratings.movie_id
WHERE movies.year = 2010
ORDER BY ratings.rating DESC, movies.title ASC;