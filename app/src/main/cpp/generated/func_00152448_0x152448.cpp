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

// Function: func_00152448
// Address: 0x152448 - 0x152a20
void func_00152448_0x152448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00152448_0x152448");
#endif

    switch (ctx->pc) {
        case 0x1524c0u: goto label_1524c0;
        case 0x152530u: goto label_152530;
        case 0x1525a0u: goto label_1525a0;
        case 0x152644u: goto label_152644;
        case 0x152650u: goto label_152650;
        case 0x152678u: goto label_152678;
        case 0x152838u: goto label_152838;
        case 0x152840u: goto label_152840;
        case 0x152868u: goto label_152868;
        case 0x15289cu: goto label_15289c;
        case 0x15290cu: goto label_15290c;
        case 0x1529b8u: goto label_1529b8;
        default: break;
    }

    ctx->pc = 0x152448u;

    // 0x152448: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x152448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x15244c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15244cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x152450: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x152450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152454: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x152454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x152458: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x152458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x15245c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x15245cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x152460: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x152460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152464: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x152464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x152468: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x152468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x15246c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x15246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x152470: 0x3463ffdf  ori         $v1, $v1, 0xFFDF
    ctx->pc = 0x152470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65503);
    // 0x152474: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x152474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x152478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x152478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15247c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x15247cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x152480: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x152480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x152484: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x152484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x152488: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x152488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x15248c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x15248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x152490: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x152490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x152494: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x152494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x152498: 0x8e620250  lw          $v0, 0x250($s3)
    ctx->pc = 0x152498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x15249c: 0x926402b4  lbu         $a0, 0x2B4($s3)
    ctx->pc = 0x15249cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1524a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1524a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1524a4: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1524A4u;
    {
        const bool branch_taken_0x1524a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524A4u;
        // 0x1524a8: 0xae620250  sw          $v0, 0x250($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524a4) {
            ctx->pc = 0x15251Cu;
            goto label_15251c;
        }
    }
    ctx->pc = 0x1524ACu;
    // 0x1524ac: 0x3c06ffb0  lui         $a2, 0xFFB0
    ctx->pc = 0x1524acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65456 << 16));
    // 0x1524b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1524b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524b4: 0x34c61ff7  ori         $a2, $a2, 0x1FF7
    ctx->pc = 0x1524b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8183);
    // 0x1524b8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1524b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1524bc: 0x0  nop
    ctx->pc = 0x1524bcu;
    // NOP
label_1524c0:
    // 0x1524c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1524c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1524c4: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1524c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1524c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1524C8u;
    {
        const bool branch_taken_0x1524c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1524CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524C8u;
        // 0x1524cc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524c8) {
            ctx->pc = 0x1524D8u;
            goto label_1524d8;
        }
    }
    ctx->pc = 0x1524D0u;
    // 0x1524d0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1524d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1524d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1524d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1524d8:
    // 0x1524d8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1524d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1524dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1524DCu;
    {
        const bool branch_taken_0x1524dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524DCu;
        // 0x1524e0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524dc) {
            ctx->pc = 0x1524F4u;
            goto label_1524f4;
        }
    }
    ctx->pc = 0x1524E4u;
    // 0x1524e4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1524e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1524e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1524ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1524ECu;
    {
        const bool branch_taken_0x1524ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524ECu;
        // 0x1524f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524ec) {
            ctx->pc = 0x1524F8u;
            goto label_1524f8;
        }
    }
    ctx->pc = 0x1524F4u;
label_1524f4:
    // 0x1524f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1524f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1524f8:
    // 0x1524f8: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1524fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x152500: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x152500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    // 0x152504: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x152504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x152508: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x152508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x15250c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x15250cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x152510: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x152510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152514: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x152514u;
    {
        const bool branch_taken_0x152514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152514) {
            ctx->pc = 0x152518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152514u;
            // 0x152518: 0x926302b4  lbu         $v1, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1524C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1524c0;
        }
    }
    ctx->pc = 0x15251Cu;
