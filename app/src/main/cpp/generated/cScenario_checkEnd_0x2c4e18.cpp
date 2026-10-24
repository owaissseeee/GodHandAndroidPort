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

// Function: cScenario_checkEnd
// Address: 0x2c4e18 - 0x2c4ef0
void cScenario_checkEnd_0x2c4e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_checkEnd_0x2c4e18");
#endif

    switch (ctx->pc) {
        case 0x2c4e98u: goto label_2c4e98;
        case 0x2c4eacu: goto label_2c4eac;
        case 0x2c4eccu: goto label_2c4ecc;
        default: break;
    }

    ctx->pc = 0x2c4e18u;

    // 0x2c4e18: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x2c4e1c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4e20: 0x8cc57a84  lw          $a1, 0x7A84($a2)
    ctx->pc = 0x2c4e20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A84u));
    // 0x2c4e24: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2c4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2c4e28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c4e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c4e2c: 0x24c37a84  addiu       $v1, $a2, 0x7A84
    ctx->pc = 0x2c4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 31364));
    // 0x2c4e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4e34: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2c4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2c4e38: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C4E38u;
    {
        const bool branch_taken_0x2c4e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E38u;
        // 0x2c4e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e38) {
            ctx->pc = 0x2C4ED8u;
            goto label_2c4ed8;
        }
    }
    ctx->pc = 0x2C4E40u;
    // 0x2c4e40: 0x5113a  dsrl        $v0, $a1, 4
    ctx->pc = 0x2c4e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 4);
    // 0x2c4e44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4e48: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C4E48u;
    {
        const bool branch_taken_0x2c4e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E48u;
        // 0x2c4e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e48) {
            ctx->pc = 0x2C4EDCu;
            goto label_2c4edc;
        }
    }
    ctx->pc = 0x2C4E50u;
    // 0x2c4e50: 0x92020108  lbu         $v0, 0x108($s0)
    ctx->pc = 0x2c4e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2c4e54: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4E54u;
    {
        const bool branch_taken_0x2c4e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E54u;
        // 0x2c4e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e54) {
            ctx->pc = 0x2C4EDCu;
            goto label_2c4edc;
        }
    }
    ctx->pc = 0x2C4E5Cu;
    // 0x2c4e5c: 0xdc62fbbc  ld          $v0, -0x444($v1)
    ctx->pc = 0x2c4e5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294966204)));
    // 0x2c4e60: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2c4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2c4e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c4e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2c4e68: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4E68u;
    {
        const bool branch_taken_0x2c4e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E68u;
        // 0x2c4e6c: 0x34a20010  ori         $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e68) {
            ctx->pc = 0x2C4ED8u;
            goto label_2c4ed8;
        }
    }
    ctx->pc = 0x2C4E70u;
    // 0x2c4e70: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2c4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2c4e74: 0xacc27a84  sw          $v0, 0x7A84($a2)
    ctx->pc = 0x2c4e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31364), GPR_U32(ctx, 2));
    // 0x2c4e78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e80: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x2c4e84: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x2c4e84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c4e88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e8c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x2c4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x2c4e90: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x2C4E90u;
    SET_GPR_U32(ctx, 31, 0x2C4E98u);
    ctx->pc = 0x2C4E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E90u;
    // 0x2c4e94: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x2C4E90u, 0x2C4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4E98u;
label_2c4e98:
    // 0x2c4e98: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c4e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ea0: 0x24a54ef0  addiu       $a1, $a1, 0x4EF0
    ctx->pc = 0x2c4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20208));
    // 0x2c4ea4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x2C4EA4u;
    SET_GPR_U32(ctx, 31, 0x2C4EACu);
    ctx->pc = 0x2C4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4EA4u;
    // 0x2c4ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x2C4EA4u, 0x2C4EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4EACu;
label_2c4eac:
    // 0x2c4eac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2c4eb0: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2c4eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2c4eb4: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x2c4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c4eb8: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x2c4eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x2c4ebc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2c4ec0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2c4ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c4ec4: 0xc0b567c  jal         func_2D59F0
    ctx->pc = 0x2C4EC4u;
    SET_GPR_U32(ctx, 31, 0x2C4ECCu);
    ctx->pc = 0x2C4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4EC4u;
    // 0x2c4ec8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D59F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D59F0u, 0x2C4EC4u, 0x2C4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4ECCu;
label_2c4ecc:
    // 0x2c4ecc: 0xa2000108  sb          $zero, 0x108($s0)
    ctx->pc = 0x2c4eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4ED0u;
    {
        const bool branch_taken_0x2c4ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4ED0u;
        // 0x2c4ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ed0) {
            ctx->pc = 0x2C4EDCu;
            goto label_2c4edc;
        }
    }
    ctx->pc = 0x2C4ED8u;
label_2c4ed8:
    // 0x2c4ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4edc:
    // 0x2c4edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c4edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EE4u;
        // 0x2c4ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4EECu;
    // 0x2c4eec: 0x0  nop
    ctx->pc = 0x2c4eecu;
    // NOP
    ctx->pc = 0x2c4ef0u;
}
