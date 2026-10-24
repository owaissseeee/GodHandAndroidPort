#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_0079AC78
// Address: 0x79ac78 - 0x79ace8
void func_0079AC78_0x79ac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AC78_0x79ac78");
#endif

    switch (ctx->pc) {
        case 0x79aca0u: goto label_79aca0;
        case 0x79acacu: goto label_79acac;
        case 0x79acb4u: goto label_79acb4;
        case 0x79acc8u: goto label_79acc8;
        case 0x79acd4u: goto label_79acd4;
        default: break;
    }

    ctx->pc = 0x79ac78u;

    // 0x79ac78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79ac78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79ac7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79ac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79ac80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79ac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79ac84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79ac84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ac88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79ac8c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79ac8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79ac90: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79ac90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79ac94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AC94u;
    {
        const bool branch_taken_0x79ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC94u;
        // 0x79ac98: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac94) {
            ctx->pc = 0x79ACACu;
            goto label_79acac;
        }
    }
    ctx->pc = 0x79AC9Cu;
    // 0x79ac9c: 0x0  nop
    ctx->pc = 0x79ac9cu;
    // NOP
label_79aca0:
    // 0x79aca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aca4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79ACA4u;
    SET_GPR_U32(ctx, 31, 0x79ACACu);
    ctx->pc = 0x79ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACA4u;
    // 0x79aca8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ACA4u, 0x79ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACACu;
label_79acac:
    // 0x79acac: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79ACACu;
    SET_GPR_U32(ctx, 31, 0x79ACB4u);
    ctx->pc = 0x79ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACACu;
    // 0x79acb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79ACACu, 0x79ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACB4u;
label_79acb4:
    // 0x79acb4: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79ACB4u;
    {
        const bool branch_taken_0x79acb4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB4u;
        // 0x79acb8: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acb4) {
            ctx->pc = 0x79ACA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aca0;
        }
    }
    ctx->pc = 0x79ACBCu;
    // 0x79acbc: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x79acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x79acc0: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x79ACC0u;
    SET_GPR_U32(ctx, 31, 0x79ACC8u);
    ctx->pc = 0x79ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC0u;
    // 0x79acc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x79ACC0u, 0x79ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACC8u;
label_79acc8:
    // 0x79acc8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79accc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79ACCCu;
    SET_GPR_U32(ctx, 31, 0x79ACD4u);
    ctx->pc = 0x79ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACCCu;
    // 0x79acd0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79ACCCu, 0x79ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACD4u;
label_79acd4:
    // 0x79acd4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79acd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79acd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79acd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79acdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ace0: 0x3e00008  jr          $ra
    ctx->pc = 0x79ACE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE0u;
        // 0x79ace4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ACE8u;
}
} // namespace gh_r608
