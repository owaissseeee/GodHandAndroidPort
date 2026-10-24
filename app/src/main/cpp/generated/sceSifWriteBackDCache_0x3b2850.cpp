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

// Function: sceSifWriteBackDCache
// Address: 0x3b2850 - 0x3b2900
void sceSifWriteBackDCache_0x3b2850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifWriteBackDCache_0x3b2850");
#endif

    switch (ctx->pc) {
        case 0x3b2884u: goto label_3b2884;
        case 0x3b28a4u: goto label_3b28a4;
        default: break;
    }

    ctx->pc = 0x3b2850u;

    // 0x3b2850: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x3b2850u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x3b2854: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x3b2854u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
    // 0x3b2858: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3B2858u;
    {
        const bool branch_taken_0x3b2858 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3B285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2858u;
        // 0x3b285c: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2858) {
            ctx->pc = 0x3B28F4u;
            goto label_3b28f4;
        }
    }
    ctx->pc = 0x3B2860u;
    // 0x3b2860: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x3b2860u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
    // 0x3b2864: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3b2864u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3b2868: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x3b2868u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
    // 0x3b286c: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x3b286cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x3b2870: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x3b2870u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x3b2874: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3b2874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3b2878: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x3b2878u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x3b287c: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B287Cu;
    {
        const bool branch_taken_0x3b287c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B287Cu;
        // 0x3b2880: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b287c) {
            ctx->pc = 0x3B28A0u;
            goto label_3b28a0;
        }
    }
    ctx->pc = 0x3B2884u;
label_3b2884:
    // 0x3b2884: 0xf  sync
    ctx->pc = 0x3b2884u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b2888: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x3b2888u;
    // CACHE instruction (ignored)
    // 0x3b288c: 0xf  sync
    ctx->pc = 0x3b288cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b2890: 0x0  nop
    ctx->pc = 0x3b2890u;
    // NOP
    // 0x3b2894: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3b2894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3b2898: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B2898u;
    {
        const bool branch_taken_0x3b2898 = (GPR_S64(ctx, 9) > 0);
        ctx->pc = 0x3B289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2898u;
        // 0x3b289c: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2898) {
            ctx->pc = 0x3B2884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2884;
        }
    }
    ctx->pc = 0x3B28A0u;
label_3b28a0:
    // 0x3b28a0: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_3b28a4:
    if (ctx->pc == 0x3B28A4u) {
        ctx->pc = 0x3B28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28A0u;
        // 0x3b28a4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B28A8u;
        goto label_fallthrough_0x3b28a0;
    }
    ctx->pc = 0x3B28A0u;
    {
        const bool branch_taken_0x3b28a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28A0u;
        // 0x3b28a4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b28a0) {
            ctx->pc = 0x3B28F4u;
            goto label_3b28f4;
        }
    }
label_fallthrough_0x3b28a0:
    ctx->pc = 0x3B28A8u;
    // 0x3b28a8: 0xf  sync
    ctx->pc = 0x3b28a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28ac: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x3b28acu;
    // CACHE instruction (ignored)
    // 0x3b28b0: 0xf  sync
    ctx->pc = 0x3b28b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28b4: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x3b28b4u;
    // CACHE instruction (ignored)
    // 0x3b28b8: 0xf  sync
    ctx->pc = 0x3b28b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28bc: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x3b28bcu;
    // CACHE instruction (ignored)
    // 0x3b28c0: 0xf  sync
    ctx->pc = 0x3b28c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28c4: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x3b28c4u;
    // CACHE instruction (ignored)
    // 0x3b28c8: 0xf  sync
    ctx->pc = 0x3b28c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28cc: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x3b28ccu;
    // CACHE instruction (ignored)
    // 0x3b28d0: 0xf  sync
    ctx->pc = 0x3b28d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28d4: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x3b28d4u;
    // CACHE instruction (ignored)
    // 0x3b28d8: 0xf  sync
    ctx->pc = 0x3b28d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28dc: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x3b28dcu;
    // CACHE instruction (ignored)
    // 0x3b28e0: 0xf  sync
    ctx->pc = 0x3b28e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28e4: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x3b28e4u;
    // CACHE instruction (ignored)
    // 0x3b28e8: 0xf  sync
    ctx->pc = 0x3b28e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b28ec: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3B28ECu;
    {
        const bool branch_taken_0x3b28ec = (GPR_S64(ctx, 10) > 0);
        ctx->pc = 0x3B28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B28ECu;
        // 0x3b28f0: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b28ec) {
            ctx->pc = 0x3B28A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b28a4;
        }
    }
    ctx->pc = 0x3B28F4u;
label_3b28f4:
    // 0x3b28f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B28F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B28F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B28FCu;
    // 0x3b28fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B28FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B28FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2904u;
}
