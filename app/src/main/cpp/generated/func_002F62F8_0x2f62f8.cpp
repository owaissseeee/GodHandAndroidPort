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

// Function: func_002F62F8
// Address: 0x2f62f8 - 0x2f6740
void func_002F62F8_0x2f62f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F62F8_0x2f62f8");
#endif

    switch (ctx->pc) {
        case 0x2f6480u: goto label_2f6480;
        case 0x2f64e4u: goto label_2f64e4;
        case 0x2f64f8u: goto label_2f64f8;
        case 0x2f6540u: goto label_2f6540;
        case 0x2f66d8u: goto label_2f66d8;
        case 0x2f66e4u: goto label_2f66e4;
        case 0x2f66f4u: goto label_2f66f4;
        default: break;
    }

    ctx->pc = 0x2f62f8u;

    // 0x2f62f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f62f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f62fc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2f62fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2f6300: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2f6300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2f6304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6308: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2f6308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2f630c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2f630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2f6310: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2f6310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2f6314: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f6314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f6318: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x2f6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x2f631c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f6320: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2f6320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2f6324: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x2f6324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x2f6328: 0x8c83016c  lw          $v1, 0x16C($a0)
    ctx->pc = 0x2f6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2f632c: 0xae030304  sw          $v1, 0x304($s0)
    ctx->pc = 0x2f632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 3));
    // 0x2f6330: 0x8c840170  lw          $a0, 0x170($a0)
    ctx->pc = 0x2f6330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x2f6334: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F6334u;
    {
        const bool branch_taken_0x2f6334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6334u;
        // 0x2f6338: 0xae040308  sw          $a0, 0x308($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6334) {
            ctx->pc = 0x2F6448u;
            goto label_2f6448;
        }
    }
    ctx->pc = 0x2F633Cu;
    // 0x2f633c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2f633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f6340: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F6340u;
    {
        const bool branch_taken_0x2f6340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6340u;
        // 0x2f6344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6340) {
            ctx->pc = 0x2F6488u;
            goto label_2f6488;
        }
    }
    ctx->pc = 0x2F6348u;
    // 0x2f6348: 0x906602b4  lbu         $a2, 0x2B4($v1)
    ctx->pc = 0x2f6348u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2f634c: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F634Cu;
    {
        const bool branch_taken_0x2f634c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F634Cu;
        // 0x2f6350: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f634c) {
            ctx->pc = 0x2F6358u;
            goto label_2f6358;
        }
    }
    ctx->pc = 0x2F6354u;
    // 0x2f6354: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2f6354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2f6358:
    // 0x2f6358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f635c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F635Cu;
    {
        const bool branch_taken_0x2f635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F635Cu;
        // 0x2f6360: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f635c) {
            ctx->pc = 0x2F6374u;
            goto label_2f6374;
        }
    }
    ctx->pc = 0x2F6364u;
    // 0x2f6364: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x2f6364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f6368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f6368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f636c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F636Cu;
    {
        const bool branch_taken_0x2f636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F636Cu;
        // 0x2f6370: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f636c) {
            ctx->pc = 0x2F6378u;
            goto label_2f6378;
        }
    }
    ctx->pc = 0x2F6374u;
