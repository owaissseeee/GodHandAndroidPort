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

// Function: __umoddi3
// Address: 0x3b9458 - 0x3b9998
void ps2___umoddi3_0x3b9458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___umoddi3_0x3b9458");
#endif

    ctx->pc = 0x3b9458u;

    // 0x3b9458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b9458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b945c: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x3b945cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3b9460: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x3b9460u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3b9464: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x3b9464u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b9468: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3b9468u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3b946c: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x3b946cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3b9470: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x3b9470u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x3b9474: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x3B9474u;
    {
        const bool branch_taken_0x3b9474 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9474u;
        // 0x3b9478: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9474) {
            ctx->pc = 0x3B9744u;
            goto label_3b9744;
        }
    }
    ctx->pc = 0x3B947Cu;
    // 0x3b947c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x3b947cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9480: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B9480u;
    {
        const bool branch_taken_0x3b9480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9480u;
        // 0x3b9484: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9480) {
            ctx->pc = 0x3B9510u;
            goto label_3b9510;
        }
    }
    ctx->pc = 0x3B9488u;
    // 0x3b9488: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b9488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b948c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B948Cu;
    {
        const bool branch_taken_0x3b948c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B948Cu;
        // 0x3b9490: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b948c) {
            ctx->pc = 0x3B94A8u;
            goto label_3b94a8;
        }
    }
    ctx->pc = 0x3B9494u;
    // 0x3b9494: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3b9494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b9498: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b9498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b949c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B949Cu;
    {
        const bool branch_taken_0x3b949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B949Cu;
        // 0x3b94a0: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b949c) {
            ctx->pc = 0x3B94C0u;
            goto label_3b94c0;
        }
    }
    ctx->pc = 0x3B94A4u;
    // 0x3b94a4: 0x0  nop
    ctx->pc = 0x3b94a4u;
    // NOP
label_3b94a8:
    // 0x3b94a8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b94ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b94acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b94b0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b94b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b94b4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b94b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b94b8: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b94b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b94bc: 0x0  nop
    ctx->pc = 0x3b94bcu;
    // NOP
label_3b94c0:
    // 0x3b94c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b94c4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3b94c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b94c8: 0x24420718  addiu       $v0, $v0, 0x718
    ctx->pc = 0x3b94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1816));
    // 0x3b94cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3b94ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b94d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b94d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b94d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b94d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b94d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b94dc: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3b94dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3b94e0: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B94E0u;
    {
        const bool branch_taken_0x3b94e0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B94E0u;
        // 0x3b94e4: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b94e0) {
            ctx->pc = 0x3B94FCu;
            goto label_3b94fc;
        }
    }
    ctx->pc = 0x3B94E8u;
    // 0x3b94e8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3b94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b94ec: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x3b94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x3b94f0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3b94f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b94f4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3b94f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b94f8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3b94f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_3b94fc:
    // 0x3b94fc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3b94fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b9500: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x3b9500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b9504: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3B9504u;
    {
        const bool branch_taken_0x3b9504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9504u;
        // 0x3b9508: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9504) {
            ctx->pc = 0x3B9688u;
            goto label_3b9688;
        }
    }
    ctx->pc = 0x3B950Cu;
    // 0x3b950c: 0x0  nop
    ctx->pc = 0x3b950cu;
    // NOP
label_3b9510:
    // 0x3b9510: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9510u;
    {
        const bool branch_taken_0x3b9510 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9510u;
        // 0x3b9514: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9510) {
            ctx->pc = 0x3B9538u;
            goto label_3b9538;
        }
    }
    ctx->pc = 0x3B9518u;
    // 0x3b9518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b9518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b951c: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B951Cu;
    {
        const bool branch_taken_0x3b951c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b951c) {
            ctx->pc = 0x3B9520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B951Cu;
            // 0x3b9520: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9524u;
            goto label_3b9524;
        }
    }
    ctx->pc = 0x3B9524u;