label_15251c:
    // 0x15251c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x15251cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x152520: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x152520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152524: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x152524u;
    {
        const bool branch_taken_0x152524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152524u;
        // 0x152528: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152524) {
            ctx->pc = 0x1529F0u;
            goto label_1529f0;
        }
    }
    ctx->pc = 0x15252Cu;
    // 0x15252c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x15252cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_152530:
    // 0x152530: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x152530u;
    {
        const bool branch_taken_0x152530 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x152534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152530u;
        // 0x152534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152530) {
            ctx->pc = 0x15253Cu;
            goto label_15253c;
        }
    }
    ctx->pc = 0x152538u;
    // 0x152538: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x152538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15253c:
    // 0x15253c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152540u;
    {
        const bool branch_taken_0x152540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152540u;
        // 0x152544: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152540) {
            ctx->pc = 0x152558u;
            goto label_152558;
        }
    }
    ctx->pc = 0x152548u;
    // 0x152548: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x152548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x15254c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152550u;
    {
        const bool branch_taken_0x152550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152550u;
        // 0x152554: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152550) {
            ctx->pc = 0x15255Cu;
            goto label_15255c;
        }
    }
    ctx->pc = 0x152558u;
label_152558:
    // 0x152558: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x152558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15255c:
    // 0x15255c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x15255Cu;
    {
        const bool branch_taken_0x15255c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x152560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15255Cu;
        // 0x152560: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15255c) {
            ctx->pc = 0x152568u;
            goto label_152568;
        }
    }
    ctx->pc = 0x152564u;
    // 0x152564: 0x8e550144  lw          $s5, 0x144($s2)
    ctx->pc = 0x152564u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
label_152568:
    // 0x152568: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x152568u;
    {
        const bool branch_taken_0x152568 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152568u;
        // 0x15256c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152568) {
            ctx->pc = 0x152574u;
            goto label_152574;
        }
    }
    ctx->pc = 0x152570u;
    // 0x152570: 0x8eb40144  lw          $s4, 0x144($s5)
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
label_152574:
    // 0x152574: 0x8fb10070  lw          $s1, 0x70($sp)
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152578: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x152578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15257c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x15257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x152580: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x152580u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x152584: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x152584u;
    {
        const bool branch_taken_0x152584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x152588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152584u;
        // 0x152588: 0xafa50074  sw          $a1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152584) {
            ctx->pc = 0x1525B8u;
            goto label_1525b8;
        }
    }
    ctx->pc = 0x15258Cu;
    // 0x15258c: 0x5064000b  beql        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x15258Cu;
    {
        const bool branch_taken_0x15258c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x15258c) {
            ctx->pc = 0x152590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15258Cu;
            // 0x152590: 0x92220004  lbu         $v0, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1525BCu;
            goto label_1525bc;
        }
    }
    ctx->pc = 0x152594u;
    // 0x152594: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x152594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x152598: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x152598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x15259c: 0x0  nop
    ctx->pc = 0x15259cu;
    // NOP
label_1525a0:
    // 0x1525a0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1525a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1525a4: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1525A4u;
    {
        const bool branch_taken_0x1525a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1525a4) {
            ctx->pc = 0x1525A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1525A4u;
            // 0x1525a8: 0x92220004  lbu         $v0, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1525BCu;
            goto label_1525bc;
        }
    }
    ctx->pc = 0x1525ACu;
    // 0x1525ac: 0x0  nop
    ctx->pc = 0x1525acu;
    // NOP
    // 0x1525b0: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1525B0u;
    {
        const bool branch_taken_0x1525b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1525b0) {
            ctx->pc = 0x1525B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1525B0u;
            // 0x1525b4: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1525A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1525a0;
        }
    }
    ctx->pc = 0x1525B8u;
