void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*d;
	size_t				i;

	d = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (d[i] == (unsigned char)c)
			return ((void *)(d + i));
		i++;
	}
	return (NULL);
}