label_3b9524:
    // 0x3b9524: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x3b9524u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3b9528: 0x1012  mflo        $v0
    ctx->pc = 0x3b9528u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b952c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b952cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9530: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3b9530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b9534: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b9534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3b9538:
    // 0x3b9538: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9538u;
    {
        const bool branch_taken_0x3b9538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9538u;
        // 0x3b953c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9538) {
            ctx->pc = 0x3B9550u;
            goto label_3b9550;
        }
    }
    ctx->pc = 0x3B9540u;
    // 0x3b9540: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x3b9540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b9544: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b9544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b9548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9548u;
    {
        const bool branch_taken_0x3b9548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9548u;
        // 0x3b954c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9548) {
            ctx->pc = 0x3B9568u;
            goto label_3b9568;
        }
    }
    ctx->pc = 0x3B9550u;
label_3b9550:
    // 0x3b9550: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b9550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b9554: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b9554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b9558: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b9558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b955c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x3b955cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9560: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b9560u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b9564: 0x0  nop
    ctx->pc = 0x3b9564u;
    // NOP
label_3b9568:
    // 0x3b9568: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b9568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b956c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x3b956cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b9570: 0x24420718  addiu       $v0, $v0, 0x718
    ctx->pc = 0x3b9570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1816));
    // 0x3b9574: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3b9574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b9578: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b9578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b957c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b957cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b9580: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b9584: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3b9584u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3b9588: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9588u;
    {
        const bool branch_taken_0x3b9588 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9588u;
        // 0x3b958c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9588) {
            ctx->pc = 0x3B95A0u;
            goto label_3b95a0;
        }
    }
    ctx->pc = 0x3B9590u;
    // 0x3b9590: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x3b9590u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x3b9594: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3b9594u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b9598: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B9598u;
    {
        const bool branch_taken_0x3b9598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9598u;
        // 0x3b959c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9598) {
            ctx->pc = 0x3B967Cu;
            goto label_3b967c;
        }
    }
    ctx->pc = 0x3B95A0u;
label_3b95a0:
    // 0x3b95a0: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3b95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b95a4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3b95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b95a8: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3b95a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b95ac: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3b95acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b95b0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3b95b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b95b4: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3b95b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b95b8: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x3b95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x3b95bc: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x3b95bcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b95c0: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x3b95c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3b95c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3b95c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b95c8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3b95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3b95cc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B95CCu;
    {
        const bool branch_taken_0x3b95cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b95cc) {
            ctx->pc = 0x3B95D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B95CCu;
            // 0x3b95d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B95D4u;
            goto label_3b95d4;
        }
    }
    ctx->pc = 0x3B95D4u;
label_3b95d4:
    // 0x3b95d4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3b95d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b95d8: 0x1012  mflo        $v0
    ctx->pc = 0x3b95d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b95dc: 0x1810  mfhi        $v1
    ctx->pc = 0x3b95dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b95e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b95e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b95e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b95e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b95e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b95e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b95ec: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x3b95ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b95f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b95f4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b95f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b95f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B95F8u;
    {
        const bool branch_taken_0x3b95f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b95f8) {
            ctx->pc = 0x3B95FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B95F8u;
            // 0x3b95fc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9624u;
            goto label_3b9624;
        }
    }
    ctx->pc = 0x3B9600u;
    // 0x3b9600: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b9600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b9604: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b9604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9608: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9608u;
    {
        const bool branch_taken_0x3b9608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9608) {
            ctx->pc = 0x3B960Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9608u;
            // 0x3b960c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9624u;
            goto label_3b9624;
        }
    }
    ctx->pc = 0x3B9610u;
    // 0x3b9610: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9614: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B9614u;
    {
        const bool branch_taken_0x3b9614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9614) {
            ctx->pc = 0x3B9618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9614u;
            // 0x3b9618: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9620u;
            goto label_3b9620;
        }
    }
    ctx->pc = 0x3B961Cu;
    // 0x3b961c: 0x0  nop
    ctx->pc = 0x3b961cu;
    // NOP
