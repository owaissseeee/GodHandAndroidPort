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

// Function: cIDBase_initialize
// Address: 0x2a9ea0 - 0x2a9f30
void cIDBase_initialize_0x2a9ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_initialize_0x2a9ea0");
#endif

    switch (ctx->pc) {
        case 0x2a9ec4u: goto label_2a9ec4;
        case 0x2a9eecu: goto label_2a9eec;
        case 0x2a9f04u: goto label_2a9f04;
        case 0x2a9f14u: goto label_2a9f14;
        default: break;
    }

    ctx->pc = 0x2a9ea0u;

    // 0x2a9ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a9ea4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a9ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a9ea8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a9ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a9eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a9eb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a9eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9ebc: 0xc0aa77e  jal         func_2A9DF8
    ctx->pc = 0x2A9EBCu;
    SET_GPR_U32(ctx, 31, 0x2A9EC4u);
    ctx->pc = 0x2A9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EBCu;
    // 0x2a9ec0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DF8u, 0x2A9EBCu, 0x2A9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EC4u;
label_2a9ec4:
    // 0x2a9ec4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a9ec8: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x2a9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x2a9ecc: 0xa2420046  sb          $v0, 0x46($s2)
    ctx->pc = 0x2a9eccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a9ed0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a9ed4: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x2a9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x2a9ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a9ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9edc: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x2a9edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a9ee0: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x2a9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2a9ee4: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2A9EE4u;
    SET_GPR_U32(ctx, 31, 0x2A9EECu);
    ctx->pc = 0x2A9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EE4u;
    // 0x2a9ee8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2A9EE4u, 0x2A9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EECu;
label_2a9eec:
    // 0x2a9eec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9EECu;
    {
        const bool branch_taken_0x2a9eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EECu;
        // 0x2a9ef0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9eec) {
            ctx->pc = 0x2A9EFCu;
            goto label_2a9efc;
        }
    }
    ctx->pc = 0x2A9EF4u;
    // 0x2a9ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9EF4u;
    {
        const bool branch_taken_0x2a9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EF4u;
        // 0x2a9ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ef4) {
            ctx->pc = 0x2A9F18u;
            goto label_2a9f18;
        }
    }
    ctx->pc = 0x2A9EFCu;
label_2a9efc:
    // 0x2a9efc: 0xc0aa834  jal         func_2AA0D0
    ctx->pc = 0x2A9EFCu;
    SET_GPR_U32(ctx, 31, 0x2A9F04u);
    ctx->pc = 0x2A9F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EFCu;
    // 0x2a9f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA0D0u, 0x2A9EFCu, 0x2A9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F04u;
label_2a9f04:
    // 0x2a9f04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9F04u;
    {
        const bool branch_taken_0x2a9f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F04u;
        // 0x2a9f08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f04) {
            ctx->pc = 0x2A9F18u;
            goto label_2a9f18;
        }
    }
    ctx->pc = 0x2A9F0Cu;
    // 0x2a9f0c: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x2A9F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A9F14u);
    ctx->pc = 0x2A9F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F0Cu;
    // 0x2a9f10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x2A9F0Cu, 0x2A9F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F14u;
label_2a9f14:
    // 0x2a9f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9f18:
    // 0x2a9f18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a9f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9f1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a9f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9f20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a9f20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F28u;
        // 0x2a9f2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9F30u;
}