label_1525b8:
    // 0x1525b8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x1525b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_1525bc:
    // 0x1525bc: 0x50400107  beql        $v0, $zero, . + 4 + (0x107 << 2)
    ctx->pc = 0x1525BCu;
    {
        const bool branch_taken_0x1525bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525bc) {
            ctx->pc = 0x1525C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1525BCu;
            // 0x1525c0: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1529DCu;
            goto label_1529dc;
        }
    }
    ctx->pc = 0x1525C4u;
    // 0x1525c4: 0x52400105  beql        $s2, $zero, . + 4 + (0x105 << 2)
    ctx->pc = 0x1525C4u;
    {
        const bool branch_taken_0x1525c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525c4) {
            ctx->pc = 0x1525C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1525C4u;
            // 0x1525c8: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1529DCu;
            goto label_1529dc;
        }
    }
    ctx->pc = 0x1525CCu;
    // 0x1525cc: 0x52a00103  beql        $s5, $zero, . + 4 + (0x103 << 2)
    ctx->pc = 0x1525CCu;
    {
        const bool branch_taken_0x1525cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525cc) {
            ctx->pc = 0x1525D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1525CCu;
            // 0x1525d0: 0x926202b4  lbu         $v0, 0x2B4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1529DCu;
            goto label_1529dc;
        }
    }
    ctx->pc = 0x1525D4u;
    // 0x1525d4: 0x12800100  beqz        $s4, . + 4 + (0x100 << 2)
    ctx->pc = 0x1525D4u;
    {
        const bool branch_taken_0x1525d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525D4u;
        // 0x1525d8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525d4) {
            ctx->pc = 0x1529D8u;
            goto label_1529d8;
        }
    }
    ctx->pc = 0x1525DCu;
    // 0x1525dc: 0x8e630250  lw          $v1, 0x250($s3)
    ctx->pc = 0x1525dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x1525e0: 0x26a400c0  addiu       $a0, $s5, 0xC0
    ctx->pc = 0x1525e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1525e4: 0x264500c0  addiu       $a1, $s2, 0xC0
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1525e8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1525e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1525ec: 0xae630250  sw          $v1, 0x250($s3)
    ctx->pc = 0x1525ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 3));
    // 0x1525f0: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1525f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x1525f4: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1525f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1525f8: 0xae420154  sw          $v0, 0x154($s2)
    ctx->pc = 0x1525f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
    // 0x1525fc: 0x8e830154  lw          $v1, 0x154($s4)
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x152600: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x152600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x152604: 0xae830154  sw          $v1, 0x154($s4)
    ctx->pc = 0x152604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 3));
    // 0x152608: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x152608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15260c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x15260cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x152610: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x152610u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x152614: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x152614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152618: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x152618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15261c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x15261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x152620: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152620u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152624: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x152624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152628: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x152628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x15262c: 0x26660110  addiu       $a2, $s3, 0x110
    ctx->pc = 0x15262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    // 0x152630: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x152630u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152634: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x152634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15263c: 0xc0541ee  jal         func_1507B8
    ctx->pc = 0x15263Cu;
    SET_GPR_U32(ctx, 31, 0x152644u);
    ctx->pc = 0x152640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15263Cu;
    // 0x152640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1507B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507B8u, 0x15263Cu, 0x152644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152644u;
label_152644:
    // 0x152644: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x152644u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152648: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x152648u;
    SET_GPR_U32(ctx, 31, 0x152650u);
    ctx->pc = 0x15264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152648u;
    // 0x15264c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x152648u, 0x152650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152650u;
label_152650:
    // 0x152650: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x152650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x152654: 0x0  nop
    ctx->pc = 0x152654u;
    // NOP
    // 0x152658: 0x0  nop
    ctx->pc = 0x152658u;
    // NOP
    // 0x15265c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x15265cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x152660: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x152660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152664: 0x0  nop
    ctx->pc = 0x152664u;
    // NOP
    // 0x152668: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x152668u;
    {
        const bool branch_taken_0x152668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152668u;
        // 0x15266c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152668) {
            ctx->pc = 0x15267Cu;
            goto label_15267c;
        }
    }
    ctx->pc = 0x152670u;
    // 0x152670: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x152670u;
    SET_GPR_U32(ctx, 31, 0x152678u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x152670u, 0x152678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152678u;
label_152678:
    // 0x152678: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x152678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_15267c:
    // 0x15267c: 0xe6400158  swc1        $f0, 0x158($s2)
    ctx->pc = 0x15267cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 344), bits); }
    // 0x152680: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x152680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x152684: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152684u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152688: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x152688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15268c: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x15268cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x152690: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x152690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x152694: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x152694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x152698: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x152698u;
    {
        const bool branch_taken_0x152698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152698u;
        // 0x15269c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152698) {
            ctx->pc = 0x15272Cu;
            goto label_15272c;
        }
    }
    ctx->pc = 0x1526A0u;
    // 0x1526a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1526a4: 0x2442edc0  addiu       $v0, $v0, -0x1240
    ctx->pc = 0x1526a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
    // 0x1526a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1526a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1526ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1526acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1526b0: 0x800008  jr          $a0
    ctx->pc = 0x1526B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1526B8u: goto label_1526b8;
            case 0x1526C8u: goto label_1526c8;
            case 0x1526E0u: goto label_1526e0;
            case 0x1526F4u: goto label_1526f4;
            case 0x152708u: goto label_152708;
            case 0x152718u: goto label_152718;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1526B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1526B8u;
