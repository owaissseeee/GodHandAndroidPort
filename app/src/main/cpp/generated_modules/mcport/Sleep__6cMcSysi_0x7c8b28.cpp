#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: Sleep__6cMcSysi
// Address: 0x7c8b28 - 0x7c8bb8
void Sleep__6cMcSysi_0x7c8b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sleep__6cMcSysi_0x7c8b28");
#endif

    switch (ctx->pc) {
        case 0x7c8b60u: goto label_7c8b60;
        case 0x7c8b68u: goto label_7c8b68;
        case 0x7c8b70u: goto label_7c8b70;
        case 0x7c8b7cu: goto label_7c8b7c;
        default: break;
    }

    ctx->pc = 0x7c8b28u;

    // 0x7c8b28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c8b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c8b2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c8b30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c8b34: 0x8c437a88  lw          $v1, 0x7A88($v0)
    ctx->pc = 0x7c8b34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x7c8b38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c8b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8b3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c8b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c8b40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c8b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c8b44: 0x4610016  bgez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x7C8B44u;
    {
        const bool branch_taken_0x7c8b44 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8B44u;
        // 0x7c8b48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8b44) {
            ctx->pc = 0x7C8BA0u;
            goto label_7c8ba0;
        }
    }
    ctx->pc = 0x7C8B4Cu;
    // 0x7c8b4c: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x7C8B4Cu;
    {
        const bool branch_taken_0x7c8b4c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x7C8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8B4Cu;
        // 0x7c8b50: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8b4c) {
            ctx->pc = 0x7C8B84u;
            goto label_7c8b84;
        }
    }
    ctx->pc = 0x7C8B54u;
    // 0x7c8b54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7c8b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8b58: 0x24522c00  addiu       $s2, $v0, 0x2C00
    ctx->pc = 0x7c8b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x7c8b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c8b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7c8b60:
    // 0x7c8b60: 0xc1f22ee  jal         func_7C8BB8
    ctx->pc = 0x7C8B60u;
    SET_GPR_U32(ctx, 31, 0x7C8B68u);
    ctx->pc = 0x7C8B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8B60u;
    // 0x7c8b64: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8BB8u, 0x7C8B60u, 0x7C8B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8B68u;
label_7c8b68:
    // 0x7c8b68: 0xc1f2306  jal         func_7C8C18
    ctx->pc = 0x7C8B68u;
    SET_GPR_U32(ctx, 31, 0x7C8B70u);
    ctx->pc = 0x7C8B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8B68u;
    // 0x7c8b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8C18u, 0x7C8B68u, 0x7C8B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8B70u;
label_7c8b70:
    // 0x7c8b70: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x7c8b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x7c8b74: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7C8B74u;
    SET_GPR_U32(ctx, 31, 0x7C8B7Cu);
    ctx->pc = 0x7C8B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8B74u;
    // 0x7c8b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7C8B74u, 0x7C8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8B7Cu;
label_7c8b7c:
    // 0x7c8b7c: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7C8B7Cu;
    {
        const bool branch_taken_0x7c8b7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8B7Cu;
        // 0x7c8b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8b7c) {
            ctx->pc = 0x7C8B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c8b60;
        }
    }
    ctx->pc = 0x7C8B84u;
label_7c8b84:
    // 0x7c8b84: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x7c8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x7c8b88: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x7c8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c8b8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7c8b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c8b90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C8B90u;
    {
        const bool branch_taken_0x7c8b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8B90u;
        // 0x7c8b94: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8b90) {
            ctx->pc = 0x7C8BA0u;
            goto label_7c8ba0;
        }
    }
    ctx->pc = 0x7C8B98u;
    // 0x7c8b98: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x7c8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x7c8b9c: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x7c8b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_7c8ba0:
    // 0x7c8ba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c8ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c8ba4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c8ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c8ba8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c8ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8BB0u;
        // 0x7c8bb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8BB8u;
}
} // namespace gh_mcport