label_3b9620:
    // 0x3b9620: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b9620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b9624:
    // 0x3b9624: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3b9624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b9628: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x3b9628u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b962c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B962Cu;
    {
        const bool branch_taken_0x3b962c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b962c) {
            ctx->pc = 0x3B9630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B962Cu;
            // 0x3b9630: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9634u;
            goto label_3b9634;
        }
    }
    ctx->pc = 0x3B9634u;
label_3b9634:
    // 0x3b9634: 0x1012  mflo        $v0
    ctx->pc = 0x3b9634u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9638: 0x1810  mfhi        $v1
    ctx->pc = 0x3b9638u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b963c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b963cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b9640: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b9640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b9644: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b9644u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b9648: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x3b9648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b964c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b964cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b9650: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9654: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B9654u;
    {
        const bool branch_taken_0x3b9654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9654) {
            ctx->pc = 0x3B9658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9654u;
            // 0x3b9658: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B967Cu;
            goto label_3b967c;
        }
    }
    ctx->pc = 0x3B965Cu;
    // 0x3b965c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b965cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b9660: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b9660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b9664: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9664u;
    {
        const bool branch_taken_0x3b9664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9664u;
        // 0x3b9668: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9664) {
            ctx->pc = 0x3B967Cu;
            goto label_3b967c;
        }
    }
    ctx->pc = 0x3B966Cu;
    // 0x3b966c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b9670: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9670u;
    {
        const bool branch_taken_0x3b9670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9670) {
            ctx->pc = 0x3B9674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9670u;
            // 0x3b9674: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9678u;
            goto label_3b9678;
        }
    }
    ctx->pc = 0x3B9678u;
label_3b9678:
    // 0x3b9678: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x3b9678u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b967c:
    // 0x3b967c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x3b967cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3b9680: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3b9680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9684: 0x0  nop
    ctx->pc = 0x3b9684u;
    // NOP
label_3b9688:
    // 0x3b9688: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x3b9688u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x3b968c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B968Cu;
    {
        const bool branch_taken_0x3b968c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b968c) {
            ctx->pc = 0x3B9690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B968Cu;
            // 0x3b9690: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9694u;
            goto label_3b9694;
        }
    }
    ctx->pc = 0x3B9694u;
label_3b9694:
    // 0x3b9694: 0x1012  mflo        $v0
    ctx->pc = 0x3b9694u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9698: 0x1810  mfhi        $v1
    ctx->pc = 0x3b9698u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b969c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b969cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b96a0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b96a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b96a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b96a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b96a8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3b96a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b96ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b96acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b96b0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b96b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b96b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B96B4u;
    {
        const bool branch_taken_0x3b96b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b96b4) {
            ctx->pc = 0x3B96B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B96B4u;
            // 0x3b96b8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B96DCu;
            goto label_3b96dc;
        }
    }
    ctx->pc = 0x3B96BCu;
    // 0x3b96bc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b96c0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b96c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b96c4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B96C4u;
    {
        const bool branch_taken_0x3b96c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b96c4) {
            ctx->pc = 0x3B96C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B96C4u;
            // 0x3b96c8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B96DCu;
            goto label_3b96dc;
        }
    }
    ctx->pc = 0x3B96CCu;
    // 0x3b96cc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b96ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b96d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B96D0u;
    {
        const bool branch_taken_0x3b96d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b96d0) {
            ctx->pc = 0x3B96D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B96D0u;
            // 0x3b96d4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B96D8u;
            goto label_3b96d8;
        }
    }
    ctx->pc = 0x3B96D8u;
label_3b96d8:
    // 0x3b96d8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3b96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3b96dc:
    // 0x3b96dc: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x3b96dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x3b96e0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3b96e0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b96e4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B96E4u;
    {
        const bool branch_taken_0x3b96e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b96e4) {
            ctx->pc = 0x3B96E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B96E4u;
            // 0x3b96e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B96ECu;
            goto label_3b96ec;
        }
    }
    ctx->pc = 0x3B96ECu;
