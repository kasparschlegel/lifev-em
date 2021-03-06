ADD_SUBDIRECTORY(materials)

SET( solver_mechanics_HEADERS
 solver/mechanics/EMStructuralConstitutiveLaw.hpp
 solver/mechanics/EMStructuralOperator.hpp
 solver/mechanics/EMMechanicalExpressions.hpp
 solver/mechanics/EMElasticityFunctions.hpp
 solver/mechanics/EMETAActiveStrainJacobianAssembler.hpp
 solver/mechanics/EMETAJacobianAssembler.hpp
 solver/mechanics/EMETAJacobianIsotropicAssembler.hpp
 solver/mechanics/EMETAResidualAssembler.hpp
 solver/mechanics/EMETAActiveStrainResidualAssembler.hpp
 solver/mechanics/EMETAResidualIsotropicAssembler.hpp
 CACHE INTERNAL "")


SET(LOCAL_HEADERS)
FOREACH(INC ${solver_mechanics_HEADERS})
  STRING(REPLACE "solver/mechanics/" "" LOCAL_INC ${INC})
  SET(LOCAL_HEADERS ${LOCAL_HEADERS} ${LOCAL_INC})
ENDFOREACH()

INSTALL(
  FILES ${LOCAL_HEADERS}
  DESTINATION "${${PROJECT_NAME}_INSTALL_INCLUDE_DIR}/lifev/em/solver/mechanics"
  COMPONENT ${PACKAGE_NAME}
)
