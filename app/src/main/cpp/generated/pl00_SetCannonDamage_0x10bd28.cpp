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

// Function: pl00_SetCannonDamage
// Address: 0x10bd28 - 0x10be10
void pl00_SetCannonDamage_0x10bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_SetCannonDamage_0x10bd28");
#endif

    switch (ctx->pc) {
        case 0x10bd88u: goto label_10bd88;
        case 0x10bdb0u: goto label_10bdb0;
        default: break;
    }

    ctx->pc = 0x10bd28u;

    // 0x10bd28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10bd2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10bd30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10bd34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10bd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd38: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x10bd38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x10bd3c: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x10BD3Cu;
    {
        const bool branch_taken_0x10bd3c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x10BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD3Cu;
        // 0x10bd40: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd3c) {
            ctx->pc = 0x10BDFCu;
            goto label_10bdfc;
        }
    }
    ctx->pc = 0x10BD44u;
    // 0x10bd44: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x10bd44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x10bd48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10bd48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10bd4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BD4Cu;
    {
        const bool branch_taken_0x10bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD4Cu;
        // 0x10bd50: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd4c) {
            ctx->pc = 0x10BD60u;
            goto label_10bd60;
        }
    }
    ctx->pc = 0x10BD54u;
    // 0x10bd54: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x10bd58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BD58u;
    {
        const bool branch_taken_0x10bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD58u;
        // 0x10bd5c: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd58) {
            ctx->pc = 0x10BD64u;
            goto label_10bd64;
        }
    }
    ctx->pc = 0x10BD60u;
label_10bd60:
    // 0x10bd60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bd64:
    // 0x10bd64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BD64u;
    {
        const bool branch_taken_0x10bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BD64u;
        // 0x10bd68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd64) {
            ctx->pc = 0x10BD88u;
            goto label_10bd88;
        }
    }
    ctx->pc = 0x10BD6Cu;
    // 0x10bd6c: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x10bd70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10bd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10bd74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10bd74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10bd78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd80: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x10BD80u;
    SET_GPR_U32(ctx, 31, 0x10BD88u);
    ctx->pc = 0x10BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BD80u;
    // 0x10bd84: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x10BD80u, 0x10BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BD88u;
label_10bd88:
    // 0x10bd88: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x10bd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10bd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd90: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x10bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x10bd94: 0x24060123  addiu       $a2, $zero, 0x123
    ctx->pc = 0x10bd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x10bd98: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10bd98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10bd9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bda0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10bda0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bda4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10bda4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bda8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x10BDA8u;
    SET_GPR_U32(ctx, 31, 0x10BDB0u);
    ctx->pc = 0x10BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BDA8u;
    // 0x10bdac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x10BDA8u, 0x10BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BDB0u;
label_10bdb0:
    // 0x10bdb0: 0x9603054a  lhu         $v1, 0x54A($s0)
    ctx->pc = 0x10bdb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x10bdb4: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x10bdb8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x10bdbc: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BDBCu;
    {
        const bool branch_taken_0x10bdbc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDBCu;
        // 0x10bdc0: 0xa603054a  sh          $v1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdbc) {
            ctx->pc = 0x10BDE4u;
            goto label_10bde4;
        }
    }
    ctx->pc = 0x10BDC4u;
    // 0x10bdc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bdc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10bdcc: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x10bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x10bdd0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x10bdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10bdd4: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x10bdd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x10bdd8: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x10bdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x10bddc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10BDDCu;
    {
        const bool branch_taken_0x10bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDDCu;
        // 0x10bde0: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bddc) {
            ctx->pc = 0x10BDFCu;
            goto label_10bdfc;
        }
    }
    ctx->pc = 0x10BDE4u;
label_10bde4:
    // 0x10bde4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10bde8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bdec: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x10bdecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10bdf0: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x10bdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x10bdf4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10bdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10bdf8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10bdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_10bdfc:
    // 0x10bdfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10bdfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10be00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10be04: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE04u;
        // 0x10be08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BE0Cu;
    // 0x10be0c: 0x0  nop
    ctx->pc = 0x10be0cu;
    // NOP
    ctx->pc = 0x10be10u;
}
