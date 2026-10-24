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
// Function: r6xx_isActiveLever__FPCc
// Address: 0x79ab20 - 0x79aba0
void r6xx_isActiveLever__FPCc_0x79ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x79ab20");
#endif

    switch (ctx->pc) {
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab88u: goto label_79ab88;
        default: break;
    }

    ctx->pc = 0x79ab20u;

    // 0x79ab20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79ab24: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79ab28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ab2c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79ab2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79ab30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab34: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ab38: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AB38u;
    {
        const bool branch_taken_0x79ab38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB38u;
        // 0x79ab3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab38) {
            ctx->pc = 0x79AB70u;
            goto label_79ab70;
        }
    }
    ctx->pc = 0x79AB40u;
    // 0x79ab40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79ab40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab44: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ab44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79ab48:
    // 0x79ab48: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ab4c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ab50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ab50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ab54: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ab58: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ab58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ab5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AB5Cu;
    {
        const bool branch_taken_0x79ab5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB5Cu;
        // 0x79ab60: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab5c) {
            ctx->pc = 0x79AB70u;
            goto label_79ab70;
        }
    }
    ctx->pc = 0x79AB64u;
    // 0x79ab64: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ab68: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AB68u;
    {
        const bool branch_taken_0x79ab68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ab68) {
            ctx->pc = 0x79AB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB68u;
            // 0x79ab6c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab48;
        }
    }
    ctx->pc = 0x79AB70u;
label_79ab70:
    // 0x79ab70: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AB70u;
    SET_GPR_U32(ctx, 31, 0x79AB78u);
    ctx->pc = 0x79AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB70u;
    // 0x79ab74: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AB70u, 0x79AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB78u;
label_79ab78:
    // 0x79ab78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AB78u;
    {
        const bool branch_taken_0x79ab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ab78) {
            ctx->pc = 0x79AB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB78u;
            // 0x79ab7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB90u;
            goto label_79ab90;
        }
    }
    ctx->pc = 0x79AB80u;
    // 0x79ab80: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x79AB80u;
    SET_GPR_U32(ctx, 31, 0x79AB88u);
    ctx->pc = 0x79AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB80u;
    // 0x79ab84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x79AB80u, 0x79AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB88u;
label_79ab88:
    // 0x79ab88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AB88u;
    {
        const bool branch_taken_0x79ab88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB88u;
        // 0x79ab8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab88) {
            ctx->pc = 0x79AB94u;
            goto label_79ab94;
        }
    }
    ctx->pc = 0x79AB90u;
label_79ab90:
    // 0x79ab90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ab94:
    // 0x79ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB94u;
        // 0x79ab98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB9Cu;
    // 0x79ab9c: 0x0  nop
    ctx->pc = 0x79ab9cu;
    // NOP
    ctx->pc = 0x79aba0u;
}
} // namespace gh_r608