label_3b96ec:
    // 0x3b96ec: 0x1012  mflo        $v0
    ctx->pc = 0x3b96ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b96f0: 0x1810  mfhi        $v1
    ctx->pc = 0x3b96f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b96f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b96f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b96f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b96f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b96fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b96fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b9700: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3b9700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3b9704: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b9704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b9708: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3b9708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3b970c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B970Cu;
    {
        const bool branch_taken_0x3b970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b970c) {
            ctx->pc = 0x3B972Cu;
            goto label_3b972c;
        }
    }
    ctx->pc = 0x3B9714u;
    // 0x3b9714: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3b9714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3b9718: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x3b9718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b971c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B971Cu;
    {
        const bool branch_taken_0x3b971c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B971Cu;
        // 0x3b9720: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b971c) {
            ctx->pc = 0x3B972Cu;
            goto label_3b972c;
        }
    }
    ctx->pc = 0x3B9724u;
    // 0x3b9724: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B9724u;
    {
        const bool branch_taken_0x3b9724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b9724) {
            ctx->pc = 0x3B9728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9724u;
            // 0x3b9728: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B972Cu;
            goto label_3b972c;
        }
    }
    ctx->pc = 0x3B972Cu;
label_3b972c:
    // 0x3b972c: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x3B972Cu;
    {
        const bool branch_taken_0x3b972c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B972Cu;
        // 0x3b9730: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b972c) {
            ctx->pc = 0x3B998Cu;
            goto label_3b998c;
        }
    }
    ctx->pc = 0x3B9734u;
    // 0x3b9734: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x3b9734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b9738: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b9738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b973c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3B973Cu;
    {
        const bool branch_taken_0x3b973c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B973Cu;
        // 0x3b9740: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b973c) {
            ctx->pc = 0x3B9988u;
            goto label_3b9988;
        }
    }
    ctx->pc = 0x3B9744u;
label_3b9744:
    // 0x3b9744: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x3b9744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9748u;
    {
        const bool branch_taken_0x3b9748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9748u;
        // 0x3b974c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9748) {
            ctx->pc = 0x3B9764u;
            goto label_3b9764;
        }
    }
    ctx->pc = 0x3B9750u;
    // 0x3b9750: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3b9750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b9754: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3b9754u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b9758: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x3b9758u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x3b975c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3B975Cu;
    {
        const bool branch_taken_0x3b975c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B975Cu;
        // 0x3b9760: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b975c) {
            ctx->pc = 0x3B998Cu;
            goto label_3b998c;
        }
    }
    ctx->pc = 0x3B9764u;
label_3b9764:
    // 0x3b9764: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3b9764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3b9768: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b9768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b976c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B976Cu;
    {
        const bool branch_taken_0x3b976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B976Cu;
        // 0x3b9770: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b976c) {
            ctx->pc = 0x3B9788u;
            goto label_3b9788;
        }
    }
    ctx->pc = 0x3B9774u;
    // 0x3b9774: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x3b9774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x3b9778: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3b9778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3b977c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B977Cu;
    {
        const bool branch_taken_0x3b977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B977Cu;
        // 0x3b9780: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b977c) {
            ctx->pc = 0x3B97A0u;
            goto label_3b97a0;
        }
    }
    ctx->pc = 0x3B9784u;
    // 0x3b9784: 0x0  nop
    ctx->pc = 0x3b9784u;
    // NOP
label_3b9788:
    // 0x3b9788: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3b9788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b978c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b9790: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3b9790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b9794: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x3b9794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9798: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3b9798u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3b979c: 0x0  nop
    ctx->pc = 0x3b979cu;
    // NOP
