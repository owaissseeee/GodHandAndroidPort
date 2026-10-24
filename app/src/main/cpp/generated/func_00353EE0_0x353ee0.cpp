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

// Function: func_00353EE0
// Address: 0x353ee0 - 0x353f68
void func_00353EE0_0x353ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353EE0_0x353ee0");
#endif

    ctx->pc = 0x353ee0u;

    // 0x353ee0: 0x8c880038  lw          $t0, 0x38($a0)
    ctx->pc = 0x353ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x353ee4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x353ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x353ee8: 0x1502001b  bne         $t0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x353EE8u;
    {
        const bool branch_taken_0x353ee8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x353EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EE8u;
        // 0x353eec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ee8) {
            ctx->pc = 0x353F58u;
            goto label_353f58;
        }
    }
    ctx->pc = 0x353EF0u;
    // 0x353ef0: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x353ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x353ef4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x353ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353ef8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x353EF8u;
    {
        const bool branch_taken_0x353ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x353EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353EF8u;
        // 0x353efc: 0x2c650003  sltiu       $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ef8) {
            ctx->pc = 0x353F18u;
            goto label_353f18;
        }
    }
    ctx->pc = 0x353F00u;
    // 0x353f00: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x353F00u;
    {
        const bool branch_taken_0x353f00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x353f00) {
            ctx->pc = 0x353F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353F00u;
            // 0x353f04: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353F5Cu;
            goto label_353f5c;
        }
    }
    ctx->pc = 0x353F08u;
    // 0x353f08: 0x50680009  beql        $v1, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x353F08u;
    {
        const bool branch_taken_0x353f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x353f08) {
            ctx->pc = 0x353F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353F08u;
            // 0x353f0c: 0x8c850164  lw          $a1, 0x164($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353F30u;
            goto label_353f30;
        }
    }
    ctx->pc = 0x353F10u;
    // 0x353f10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x353F10u;
    {
        const bool branch_taken_0x353f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F10u;
        // 0x353f14: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353f10) {
            ctx->pc = 0x353F5Cu;
            goto label_353f5c;
        }
    }
    ctx->pc = 0x353F18u;
label_353f18:
    // 0x353f18: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x353f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x353f1c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x353f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x353f20: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x353f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x353f24: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x353f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x353f28: 0x3e00008  jr          $ra
    ctx->pc = 0x353F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F28u;
        // 0x353f2c: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F30u;
label_353f30:
    // 0x353f30: 0x8c840160  lw          $a0, 0x160($a0)
    ctx->pc = 0x353f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x353f34: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x353f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x353f38: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x353f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x353f3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x353f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x353f40: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x353f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x353f44: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x353f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x353f48: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x353f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x353f4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x353f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x353f50: 0x3e00008  jr          $ra
    ctx->pc = 0x353F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F50u;
        // 0x353f54: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F58u;
label_353f58:
    // 0x353f58: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x353f58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_353f5c:
    // 0x353f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x353F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F5Cu;
        // 0x353f60: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F64u;
    // 0x353f64: 0x0  nop
    ctx->pc = 0x353f64u;
    // NOP
    ctx->pc = 0x353f68u;
}
