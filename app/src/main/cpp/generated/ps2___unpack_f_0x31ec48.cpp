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

// Function: __unpack_f
// Address: 0x31ec48 - 0x31ed08
void ps2___unpack_f_0x31ec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x31ec48");
#endif

    ctx->pc = 0x31ec48u;

    // 0x31ec48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31ec4c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x31ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x31ec50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31ec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31ec54: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x31ec58: 0x235c2  srl         $a2, $v0, 23
    ctx->pc = 0x31ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x31ec5c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x31ec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31ec60: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x31ec60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x31ec64: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EC64u;
    {
        const bool branch_taken_0x31ec64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC64u;
        // 0x31ec68: 0xaca40004  sw          $a0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec64) {
            ctx->pc = 0x31EC78u;
            goto label_31ec78;
        }
    }
    ctx->pc = 0x31EC6Cu;
    // 0x31ec6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ec70: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC70u;
        // 0x31ec74: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC78u;
label_31ec78:
    // 0x31ec78: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31ec7c: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31EC7Cu;
    {
        const bool branch_taken_0x31ec7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x31EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC7Cu;
        // 0x31ec80: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec7c) {
            ctx->pc = 0x31ECB8u;
            goto label_31ecb8;
        }
    }
    ctx->pc = 0x31EC84u;
    // 0x31ec84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EC84u;
    {
        const bool branch_taken_0x31ec84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC84u;
        // 0x31ec88: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec84) {
            ctx->pc = 0x31EC98u;
            goto label_31ec98;
        }
    }
    ctx->pc = 0x31EC8Cu;
    // 0x31ec8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31ec90: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC90u;
        // 0x31ec94: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC98u;
label_31ec98:
    // 0x31ec98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31ec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31ec9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EC9Cu;
    {
        const bool branch_taken_0x31ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC9Cu;
        // 0x31eca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec9c) {
            ctx->pc = 0x31ECACu;
            goto label_31ecac;
        }
    }
    ctx->pc = 0x31ECA4u;
    // 0x31eca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31ECA4u;
    {
        const bool branch_taken_0x31eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECA4u;
        // 0x31eca8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eca4) {
            ctx->pc = 0x31ECB0u;
            goto label_31ecb0;
        }
    }
    ctx->pc = 0x31ECACu;
label_31ecac:
    // 0x31ecac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x31ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_31ecb0:
    // 0x31ecb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31ECB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECB0u;
        // 0x31ecb4: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ECB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ECB8u;
label_31ecb8:
    // 0x31ecb8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x31ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x31ecbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31ecbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31ecc0: 0x24c4ff81  addiu       $a0, $a2, -0x7F
    ctx->pc = 0x31ecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x31ecc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ecc8: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x31ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x31eccc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x31ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x31ecd0: 0x3e00008  jr          $ra
    ctx->pc = 0x31ECD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ECD0u;
        // 0x31ecd4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ECD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ECD8u;
    // 0x31ecd8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x31ecd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ecdc: 0x0  nop
    ctx->pc = 0x31ecdcu;
    // NOP
    // 0x31ece0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ece4: 0x0  nop
    ctx->pc = 0x31ece4u;
    // NOP
    // 0x31ece8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31ecec: 0x0  nop
    ctx->pc = 0x31ececu;
    // NOP
    // 0x31ecf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ecf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ecf4: 0x0  nop
    ctx->pc = 0x31ecf4u;
    // NOP
    // 0x31ecf8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31ecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ecfc: 0x0  nop
    ctx->pc = 0x31ecfcu;
    // NOP
    // 0x31ed00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31ed04: 0x0  nop
    ctx->pc = 0x31ed04u;
    // NOP
    ctx->pc = 0x31ed08u;
}