label_3b97a0:
    // 0x3b97a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b97a4: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x3b97a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x3b97a8: 0x24420718  addiu       $v0, $v0, 0x718
    ctx->pc = 0x3b97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1816));
    // 0x3b97ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3b97acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3b97b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3b97b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3b97b4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3b97b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b97b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b97bc: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x3b97bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3b97c0: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B97C0u;
    {
        const bool branch_taken_0x3b97c0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97C0u;
        // 0x3b97c4: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97c0) {
            ctx->pc = 0x3B9808u;
            goto label_3b9808;
        }
    }
    ctx->pc = 0x3B97C8u;
    // 0x3b97c8: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3b97c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3b97cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B97CCu;
    {
        const bool branch_taken_0x3b97cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97CCu;
        // 0x3b97d0: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97cc) {
            ctx->pc = 0x3B97E0u;
            goto label_3b97e0;
        }
    }
    ctx->pc = 0x3B97D4u;
    // 0x3b97d4: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x3b97d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b97d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B97D8u;
    {
        const bool branch_taken_0x3b97d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b97d8) {
            ctx->pc = 0x3B97F0u;
            goto label_3b97f0;
        }
    }
    ctx->pc = 0x3B97E0u;
label_3b97e0:
    // 0x3b97e0: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x3b97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3b97e4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3b97e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b97e8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3b97e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b97ec: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3b97ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b97f0:
    // 0x3b97f0: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x3B97F0u;
    {
        const bool branch_taken_0x3b97f0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B97F0u;
        // 0x3b97f4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b97f0) {
            ctx->pc = 0x3B998Cu;
            goto label_3b998c;
        }
    }
    ctx->pc = 0x3B97F8u;
    // 0x3b97f8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x3b97f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3b97fc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x3b97fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3b9800: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3B9800u;
    {
        const bool branch_taken_0x3b9800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9800u;
        // 0x3b9804: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9800) {
            ctx->pc = 0x3B9988u;
            goto label_3b9988;
        }
    }
    ctx->pc = 0x3B9808u;
label_3b9808:
    // 0x3b9808: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x3b9808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b980c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x3b980cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b9810: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x3b9810u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b9814: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x3b9814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b9818: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x3b9818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b981c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x3b981cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b9820: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x3b9820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b9824: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x3b9824u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b9828: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x3b9828u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b982c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x3b982cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3b9830: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3b9830u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3b9834: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x3b9834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3b9838: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x3b9838u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x3b983c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B983Cu;
    {
        const bool branch_taken_0x3b983c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b983c) {
            ctx->pc = 0x3B9840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B983Cu;
            // 0x3b9840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B9844u;
            goto label_3b9844;
        }
    }
    ctx->pc = 0x3B9844u;
label_3b9844:
    // 0x3b9844: 0x1012  mflo        $v0
    ctx->pc = 0x3b9844u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b9848: 0x1810  mfhi        $v1
    ctx->pc = 0x3b9848u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b984c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3b984cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9850: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b9850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b9854: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b9854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b9858: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b9858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b985c: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x3b985cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b9860: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b9860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b9864: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b9864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b9868: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3B9868u;
    {
        const bool branch_taken_0x3b9868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9868) {
            ctx->pc = 0x3B986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9868u;
            // 0x3b986c: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B989Cu;
            goto label_3b989c;
        }
    }
    ctx->pc = 0x3B9870u;
    // 0x3b9870: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b9870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b9874: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3b9874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b9878: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B9878u;
    {
        const bool branch_taken_0x3b9878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9878u;
        // 0x3b987c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9878) {
            ctx->pc = 0x3B9898u;
            goto label_3b9898;
        }
    }
    ctx->pc = 0x3B9880u;
    // 0x3b9880: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x3b9880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b9884: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B9884u;
    {
        const bool branch_taken_0x3b9884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9884) {
            ctx->pc = 0x3B9888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B9884u;
            // 0x3b9888: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B989Cu;
            goto label_3b989c;
        }
    }
    ctx->pc = 0x3B988Cu;
    // 0x3b988c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x3b988cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3b9890: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3b9890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3b9894: 0x0  nop
    ctx->pc = 0x3b9894u;
    // NOP
label_3b9898:
    // 0x3b9898: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x3b9898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3b989c:
    // 0x3b989c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B989Cu;
    {
        const bool branch_taken_0x3b989c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b989c) {
            ctx->pc = 0x3B98A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B989Cu;
            // 0x3b98a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B98A4u;
            goto label_3b98a4;
        }
    }
    ctx->pc = 0x3B98A4u;