label_2f6374:
    // 0x2f6374: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6378:
    // 0x2f6378: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2F6378u;
    {
        const bool branch_taken_0x2f6378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6378u;
        // 0x2f637c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6378) {
            ctx->pc = 0x2F671Cu;
            goto label_2f671c;
        }
    }
    ctx->pc = 0x2F6380u;
    // 0x2f6380: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2f6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f6384: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2f6384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2f6388: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F6388u;
    {
        const bool branch_taken_0x2f6388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6388u;
        // 0x2f638c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6388) {
            ctx->pc = 0x2F6448u;
            goto label_2f6448;
        }
    }
    ctx->pc = 0x2F6390u;
    // 0x2f6390: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x2f6390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f6394: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x2f6394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x2f6398: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x2f6398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x2f639c: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F639Cu;
    {
        const bool branch_taken_0x2f639c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F639Cu;
        // 0x2f63a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f639c) {
            ctx->pc = 0x2F63A8u;
            goto label_2f63a8;
        }
    }
    ctx->pc = 0x2F63A4u;
    // 0x2f63a4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f63a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f63a8:
    // 0x2f63a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f63a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f63ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F63ACu;
    {
        const bool branch_taken_0x2f63ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63ACu;
        // 0x2f63b0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63ac) {
            ctx->pc = 0x2F63C4u;
            goto label_2f63c4;
        }
    }
    ctx->pc = 0x2F63B4u;
    // 0x2f63b4: 0x8cc30278  lw          $v1, 0x278($a2)
    ctx->pc = 0x2f63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x2f63b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f63bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F63BCu;
    {
        const bool branch_taken_0x2f63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63BCu;
        // 0x2f63c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63bc) {
            ctx->pc = 0x2F63C8u;
            goto label_2f63c8;
        }
    }
    ctx->pc = 0x2F63C4u;
label_2f63c4:
    // 0x2f63c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f63c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f63c8:
    // 0x2f63c8: 0x8c42014c  lw          $v0, 0x14C($v0)
    ctx->pc = 0x2f63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2f63cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2F63CCu;
    {
        const bool branch_taken_0x2f63cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63CCu;
        // 0x2f63d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63cc) {
            ctx->pc = 0x2F6448u;
            goto label_2f6448;
        }
    }
    ctx->pc = 0x2F63D4u;
    // 0x2f63d4: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x2f63d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f63d8: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x2f63d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x2f63dc: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x2f63dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x2f63e0: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F63E0u;
    {
        const bool branch_taken_0x2f63e0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63E0u;
        // 0x2f63e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63e0) {
            ctx->pc = 0x2F63ECu;
            goto label_2f63ec;
        }
    }
    ctx->pc = 0x2F63E8u;
    // 0x2f63e8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f63e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f63ec:
    // 0x2f63ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f63ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f63f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F63F0u;
    {
        const bool branch_taken_0x2f63f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F63F0u;
        // 0x2f63f4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f63f0) {
            ctx->pc = 0x2F6408u;
            goto label_2f6408;
        }
    }
    ctx->pc = 0x2F63F8u;
    // 0x2f63f8: 0x8cc30278  lw          $v1, 0x278($a2)
    ctx->pc = 0x2f63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x2f63fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f6400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6400u;
    {
        const bool branch_taken_0x2f6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6400u;
        // 0x2f6404: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6400) {
            ctx->pc = 0x2F640Cu;
            goto label_2f640c;
        }
    }
    ctx->pc = 0x2F6408u;
label_2f6408:
    // 0x2f6408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f640c:
    // 0x2f640c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2f640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f6410: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x2f6410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2f6414: 0x906202b4  lbu         $v0, 0x2B4($v1)
    ctx->pc = 0x2f6414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x2f6418: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6418u;
    {
        const bool branch_taken_0x2f6418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6418u;
        // 0x2f641c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6418) {
            ctx->pc = 0x2F642Cu;
            goto label_2f642c;
        }
    }
    ctx->pc = 0x2F6420u;
    // 0x2f6420: 0x8c620278  lw          $v0, 0x278($v1)
    ctx->pc = 0x2f6420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x2f6424: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6424u;
    {
        const bool branch_taken_0x2f6424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6424u;
        // 0x2f6428: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6424) {
            ctx->pc = 0x2F6430u;
            goto label_2f6430;
        }
    }
    ctx->pc = 0x2F642Cu;
label_2f642c:
    // 0x2f642c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f642cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6430:
    // 0x2f6430: 0x3c03f0f0  lui         $v1, 0xF0F0
    ctx->pc = 0x2f6430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61680 << 16));
    // 0x2f6434: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2f6434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6438: 0x3463f0f1  ori         $v1, $v1, 0xF0F1
    ctx->pc = 0x2f6438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61681);
    // 0x2f643c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2f643cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f6440: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2f6440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2f6444: 0xae020308  sw          $v0, 0x308($s0)
    ctx->pc = 0x2f6444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 2));
