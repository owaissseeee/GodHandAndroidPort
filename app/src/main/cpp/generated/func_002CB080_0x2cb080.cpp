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

// Function: func_002CB080
// Address: 0x2cb080 - 0x2cb128
void func_002CB080_0x2cb080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CB080_0x2cb080");
#endif

    switch (ctx->pc) {
        case 0x2cb0e8u: goto label_2cb0e8;
        default: break;
    }

    ctx->pc = 0x2cb080u;

    // 0x2cb080: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2cb080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2cb084: 0x2406f7ff  addiu       $a2, $zero, -0x801
    ctx->pc = 0x2cb084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2cb088: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2cb088u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2cb08c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2cb08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2cb090: 0xac437a84  sw          $v1, 0x7A84($v0)
    ctx->pc = 0x2cb090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31364), GPR_U32(ctx, 3));
    // 0x2cb094: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CB094u;
    {
        const bool branch_taken_0x2cb094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB094u;
        // 0x2cb098: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb094) {
            ctx->pc = 0x2CB120u;
            goto label_2cb120;
        }
    }
    ctx->pc = 0x2CB09Cu;
    // 0x2cb09c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2cb09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb0a4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2cb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2cb0a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb0a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb0ac: 0x0  nop
    ctx->pc = 0x2cb0acu;
    // NOP
    // 0x2cb0b0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x2CB0B0u;
    {
        const bool branch_taken_0x2cb0b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB0B0u;
        // 0x2cb0b4: 0xa23021  addu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0b0) {
            ctx->pc = 0x2CB120u;
            goto label_2cb120;
        }
    }
    ctx->pc = 0x2CB0B8u;
    // 0x2cb0b8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2cb0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2cb0bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cb0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cb0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cb0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb0c4: 0x0  nop
    ctx->pc = 0x2cb0c4u;
    // NOP
    // 0x2cb0c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb0c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb0cc: 0x0  nop
    ctx->pc = 0x2cb0ccu;
    // NOP
    // 0x2cb0d0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB0D0u;
    {
        const bool branch_taken_0x2cb0d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb0d0) {
            ctx->pc = 0x2CB0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB0D0u;
            // 0x2cb0d4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB0E8u;
            goto label_2cb0e8;
        }
    }
    ctx->pc = 0x2CB0D8u;
    // 0x2cb0d8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2cb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2cb0dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB0DCu;
    {
        const bool branch_taken_0x2cb0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0dc) {
            ctx->pc = 0x2CB120u;
            goto label_2cb120;
        }
    }
    ctx->pc = 0x2CB0E4u;
    // 0x2cb0e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cb0e8:
    // 0x2cb0e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2cb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2cb0ec: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2cb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2cb0f0: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x2cb0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x2cb0f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cb0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2cb0f8: 0xa0c00012  sb          $zero, 0x12($a2)
    ctx->pc = 0x2cb0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb0fc: 0xa0c00013  sb          $zero, 0x13($a2)
    ctx->pc = 0x2cb0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb100: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB100u;
        // 0x2cb104: 0xacc00014  sw          $zero, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB120u;
            goto label_2cb120;
        }
    }
    ctx->pc = 0x2CB108u;
    // 0x2cb108: 0x90c2000e  lbu         $v0, 0xE($a2)
    ctx->pc = 0x2cb108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x2cb10c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cb110: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2cb110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cb114: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x2cb114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cb118: 0x54c0fff3  bnel        $a2, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CB118u;
    {
        const bool branch_taken_0x2cb118 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb118) {
            ctx->pc = 0x2CB11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB118u;
            // 0x2cb11c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb0e8;
        }
    }
    ctx->pc = 0x2CB120u;
label_2cb120:
    // 0x2cb120: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB128u;
}
