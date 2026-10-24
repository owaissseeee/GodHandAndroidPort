#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002AEA18
// Address: 0x2aea18 - 0x2aead0
void func_002AEA18_0x2aea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AEA18_0x2aea18");
#endif

    switch (ctx->pc) {
        case 0x2aea50u: goto label_2aea50;
        case 0x2aea60u: goto label_2aea60;
        case 0x2aea7cu: goto label_2aea7c;
        case 0x2aeaa0u: goto label_2aeaa0;
        default: break;
    }

    ctx->pc = 0x2aea18u;

    // 0x2aea18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aea1c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2aea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2aea20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2aea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2aea24: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2aea28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2aea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2aea2c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2aea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2aea30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2aea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2aea34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aea34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aea3c: 0x24a5b100  addiu       $a1, $a1, -0x4F00
    ctx->pc = 0x2aea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947072));
    // 0x2aea40: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x2aea40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2aea44: 0x8c4405ac  lw          $a0, 0x5AC($v0)
    ctx->pc = 0x2aea44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x2aea48: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2AEA48u;
    SET_GPR_U32(ctx, 31, 0x2AEA50u);
    ctx->pc = 0x2AEA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA48u;
    // 0x2aea4c: 0x8c46056c  lw          $a2, 0x56C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2AEA48u, 0x2AEA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA50u;
label_2aea50:
    // 0x2aea50: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2aea50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2aea54: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x2aea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2aea58: 0x8c8323a4  lw          $v1, 0x23A4($a0)
    ctx->pc = 0x2aea58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2aea5c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2aea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2aea60:
    // 0x2aea60: 0x24b000bc  addiu       $s0, $a1, 0xBC
    ctx->pc = 0x2aea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x2aea64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2aea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aea6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aea70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea74: 0xc0ac8ba  jal         func_2B22E8
    ctx->pc = 0x2AEA74u;
    SET_GPR_U32(ctx, 31, 0x2AEA7Cu);
    ctx->pc = 0x2AEA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA74u;
    // 0x2aea78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22E8u, 0x2AEA74u, 0x2AEA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEA7Cu;
label_2aea7c:
    // 0x2aea7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2aea7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2aea80: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AEA80u;
    {
        const bool branch_taken_0x2aea80 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2AEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEA80u;
        // 0x2aea84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea80) {
            ctx->pc = 0x2AEA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aea60;
        }
    }
    ctx->pc = 0x2AEA88u;
    // 0x2aea88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aea88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aea8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aea90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aea94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea98: 0xc0ac8ba  jal         func_2B22E8
    ctx->pc = 0x2AEA98u;
    SET_GPR_U32(ctx, 31, 0x2AEAA0u);
    ctx->pc = 0x2AEA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEA98u;
    // 0x2aea9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B22E8u, 0x2AEA98u, 0x2AEAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEAA0u;
label_2aeaa0:
    // 0x2aeaa0: 0x26430018  addiu       $v1, $s2, 0x18
    ctx->pc = 0x2aeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2aeaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aeaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeaa8: 0xa6420bd8  sh          $v0, 0xBD8($s2)
    ctx->pc = 0x2aeaa8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3032), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aeaac: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2aeaacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x2aeab0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2aeab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x2aeab4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2aeab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aeab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2aeab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeabc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2aeabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aeac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEAC4u;
        // 0x2aeac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEACCu;
    // 0x2aeacc: 0x0  nop
    ctx->pc = 0x2aeaccu;
    // NOP
    ctx->pc = 0x2aead0u;
}
