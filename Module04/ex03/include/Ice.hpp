/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaen-mo <jjaen-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 06:10:18 by jjaen-mo          #+#    #+#             */
/*   Updated: 2024/04/16 05:40:04 by jjaen-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
 # define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    private:
    public:
        Ice();
        Ice(const Ice &ice);
        ~Ice();
        Ice *clone() const;
        void use(ICharacter& target);
};

#endif