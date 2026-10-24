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

// Function: cEm12_SetParent
// Address: 0x276e90 - 0x276f18
void cEm12_SetParent_0x276e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm12_SetParent_0x276e90");
#endif

    ctx->pc = 0x276e90u;

    // 0x276e90: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x276E90u;
    {
        const bool branch_taken_0x276e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x276E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E90u;
        // 0x276e94: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e90) {
            ctx->pc = 0x276F0Cu;
            goto label_276f0c;
        }
    }
    ctx->pc = 0x276E98u;
    // 0x276e98: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x276e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x276e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276E9Cu;
    {
        const bool branch_taken_0x276e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E9Cu;
        // 0x276ea0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e9c) {
            ctx->pc = 0x276EB0u;
            goto label_276eb0;
        }
    }
    ctx->pc = 0x276EA4u;
    // 0x276ea4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x276ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x276ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276EA8u;
    {
        const bool branch_taken_0x276ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EA8u;
        // 0x276eac: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ea8) {
            ctx->pc = 0x276EB4u;
            goto label_276eb4;
        }
    }
    ctx->pc = 0x276EB0u;
label_276eb0:
    // 0x276eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x276eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276eb4:
    // 0x276eb4: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x276EB4u;
    {
        const bool branch_taken_0x276eb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x276EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EB4u;
        // 0x276eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276eb4) {
            ctx->pc = 0x276F0Cu;
            goto label_276f0c;
        }
    }
    ctx->pc = 0x276EBCu;
    // 0x276ebc: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x276ebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x276ec0: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x276EC0u;
    {
        const bool branch_taken_0x276ec0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x276EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EC0u;
        // 0x276ec4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ec0) {
            ctx->pc = 0x276ECCu;
            goto label_276ecc;
        }
    }
    ctx->pc = 0x276EC8u;
    // 0x276ec8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x276ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_276ecc:
    // 0x276ecc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x276eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x276ed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276ED0u;
    {
        const bool branch_taken_0x276ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276ED0u;
        // 0x276ed4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ed0) {
            ctx->pc = 0x276EE8u;
            goto label_276ee8;
        }
    }
    ctx->pc = 0x276ED8u;
    // 0x276ed8: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x276ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x276edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x276edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276EE0u;
    {
        const bool branch_taken_0x276ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EE0u;
        // 0x276ee4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ee0) {
            ctx->pc = 0x276EECu;
            goto label_276eec;
        }
    }
    ctx->pc = 0x276EE8u;
label_276ee8:
    // 0x276ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276eec:
    // 0x276eec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276EECu;
    {
        const bool branch_taken_0x276eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276eec) {
            ctx->pc = 0x276F0Cu;
            goto label_276f0c;
        }
    }
    ctx->pc = 0x276EF4u;
    // 0x276ef4: 0xace20148  sw          $v0, 0x148($a3)
    ctx->pc = 0x276ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 2));
    // 0x276ef8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x276efc: 0xac8621b4  sw          $a2, 0x21B4($a0)
    ctx->pc = 0x276efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8628), GPR_U32(ctx, 6));
    // 0x276f00: 0xac822168  sw          $v0, 0x2168($a0)
    ctx->pc = 0x276f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8552), GPR_U32(ctx, 2));
    // 0x276f04: 0xac852188  sw          $a1, 0x2188($a0)
    ctx->pc = 0x276f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8584), GPR_U32(ctx, 5));
    // 0x276f08: 0xac8521b0  sw          $a1, 0x21B0($a0)
    ctx->pc = 0x276f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8624), GPR_U32(ctx, 5));
label_276f0c:
    // 0x276f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x276F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276F0Cu;
        // 0x276f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276F14u;
    // 0x276f14: 0x0  nop
    ctx->pc = 0x276f14u;
    // NOP
    ctx->pc = 0x276f18u;
}