label_2f6448:
    // 0x2f6448: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f6448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f644c: 0x9043018d  lbu         $v1, 0x18D($v0)
    ctx->pc = 0x2f644cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 397)));
    // 0x2f6450: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x2f6450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f6454: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2f6454u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2f6458: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x2f6458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2f645c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F645Cu;
    {
        const bool branch_taken_0x2f645c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F645Cu;
        // 0x2f6460: 0xa2030249  sb          $v1, 0x249($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f645c) {
            ctx->pc = 0x2F646Cu;
            goto label_2f646c;
        }
    }
    ctx->pc = 0x2F6464u;
    // 0x2f6464: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6464u;
    {
        const bool branch_taken_0x2f6464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6464) {
            ctx->pc = 0x2F6468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6464u;
            // 0x2f6468: 0x82060249  lb          $a2, 0x249($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6478u;
            goto label_2f6478;
        }
    }
    ctx->pc = 0x2F646Cu;
label_2f646c:
    // 0x2f646c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2f646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6470: 0xa2020249  sb          $v0, 0x249($s0)
    ctx->pc = 0x2f6470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6474: 0x82060249  lb          $a2, 0x249($s0)
    ctx->pc = 0x2f6474u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
label_2f6478:
    // 0x2f6478: 0xc0baf44  jal         func_2EBD10
    ctx->pc = 0x2F6478u;
    SET_GPR_U32(ctx, 31, 0x2F6480u);
    ctx->pc = 0x2F647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6478u;
    // 0x2f647c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD10u, 0x2F6478u, 0x2F6480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6480u;
label_2f6480:
    // 0x2f6480: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6480u;
    {
        const bool branch_taken_0x2f6480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6480) {
            ctx->pc = 0x2F6484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6480u;
            // 0x2f6484: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6490u;
            goto label_2f6490;
        }
    }
    ctx->pc = 0x2F6488u;
label_2f6488:
    // 0x2f6488: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2F6488u;
    {
        const bool branch_taken_0x2f6488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6488u;
        // 0x2f648c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6488) {
            ctx->pc = 0x2F671Cu;
            goto label_2f671c;
        }
    }
    ctx->pc = 0x2F6490u;
label_2f6490:
    // 0x2f6490: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2f6490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f6494: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f6494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2f6498: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f6498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2f649c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f649cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f64a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f64a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64a4: 0xc441013c  lwc1        $f1, 0x13C($v0)
    ctx->pc = 0x2f64a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f64a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f64a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f64acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f64b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f64b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f64b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f64b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f64b8: 0xe60102f0  swc1        $f1, 0x2F0($s0)
    ctx->pc = 0x2f64b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x2f64bc: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f64bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f64c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f64c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f64c4: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f64c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x2f64c8: 0xc4410144  lwc1        $f1, 0x144($v0)
    ctx->pc = 0x2f64c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f64cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f64ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f64d0: 0xe60102f8  swc1        $f1, 0x2F8($s0)
    ctx->pc = 0x2f64d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2f64d4: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x2f64d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f64d8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2f64d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2f64dc: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F64DCu;
    SET_GPR_U32(ctx, 31, 0x2F64E4u);
    ctx->pc = 0x2F64E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64DCu;
    // 0x2f64e0: 0xe6030300  swc1        $f3, 0x300($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F64DCu, 0x2F64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64E4u;
label_2f64e4:
    // 0x2f64e4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f64e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f64e8: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x2f64e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2f64ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f64ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64f0: 0xc0bd896  jal         func_2F6258
    ctx->pc = 0x2F64F0u;
    SET_GPR_U32(ctx, 31, 0x2F64F8u);
    ctx->pc = 0x2F64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64F0u;
    // 0x2f64f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6258u, 0x2F64F0u, 0x2F64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64F8u;
