-- Em 12.sql, escreva uma consulta SQL para listar os títulos de todos os filmes em que Johnny Depp e Helena Bonham Carter estrelaram juntos.
-- Sua consulta deve gerar uma tabela com uma única coluna para o título de cada filme.
-- Você pode presumir que há apenas uma pessoa no banco de dados com o nome Johnny Depp.
-- Você pode presumir que há apenas uma pessoa no banco de dados com o nome Helena Bonham Carter.

SELECT movies.title FROM people
INNER JOIN stars ON stars.person_id = people.id
INNER JOIN movies ON stars.movie_id = movies.id
WHERE people.name = 'Johnny Depp'
ORDER BY ratings.rating DESC
LIMIT 5;
