#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04f_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04f
{
// Function: R04f_ExecColiseum__Fv
// Address: 0x7994c0 - 0x799528
void R04f_ExecColiseum__Fv_0x7994c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R04f_ExecColiseum__Fv_0x7994c0");
#endif

    switch (ctx->pc) {
        case 0x7994e4u: goto label_7994e4;
        case 0x799508u: goto label_799508;
        case 0x799510u: goto label_799510;
        case 0x799520u: goto label_799520;
        default: break;
    }

    ctx->pc = 0x7994c0u;

    // 0x7994c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7994c4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7994c8: 0x8c449800  lw          $a0, -0x6800($v0)
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x799800u));
    // 0x7994cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7994ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7994d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7994d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7994d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7994d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7994dc: 0xc07ba8e  jal         func_1EEA38
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEA38u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7994e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ec: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7994f0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7994f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f8: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7994fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7994fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799500: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799500u;
    SET_GPR_U32(ctx, 31, 0x799508u);
    ctx->pc = 0x799504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799500u;
    // 0x799504: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799500u, 0x799508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799508u;
label_799508:
    // 0x799508: 0xc07bb26  jal         func_1EEC98
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x8e249800  lw          $a0, -0x6800($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294940672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEC98u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799518: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x799520u;
    {
        const bool branch_taken_0x799520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799520) {
            ctx->pc = 0x799508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799508;
        }
    }
    ctx->pc = 0x799528u;
}
} // namespace gh_r04f
