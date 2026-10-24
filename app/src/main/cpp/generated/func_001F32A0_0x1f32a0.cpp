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

// Function: func_001F32A0
// Address: 0x1f32a0 - 0x1f33f8
void func_001F32A0_0x1f32a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F32A0_0x1f32a0");
#endif

    switch (ctx->pc) {
        case 0x1f3334u: goto label_1f3334;
        case 0x1f3344u: goto label_1f3344;
        case 0x1f33d4u: goto label_1f33d4;
        default: break;
    }

    ctx->pc = 0x1f32a0u;

    // 0x1f32a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f32a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f32a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f32a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f32ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f32acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32b0: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x1f32b0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f32b4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1f32b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1f32b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f32b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f32bc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F32BCu;
    {
        const bool branch_taken_0x1f32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32BCu;
        // 0x1f32c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32bc) {
            ctx->pc = 0x1F33E8u;
            goto label_1f33e8;
        }
    }
    ctx->pc = 0x1F32C4u;
    // 0x1f32c4: 0x8e030928  lw          $v1, 0x928($s0)
    ctx->pc = 0x1f32c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
    // 0x1f32c8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F32C8u;
    {
        const bool branch_taken_0x1f32c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32C8u;
        // 0x1f32cc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32c8) {
            ctx->pc = 0x1F3354u;
            goto label_1f3354;
        }
    }
    ctx->pc = 0x1F32D0u;
    // 0x1f32d0: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1F32D0u;
    {
        const bool branch_taken_0x1f32d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f32d0) {
            ctx->pc = 0x1F32D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F32D0u;
            // 0x1f32d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F33ECu;
            goto label_1f33ec;
        }
    }
    ctx->pc = 0x1F32D8u;
    // 0x1f32d8: 0x54600044  bnel        $v1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x1F32D8u;
    {
        const bool branch_taken_0x1f32d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f32d8) {
            ctx->pc = 0x1F32DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F32D8u;
            // 0x1f32dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F33ECu;
            goto label_1f33ec;
        }
    }
    ctx->pc = 0x1F32E0u;
    // 0x1f32e0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x1f32e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f32e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f32e8: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x1f32e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x1f32ec: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f32ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f32f0: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1f32f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1f32f4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1f32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1f32f8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f32f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f32fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f32fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f3300: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1f3300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1f3304: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1f3304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1f3308: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f3308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f330c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x1f330cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x1f3310: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f3310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f3314: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f3314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f3318: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f3318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f331c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1f331cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1f3320: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f3320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f3324: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1f3324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1f3328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f332c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1F332Cu;
    SET_GPR_U32(ctx, 31, 0x1F3334u);
    ctx->pc = 0x1F3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F332Cu;
    // 0x1f3330: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1F332Cu, 0x1F3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3334u;
label_1f3334:
    // 0x1f3334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3338: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f333c: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F333Cu;
    SET_GPR_U32(ctx, 31, 0x1F3344u);
    ctx->pc = 0x1F3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F333Cu;
    // 0x1f3340: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F333Cu, 0x1F3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3344u;
label_1f3344:
    // 0x1f3344: 0x8e020928  lw          $v0, 0x928($s0)
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
    // 0x1f3348: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1f3348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f334c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F334Cu;
    {
        const bool branch_taken_0x1f334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F334Cu;
        // 0x1f3350: 0xae03092c  sw          $v1, 0x92C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f334c) {
            ctx->pc = 0x1F33D8u;
            goto label_1f33d8;
        }
    }
    ctx->pc = 0x1F3354u;
label_1f3354:
    // 0x1f3354: 0x8e02092c  lw          $v0, 0x92C($s0)
    ctx->pc = 0x1f3354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2348)));
    // 0x1f3358: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F3358u;
    {
        const bool branch_taken_0x1f3358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3358u;
        // 0x1f335c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3358) {
            ctx->pc = 0x1F33E4u;
            goto label_1f33e4;
        }
    }
    ctx->pc = 0x1F3360u;
    // 0x1f3360: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1f3360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f3364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f3364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f3368: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1f3368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1f336c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f3370: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1f3370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1f3374: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1f3374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1f3378: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1f3378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1f337c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f337cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f3380: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f3380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f3384: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1f3384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1f3388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f3388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f338c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1f338cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1f3390: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1f3390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1f3394: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1f3398: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f3398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f339c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1f339cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f33a0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1f33a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1f33a4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1f33a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1f33a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f33a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f33ac: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1f33acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1f33b0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f33b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f33b4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f33b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f33b8: 0x3c024d00  lui         $v0, 0x4D00
    ctx->pc = 0x1f33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
    // 0x1f33bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f33bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f33c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f33c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f33c4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1f33c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f33c8: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1f33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1f33cc: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1F33CCu;
    SET_GPR_U32(ctx, 31, 0x1F33D4u);
    ctx->pc = 0x1F33D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33CCu;
    // 0x1f33d0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1F33CCu, 0x1F33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33D4u;
label_1f33d4:
    // 0x1f33d4: 0x8e020928  lw          $v0, 0x928($s0)
    ctx->pc = 0x1f33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2344)));
label_1f33d8:
    // 0x1f33d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f33dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F33DCu;
    {
        const bool branch_taken_0x1f33dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33DCu;
        // 0x1f33e0: 0xae020928  sw          $v0, 0x928($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33dc) {
            ctx->pc = 0x1F33E8u;
            goto label_1f33e8;
        }
    }
    ctx->pc = 0x1F33E4u;
label_1f33e4:
    // 0x1f33e4: 0xae02092c  sw          $v0, 0x92C($s0)
    ctx->pc = 0x1f33e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2348), GPR_U32(ctx, 2));
label_1f33e8:
    // 0x1f33e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f33e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f33ec:
    // 0x1f33ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f33ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f33f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F33F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F33F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33F0u;
        // 0x1f33f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F33F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F33F8u;
}
