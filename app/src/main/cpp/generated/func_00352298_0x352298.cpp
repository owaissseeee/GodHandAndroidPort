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

// Function: func_00352298
// Address: 0x352298 - 0x352520
void func_00352298_0x352298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352298_0x352298");
#endif

    switch (ctx->pc) {
        case 0x3522dcu: goto label_3522dc;
        case 0x3522f0u: goto label_3522f0;
        case 0x352360u: goto label_352360;
        case 0x3523f8u: goto label_3523f8;
        case 0x35241cu: goto label_35241c;
        case 0x3524c8u: goto label_3524c8;
        default: break;
    }

    ctx->pc = 0x352298u;

    // 0x352298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x352298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35229c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3522a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3522a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3522a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3522a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3522a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3522ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3522acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3522b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3522b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3522b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522b8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3522b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3522bc: 0x26550d30  addiu       $s5, $s2, 0xD30
    ctx->pc = 0x3522bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x3522c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3522c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3522c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3522c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3522c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3522c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3522cc: 0x26450d4c  addiu       $a1, $s2, 0xD4C
    ctx->pc = 0x3522ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3404));
    // 0x3522d0: 0x265111e0  addiu       $s1, $s2, 0x11E0
    ctx->pc = 0x3522d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4576));
    // 0x3522d4: 0xc0d4b70  jal         func_352DC0
    ctx->pc = 0x3522D4u;
    SET_GPR_U32(ctx, 31, 0x3522DCu);
    ctx->pc = 0x3522D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3522D4u;
    // 0x3522d8: 0x8e531fc0  lw          $s3, 0x1FC0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352DC0u, 0x3522D4u, 0x3522DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3522DCu;
label_3522dc:
    // 0x3522dc: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x3522DCu;
    {
        const bool branch_taken_0x3522dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3522E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3522DCu;
        // 0x3522e0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3522dc) {
            ctx->pc = 0x352320u;
            goto label_352320;
        }
    }
    ctx->pc = 0x3522E4u;
    // 0x3522e4: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x3522e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3522e8: 0x264212dc  addiu       $v0, $s2, 0x12DC
    ctx->pc = 0x3522e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4828));
    // 0x3522ec: 0x0  nop
    ctx->pc = 0x3522ecu;
    // NOP
label_3522f0:
    // 0x3522f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3522f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3522f4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3522f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3522f8: 0x0  nop
    ctx->pc = 0x3522f8u;
    // NOP
    // 0x3522fc: 0x0  nop
    ctx->pc = 0x3522fcu;
    // NOP
    // 0x352300: 0x0  nop
    ctx->pc = 0x352300u;
    // NOP
    // 0x352304: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x352304u;
    {
        const bool branch_taken_0x352304 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x352308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352304u;
        // 0x352308: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352304) {
            ctx->pc = 0x3522F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3522f0;
        }
    }
    ctx->pc = 0x35230Cu;
    // 0x35230c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x352310: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x352310u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x352314: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x352314u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x352318: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x352318u;
    {
        const bool branch_taken_0x352318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352318u;
        // 0x35231c: 0x8e0a0018  lw          $t2, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352318) {
            ctx->pc = 0x3523A0u;
            goto label_3523a0;
        }
    }
    ctx->pc = 0x352320u;
