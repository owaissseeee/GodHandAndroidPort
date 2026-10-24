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

// Function: DogRace_Release
// Address: 0x1e9e40 - 0x1e9ed8
void DogRace_Release_0x1e9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DogRace_Release_0x1e9e40");
#endif

    switch (ctx->pc) {
        case 0x1e9e60u: goto label_1e9e60;
        case 0x1e9e6cu: goto label_1e9e6c;
        case 0x1e9e80u: goto label_1e9e80;
        case 0x1e9e88u: goto label_1e9e88;
        case 0x1e9e90u: goto label_1e9e90;
        case 0x1e9eb8u: goto label_1e9eb8;
        case 0x1e9ec0u: goto label_1e9ec0;
        default: break;
    }

    ctx->pc = 0x1e9e40u;

    // 0x1e9e40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e9e44: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e9e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e9e48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e9e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e9e4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e9e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e9e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e9e54: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1e9e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1e9e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9e5c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1e9e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e9e60:
    // 0x1e9e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e64: 0xc07ba68  jal         func_1EE9A0
    ctx->pc = 0x1E9E64u;
    SET_GPR_U32(ctx, 31, 0x1E9E6Cu);
    ctx->pc = 0x1E9E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E64u;
    // 0x1e9e68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE9A0u, 0x1E9E64u, 0x1E9E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E6Cu;
label_1e9e6c:
    // 0x1e9e6c: 0x0  nop
    ctx->pc = 0x1e9e6cu;
    // NOP
    // 0x1e9e70: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E9E70u;
    {
        const bool branch_taken_0x1e9e70 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1E9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E70u;
        // 0x1e9e74: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e70) {
            ctx->pc = 0x1E9E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9e60;
        }
    }
    ctx->pc = 0x1E9E78u;
    // 0x1e9e78: 0xc07b7d8  jal         func_1EDF60
    ctx->pc = 0x1E9E78u;
    SET_GPR_U32(ctx, 31, 0x1E9E80u);
    ctx->pc = 0x1E9E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E78u;
    // 0x1e9e7c: 0x26441b90  addiu       $a0, $s2, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDF60u, 0x1E9E78u, 0x1E9E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E80u;
label_1e9e80:
    // 0x1e9e80: 0xc07b598  jal         func_1ED660
    ctx->pc = 0x1E9E80u;
    SET_GPR_U32(ctx, 31, 0x1E9E88u);
    ctx->pc = 0x1E9E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E80u;
    // 0x1e9e84: 0x26441840  addiu       $a0, $s2, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED660u, 0x1E9E80u, 0x1E9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E88u;
label_1e9e88:
    // 0x1e9e88: 0xc07b2f4  jal         func_1ECBD0
    ctx->pc = 0x1E9E88u;
    SET_GPR_U32(ctx, 31, 0x1E9E90u);
    ctx->pc = 0x1E9E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E88u;
    // 0x1e9e8c: 0x26440210  addiu       $a0, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBD0u, 0x1E9E88u, 0x1E9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E90u;
label_1e9e90:
    // 0x1e9e90: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e9e94: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1e9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1e9e98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e9e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9e9c: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x1e9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x1e9ea0: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x1e9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x1e9ea4: 0x8e452a0c  lw          $a1, 0x2A0C($s2)
    ctx->pc = 0x1e9ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10764)));
    // 0x1e9ea8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9EA8u;
    {
        const bool branch_taken_0x1e9ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ea8) {
            ctx->pc = 0x1E9EB8u;
            goto label_1e9eb8;
        }
    }
    ctx->pc = 0x1E9EB0u;
    // 0x1e9eb0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1E9EB0u;
    SET_GPR_U32(ctx, 31, 0x1E9EB8u);
    ctx->pc = 0x1E9EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EB0u;
    // 0x1e9eb4: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1E9EB0u, 0x1E9EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EB8u;
label_1e9eb8:
    // 0x1e9eb8: 0xc07ae7e  jal         func_1EB9F8
    ctx->pc = 0x1E9EB8u;
    SET_GPR_U32(ctx, 31, 0x1E9EC0u);
    ctx->pc = 0x1E9EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EB8u;
    // 0x1e9ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9F8u, 0x1E9EB8u, 0x1E9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EC0u;
label_1e9ec0:
    // 0x1e9ec0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e9ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9ec4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e9ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9ec8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e9ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9ED0u;
        // 0x1e9ed4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9ED8u;
}
