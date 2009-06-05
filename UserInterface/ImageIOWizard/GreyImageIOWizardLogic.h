/*=========================================================================

  Program:   ITK-SNAP
  Module:    $RCSfile: GreyImageIOWizardLogic.h,v $
  Language:  C++
  Date:      $Date: 2009/06/05 04:00:58 $
  Version:   $Revision: 1.4 $
  Copyright (c) 2007 Paul A. Yushkevich
  
  This file is part of ITK-SNAP 

  ITK-SNAP is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

  -----

  Copyright (c) 2003 Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.  See the above copyright notices for more information. 

=========================================================================*/
#ifndef __GreyImageIOWizardLogic_h_
#define __GreyImageIOWizardLogic_h_

#include "SNAPCommonUI.h"
#include "RestrictedImageIOWizardLogic.h"

/**
 * \class GreyImageIOWizardLogic
 * \brief A concrete instantiation of a wizard for loading and saving
 * grey images
 */
class GreyImageIOWizardLogic :
  public ImageIOWizardLogic<GreyType>
{
  bool IsNativeFormatSupported() const
    { return true; };
};

class RestrictedGreyImageIOWizardLogic :
  public RestrictedImageIOWizardLogic<GreyType>
{
  bool IsNativeFormatSupported() const
    { return true; };
}

#endif

