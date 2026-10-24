#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: waitDevil__Fv
// Address: 0x79b230 - 0x79b290
void waitDevil__Fv_0x79b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitDevil__Fv_0x79b230");
#endif

    switch (ctx->pc) {
        case 0x79b248u: goto label_79b248;
        case 0x79b24cu: goto label_79b24c;
        case 0x79b25cu: goto label_79b25c;
        case 0x79b264u: goto label_79b264;
        case 0x79b274u: goto label_79b274;
        default: break;
    }

    ctx->pc = 0x79b230u;

    // 0x79b230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b234: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b23c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79B23Cu;
    {
        const bool branch_taken_0x79b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B23Cu;
        // 0x79b240: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b23c) {
            ctx->pc = 0x79B25Cu;
            goto label_79b25c;
        }
    }
    ctx->pc = 0x79B244u;
    // 0x79b244: 0x0  nop
    ctx->pc = 0x79b244u;
    // NOP
label_79b248:
    // 0x79b248: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79b24c:
    // 0x79b24c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b250: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x79b254: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B254u;
    SET_GPR_U32(ctx, 31, 0x79B25Cu);
    ctx->pc = 0x79B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B254u;
    // 0x79b258: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B254u, 0x79B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B25Cu;
label_79b25c:
    // 0x79b25c: 0xc1e6ca4  jal         func_79B290
    ctx->pc = 0x79B25Cu;
    SET_GPR_U32(ctx, 31, 0x79B264u);
    ctx->pc = 0x79B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B290u, 0x79B25Cu, 0x79B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B264u;
label_79b264:
    // 0x79b264: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B264u;
    {
        const bool branch_taken_0x79b264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B264u;
        // 0x79b268: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b264) {
            ctx->pc = 0x79B248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b248;
        }
    }
    ctx->pc = 0x79B26Cu;
    // 0x79b26c: 0xc0a47f0  jal         func_291FC0
    ctx->pc = 0x79B26Cu;
    SET_GPR_U32(ctx, 31, 0x79B274u);
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x79B26Cu, 0x79B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B274u;
label_79b274:
    // 0x79b274: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x79B274u;
    {
        const bool branch_taken_0x79b274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B274u;
        // 0x79b278: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b274) {
            ctx->pc = 0x79B24Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b24c;
        }
    }
    ctx->pc = 0x79B27Cu;
    // 0x79b27c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b284: 0x3e00008  jr          $ra
    ctx->pc = 0x79B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B284u;
        // 0x79b288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B28Cu;
    // 0x79b28c: 0x0  nop
    ctx->pc = 0x79b28cu;
    // NOP
    ctx->pc = 0x79b290u;
}
} // namespace gh_r601
