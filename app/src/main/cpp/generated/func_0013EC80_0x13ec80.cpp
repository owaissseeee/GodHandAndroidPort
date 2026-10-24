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

// Function: func_0013EC80
// Address: 0x13ec80 - 0x13ecf0
void func_0013EC80_0x13ec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013EC80_0x13ec80");
#endif

    switch (ctx->pc) {
        case 0x13eca4u: goto label_13eca4;
        case 0x13ecbcu: goto label_13ecbc;
        default: break;
    }

    ctx->pc = 0x13ec80u;

    // 0x13ec80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ec84: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x13ec88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13ec88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13ec8c: 0x8c625628  lw          $v0, 0x5628($v1)
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785628u));
    // 0x13ec90: 0x24705628  addiu       $s0, $v1, 0x5628
    ctx->pc = 0x13ec90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22056));
    // 0x13ec94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EC94u;
    {
        const bool branch_taken_0x13ec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC94u;
        // 0x13ec98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec94) {
            ctx->pc = 0x13ECBCu;
            goto label_13ecbc;
        }
    }
    ctx->pc = 0x13EC9Cu;
    // 0x13ec9c: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x13EC9Cu;
    SET_GPR_U32(ctx, 31, 0x13ECA4u);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x13EC9Cu, 0x13ECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECA4u;
label_13eca4:
    // 0x13eca4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x13eca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x13eca8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x13eca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x13ecac: 0x24a5e0d8  addiu       $a1, $a1, -0x1F28
    ctx->pc = 0x13ecacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959320));
    // 0x13ecb0: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x13ecb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x13ecb4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x13ECB4u;
    SET_GPR_U32(ctx, 31, 0x13ECBCu);
    ctx->pc = 0x13ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECB4u;
    // 0x13ecb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x13ECB4u, 0x13ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECBCu;
label_13ecbc:
    // 0x13ecbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13ecbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ecc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13ecc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECC8u;
        // 0x13eccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ECD0u;
    // 0x13ecd0: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x13ecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ecd4: 0x0  nop
    ctx->pc = 0x13ecd4u;
    // NOP
    // 0x13ecd8: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x13ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x13ecdc: 0x0  nop
    ctx->pc = 0x13ecdcu;
    // NOP
    // 0x13ece0: 0xac8200a0  sw          $v0, 0xA0($a0)
    ctx->pc = 0x13ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
    // 0x13ece4: 0x0  nop
    ctx->pc = 0x13ece4u;
    // NOP
    // 0x13ece8: 0x0  nop
    ctx->pc = 0x13ece8u;
    // NOP
    // 0x13ecec: 0x0  nop
    ctx->pc = 0x13ececu;
    // NOP
    ctx->pc = 0x13ecf0u;
}