label_2f64f8:
    // 0x2f64f8: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f64f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f64fc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2f64fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6500: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x2f6500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f6504: 0x18400072  blez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F6504u;
    {
        const bool branch_taken_0x2f6504 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6504u;
        // 0x2f6508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6504) {
            ctx->pc = 0x2F66D0u;
            goto label_2f66d0;
        }
    }
    ctx->pc = 0x2F650Cu;
    // 0x2f650c: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x2f650cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6510: 0x220602d  daddu       $t4, $s1, $zero
    ctx->pc = 0x2f6510u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6514: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x2f6514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2f6518: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x2f6518u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x2f651c: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x2f651cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x2f6520: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2f6520u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2f6524: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x2f6524u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x2f6528: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f6528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f652c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x2f652cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x2f6530: 0x3c0a0800  lui         $t2, 0x800
    ctx->pc = 0x2f6530u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2048 << 16));
    // 0x2f6534: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2f6534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6538: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2f653c: 0x0  nop
    ctx->pc = 0x2f653cu;
    // NOP
label_2f6540:
    // 0x2f6540: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2f6540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f6544: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f6548: 0x104d0006  beq         $v0, $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6548u;
    {
        const bool branch_taken_0x2f6548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x2F654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6548u;
        // 0x2f654c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6548) {
            ctx->pc = 0x2F6564u;
            goto label_2f6564;
        }
    }
    ctx->pc = 0x2F6550u;
    // 0x2f6550: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f6550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f6554: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f6554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6558: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f655c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6560: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f6564:
    // 0x2f6564: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f6564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f6568: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f6568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f656c: 0x104c0006  beq         $v0, $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F656Cu;
    {
        const bool branch_taken_0x2f656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x2F6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F656Cu;
        // 0x2f6570: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f656c) {
            ctx->pc = 0x2F6588u;
            goto label_2f6588;
        }
    }
    ctx->pc = 0x2F6574u;
    // 0x2f6574: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f6574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f6578: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2f6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f657c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f657cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f6580: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2f6580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6584: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f6588:
    // 0x2f6588: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f6588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f658c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6590: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f6590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f6594: 0xfc690060  sd          $t1, 0x60($v1)
    ctx->pc = 0x2f6594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 9));
    // 0x2f6598: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f6598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f659c: 0xfc480068  sd          $t0, 0x68($v0)
    ctx->pc = 0x2f659cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 8));
    // 0x2f65a0: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f65a4: 0xfc690060  sd          $t1, 0x60($v1)
    ctx->pc = 0x2f65a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 9));
    // 0x2f65a8: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2f65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f65ac: 0xfc480068  sd          $t0, 0x68($v0)
    ctx->pc = 0x2f65acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 8));
    // 0x2f65b0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2f65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2f65b4: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x2f65b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x2f65b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F65B8u;
    {
        const bool branch_taken_0x2f65b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65B8u;
        // 0x2f65bc: 0x6a1024  and         $v0, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65b8) {
            ctx->pc = 0x2F65C8u;
            goto label_2f65c8;
        }
    }
    ctx->pc = 0x2F65C0u;
    // 0x2f65c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f65c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f65c4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f65c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f65c8:
    // 0x2f65c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f65c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f65cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f65ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f65d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F65D0u;
    {
        const bool branch_taken_0x2f65d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F65D0u;
        // 0x2f65d4: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f65d0) {
            ctx->pc = 0x2F65E0u;
            goto label_2f65e0;
        }
    }
    ctx->pc = 0x2F65D8u;
    // 0x2f65d8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2f65d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2f65dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f65dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f65e0:
    // 0x2f65e0: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x2f65e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2f65e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2f65e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f65e8: 0x0  nop
    ctx->pc = 0x2f65e8u;
    // NOP
    // 0x2f65ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f65ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f65f0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f65f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f65f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f65f8: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x2f65f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x2f65fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f65fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6600: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f6600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f6604: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2f6604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6608: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f660c: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f6610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f6610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6614: 0x0  nop
    ctx->pc = 0x2f6614u;
    // NOP
    // 0x2f6618: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f6618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f661c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6620: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f6620u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f6624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f6624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f6628: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2f6628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2f662c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f6630: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6634: 0xfc4700a8  sd          $a3, 0xA8($v0)
    ctx->pc = 0x2f6634u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 7));
    // 0x2f6638: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2f6638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f663c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6640: 0xe46300c0  swc1        $f3, 0xC0($v1)
    ctx->pc = 0x2f6640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f6644: 0x8e0402c4  lw          $a0, 0x2C4($s0)
    ctx->pc = 0x2f6644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f6648: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f664c: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x2f664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6650: 0xe48000c4  swc1        $f0, 0xC4($a0)
    ctx->pc = 0x2f6650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x2f6654: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f6654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f6658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f665c: 0xfc4700c8  sd          $a3, 0xC8($v0)
    ctx->pc = 0x2f665cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 7));
    // 0x2f6660: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f6660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f6664: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f6664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6668: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x2f6668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x2f666c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f6670: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f6674: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6678: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2f6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f667c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6680: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2f6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2f6684: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2f6684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f6688: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f668c: 0xfc4700a8  sd          $a3, 0xA8($v0)
    ctx->pc = 0x2f668cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 7));
    // 0x2f6690: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f6690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f6694: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6698: 0xe46300c0  swc1        $f3, 0xC0($v1)
    ctx->pc = 0x2f6698u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f669c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2f669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2f66a0: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2f66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f66a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f66a8: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2f66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f66ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f66acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f66b0: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x2f66b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2f66b4: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2f66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2f66b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f66bc: 0xfc4700c8  sd          $a3, 0xC8($v0)
    ctx->pc = 0x2f66bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 7));
    // 0x2f66c0: 0x82030249  lb          $v1, 0x249($s0)
    ctx->pc = 0x2f66c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f66c4: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2f66c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f66c8: 0x5460ff9d  bnel        $v1, $zero, . + 4 + (-0x63 << 2)
    ctx->pc = 0x2F66C8u;
    {
        const bool branch_taken_0x2f66c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f66c8) {
            ctx->pc = 0x2F66CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F66C8u;
            // 0x2f66cc: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6540;
        }
    }
    ctx->pc = 0x2F66D0u;
