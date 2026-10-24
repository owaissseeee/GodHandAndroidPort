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

// Function: _request_bind
// Address: 0x3b2e78 - 0x3b2f48
void _request_bind_0x3b2e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_bind_0x3b2e78");
#endif

    switch (ctx->pc) {
        case 0x3b2e9cu: goto label_3b2e9c;
        case 0x3b2ec8u: goto label_3b2ec8;
        case 0x3b2f04u: goto label_3b2f04;
        default: break;
    }

    ctx->pc = 0x3b2e78u;

    // 0x3b2e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b2e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b2e7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b2e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b2e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2e84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b2e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b2e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2e8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b2e90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2e94: 0xc0ecae4  jal         func_3B2B90
    ctx->pc = 0x3B2E94u;
    SET_GPR_U32(ctx, 31, 0x3B2E9Cu);
    ctx->pc = 0x3B2E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E94u;
    // 0x3b2e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B90u, 0x3B2E94u, 0x3B2E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E9Cu;
label_3b2e9c:
    // 0x3b2e9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b2e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ea0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3b2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3b2ea4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3b2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b2ea8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2eac: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x3b2eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x3b2eb0: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x3b2eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x3b2eb4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x3b2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x3b2eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b2eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ebc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3b2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x3b2ec0: 0xc0ecb7a  jal         func_3B2DE8
    ctx->pc = 0x3B2EC0u;
    SET_GPR_U32(ctx, 31, 0x3B2EC8u);
    ctx->pc = 0x3B2EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2EC0u;
    // 0x3b2ec4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2DE8u, 0x3B2EC0u, 0x3B2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2EC8u;
label_3b2ec8:
    // 0x3b2ec8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2EC8u;
    {
        const bool branch_taken_0x3b2ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2ec8) {
            ctx->pc = 0x3B2ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2EC8u;
            // 0x3b2ecc: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2EDCu;
            goto label_3b2edc;
        }
    }
    ctx->pc = 0x3B2ED0u;
    // 0x3b2ed0: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x3b2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x3b2ed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2ED4u;
    {
        const bool branch_taken_0x3b2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2ED4u;
        // 0x3b2ed8: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ed4) {
            ctx->pc = 0x3B2EE4u;
            goto label_3b2ee4;
        }
    }
    ctx->pc = 0x3B2EDCu;
label_3b2edc:
    // 0x3b2edc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3b2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3b2ee0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x3b2ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_3b2ee4:
    // 0x3b2ee4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2ee8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b2ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2eec: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3b2eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3b2ef0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b2ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b2ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b2ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ef8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b2ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2efc: 0xc0ec9b2  jal         func_3B26C8
    ctx->pc = 0x3B2EFCu;
    SET_GPR_U32(ctx, 31, 0x3B2F04u);
    ctx->pc = 0x3B2F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2EFCu;
    // 0x3b2f00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B26C8u, 0x3B2EFCu, 0x3B2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2F04u;
label_3b2f04:
    // 0x3b2f04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B2F04u;
    {
        const bool branch_taken_0x3b2f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F04u;
        // 0x3b2f08: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f04) {
            ctx->pc = 0x3B2F30u;
            goto label_3b2f30;
        }
    }
    ctx->pc = 0x3B2F0Cu;
    // 0x3b2f0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b2f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f10: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b2f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b2f14: 0x24a52e38  addiu       $a1, $a1, 0x2E38
    ctx->pc = 0x3b2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11832));
    // 0x3b2f18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b2f18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2f1c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3b2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3b2f20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2f28: 0x80ede26  j           func_3B7898
    ctx->pc = 0x3B2F28u;
    ctx->pc = 0x3B2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F28u;
    // 0x3b2f2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7898u, 0x3B2F28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2F30u;
label_3b2f30:
    // 0x3b2f30: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b2f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2f34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F3Cu;
        // 0x3b2f40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2F44u;
    // 0x3b2f44: 0x0  nop
    ctx->pc = 0x3b2f44u;
    // NOP
    ctx->pc = 0x3b2f48u;
}