label_352320:
    // 0x352320: 0x8e0a0018  lw          $t2, 0x18($s0)
    ctx->pc = 0x352320u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x352324: 0x2542ffff  addiu       $v0, $t2, -0x1
    ctx->pc = 0x352324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x352328: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x352328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35232c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x35232Cu;
    {
        const bool branch_taken_0x35232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35232Cu;
        // 0x352330: 0x8e070014  lw          $a3, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35232c) {
            ctx->pc = 0x3523A0u;
            goto label_3523a0;
        }
    }
    ctx->pc = 0x352334u;
    // 0x352334: 0x8e620164  lw          $v0, 0x164($s3)
    ctx->pc = 0x352334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x352338: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x352338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x35233c: 0x24e50400  addiu       $a1, $a3, 0x400
    ctx->pc = 0x35233cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x352340: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x352340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352344: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x352344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x352348: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x352348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35234c: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x35234cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x352350: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x352350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x352354: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x352354u;
    {
        const bool branch_taken_0x352354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352354u;
        // 0x352358: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352354) {
            ctx->pc = 0x3523A4u;
            goto label_3523a4;
        }
    }
    ctx->pc = 0x35235Cu;
    // 0x35235c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x35235cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_352360:
    // 0x352360: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x352360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x352364: 0x24c4003f  addiu       $a0, $a2, 0x3F
    ctx->pc = 0x352364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x352368: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x352368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35236c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x35236cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x352370: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x352370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x352374: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x352374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x352378: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x352378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x35237c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35237cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x352380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352384: 0xc8182a  slt         $v1, $a2, $t0
    ctx->pc = 0x352384u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x352388: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x352388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35238c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x35238Cu;
    {
        const bool branch_taken_0x35238c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x352390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35238Cu;
        // 0x352390: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35238c) {
            ctx->pc = 0x352360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352360;
        }
    }
    ctx->pc = 0x352394u;
    // 0x352394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x352394u;
    {
        const bool branch_taken_0x352394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352394u;
        // 0x352398: 0x28e30000  slti        $v1, $a3, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352394) {
            ctx->pc = 0x3523A4u;
            goto label_3523a4;
        }
    }
    ctx->pc = 0x35239Cu;
    // 0x35239c: 0x0  nop
    ctx->pc = 0x35239cu;
    // NOP
label_3523a0:
    // 0x3523a0: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x3523a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
label_3523a4:
    // 0x3523a4: 0x24e4003f  addiu       $a0, $a3, 0x3F
    ctx->pc = 0x3523a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x3523a8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3523a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3523ac: 0x96a50038  lhu         $a1, 0x38($s5)
    ctx->pc = 0x3523acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x3523b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x3523b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3523b4: 0x24183  sra         $t0, $v0, 6
    ctx->pc = 0x3523b4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3523b8: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x3523b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x3523bc: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x3523bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3523c0: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x3523c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3523c4: 0x1311021  addu        $v0, $t1, $s1
    ctx->pc = 0x3523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x3523c8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3523C8u;
    {
        const bool branch_taken_0x3523c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523C8u;
        // 0x3523cc: 0xa4450000  sh          $a1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523c8) {
            ctx->pc = 0x3523D8u;
            goto label_3523d8;
        }
    }
    ctx->pc = 0x3523D0u;
    // 0x3523d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3523D0u;
    {
        const bool branch_taken_0x3523d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523D0u;
        // 0x3523d4: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523d0) {
            ctx->pc = 0x352460u;
            goto label_352460;
        }
    }
    ctx->pc = 0x3523D8u;
label_3523d8:
    // 0x3523d8: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x3523D8u;
    {
        const bool branch_taken_0x3523d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3523DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523D8u;
        // 0x3523dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523d8) {
            ctx->pc = 0x352410u;
            goto label_352410;
        }
    }
    ctx->pc = 0x3523E0u;
    // 0x3523e0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3523e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3523e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3523e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3523e8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3523E8u;
    {
        const bool branch_taken_0x3523e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3523e8) {
            ctx->pc = 0x3523ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3523E8u;
            // 0x3523ec: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352418u;
            goto label_352418;
        }
    }
    ctx->pc = 0x3523F0u;
    // 0x3523f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3523F0u;
    {
        const bool branch_taken_0x3523f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523F0u;
        // 0x3523f4: 0xa6200002  sh          $zero, 0x2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523f0) {
            ctx->pc = 0x352460u;
            goto label_352460;
        }
    }
    ctx->pc = 0x3523F8u;
label_3523f8:
    // 0x3523f8: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x3523f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3523fc: 0x1311821  addu        $v1, $t1, $s1
    ctx->pc = 0x3523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x352400: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x352400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x352404: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x352404u;
    {
        const bool branch_taken_0x352404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352404u;
        // 0x352408: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352404) {
            ctx->pc = 0x352460u;
            goto label_352460;
        }
    }
    ctx->pc = 0x35240Cu;
    // 0x35240c: 0x0  nop
    ctx->pc = 0x35240cu;
    // NOP
label_352410:
    // 0x352410: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x352410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x352414: 0x0  nop
    ctx->pc = 0x352414u;
    // NOP
