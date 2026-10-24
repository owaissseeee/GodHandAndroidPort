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

// Function: func_003A9C80
// Address: 0x3a9c80 - 0x3a9d88
void func_003A9C80_0x3a9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9C80_0x3a9c80");
#endif

    switch (ctx->pc) {
        case 0x3a9cd0u: goto label_3a9cd0;
        case 0x3a9ce0u: goto label_3a9ce0;
        case 0x3a9d08u: goto label_3a9d08;
        case 0x3a9d40u: goto label_3a9d40;
        default: break;
    }

    ctx->pc = 0x3a9c80u;

    // 0x3a9c80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a9c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9c88: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3a9c8c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3a9c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3a9c90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a9c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9c94: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3a9c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3a9c98: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a9c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9c9c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a9c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3a9ca0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3a9ca0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9ca4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3a9ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3a9ca8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3a9ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3a9cac: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3a9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3a9cb0: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A9CB0u;
    {
        const bool branch_taken_0x3a9cb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CB0u;
        // 0x3a9cb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cb0) {
            ctx->pc = 0x3A9CE8u;
            goto label_3a9ce8;
        }
    }
    ctx->pc = 0x3A9CB8u;
    // 0x3a9cb8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3a9cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3a9cbc: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3a9cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3a9cc0: 0x2631da88  addiu       $s1, $s1, -0x2578
    ctx->pc = 0x3a9cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957704));
    // 0x3a9cc4: 0x8e06a9c0  lw          $a2, -0x5640($s0)
    ctx->pc = 0x3a9cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA9C0u));
    // 0x3a9cc8: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x3A9CC8u;
    SET_GPR_U32(ctx, 31, 0x3A9CD0u);
    ctx->pc = 0x3A9CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9CC8u;
    // 0x3a9ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x3A9CC8u, 0x3A9CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9CD0u;
label_3a9cd0:
    // 0x3a9cd0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a9cd4: 0xae00a9c0  sw          $zero, -0x5640($s0)
    ctx->pc = 0x3a9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945216), GPR_U32(ctx, 0));
    // 0x3a9cd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A9CD8u;
    {
        const bool branch_taken_0x3a9cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CD8u;
        // 0x3a9cdc: 0xac71a9c4  sw          $s1, -0x563C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945220), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9cd8) {
            ctx->pc = 0x3A9D60u;
            goto label_3a9d60;
        }
    }
    ctx->pc = 0x3A9CE0u;
label_3a9ce0:
    // 0x3a9ce0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A9CE0u;
    {
        const bool branch_taken_0x3a9ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CE0u;
        // 0x3a9ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ce0) {
            ctx->pc = 0x3A9D60u;
            goto label_3a9d60;
        }
    }
    ctx->pc = 0x3A9CE8u;
label_3a9ce8:
    // 0x3a9ce8: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A9CE8u;
    {
        const bool branch_taken_0x3a9ce8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9CE8u;
        // 0x3a9cec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ce8) {
            ctx->pc = 0x3A9D5Cu;
            goto label_3a9d5c;
        }
    }
    ctx->pc = 0x3A9CF0u;
    // 0x3a9cf0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3a9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3a9cf4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3a9cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3a9cf8: 0x2455da88  addiu       $s5, $v0, -0x2578
    ctx->pc = 0x3a9cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957704));
    // 0x3a9cfc: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3a9cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3a9d00: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x3a9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x3a9d04: 0x0  nop
    ctx->pc = 0x3a9d04u;
    // NOP
label_3a9d08:
    // 0x3a9d08: 0x8e24a9c4  lw          $a0, -0x563C($s1)
    ctx->pc = 0x3a9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945220)));
    // 0x3a9d0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a9d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9d10: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a9d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9d14: 0x8e42a9c0  lw          $v0, -0x5640($s2)
    ctx->pc = 0x3a9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945216)));
    // 0x3a9d18: 0x8e23a9c4  lw          $v1, -0x563C($s1)
    ctx->pc = 0x3a9d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945220)));
    // 0x3a9d1c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3a9d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a9d24: 0xae46a9c0  sw          $a2, -0x5640($s2)
    ctx->pc = 0x3a9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945216), GPR_U32(ctx, 6));
    // 0x3a9d28: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3a9d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3a9d2c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A9D2Cu;
    {
        const bool branch_taken_0x3a9d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D2Cu;
        // 0x3a9d30: 0xae23a9c4  sw          $v1, -0x563C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294945220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d2c) {
            ctx->pc = 0x3A9D4Cu;
            goto label_3a9d4c;
        }
    }
    ctx->pc = 0x3A9D34u;
    // 0x3a9d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a9d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9d38: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x3A9D38u;
    SET_GPR_U32(ctx, 31, 0x3A9D40u);
    ctx->pc = 0x3A9D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9D38u;
    // 0x3a9d3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x3A9D38u, 0x3A9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9D40u;
label_3a9d40:
    // 0x3a9d40: 0xae35a9c4  sw          $s5, -0x563C($s1)
    ctx->pc = 0x3a9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945220), GPR_U32(ctx, 21));
    // 0x3a9d44: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3A9D44u;
    {
        const bool branch_taken_0x3a9d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D44u;
        // 0x3a9d48: 0xae40a9c0  sw          $zero, -0x5640($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d44) {
            ctx->pc = 0x3A9CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9ce0;
        }
    }
    ctx->pc = 0x3A9D4Cu;
label_3a9d4c:
    // 0x3a9d4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a9d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a9d50: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x3a9d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3a9d54: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3A9D54u;
    {
        const bool branch_taken_0x3a9d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D54u;
        // 0x3a9d58: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9d54) {
            ctx->pc = 0x3A9D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9d08;
        }
    }
    ctx->pc = 0x3A9D5Cu;
label_3a9d5c:
    // 0x3a9d5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a9d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9d60:
    // 0x3a9d60: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a9d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a9d64: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3a9d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a9d68: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3a9d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a9d6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a9d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9d70: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3a9d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9d74: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3a9d74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9d78: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3a9d78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9d80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9D80u;
        // 0x3a9d84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9D88u;
}
