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

// Function: func_001A1690
// Address: 0x1a1690 - 0x1a1768
void func_001A1690_0x1a1690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A1690_0x1a1690");
#endif

    switch (ctx->pc) {
        case 0x1a16c8u: goto label_1a16c8;
        case 0x1a16d4u: goto label_1a16d4;
        default: break;
    }

    ctx->pc = 0x1a1690u;

    // 0x1a1690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a1690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a1694: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a1694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a1698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a169c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a16a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a16a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a16a4: 0x26110600  addiu       $s1, $s0, 0x600
    ctx->pc = 0x1a16a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x1a16a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a16a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a16ac: 0x26120d98  addiu       $s2, $s0, 0xD98
    ctx->pc = 0x1a16acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3480));
    // 0x1a16b0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a16b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a16b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a16b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16b8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1a16b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1a16bc: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1a16bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a16c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a16c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a16c4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a16c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a16c8:
    // 0x1a16c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a16c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a16cc: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1A16CCu;
    SET_GPR_U32(ctx, 31, 0x1A16D4u);
    ctx->pc = 0x1A16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A16CCu;
    // 0x1a16d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1A16CCu, 0x1A16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A16D4u;
label_1a16d4:
    // 0x1a16d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a16d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a16d8: 0x54b50016  bnel        $a1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A16D8u;
    {
        const bool branch_taken_0x1a16d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a16d8) {
            ctx->pc = 0x1A16DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A16D8u;
            // 0x1a16dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1734u;
            goto label_1a1734;
        }
    }
    ctx->pc = 0x1A16E0u;
    // 0x1a16e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a16e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a16e4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1a16e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a16e8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1a16e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1a16ec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a16ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a16f0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a16f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a16f4: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A16F4u;
    {
        const bool branch_taken_0x1a16f4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A16F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A16F4u;
        // 0x1a16f8: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a16f4) {
            ctx->pc = 0x1A1720u;
            goto label_1a1720;
        }
    }
    ctx->pc = 0x1A16FCu;
    // 0x1a16fc: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1a16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1a1700: 0xa2130d9c  sb          $s3, 0xD9C($s0)
    ctx->pc = 0x1a1700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3484), (uint8_t)GPR_U32(ctx, 19));
    // 0x1a1704: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a1704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a1708: 0xa21402f4  sb          $s4, 0x2F4($s0)
    ctx->pc = 0x1a1708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x1a170c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a170cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1710: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a1710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1714: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a1714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1718u;
    {
        const bool branch_taken_0x1a1718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1718u;
        // 0x1a171c: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1718) {
            ctx->pc = 0x1A1730u;
            goto label_1a1730;
        }
    }
    ctx->pc = 0x1A1720u;
label_1a1720:
    // 0x1a1720: 0xa20502f4  sb          $a1, 0x2F4($s0)
    ctx->pc = 0x1a1720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a1724: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a1724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1728: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a1728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a172c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a172cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a1730:
    // 0x1a1730: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a1734:
    // 0x1a1734: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1a1738: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1a1738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a173c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1A173Cu;
    {
        const bool branch_taken_0x1a173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A173Cu;
        // 0x1a1740: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a173c) {
            ctx->pc = 0x1A16C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a16c8;
        }
    }
    ctx->pc = 0x1A1744u;
    // 0x1a1744: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a1744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1748: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a1748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a174c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a174cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1750: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a1750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1754: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a1754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1758: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1a1758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a175c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1760: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1760u;
        // 0x1a1764: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1768u;
}