label_1526b8:
    // 0x1526b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1526b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1526bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1526bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1526C0u;
    {
        const bool branch_taken_0x1526c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526C0u;
        // 0x1526c4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526c0) {
            ctx->pc = 0x1526D4u;
            goto label_1526d4;
        }
    }
    ctx->pc = 0x1526C8u;
label_1526c8:
    // 0x1526c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1526cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1526ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1526d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_1526d4:
    // 0x1526d4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1526d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1526d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1526D8u;
    {
        const bool branch_taken_0x1526d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D8u;
        // 0x1526dc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d8) {
            ctx->pc = 0x15272Cu;
            goto label_15272c;
        }
    }
    ctx->pc = 0x1526E0u;
label_1526e0:
    // 0x1526e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1526e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1526e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1526e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1526ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1526ECu;
    {
        const bool branch_taken_0x1526ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526ECu;
        // 0x1526f0: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526ec) {
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x1526F4u;
label_1526f4:
    // 0x1526f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1526f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1526f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1526f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526fc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1526fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x152700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x152700u;
    {
        const bool branch_taken_0x152700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152700u;
        // 0x152704: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152700) {
            ctx->pc = 0x152728u;
            goto label_152728;
        }
    }
    ctx->pc = 0x152708u;
label_152708:
    // 0x152708: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15270c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15270cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x152710u;
    {
        const bool branch_taken_0x152710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152710u;
        // 0x152714: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152710) {
            ctx->pc = 0x152724u;
            goto label_152724;
        }
    }
    ctx->pc = 0x152718u;
label_152718:
    // 0x152718: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x152718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15271c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15271cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152720: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x152720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_152724:
    // 0x152724: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x152724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_152728:
    // 0x152728: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x152728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_15272c:
    // 0x15272c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x15272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152730: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152734: 0x0  nop
    ctx->pc = 0x152734u;
    // NOP
    // 0x152738: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x152738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15273c: 0x0  nop
    ctx->pc = 0x15273cu;
    // NOP
    // 0x152740: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x152740u;
    {
        const bool branch_taken_0x152740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152740u;
        // 0x152744: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152740) {
            ctx->pc = 0x152764u;
            goto label_152764;
        }
    }
    ctx->pc = 0x152748u;
    // 0x152748: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x152748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15274c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x15274cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152750: 0x0  nop
    ctx->pc = 0x152750u;
    // NOP
    // 0x152754: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x152754u;
    {
        const bool branch_taken_0x152754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152754u;
        // 0x152758: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152754) {
            ctx->pc = 0x152764u;
            goto label_152764;
        }
    }
    ctx->pc = 0x15275Cu;
    // 0x15275c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15275Cu;
    {
        const bool branch_taken_0x15275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15275Cu;
        // 0x152760: 0x8e420154  lw          $v0, 0x154($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15275c) {
            ctx->pc = 0x1527C8u;
            goto label_1527c8;
        }
    }
    ctx->pc = 0x152764u;
label_152764:
    // 0x152764: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x152764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152768: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x152768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15276c: 0x0  nop
    ctx->pc = 0x15276cu;
    // NOP
    // 0x152770: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x152770u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152774: 0x0  nop
    ctx->pc = 0x152774u;
    // NOP
    // 0x152778: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x152778u;
    {
        const bool branch_taken_0x152778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152778u;
        // 0x15277c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152778) {
            ctx->pc = 0x15279Cu;
            goto label_15279c;
        }
    }
    ctx->pc = 0x152780u;
    // 0x152780: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x152780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152784: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x152784u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152788: 0x0  nop
    ctx->pc = 0x152788u;
    // NOP
    // 0x15278c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15278Cu;
    {
        const bool branch_taken_0x15278c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15278Cu;
        // 0x152790: 0x3c030005  lui         $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15278c) {
            ctx->pc = 0x15279Cu;
            goto label_15279c;
        }
    }
    ctx->pc = 0x152794u;
    // 0x152794: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x152794u;
    {
        const bool branch_taken_0x152794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152794u;
        // 0x152798: 0x8e420154  lw          $v0, 0x154($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152794) {
            ctx->pc = 0x1527C8u;
            goto label_1527c8;
        }
    }
    ctx->pc = 0x15279Cu;
