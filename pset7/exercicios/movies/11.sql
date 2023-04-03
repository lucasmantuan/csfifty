-- Em 11.sql, escreva uma consulta SQL para listar os títulos dos cinco filmes com melhor classificação (em ordem) que Chadwick Boseman estrelou, começando com os de maior classificação.
-- Sua consulta deve gerar uma tabela com uma única coluna para o título de cada filme.
-- Você pode presumir que há apenas uma pessoa no banco de dados com o nome Chadwick Boseman.

SELECT people.name FROM people
INNER JOIN stars ON stars.person_id = people.id
INNER JOIN movies ON stars.movie_id = movies.id
INNER JOIN ratings ON ratings.movie_id = movies.id
WHERE ratings.rating >= 9;
