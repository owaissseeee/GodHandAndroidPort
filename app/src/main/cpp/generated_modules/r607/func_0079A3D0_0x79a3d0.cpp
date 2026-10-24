#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079A3D0
// Address: 0x79a3d0 - 0x79a418
void func_0079A3D0_0x79a3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A3D0_0x79a3d0");
#endif

    switch (ctx->pc) {
        case 0x79a3f0u: goto label_79a3f0;
        default: break;
    }

    ctx->pc = 0x79a3d0u;

    // 0x79a3d0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a3d4: 0x8c624c58  lw          $v0, 0x4C58($v1)
    ctx->pc = 0x79a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C58u));
    // 0x79a3d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x79a3dc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79a3e0: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x79A3E0u;
    {
        const bool branch_taken_0x79a3e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x79A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E0u;
        // 0x79a3e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3e0) {
            ctx->pc = 0x79A40Cu;
            goto label_79a40c;
        }
    }
    ctx->pc = 0x79A3E8u;
    // 0x79a3e8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x79a3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3ec: 0x0  nop
    ctx->pc = 0x79a3ecu;
    // NOP
label_79a3f0:
    // 0x79a3f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a3f4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a3f8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x79a3fc: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x79a3fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x79a400: 0x386303b7  xori        $v1, $v1, 0x3B7
    ctx->pc = 0x79a400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)951);
    // 0x79a404: 0x14a7fffa  bne         $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A404u;
    {
        const bool branch_taken_0x79a404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x79A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A404u;
        // 0x79a408: 0x83300a  movz        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a404) {
            ctx->pc = 0x79A3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a3f0;
        }
    }
    ctx->pc = 0x79A40Cu;
label_79a40c:
    // 0x79a40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a410: 0x3e00008  jr          $ra
    ctx->pc = 0x79A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x46102a  slt         $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A418u;
}
} // namespace gh_r607