label_352418:
    // 0x352418: 0x1061823  subu        $v1, $t0, $a2
    ctx->pc = 0x352418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_35241c:
    // 0x35241c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x352420: 0x2465003f  addiu       $a1, $v1, 0x3F
    ctx->pc = 0x352420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x352424: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x352424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
    // 0x352428: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x352428u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x35242c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x35242cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352430: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x352430u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x352434: 0x28c40040  slti        $a0, $a2, 0x40
    ctx->pc = 0x352434u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x352438: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x352438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x35243c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x35243cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x352440: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x352440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x352444: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352448: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x352448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35244c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x35244cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352450: 0x1467ffe9  bne         $v1, $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x352450u;
    {
        const bool branch_taken_0x352450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x352454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352450u;
        // 0x352454: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352450) {
            ctx->pc = 0x3523F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3523f8;
        }
    }
    ctx->pc = 0x352458u;
    // 0x352458: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x352458u;
    {
        const bool branch_taken_0x352458 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352458u;
        // 0x35245c: 0x1061823  subu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352458) {
            ctx->pc = 0x35241Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35241c;
        }
    }
    ctx->pc = 0x352460u;
label_352460:
    // 0x352460: 0x1312821  addu        $a1, $t1, $s1
    ctx->pc = 0x352460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x352464: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x352464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x352468: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x352468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x35246c: 0x15430022  bne         $t2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x35246Cu;
    {
        const bool branch_taken_0x35246c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x352470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35246Cu;
        // 0x352470: 0xa6a2003a  sh          $v0, 0x3A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35246c) {
            ctx->pc = 0x3524F8u;
            goto label_3524f8;
        }
    }
    ctx->pc = 0x352474u;
    // 0x352474: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x352474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x352478: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x352478u;
    {
        const bool branch_taken_0x352478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352478u;
        // 0x35247c: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352478) {
            ctx->pc = 0x3524F8u;
            goto label_3524f8;
        }
    }
    ctx->pc = 0x352480u;
    // 0x352480: 0x8e690164  lw          $t1, 0x164($s3)
    ctx->pc = 0x352480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x352484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352488: 0x94a70002  lhu         $a3, 0x2($a1)
    ctx->pc = 0x352488u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x35248c: 0x8d260070  lw          $a2, 0x70($t1)
    ctx->pc = 0x35248cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x352490: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x352490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352494: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x352494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x352498: 0x24c8003f  addiu       $t0, $a2, 0x3F
    ctx->pc = 0x352498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x35249c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x35249cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3524a0: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x3524a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3524a4: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x3524a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x3524a8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3524a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3524ac: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3524acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3524b0: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x3524b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3524b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3524b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3524b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3524b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3524bc: 0xa4470002  sh          $a3, 0x2($v0)
    ctx->pc = 0x3524bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x3524c0: 0xc0d4948  jal         func_352520
    ctx->pc = 0x3524C0u;
    SET_GPR_U32(ctx, 31, 0x3524C8u);
    ctx->pc = 0x3524C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3524C0u;
    // 0x3524c4: 0xa527002e  sh          $a3, 0x2E($t1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 9), 46), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352520u, 0x3524C0u, 0x3524C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3524C8u;
label_3524c8:
    // 0x3524c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3524c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3524cc: 0x8e650164  lw          $a1, 0x164($s3)
    ctx->pc = 0x3524ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x3524d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3524d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3524d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3524d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3524d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3524d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3524dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3524dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3524e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3524e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3524e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3524e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3524e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3524e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3524ec: 0x80d504a  j           func_354128
    ctx->pc = 0x3524ECu;
    ctx->pc = 0x3524F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3524ECu;
    // 0x3524f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354128u, 0x3524ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3524F4u;
    // 0x3524f4: 0x0  nop
    ctx->pc = 0x3524f4u;
    // NOP
label_3524f8:
    // 0x3524f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3524f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3524fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3524fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x352500: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x352500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352504: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x352504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352508: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x352508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35250c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x35250cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x352510: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x352510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352514: 0x3e00008  jr          $ra
    ctx->pc = 0x352514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352514u;
        // 0x352518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35251Cu;
    // 0x35251c: 0x0  nop
    ctx->pc = 0x35251cu;
    // NOP
    ctx->pc = 0x352520u;
}