label_15279c:
    // 0x15279c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15279cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1527a0: 0x0  nop
    ctx->pc = 0x1527a0u;
    // NOP
    // 0x1527a4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1527a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1527a8: 0x0  nop
    ctx->pc = 0x1527a8u;
    // NOP
    // 0x1527ac: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1527ACu;
    {
        const bool branch_taken_0x1527ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1527ac) {
            ctx->pc = 0x1527B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1527ACu;
            // 0x1527b0: 0x8e430154  lw          $v1, 0x154($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1527D8u;
            goto label_1527d8;
        }
    }
    ctx->pc = 0x1527B4u;
    // 0x1527b4: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x1527b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1527b8: 0x0  nop
    ctx->pc = 0x1527b8u;
    // NOP
    // 0x1527bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1527BCu;
    {
        const bool branch_taken_0x1527bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1527C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527BCu;
        // 0x1527c0: 0x3c030009  lui         $v1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527bc) {
            ctx->pc = 0x1527D4u;
            goto label_1527d4;
        }
    }
    ctx->pc = 0x1527C4u;
    // 0x1527c4: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x1527c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1527c8:
    // 0x1527c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1527c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1527cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1527CCu;
    {
        const bool branch_taken_0x1527cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527CCu;
        // 0x1527d0: 0xae420154  sw          $v0, 0x154($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527cc) {
            ctx->pc = 0x1527E8u;
            goto label_1527e8;
        }
    }
    ctx->pc = 0x1527D4u;
label_1527d4:
    // 0x1527d4: 0x8e430154  lw          $v1, 0x154($s2)
    ctx->pc = 0x1527d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
label_1527d8:
    // 0x1527d8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x1527dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1527dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1527e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1527e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1527e4: 0xae430154  sw          $v1, 0x154($s2)
    ctx->pc = 0x1527e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 3));
label_1527e8:
    // 0x1527e8: 0x269000c0  addiu       $s0, $s4, 0xC0
    ctx->pc = 0x1527e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x1527ec: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1527ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1527f0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1527f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1527f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1527f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1527f8: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1527f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1527fc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1527fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152800: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x152800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152804: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x152804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152808: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x152808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15280c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x15280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152810: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x152810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152814: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x152814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152818: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x152818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15281c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152820: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x152820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152824: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x152824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152828: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x152828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15282c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15282cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x152830: 0xc0541ee  jal         func_1507B8
    ctx->pc = 0x152830u;
    SET_GPR_U32(ctx, 31, 0x152838u);
    ctx->pc = 0x152834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152830u;
    // 0x152834: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1507B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507B8u, 0x152830u, 0x152838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152838u;
label_152838:
    // 0x152838: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x152838u;
    SET_GPR_U32(ctx, 31, 0x152840u);
    ctx->pc = 0x15283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152838u;
    // 0x15283c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x152838u, 0x152840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152840u;
label_152840:
    // 0x152840: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x152840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x152844: 0x0  nop
    ctx->pc = 0x152844u;
    // NOP
    // 0x152848: 0x0  nop
    ctx->pc = 0x152848u;
    // NOP
    // 0x15284c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x15284cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x152850: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x152850u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152854: 0x0  nop
    ctx->pc = 0x152854u;
    // NOP
    // 0x152858: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x152858u;
    {
        const bool branch_taken_0x152858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x152858) {
            ctx->pc = 0x15285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152858u;
            // 0x15285c: 0xe6a00158  swc1        $f0, 0x158($s5) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 344), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15286Cu;
            goto label_15286c;
        }
    }
    ctx->pc = 0x152860u;
    // 0x152860: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x152860u;
    SET_GPR_U32(ctx, 31, 0x152868u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x152860u, 0x152868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152868u;
label_152868:
    // 0x152868: 0xe6a00158  swc1        $f0, 0x158($s5)
    ctx->pc = 0x152868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 344), bits); }
label_15286c:
    // 0x15286c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x15286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152870: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x152874: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x152874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152878: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x152878u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15287c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15287cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x152880: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x152880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152884: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x152888: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x152888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15288c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x152890: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x152890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x152894: 0xc04078a  jal         func_101E28
    ctx->pc = 0x152894u;
    SET_GPR_U32(ctx, 31, 0x15289Cu);
    ctx->pc = 0x152898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152894u;
    // 0x152898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x152894u, 0x15289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15289Cu;