label_2f66d0:
    // 0x2f66d0: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2F66D0u;
    SET_GPR_U32(ctx, 31, 0x2F66D8u);
    ctx->pc = 0x2F66D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66D0u;
    // 0x2f66d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2F66D0u, 0x2F66D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66D8u;
label_2f66d8:
    // 0x2f66d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f66d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66dc: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2F66DCu;
    SET_GPR_U32(ctx, 31, 0x2F66E4u);
    ctx->pc = 0x2F66E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66DCu;
    // 0x2f66e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2F66DCu, 0x2F66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66E4u;
label_2f66e4:
    // 0x2f66e4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2f66e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f66e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f66e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f66ec: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2F66ECu;
    SET_GPR_U32(ctx, 31, 0x2F66F4u);
    ctx->pc = 0x2F66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F66ECu;
    // 0x2f66f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2F66ECu, 0x2F66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F66F4u;
label_2f66f4:
    // 0x2f66f4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f66f8: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x2f66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2f66fc: 0x9043018c  lbu         $v1, 0x18C($v0)
    ctx->pc = 0x2f66fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x2f6700: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f6700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f6704: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6704u;
    {
        const bool branch_taken_0x2f6704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6704u;
        // 0x2f6708: 0xae0302e4  sw          $v1, 0x2E4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6704) {
            ctx->pc = 0x2F6718u;
            goto label_2f6718;
        }
    }
    ctx->pc = 0x2F670Cu;
    // 0x2f670c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2f670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f6710: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6710u;
    {
        const bool branch_taken_0x2f6710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6710u;
        // 0x2f6714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6710) {
            ctx->pc = 0x2F671Cu;
            goto label_2f671c;
        }
    }
    ctx->pc = 0x2F6718u;
label_2f6718:
    // 0x2f6718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f671c:
    // 0x2f671c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2f671cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f6720: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2f6720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f6724: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2f6724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f6728: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2f6728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f672c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2f672cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f6730: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f6730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f6734: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6734u;
        // 0x2f6738: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F673Cu;
    // 0x2f673c: 0x0  nop
    ctx->pc = 0x2f673cu;
    // NOP
    ctx->pc = 0x2f6740u;
}
