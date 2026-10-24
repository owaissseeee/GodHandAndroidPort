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

// Function: func_002B2E80
// Address: 0x2b2e80 - 0x2b2f38
void func_002B2E80_0x2b2e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2E80_0x2b2e80");
#endif

    switch (ctx->pc) {
        case 0x2b2eb8u: goto label_2b2eb8;
        case 0x2b2ee0u: goto label_2b2ee0;
        case 0x2b2ef4u: goto label_2b2ef4;
        default: break;
    }

    ctx->pc = 0x2b2e80u;

    // 0x2b2e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2e84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2e94: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2b2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b2e98: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2E98u;
    {
        const bool branch_taken_0x2b2e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2e98) {
            ctx->pc = 0x2B2E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E98u;
            // 0x2b2e9c: 0x8c440304  lw          $a0, 0x304($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2EA8u;
            goto label_2b2ea8;
        }
    }
    ctx->pc = 0x2B2EA0u;
    // 0x2b2ea0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2EA0u;
    {
        const bool branch_taken_0x2b2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA0u;
        // 0x2b2ea4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ea0) {
            ctx->pc = 0x2B2EBCu;
            goto label_2b2ebc;
        }
    }
    ctx->pc = 0x2B2EA8u;
label_2b2ea8:
    // 0x2b2ea8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b2eac: 0x24a5b1e0  addiu       $a1, $a1, -0x4E20
    ctx->pc = 0x2b2eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947296));
    // 0x2b2eb0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2B2EB0u;
    SET_GPR_U32(ctx, 31, 0x2B2EB8u);
    ctx->pc = 0x2B2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EB0u;
    // 0x2b2eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2B2EB0u, 0x2B2EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EB8u;
label_2b2eb8:
    // 0x2b2eb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2ebc:
    // 0x2b2ebc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2b2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b2ec0: 0x5222000f  beql        $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B2EC0u;
    {
        const bool branch_taken_0x2b2ec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2ec0) {
            ctx->pc = 0x2B2EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2EC0u;
            // 0x2b2ec4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2F00u;
            goto label_2b2f00;
        }
    }
    ctx->pc = 0x2B2EC8u;
    // 0x2b2ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2EC8u;
    {
        const bool branch_taken_0x2b2ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ec8) {
            ctx->pc = 0x2B2EE0u;
            goto label_2b2ee0;
        }
    }
    ctx->pc = 0x2B2ED0u;
    // 0x2b2ed0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2b2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2b2ed4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2b2ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b2ed8: 0xc0b2dfa  jal         func_2CB7E8
    ctx->pc = 0x2B2ED8u;
    SET_GPR_U32(ctx, 31, 0x2B2EE0u);
    ctx->pc = 0x2B2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2ED8u;
    // 0x2b2edc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7E8u, 0x2B2ED8u, 0x2B2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EE0u;
label_2b2ee0:
    // 0x2b2ee0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2EE0u;
    {
        const bool branch_taken_0x2b2ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EE0u;
        // 0x2b2ee4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ee0) {
            ctx->pc = 0x2B2EF8u;
            goto label_2b2ef8;
        }
    }
    ctx->pc = 0x2B2EE8u;
    // 0x2b2ee8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b2ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2eec: 0xc0b2db8  jal         func_2CB6E0
    ctx->pc = 0x2B2EECu;
    SET_GPR_U32(ctx, 31, 0x2B2EF4u);
    ctx->pc = 0x2B2EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2EECu;
    // 0x2b2ef0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB6E0u, 0x2B2EECu, 0x2B2EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EF4u;
label_2b2ef4:
    // 0x2b2ef4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2b2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2b2ef8:
    // 0x2b2ef8: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2b2ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x2b2efc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2b2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2b2f00:
    // 0x2b2f00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2b2f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b2f04: 0xa6020088  sh          $v0, 0x88($s0)
    ctx->pc = 0x2b2f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b2f08: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x2b2f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b2f0c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2b2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2b2f10: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2b2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b2f14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b2f18: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x2b2f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2f1c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x2b2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x2b2f20: 0xae04007c  sw          $a0, 0x7C($s0)
    ctx->pc = 0x2b2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 4));
    // 0x2b2f24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2f30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F30u;
        // 0x2b2f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F38u;
}