label_15289c:
    // 0x15289c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x15289cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1528a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1528a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528a4: 0x0  nop
    ctx->pc = 0x1528a4u;
    // NOP
    // 0x1528a8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1528a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1528ac: 0x0  nop
    ctx->pc = 0x1528acu;
    // NOP
    // 0x1528b0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1528B0u;
    {
        const bool branch_taken_0x1528b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1528B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528B0u;
        // 0x1528b4: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528b0) {
            ctx->pc = 0x1528F4u;
            goto label_1528f4;
        }
    }
    ctx->pc = 0x1528B8u;
    // 0x1528b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1528b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1528bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1528bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1528c0: 0x0  nop
    ctx->pc = 0x1528c0u;
    // NOP
    // 0x1528c4: 0x0  nop
    ctx->pc = 0x1528c4u;
    // NOP
    // 0x1528c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1528c8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1528cc: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1528ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1528d0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1528d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1528d4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1528d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1528d8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1528d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1528dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1528dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1528e0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1528e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1528e4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1528e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1528e8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1528e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1528ec: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1528ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1528f0: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1528f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1528f4:
    // 0x1528f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1528f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1528f8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1528f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1528fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x152900: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x152900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152904: 0xc056a68  jal         func_15A9A0
    ctx->pc = 0x152904u;
    SET_GPR_U32(ctx, 31, 0x15290Cu);
    ctx->pc = 0x152908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152904u;
    // 0x152908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A9A0u, 0x152904u, 0x15290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15290Cu;
label_15290c:
    // 0x15290c: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x15290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x152910: 0x26430160  addiu       $v1, $s2, 0x160
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x152914: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x152914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x152918: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x152918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15291c: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x15291cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x152920: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x152920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152924: 0x46031982  mul.s       $f6, $f3, $f3
    ctx->pc = 0x152924u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x152928: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x152928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15292c: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x15292cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x152930: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x152930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x152934: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x152934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152938: 0x46052a02  mul.s       $f8, $f5, $f5
    ctx->pc = 0x152938u;
    ctx->f[8] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x15293c: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x152940: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x152940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x152944: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x152944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x152948: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x152948u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x15294c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x15294cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x152950: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x152950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x152954: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x152954u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x152958: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x152958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x15295c: 0x0  nop
    ctx->pc = 0x15295cu;
    // NOP
    // 0x152960: 0x0  nop
    ctx->pc = 0x152960u;
    // NOP
    // 0x152964: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x152964u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x152968: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x152968u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15296c: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x15296cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x152970: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x152970u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x152974: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x152974u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x152978: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x152978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15297c: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x15297cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x152980: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x152980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x152984: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x152984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x152988: 0xe6440160  swc1        $f4, 0x160($s2)
    ctx->pc = 0x152988u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 352), bits); }
    // 0x15298c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x15298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152990: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x152990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x152994: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x152994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152998: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x152998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15299c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x15299cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1529a0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1529a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1529a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1529a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8A0u));
    // 0x1529a8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1529a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1529ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1529acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529b0: 0xc056b68  jal         func_15ADA0
    ctx->pc = 0x1529B0u;
    SET_GPR_U32(ctx, 31, 0x1529B8u);
    ctx->pc = 0x1529B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529B0u;
    // 0x1529b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADA0u, 0x1529B0u, 0x1529B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529B8u;
label_1529b8:
    // 0x1529b8: 0x264201a0  addiu       $v0, $s2, 0x1A0
    ctx->pc = 0x1529b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x1529bc: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1529BCu;
    {
        const bool branch_taken_0x1529bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1529C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529BCu;
        // 0x1529c0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529bc) {
            ctx->pc = 0x1529D8u;
            goto label_1529d8;
        }
    }
    ctx->pc = 0x1529C4u;
    // 0x1529c4: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x1529c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x1529c8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1529c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1529cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1529ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1529d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1529d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1529d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1529d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1529d8:
    // 0x1529d8: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1529d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
label_1529dc:
    // 0x1529dc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1529e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1529e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1529e4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1529e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1529e8: 0x5440fed1  bnel        $v0, $zero, . + 4 + (-0x12F << 2)
    ctx->pc = 0x1529E8u;
    {
        const bool branch_taken_0x1529e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1529e8) {
            ctx->pc = 0x1529ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1529E8u;
            // 0x1529ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152530;
        }
    }
    ctx->pc = 0x1529F0u;
label_1529f0:
    // 0x1529f0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1529f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1529f4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1529f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1529f8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1529f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1529fc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1529fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x152a00: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x152a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x152a04: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x152a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152a08: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x152a08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152a0c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x152a0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152a10: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x152a10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152a14: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x152a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152a18: 0x3e00008  jr          $ra
    ctx->pc = 0x152A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A18u;
        // 0x152a1c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152A20u;
}
