#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x799938 - 0x7999b8
void r6xx_isOpenLever__FPCc_0x799938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x799938");
#endif

    switch (ctx->pc) {
        case 0x799960u: goto label_799960;
        case 0x799990u: goto label_799990;
        case 0x7999a0u: goto label_7999a0;
        default: break;
    }

    ctx->pc = 0x799938u;

    // 0x799938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79993c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799944: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79994c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799950: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799950u;
    {
        const bool branch_taken_0x799950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799950u;
        // 0x799954: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799950) {
            ctx->pc = 0x799988u;
            goto label_799988;
        }
    }
    ctx->pc = 0x799958u;
    // 0x799958: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79995c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799960:
    // 0x799960: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799964: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799968: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79996c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799970: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799974u;
        // 0x799978: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799974) {
            ctx->pc = 0x799988u;
            goto label_799988;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799980: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799980u;
    {
        const bool branch_taken_0x799980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799980) {
            ctx->pc = 0x799984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799980u;
            // 0x799984: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799960;
        }
    }
    ctx->pc = 0x799988u;
label_799988:
    // 0x799988: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799988u;
    SET_GPR_U32(ctx, 31, 0x799990u);
    ctx->pc = 0x79998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799988u;
    // 0x79998c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799988u, 0x799990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799990u;
label_799990:
    // 0x799990: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799990u;
    {
        const bool branch_taken_0x799990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799990) {
            ctx->pc = 0x799994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799990u;
            // 0x799994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999A8u;
            goto label_7999a8;
        }
    }
    ctx->pc = 0x799998u;
    // 0x799998: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x799998u;
    SET_GPR_U32(ctx, 31, 0x7999A0u);
    ctx->pc = 0x79999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799998u;
    // 0x79999c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x799998u, 0x7999A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7999A0u;
    {
        const bool branch_taken_0x7999a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A0u;
        // 0x7999a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a0) {
            ctx->pc = 0x7999ACu;
            goto label_7999ac;
        }
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7999a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7999ac:
    // 0x7999ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7999ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999B4u;
    // 0x7999b4: 0x0  nop
    ctx->pc = 0x7999b4u;
    // NOP
    ctx->pc = 0x7999b8u;
}
} // namespace gh_r602
