#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079C030
// Address: 0x79c030 - 0x79c080
void func_0079C030_0x79c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C030_0x79c030");
#endif

    switch (ctx->pc) {
        case 0x79c050u: goto label_79c050;
        case 0x79c058u: goto label_79c058;
        case 0x79c064u: goto label_79c064;
        case 0x79c074u: goto label_79c074;
        default: break;
    }

    ctx->pc = 0x79c030u;

    // 0x79c030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c034: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79c034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79c038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79c03c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79c03cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79c040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c044: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79c044u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79c048: 0x8e04c800  lw          $a0, -0x3800($s0)
    ctx->pc = 0x79c048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79c04c: 0x0  nop
    ctx->pc = 0x79c04cu;
    // NOP
label_79c050:
    // 0x79c050: 0xc1e6542  jal         func_799508
    ctx->pc = 0x79C050u;
    SET_GPR_U32(ctx, 31, 0x79C058u);
    ctx->pc = 0x79C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C050u;
    // 0x79c054: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799508u, 0x79C050u, 0x79C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C058u;
label_79c058:
    // 0x79c058: 0x8e04c800  lw          $a0, -0x3800($s0)
    ctx->pc = 0x79c058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
    // 0x79c05c: 0xc1e656e  jal         func_7995B8
    ctx->pc = 0x79C05Cu;
    SET_GPR_U32(ctx, 31, 0x79C064u);
    ctx->pc = 0x79C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C05Cu;
    // 0x79c060: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995B8u, 0x79C05Cu, 0x79C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C064u;
label_79c064:
    // 0x79c064: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c06c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79C06Cu;
    SET_GPR_U32(ctx, 31, 0x79C074u);
    ctx->pc = 0x79C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C06Cu;
    // 0x79c070: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C06Cu, 0x79C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C074u;
label_79c074:
    // 0x79c074: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x79C074u;
    {
        const bool branch_taken_0x79c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C074u;
        // 0x79c078: 0x8e04c800  lw          $a0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c074) {
            ctx->pc = 0x79C050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c050;
        }
    }
    ctx->pc = 0x79C07Cu;
    // 0x79c07c: 0x0  nop
    ctx->pc = 0x79c07cu;
    // NOP
    ctx->pc = 0x79c080u;
}
} // namespace gh_r040
