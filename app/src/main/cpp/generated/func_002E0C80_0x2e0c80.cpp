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

// Function: func_002E0C80
// Address: 0x2e0c80 - 0x2e0d60
void func_002E0C80_0x2e0c80(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E0C80_0x2e0c80");
#endif

    if (__builtin_expect(ctx->pc != 0x2e0c80u, 0)) {
        switch (ctx->pc) {
            case 0x2e0cc0u: goto label_2e0cc0;
            case 0x2e0cd0u: goto label_2e0cd0;
            case 0x2e0cf0u: goto label_2e0cf0;
            case 0x2e0d14u: goto label_2e0d14;
            case 0x2e0d34u: goto label_2e0d34;
            default: break;
        }
    }


    // 0x2e0c80: 0x27bdff90  addiu       $sp, $sp, -0x70
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e0c84: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e0c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e0c88: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e0c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e0c8c: 0x80902d  daddu       $s2, $a0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e0c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e0c94: 0x120802d  daddu       $s0, $t1, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0c98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e0c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0c9c: 0x140882d  daddu       $s1, $t2, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ca0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e0ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e0ca4: 0xa0982d  daddu       $s3, $a1, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ca8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2e0ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2e0cac: 0xc0a02d  daddu       $s4, $a2, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0cb4: 0x100a82d  daddu       $s5, $t0, $zero
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cb8: 0xc0b82b6  jal         func_2E0AD8
    SET_GPR_U32(ctx, 31, 0x2E0CC0u);
    ctx->pc = 0x2E0CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CB8u;
    // 0x2e0cbc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0AD8_0x2e0ad8, 0x2e0ad8u, 0x2e0cc0u)) {
        return;
    }
label_2e0cc0:
    // 0x2e0cc0: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E0CC0u;
    {
        const bool branch_taken_0x2e0cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cc0) {
            ctx->pc = 0x2E0CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0CC0u;
            // 0x2e0cc4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D38u;
            goto label_2e0d38;
        }
    }
    // 0x2e0cc8: 0xc0b82b8  jal         func_2E0AE0
    SET_GPR_U32(ctx, 31, 0x2E0CD0u);
    ctx->pc = 0x2E0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CC8u;
    // 0x2e0ccc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0AE0_0x2e0ae0, 0x2e0ae0u, 0x2e0cd0u)) {
        return;
    }
label_2e0cd0:
    // 0x2e0cd0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E0CD0u;
    {
        const bool branch_taken_0x2e0cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cd0) {
            ctx->pc = 0x2E0CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0CD0u;
            // 0x2e0cd4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D38u;
            goto label_2e0d38;
        }
    }
    // 0x2e0cd8: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cdc: 0x3c020062  lui         $v0, 0x62
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e0ce0: 0x2450b298  addiu       $s0, $v0, -0x4D68
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x2e0ce4: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ce8: 0xc0e9eba  jal         func_3A7AE8
    SET_GPR_U32(ctx, 31, 0x2E0CF0u);
    ctx->pc = 0x2E0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0CE8u;
    // 0x2e0cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A7AE8_0x3a7ae8, 0x3a7ae8u, 0x2e0cf0u)) {
        return;
    }
label_2e0cf0:
    // 0x2e0cf0: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0cf4: 0x24a20001  addiu       $v0, $a1, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0cf8: 0x28420200  slti        $v0, $v0, 0x200
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2e0cfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0CFCu;
    {
        const bool branch_taken_0x2e0cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0cfc) {
            ctx->pc = 0x2E0D0Cu;
            goto label_2e0d0c;
        }
    }
    // 0x2e0d04: 0x3c011111  lui         $at, 0x1111
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4369 << 16));
    // 0x2e0d08: 0xac201111  sw          $zero, 0x1111($at)
    ctx->pc = 0x2e0d08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x11111111u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x11111111u, _value); } while (0);
label_2e0d0c:
    // 0x2e0d0c: 0xc0b82c6  jal         func_2E0B18
    SET_GPR_U32(ctx, 31, 0x2E0D14u);
    ctx->pc = 0x2E0D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D0Cu;
    // 0x2e0d10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0B18_0x2e0b18, 0x2e0b18u, 0x2e0d14u)) {
        return;
    }
label_2e0d14:
    // 0x2e0d14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0D14u;
    {
        const bool branch_taken_0x2e0d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0d14) {
            ctx->pc = 0x2E0D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D14u;
            // 0x2e0d18: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D38u;
            goto label_2e0d38;
        }
    }
    // 0x2e0d1c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d20: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d24: 0x260302d  daddu       $a2, $s3, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d28: 0x280382d  daddu       $a3, $s4, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d2c: 0xc0b83c6  jal         func_2E0F18
    SET_GPR_U32(ctx, 31, 0x2E0D34u);
    ctx->pc = 0x2E0D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D2Cu;
    // 0x2e0d30: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0F18_0x2e0f18, 0x2e0f18u, 0x2e0d34u)) {
        return;
    }
label_2e0d34:
    // 0x2e0d34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e0d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e0d38:
    // 0x2e0d38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e0d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0d3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e0d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0d40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0d44: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e0d44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0d48: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2e0d48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0d50: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D50u;
        // 0x2e0d54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2e0d58: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0d5c: 0x0  nop
    // NOP
    ctx->pc = 0x2e0d60u;
}