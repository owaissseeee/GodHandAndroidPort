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

// Function: StreamBuf_startRead
// Address: 0x2d3278 - 0x2d3388
void StreamBuf_startRead_0x2d3278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StreamBuf_startRead_0x2d3278");
#endif

    switch (ctx->pc) {
        case 0x2d3340u: goto label_2d3340;
        default: break;
    }

    ctx->pc = 0x2d3278u;

    // 0x2d3278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d3278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d327c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d3280: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d3280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d3284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3288: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d328c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3290: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d3290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d3294: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3294u;
    {
        const bool branch_taken_0x2d3294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3294) {
            ctx->pc = 0x2D3298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3294u;
            // 0x2d3298: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D32A4u;
            goto label_2d32a4;
        }
    }
    ctx->pc = 0x2D329Cu;
    // 0x2d329c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D329Cu;
    {
        const bool branch_taken_0x2d329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D329Cu;
        // 0x2d32a0: 0x8e110074  lw          $s1, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d329c) {
            ctx->pc = 0x2D32B0u;
            goto label_2d32b0;
        }
    }
    ctx->pc = 0x2D32A4u;
label_2d32a4:
    // 0x2d32a4: 0x8e110068  lw          $s1, 0x68($s0)
    ctx->pc = 0x2d32a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2d32a8: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2d32a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d32ac: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x2d32acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2d32b0:
    // 0x2d32b0: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D32B0u;
    {
        const bool branch_taken_0x2d32b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d32b0) {
            ctx->pc = 0x2D32B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D32B0u;
            // 0x2d32b4: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D32CCu;
            goto label_2d32cc;
        }
    }
    ctx->pc = 0x2D32B8u;
    // 0x2d32b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2d32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d32bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d32c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d32c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D32C4u;
    {
        const bool branch_taken_0x2d32c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32C4u;
        // 0x2d32c8: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32c4) {
            ctx->pc = 0x2D336Cu;
            goto label_2d336c;
        }
    }
    ctx->pc = 0x2D32CCu;
label_2d32cc:
    // 0x2d32cc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2d32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d32d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d32d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d32d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32d8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d32dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d32dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d32e0: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x2d32e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
    // 0x2d32e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d32e8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D32E8u;
    {
        const bool branch_taken_0x2d32e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32E8u;
        // 0x2d32ec: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32e8) {
            ctx->pc = 0x2D330Cu;
            goto label_2d330c;
        }
    }
    ctx->pc = 0x2D32F0u;
    // 0x2d32f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d32f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d32f4: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x2d32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d32f8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2d32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2d32fc: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x2d32fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d3300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d3300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3304: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3304u;
    {
        const bool branch_taken_0x2d3304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3304u;
        // 0x2d3308: 0xac820044  sw          $v0, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3304) {
            ctx->pc = 0x2D3320u;
            goto label_2d3320;
        }
    }
    ctx->pc = 0x2D330Cu;
label_2d330c:
    // 0x2d330c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2d330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d3310: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x2d3310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d3314: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2d3314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2d3318: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2d3318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d331c: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x2d331cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
label_2d3320:
    // 0x2d3320: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x2d3320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2d3324: 0x24c40040  addiu       $a0, $a2, 0x40
    ctx->pc = 0x2d3324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2d3328: 0xac710048  sw          $s1, 0x48($v1)
    ctx->pc = 0x2d3328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 17));
    // 0x2d332c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d332cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3330: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d3334: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2d3334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2d3338: 0xc0ec852  jal         func_3B2148
    ctx->pc = 0x2D3338u;
    SET_GPR_U32(ctx, 31, 0x2D3340u);
    ctx->pc = 0x2D333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3338u;
    // 0x2d333c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2148u, 0x2D3338u, 0x2D3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3340u;
label_2d3340:
    // 0x2d3340: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2d3340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2d3344: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x2d3344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x2d3348: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2d3348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2d334c: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x2d334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2d3350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3354: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d3354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d3358: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2d3358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d335c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2d335cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x2d3360: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x2d3360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x2d3364: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2d3364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x2d3368: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2d3368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2d336c:
    // 0x2d336c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d336cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3370: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d3370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3374: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d3374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d337c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D337Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D337Cu;
        // 0x2d3380: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D337Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3384u;
    // 0x2d3384: 0x0  nop
    ctx->pc = 0x2d3384u;
    // NOP
    ctx->pc = 0x2d3388u;
}
