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

// Function: func_00283BE8
// Address: 0x283be8 - 0x283c70
void func_00283BE8_0x283be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283BE8_0x283be8");
#endif

    ctx->pc = 0x283be8u;

    // 0x283be8: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x283BE8u;
    {
        const bool branch_taken_0x283be8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BE8u;
        // 0x283bec: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283be8) {
            ctx->pc = 0x283C64u;
            goto label_283c64;
        }
    }
    ctx->pc = 0x283BF0u;
    // 0x283bf0: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x283bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x283bf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283BF4u;
    {
        const bool branch_taken_0x283bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BF4u;
        // 0x283bf8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bf4) {
            ctx->pc = 0x283C08u;
            goto label_283c08;
        }
    }
    ctx->pc = 0x283BFCu;
    // 0x283bfc: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x283bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x283c00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283C00u;
    {
        const bool branch_taken_0x283c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C00u;
        // 0x283c04: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c00) {
            ctx->pc = 0x283C0Cu;
            goto label_283c0c;
        }
    }
    ctx->pc = 0x283C08u;
label_283c08:
    // 0x283c08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283c0c:
    // 0x283c0c: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x283C0Cu;
    {
        const bool branch_taken_0x283c0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C0Cu;
        // 0x283c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c0c) {
            ctx->pc = 0x283C64u;
            goto label_283c64;
        }
    }
    ctx->pc = 0x283C14u;
    // 0x283c14: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x283c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x283c18: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x283C18u;
    {
        const bool branch_taken_0x283c18 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x283C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C18u;
        // 0x283c1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c18) {
            ctx->pc = 0x283C24u;
            goto label_283c24;
        }
    }
    ctx->pc = 0x283C20u;
    // 0x283c20: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x283c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_283c24:
    // 0x283c24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283c28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283C28u;
    {
        const bool branch_taken_0x283c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C28u;
        // 0x283c2c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c28) {
            ctx->pc = 0x283C40u;
            goto label_283c40;
        }
    }
    ctx->pc = 0x283C30u;
    // 0x283c30: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x283c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x283c34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283c38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283C38u;
    {
        const bool branch_taken_0x283c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C38u;
        // 0x283c3c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c38) {
            ctx->pc = 0x283C44u;
            goto label_283c44;
        }
    }
    ctx->pc = 0x283C40u;
label_283c40:
    // 0x283c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283c44:
    // 0x283c44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283C44u;
    {
        const bool branch_taken_0x283c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283c44) {
            ctx->pc = 0x283C64u;
            goto label_283c64;
        }
    }
    ctx->pc = 0x283C4Cu;
    // 0x283c4c: 0xace20148  sw          $v0, 0x148($a3)
    ctx->pc = 0x283c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 2));
    // 0x283c50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x283c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x283c54: 0xac8621b4  sw          $a2, 0x21B4($a0)
    ctx->pc = 0x283c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8628), GPR_U32(ctx, 6));
    // 0x283c58: 0xac822168  sw          $v0, 0x2168($a0)
    ctx->pc = 0x283c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8552), GPR_U32(ctx, 2));
    // 0x283c5c: 0xac852188  sw          $a1, 0x2188($a0)
    ctx->pc = 0x283c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8584), GPR_U32(ctx, 5));
    // 0x283c60: 0xac8521b0  sw          $a1, 0x21B0($a0)
    ctx->pc = 0x283c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8624), GPR_U32(ctx, 5));
label_283c64:
    // 0x283c64: 0x3e00008  jr          $ra
    ctx->pc = 0x283C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C64u;
        // 0x283c68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283C6Cu;
    // 0x283c6c: 0x0  nop
    ctx->pc = 0x283c6cu;
    // NOP
    ctx->pc = 0x283c70u;
}
