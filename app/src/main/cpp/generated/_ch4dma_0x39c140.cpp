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

// Function: _ch4dma
// Address: 0x39c140 - 0x39c218
void _ch4dma_0x39c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ch4dma_0x39c140");
#endif

    ctx->pc = 0x39c140u;

    // 0x39c140: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39c144: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39c144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39c148: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x39c148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x39c14c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39c14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c150: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39c150u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3));
    // 0x39c154: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39c154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39c158: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39C158u;
    {
        const bool branch_taken_0x39c158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C158u;
        // 0x39c15c: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c158) {
            ctx->pc = 0x39C170u;
            goto label_39c170;
        }
    }
    ctx->pc = 0x39C160u;
    // 0x39c160: 0xf  sync
    ctx->pc = 0x39c160u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x39c164: 0x42000038  ei
    ctx->pc = 0x39c164u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x39c168: 0x3e00008  jr          $ra
    ctx->pc = 0x39C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C168u;
        // 0x39c16c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C170u;
label_39c170:
    // 0x39c170: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x39c170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39c174: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x39C174u;
    {
        const bool branch_taken_0x39c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C174u;
        // 0x39c178: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c174) {
            ctx->pc = 0x39C1D4u;
            goto label_39c1d4;
        }
    }
    ctx->pc = 0x39C17Cu;
    // 0x39c17c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x39c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x39c180: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39c184: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x39c184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x39c188: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39c188u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x39c18c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x39c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x39c190: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x39c190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x39c194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39c198: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x39c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x39c19c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x39c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x39c1a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39c1a0u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x39c1a4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x39c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x39c1a8: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x39c1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x39c1ac: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x39c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x39c1b0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x39c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x39c1b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x39c1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x39c1b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39c1bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39c1c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39c1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39c1c4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x39c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x39c1c8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x39c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x39c1cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x39C1CCu;
    {
        const bool branch_taken_0x39c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C1CCu;
        // 0x39c1d0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c1cc) {
            ctx->pc = 0x39C204u;
            goto label_39c204;
        }
    }
    ctx->pc = 0x39C1D4u;
label_39c1d4:
    // 0x39c1d4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x39c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x39c1d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39c1dc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x39c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x39c1e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x39c1e0u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x39c1e4: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x39c1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x39c1e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39c1ec: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x39c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x39c1f0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x39c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39c1f4: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x39c1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x39c1f8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x39c1fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x39c1fcu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5));
    // 0x39c200: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x39c200u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_39c204:
    // 0x39c204: 0xf  sync
    ctx->pc = 0x39c204u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x39c208: 0x42000038  ei
    ctx->pc = 0x39c208u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x39c20c: 0x3e00008  jr          $ra
    ctx->pc = 0x39C20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C20Cu;
        // 0x39c210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C214u;
    // 0x39c214: 0x0  nop
    ctx->pc = 0x39c214u;
    // NOP
    ctx->pc = 0x39c218u;
}
