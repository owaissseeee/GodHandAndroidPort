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

// Function: func_00394C18
// Address: 0x394c18 - 0x394d00
void func_00394C18_0x394c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394C18_0x394c18");
#endif

    switch (ctx->pc) {
        case 0x394c48u: goto label_394c48;
        default: break;
    }

    ctx->pc = 0x394c18u;

    // 0x394c18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x394c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x394c1c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x394c1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c20: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x394c20u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c24: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x394c24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c28: 0x8c425520  lw          $v0, 0x5520($v0)
    ctx->pc = 0x394c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F5520u));
    // 0x394c2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x394C2Cu;
    {
        const bool branch_taken_0x394c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C2Cu;
        // 0x394c30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c2c) {
            ctx->pc = 0x394C70u;
            goto label_394c70;
        }
    }
    ctx->pc = 0x394C34u;
    // 0x394c34: 0x25ac5520  addiu       $t4, $t5, 0x5520
    ctx->pc = 0x394c34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 21792));
    // 0x394c38: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x394c38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c3c: 0x2588000c  addiu       $t0, $t4, 0xC
    ctx->pc = 0x394c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x394c40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x394c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c44: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x394c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_394c48:
    // 0x394c48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x394c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x394c4c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x394c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x394C50u;
    {
        const bool branch_taken_0x394c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x394C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C50u;
        // 0x394c54: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c50) {
            ctx->pc = 0x394CD0u;
            goto label_394cd0;
        }
    }
    ctx->pc = 0x394C58u;
    // 0x394c58: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x394c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x394c5c: 0x2468000c  addiu       $t0, $v1, 0xC
    ctx->pc = 0x394c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x394c60: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x394c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x394c64: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x394c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x394c68: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x394C68u;
    {
        const bool branch_taken_0x394c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C68u;
        // 0x394c6c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c68) {
            ctx->pc = 0x394C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394c48;
        }
    }
    ctx->pc = 0x394C70u;
label_394c70:
    // 0x394c70: 0x8da45520  lw          $a0, 0x5520($t5)
    ctx->pc = 0x394c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 21792)));
    // 0x394c74: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x394c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x394c78: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x394C78u;
    {
        const bool branch_taken_0x394c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x394C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C78u;
        // 0x394c7c: 0x25a85520  addiu       $t0, $t5, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 21792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c78) {
            ctx->pc = 0x394CF8u;
            goto label_394cf8;
        }
    }
    ctx->pc = 0x394C80u;
    // 0x394c80: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x394c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c84: 0x3c063141  lui         $a2, 0x3141
    ctx->pc = 0x394c84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12609 << 16));
    // 0x394c88: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x394c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x394c8c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x394c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x394c90: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x394c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x394c94: 0xada25520  sw          $v0, 0x5520($t5)
    ctx->pc = 0x394c94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 21792), GPR_U32(ctx, 2));
    // 0x394c98: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x394c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394c9c: 0x34c65926  ori         $a2, $a2, 0x5926
    ctx->pc = 0x394c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22822);
    // 0x394ca0: 0x12a2826  xor         $a1, $t1, $t2
    ctx->pc = 0x394ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 10));
    // 0x394ca4: 0xa62826  xor         $a1, $a1, $a2
    ctx->pc = 0x394ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x394ca8: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x394ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x394cac: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x394cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x394cb0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x394cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cb4: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x394cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    // 0x394cb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x394cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394cbc: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x394cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x394cc0: 0x8da35520  lw          $v1, 0x5520($t5)
    ctx->pc = 0x394cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 21792)));
    // 0x394cc4: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x394cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x394cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x394CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CC8u;
        // 0x394ccc: 0xad030004  sw          $v1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394CD0u;
label_394cd0:
    // 0x394cd0: 0x1862021  addu        $a0, $t4, $a2
    ctx->pc = 0x394cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x394cd4: 0x3c023141  lui         $v0, 0x3141
    ctx->pc = 0x394cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12609 << 16));
    // 0x394cd8: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x394cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x394cdc: 0x34425926  ori         $v0, $v0, 0x5926
    ctx->pc = 0x394cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22822);
    // 0x394ce0: 0x12a1826  xor         $v1, $t1, $t2
    ctx->pc = 0x394ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 10));
    // 0x394ce4: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x394ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x394ce8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x394ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x394cec: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x394cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x394cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x394CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CF0u;
        // 0x394cf4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394CF8u;
label_394cf8:
    // 0x394cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x394CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CF8u;
        // 0x394cfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394D00u;
}