label_3b98a4:
    // 0x3b98a4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x3b98a4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3b98a8: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x3b98a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b98ac: 0x1012  mflo        $v0
    ctx->pc = 0x3b98acu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3b98b0: 0x1810  mfhi        $v1
    ctx->pc = 0x3b98b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3b98b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3b98b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b98b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3b98b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3b98bc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3b98bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3b98c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3b98c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3b98c4: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x3b98c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3b98c8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x3b98c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b98cc: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3b98ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b98d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B98D0u;
    {
        const bool branch_taken_0x3b98d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98D0u;
        // 0x3b98d4: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98d0) {
            ctx->pc = 0x3B9900u;
            goto label_3b9900;
        }
    }
    ctx->pc = 0x3B98D8u;
    // 0x3b98d8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3b98d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3b98dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3b98dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3b98e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B98E0u;
    {
        const bool branch_taken_0x3b98e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98E0u;
        // 0x3b98e4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98e0) {
            ctx->pc = 0x3B98FCu;
            goto label_3b98fc;
        }
    }
    ctx->pc = 0x3B98E8u;
    // 0x3b98e8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x3b98e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b98ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B98ECu;
    {
        const bool branch_taken_0x3b98ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B98ECu;
        // 0x3b98f0: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b98ec) {
            ctx->pc = 0x3B9900u;
            goto label_3b9900;
        }
    }
    ctx->pc = 0x3B98F4u;
    // 0x3b98f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3b98f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3b98f8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x3b98f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3b98fc:
    // 0x3b98fc: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x3b98fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_3b9900:
    // 0x3b9900: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x3b9900u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3b9904: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b9904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3b9908: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3b9908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3b990c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3b990cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b9910: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3b9910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3b9914: 0x480019  multu       $v0, $t0
    ctx->pc = 0x3b9914u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b9918: 0x3810  mfhi        $a3
    ctx->pc = 0x3b9918u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3b991c: 0x3012  mflo        $a2
    ctx->pc = 0x3b991cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3b9920: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x3b9920u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3b9924: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9924u;
    {
        const bool branch_taken_0x3b9924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9924u;
        // 0x3b9928: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9924) {
            ctx->pc = 0x3B9940u;
            goto label_3b9940;
        }
    }
    ctx->pc = 0x3B992Cu;
    // 0x3b992c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B992Cu;
    {
        const bool branch_taken_0x3b992c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x3B9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B992Cu;
        // 0x3b9930: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b992c) {
            ctx->pc = 0x3B9950u;
            goto label_3b9950;
        }
    }
    ctx->pc = 0x3B9934u;
    // 0x3b9934: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B9934u;
    {
        const bool branch_taken_0x3b9934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b9934) {
            ctx->pc = 0x3B9950u;
            goto label_3b9950;
        }
    }
    ctx->pc = 0x3B993Cu;
    // 0x3b993c: 0x0  nop
    ctx->pc = 0x3b993cu;
    // NOP
label_3b9940:
    // 0x3b9940: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3b9940u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3b9944: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3b9944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b9948: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x3b9948u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b994c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b994cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b9950:
    // 0x3b9950: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x3B9950u;
    {
        const bool branch_taken_0x3b9950 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B9954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9950u;
        // 0x3b9954: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b9950) {
            ctx->pc = 0x3B998Cu;
            goto label_3b998c;
        }
    }
    ctx->pc = 0x3B9958u;
    // 0x3b9958: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x3b9958u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3b995c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x3b995cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3b9960: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x3b9960u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b9964: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x3b9964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x3b9968: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x3b9968u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b996c: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x3b996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x3b9970: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3b9970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b9974: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b9974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b9978: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3b9978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3b997c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x3b997cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3b9980: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x3b9980u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x3b9984: 0x0  nop
    ctx->pc = 0x3b9984u;
    // NOP
label_3b9988:
    // 0x3b9988: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x3b9988u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_3b998c:
    // 0x3b998c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x3b998cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9990: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9990u;
        // 0x3b9994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9998u;
}
