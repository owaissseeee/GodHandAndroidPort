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

// Function: func_0036E380
// Address: 0x36e380 - 0x36eb58
void func_0036E380_0x36e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036E380_0x36e380");
#endif

    switch (ctx->pc) {
        case 0x36e3f4u: goto label_36e3f4;
        case 0x36e9b8u: goto label_36e9b8;
        case 0x36ea68u: goto label_36ea68;
        case 0x36ea94u: goto label_36ea94;
        case 0x36ea9cu: goto label_36ea9c;
        default: break;
    }

    ctx->pc = 0x36e380u;

    // 0x36e380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36e384: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36e384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e388: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36e38c: 0x24920160  addiu       $s2, $a0, 0x160
    ctx->pc = 0x36e38cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x36e390: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36e394: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36e394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e39c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36e3a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36e3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36e3a4: 0xae430420  sw          $v1, 0x420($s2)
    ctx->pc = 0x36e3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1056), GPR_U32(ctx, 3));
    // 0x36e3a8: 0x8e42042c  lw          $v0, 0x42C($s2)
    ctx->pc = 0x36e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1068)));
    // 0x36e3ac: 0x8e440308  lw          $a0, 0x308($s2)
    ctx->pc = 0x36e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x36e3b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e3b4: 0xae4004a4  sw          $zero, 0x4A4($s2)
    ctx->pc = 0x36e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1188), GPR_U32(ctx, 0));
    // 0x36e3b8: 0xae42042c  sw          $v0, 0x42C($s2)
    ctx->pc = 0x36e3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1068), GPR_U32(ctx, 2));
    // 0x36e3bc: 0xae4004a8  sw          $zero, 0x4A8($s2)
    ctx->pc = 0x36e3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1192), GPR_U32(ctx, 0));
    // 0x36e3c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E3C0u;
    {
        const bool branch_taken_0x36e3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E3C0u;
        // 0x36e3c4: 0xae4004ac  sw          $zero, 0x4AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e3c0) {
            ctx->pc = 0x36E3D4u;
            goto label_36e3d4;
        }
    }
    ctx->pc = 0x36E3C8u;
    // 0x36e3c8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x36e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36e3cc: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E3CCu;
    {
        const bool branch_taken_0x36e3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x36e3cc) {
            ctx->pc = 0x36E3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E3CCu;
            // 0x36e3d0: 0x8e420494  lw          $v0, 0x494($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E3E4u;
            goto label_36e3e4;
        }
    }
    ctx->pc = 0x36E3D4u;
label_36e3d4:
    // 0x36e3d4: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x36e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x36e3d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36E3D8u;
    {
        const bool branch_taken_0x36e3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e3d8) {
            ctx->pc = 0x36E3ECu;
            goto label_36e3ec;
        }
    }
    ctx->pc = 0x36E3E0u;
    // 0x36e3e0: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x36e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
label_36e3e4:
    // 0x36e3e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e3e8: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x36e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_36e3ec:
    // 0x36e3ec: 0xc0db880  jal         func_36E200
    ctx->pc = 0x36E3ECu;
    SET_GPR_U32(ctx, 31, 0x36E3F4u);
    ctx->pc = 0x36E3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3ECu;
    // 0x36e3f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E200u, 0x36E3ECu, 0x36E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3F4u;
label_36e3f4:
    // 0x36e3f4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x36e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x36e3f8: 0x2628024  and         $s0, $s3, $v0
    ctx->pc = 0x36e3f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x36e3fc: 0x2701823  subu        $v1, $s3, $s0
    ctx->pc = 0x36e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x36e400: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x36e400u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e408: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x36e408u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36e40c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x36e40cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e410: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e414: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x36e414u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e418: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e41c: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x36e41cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e424: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e424u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e428: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e42c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e42cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e430: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e434: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36e434u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36e438: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e438u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e43c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x36e43cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x36e440: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e444: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e448: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e44c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36e44cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36e450: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e450u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e454: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x36e454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x36e458: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e45c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e460: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x36e460u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x36e464: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e464u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e468: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x36e468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x36e46c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e470: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e474: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E474u;
    {
        const bool branch_taken_0x36e474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E474u;
        // 0x36e478: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e474) {
            ctx->pc = 0x36E498u;
            goto label_36e498;
        }
    }
    ctx->pc = 0x36E47Cu;
    // 0x36e47c: 0x111023  negu        $v0, $s1
    ctx->pc = 0x36e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x36e480: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e480u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e484: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x36e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e488: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e488u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e48c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E48Cu;
    {
        const bool branch_taken_0x36e48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E48Cu;
        // 0x36e490: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e48c) {
            ctx->pc = 0x36E4A0u;
            goto label_36e4a0;
        }
    }
    ctx->pc = 0x36E494u;
    // 0x36e494: 0x0  nop
    ctx->pc = 0x36e494u;
    // NOP
label_36e498:
    // 0x36e498: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x36e498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x36e49c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_36e4a0:
    // 0x36e4a0: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e4a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e4a8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e4ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e4b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e4b4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e4b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e4b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e4bc: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x36e4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x36e4c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e4c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e4c8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x36e4c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e4cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e4d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e4d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e4d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e4d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E4D8u;
    {
        const bool branch_taken_0x36e4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4D8u;
        // 0x36e4dc: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e4d8) {
            ctx->pc = 0x36E550u;
            goto label_36e550;
        }
    }
    ctx->pc = 0x36E4E0u;
    // 0x36e4e0: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x36e4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x36e4e4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E4E4u;
    {
        const bool branch_taken_0x36e4e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4E4u;
        // 0x36e4e8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e4e4) {
            ctx->pc = 0x36E508u;
            goto label_36e508;
        }
    }
    ctx->pc = 0x36E4ECu;
    // 0x36e4ec: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e4f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e4f4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e4f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e4f8: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x36e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x36e4fc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e4fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e500: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E500u;
    {
        const bool branch_taken_0x36e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E500u;
        // 0x36e504: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e500) {
            ctx->pc = 0x36E514u;
            goto label_36e514;
        }
    }
    ctx->pc = 0x36E508u;
label_36e508:
    // 0x36e508: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x36e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x36e50c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e510: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x36e510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_36e514:
    // 0x36e514: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e514u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e518: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e51c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e524: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e528: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e52c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e52cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e530: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e534: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e538: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e53c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e544: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e548: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36E548u;
    {
        const bool branch_taken_0x36e548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E548u;
        // 0x36e54c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e548) {
            ctx->pc = 0x36E560u;
            goto label_36e560;
        }
    }
    ctx->pc = 0x36E550u;
label_36e550:
    // 0x36e550: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x36e550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x36e554: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x36e554u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x36e558: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x36e558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x36e55c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x36e55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_36e560:
    // 0x36e560: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x36e560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x36e564: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36E564u;
    {
        const bool branch_taken_0x36e564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E564u;
        // 0x36e568: 0x81502  srl         $v0, $t0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e564) {
            ctx->pc = 0x36E5E0u;
            goto label_36e5e0;
        }
    }
    ctx->pc = 0x36E56Cu;
    // 0x36e56c: 0x2631ffec  addiu       $s1, $s1, -0x14
    ctx->pc = 0x36e56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
    // 0x36e570: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E570u;
    {
        const bool branch_taken_0x36e570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E570u;
        // 0x36e574: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e570) {
            ctx->pc = 0x36E598u;
            goto label_36e598;
        }
    }
    ctx->pc = 0x36E578u;
    // 0x36e578: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e57c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e580: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e580u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e584: 0x81d02  srl         $v1, $t0, 20
    ctx->pc = 0x36e584u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x36e588: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e588u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e58c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36E58Cu;
    {
        const bool branch_taken_0x36e58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E58Cu;
        // 0x36e590: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e58c) {
            ctx->pc = 0x36E5A4u;
            goto label_36e5a4;
        }
    }
    ctx->pc = 0x36E594u;
    // 0x36e594: 0x0  nop
    ctx->pc = 0x36e594u;
    // NOP
label_36e598:
    // 0x36e598: 0x81502  srl         $v0, $t0, 20
    ctx->pc = 0x36e598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 20));
    // 0x36e59c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e59cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e5a0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x36e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_36e5a4:
    // 0x36e5a4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e5a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e5a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e5ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e5b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e5b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e5b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e5bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e5bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e5c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e5c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e5c8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e5cc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e5ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e5d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e5d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e5d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E5D8u;
    {
        const bool branch_taken_0x36e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5D8u;
        // 0x36e5dc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e5d8) {
            ctx->pc = 0x36E5ECu;
            goto label_36e5ec;
        }
    }
    ctx->pc = 0x36E5E0u;
label_36e5e0:
    // 0x36e5e0: 0x84300  sll         $t0, $t0, 12
    ctx->pc = 0x36e5e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 12));
    // 0x36e5e4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x36e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x36e5e8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x36e5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_36e5ec:
    // 0x36e5ec: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x36e5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x36e5f0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E5F0u;
    {
        const bool branch_taken_0x36e5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5F0u;
        // 0x36e5f4: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e5f0) {
            ctx->pc = 0x36E668u;
            goto label_36e668;
        }
    }
    ctx->pc = 0x36E5F8u;
    // 0x36e5f8: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x36e5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x36e5fc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E5FCu;
    {
        const bool branch_taken_0x36e5fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5FCu;
        // 0x36e600: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e5fc) {
            ctx->pc = 0x36E620u;
            goto label_36e620;
        }
    }
    ctx->pc = 0x36E604u;
    // 0x36e604: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e608: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e60c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e60cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e610: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x36e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x36e614: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e614u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e618: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E618u;
    {
        const bool branch_taken_0x36e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E618u;
        // 0x36e61c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e618) {
            ctx->pc = 0x36E62Cu;
            goto label_36e62c;
        }
    }
    ctx->pc = 0x36E620u;
label_36e620:
    // 0x36e620: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x36e620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x36e624: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e628: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x36e628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_36e62c:
    // 0x36e62c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e62cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e634: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e63c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e63cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e640: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e644: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e648: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e64c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e64cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e650: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e654: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e658: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e65c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e65cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E660u;
    {
        const bool branch_taken_0x36e660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E660u;
        // 0x36e664: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e660) {
            ctx->pc = 0x36E674u;
            goto label_36e674;
        }
    }
    ctx->pc = 0x36E668u;
label_36e668:
    // 0x36e668: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x36e668u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x36e66c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x36e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x36e670: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x36e670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_36e674:
    // 0x36e674: 0x2a22001c  slti        $v0, $s1, 0x1C
    ctx->pc = 0x36e674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x36e678: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E678u;
    {
        const bool branch_taken_0x36e678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E678u;
        // 0x36e67c: 0x81702  srl         $v0, $t0, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e678) {
            ctx->pc = 0x36E6F0u;
            goto label_36e6f0;
        }
    }
    ctx->pc = 0x36E680u;
    // 0x36e680: 0x2631ffe4  addiu       $s1, $s1, -0x1C
    ctx->pc = 0x36e680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967268));
    // 0x36e684: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E684u;
    {
        const bool branch_taken_0x36e684 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E684u;
        // 0x36e688: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e684) {
            ctx->pc = 0x36E6A8u;
            goto label_36e6a8;
        }
    }
    ctx->pc = 0x36E68Cu;
    // 0x36e68c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e690: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e690u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e694: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e698: 0x81f02  srl         $v1, $t0, 28
    ctx->pc = 0x36e698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x36e69c: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e69cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e6a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E6A0u;
    {
        const bool branch_taken_0x36e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6A0u;
        // 0x36e6a4: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e6a0) {
            ctx->pc = 0x36E6B4u;
            goto label_36e6b4;
        }
    }
    ctx->pc = 0x36E6A8u;
label_36e6a8:
    // 0x36e6a8: 0x81702  srl         $v0, $t0, 28
    ctx->pc = 0x36e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 28));
    // 0x36e6ac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e6acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e6b0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x36e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_36e6b4:
    // 0x36e6b4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e6b4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e6b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e6bc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e6c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e6c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e6c8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e6cc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e6ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e6d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e6d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e6d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e6dc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e6dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e6e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e6e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e6e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E6E8u;
    {
        const bool branch_taken_0x36e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6E8u;
        // 0x36e6ec: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e6e8) {
            ctx->pc = 0x36E6FCu;
            goto label_36e6fc;
        }
    }
    ctx->pc = 0x36E6F0u;
label_36e6f0:
    // 0x36e6f0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x36e6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x36e6f4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x36e6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x36e6f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x36e6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_36e6fc:
    // 0x36e6fc: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x36e6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x36e700: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E700u;
    {
        const bool branch_taken_0x36e700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E700u;
        // 0x36e704: 0x81382  srl         $v0, $t0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e700) {
            ctx->pc = 0x36E778u;
            goto label_36e778;
        }
    }
    ctx->pc = 0x36E708u;
    // 0x36e708: 0x2631fff2  addiu       $s1, $s1, -0xE
    ctx->pc = 0x36e708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967282));
    // 0x36e70c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E70Cu;
    {
        const bool branch_taken_0x36e70c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E70Cu;
        // 0x36e710: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e70c) {
            ctx->pc = 0x36E730u;
            goto label_36e730;
        }
    }
    ctx->pc = 0x36E714u;
    // 0x36e714: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e718: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e718u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e71c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e71cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e720: 0x81b82  srl         $v1, $t0, 14
    ctx->pc = 0x36e720u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x36e724: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e724u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E728u;
    {
        const bool branch_taken_0x36e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E728u;
        // 0x36e72c: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e728) {
            ctx->pc = 0x36E73Cu;
            goto label_36e73c;
        }
    }
    ctx->pc = 0x36E730u;
label_36e730:
    // 0x36e730: 0x81382  srl         $v0, $t0, 14
    ctx->pc = 0x36e730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 14));
    // 0x36e734: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e738: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x36e738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_36e73c:
    // 0x36e73c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e73cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e740: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e744: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e74c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e74cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e750: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e754: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e754u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e758: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e75c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e75cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e760: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e764: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e764u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e76c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e76cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E770u;
    {
        const bool branch_taken_0x36e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E770u;
        // 0x36e774: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e770) {
            ctx->pc = 0x36E784u;
            goto label_36e784;
        }
    }
    ctx->pc = 0x36E778u;
label_36e778:
    // 0x36e778: 0x84480  sll         $t0, $t0, 18
    ctx->pc = 0x36e778u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 18));
    // 0x36e77c: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x36e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x36e780: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x36e780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_36e784:
    // 0x36e784: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x36e784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36e788: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E788u;
    {
        const bool branch_taken_0x36e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E788u;
        // 0x36e78c: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e788) {
            ctx->pc = 0x36E800u;
            goto label_36e800;
        }
    }
    ctx->pc = 0x36E790u;
    // 0x36e790: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x36e790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x36e794: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E794u;
    {
        const bool branch_taken_0x36e794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E794u;
        // 0x36e798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e794) {
            ctx->pc = 0x36E7B8u;
            goto label_36e7b8;
        }
    }
    ctx->pc = 0x36E79Cu;
    // 0x36e79c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e7a0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e7a4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e7a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e7a8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x36e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36e7ac: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e7acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e7b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E7B0u;
    {
        const bool branch_taken_0x36e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7B0u;
        // 0x36e7b4: 0xae430018  sw          $v1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7b0) {
            ctx->pc = 0x36E7C4u;
            goto label_36e7c4;
        }
    }
    ctx->pc = 0x36E7B8u;
label_36e7b8:
    // 0x36e7b8: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x36e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36e7bc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e7bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e7c0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x36e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_36e7c4:
    // 0x36e7c4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e7c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e7c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e7cc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e7d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e7d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e7dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e7dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e7e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e7e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e7e8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e7ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e7ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e7f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e7f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e7f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E7F8u;
    {
        const bool branch_taken_0x36e7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7F8u;
        // 0x36e7fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7f8) {
            ctx->pc = 0x36E80Cu;
            goto label_36e80c;
        }
    }
    ctx->pc = 0x36E800u;
label_36e800:
    // 0x36e800: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x36e800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x36e804: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x36e804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x36e808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36e808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36e80c:
    // 0x36e80c: 0x2a220016  slti        $v0, $s1, 0x16
    ctx->pc = 0x36e80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x36e810: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E810u;
    {
        const bool branch_taken_0x36e810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E810u;
        // 0x36e814: 0x81582  srl         $v0, $t0, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e810) {
            ctx->pc = 0x36E888u;
            goto label_36e888;
        }
    }
    ctx->pc = 0x36E818u;
    // 0x36e818: 0x2631ffea  addiu       $s1, $s1, -0x16
    ctx->pc = 0x36e818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967274));
    // 0x36e81c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E81Cu;
    {
        const bool branch_taken_0x36e81c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E81Cu;
        // 0x36e820: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e81c) {
            ctx->pc = 0x36E840u;
            goto label_36e840;
        }
    }
    ctx->pc = 0x36E824u;
    // 0x36e824: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e828: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e82c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e82cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e830: 0x81d82  srl         $v1, $t0, 22
    ctx->pc = 0x36e830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x36e834: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E838u;
    {
        const bool branch_taken_0x36e838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E838u;
        // 0x36e83c: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e838) {
            ctx->pc = 0x36E84Cu;
            goto label_36e84c;
        }
    }
    ctx->pc = 0x36E840u;
label_36e840:
    // 0x36e840: 0x81582  srl         $v0, $t0, 22
    ctx->pc = 0x36e840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 22));
    // 0x36e844: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e848: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x36e848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_36e84c:
    // 0x36e84c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e84cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e854: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e858: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e85c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e85cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e860: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e864: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e868: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e86c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e86cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e870: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e874: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e87c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e87cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E880u;
    {
        const bool branch_taken_0x36e880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E880u;
        // 0x36e884: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e880) {
            ctx->pc = 0x36E894u;
            goto label_36e894;
        }
    }
    ctx->pc = 0x36E888u;
label_36e888:
    // 0x36e888: 0x84280  sll         $t0, $t0, 10
    ctx->pc = 0x36e888u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 10));
    // 0x36e88c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x36e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x36e890: 0x2631000a  addiu       $s1, $s1, 0xA
    ctx->pc = 0x36e890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_36e894:
    // 0x36e894: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x36e894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36e898: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E898u;
    {
        const bool branch_taken_0x36e898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E898u;
        // 0x36e89c: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e898) {
            ctx->pc = 0x36E910u;
            goto label_36e910;
        }
    }
    ctx->pc = 0x36E8A0u;
    // 0x36e8a0: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x36e8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x36e8a4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E8A4u;
    {
        const bool branch_taken_0x36e8a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8A4u;
        // 0x36e8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8a4) {
            ctx->pc = 0x36E8C8u;
            goto label_36e8c8;
        }
    }
    ctx->pc = 0x36E8ACu;
    // 0x36e8ac: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e8b0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e8b4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e8b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e8b8: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x36e8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36e8bc: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e8c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E8C0u;
    {
        const bool branch_taken_0x36e8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8C0u;
        // 0x36e8c4: 0xae430020  sw          $v1, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8c0) {
            ctx->pc = 0x36E8D4u;
            goto label_36e8d4;
        }
    }
    ctx->pc = 0x36E8C8u;
label_36e8c8:
    // 0x36e8c8: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x36e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36e8cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8d0: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x36e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_36e8d4:
    // 0x36e8d4: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e8d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e8d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e8dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e8e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e8e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e8e8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e8ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e8ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e8f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e8f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e8f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e8fc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e8fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e904: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E908u;
    {
        const bool branch_taken_0x36e908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E908u;
        // 0x36e90c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e908) {
            ctx->pc = 0x36E91Cu;
            goto label_36e91c;
        }
    }
    ctx->pc = 0x36E910u;
label_36e910:
    // 0x36e910: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x36e910u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x36e914: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x36e914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x36e918: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36e918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36e91c:
    // 0x36e91c: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x36e91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x36e920: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36E920u;
    {
        const bool branch_taken_0x36e920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E920u;
        // 0x36e924: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e920) {
            ctx->pc = 0x36E998u;
            goto label_36e998;
        }
    }
    ctx->pc = 0x36E928u;
    // 0x36e928: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x36e928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x36e92c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36E92Cu;
    {
        const bool branch_taken_0x36e92c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E92Cu;
        // 0x36e930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e92c) {
            ctx->pc = 0x36E950u;
            goto label_36e950;
        }
    }
    ctx->pc = 0x36E934u;
    // 0x36e934: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36e934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36e938: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36e93c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36e93cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36e940: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x36e940u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36e944: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e944u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e948: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E948u;
    {
        const bool branch_taken_0x36e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E948u;
        // 0x36e94c: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e948) {
            ctx->pc = 0x36E95Cu;
            goto label_36e95c;
        }
    }
    ctx->pc = 0x36E950u;
label_36e950:
    // 0x36e950: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x36e950u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36e954: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x36e954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e958: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x36e958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_36e95c:
    // 0x36e95c: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e95cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e960: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e964: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e968: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e96c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e96cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e970: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e974: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e978: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e97c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e97cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e980: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e984: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e984u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e98c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e98cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36E990u;
    {
        const bool branch_taken_0x36e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E990u;
        // 0x36e994: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e990) {
            ctx->pc = 0x36E9A4u;
            goto label_36e9a4;
        }
    }
    ctx->pc = 0x36E998u;
label_36e998:
    // 0x36e998: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x36e998u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x36e99c: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x36e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x36e9a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36e9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_36e9a4:
    // 0x36e9a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x36e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x36e9a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x36E9A8u;
    {
        const bool branch_taken_0x36e9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9A8u;
        // 0x36e9ac: 0x2a22001f  slti        $v0, $s1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e9a8) {
            ctx->pc = 0x36EA14u;
            goto label_36ea14;
        }
    }
    ctx->pc = 0x36E9B0u;
    // 0x36e9b0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x36e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36e9b4: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x36e9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_36e9b8:
    // 0x36e9b8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x36e9b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36e9bc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x36E9BCu;
    {
        const bool branch_taken_0x36e9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e9bc) {
            ctx->pc = 0x36E9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36E9BCu;
            // 0x36e9c0: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EA04u;
            goto label_36ea04;
        }
    }
    ctx->pc = 0x36E9C4u;
    // 0x36e9c4: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x36e9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x36e9c8: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x36e9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x36e9cc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e9d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e9d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e9d4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e9d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e9dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e9e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x36e9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e9e4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36e9e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x36e9e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e9ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36e9f0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x36e9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36e9f4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x36e9f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x36e9f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36e9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36e9fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x36ea00: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36ea00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36ea04:
    // 0x36ea04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36ea08: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36EA08u;
    {
        const bool branch_taken_0x36ea08 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x36ea08) {
            ctx->pc = 0x36EA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EA08u;
            // 0x36ea0c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36E9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e9b8;
        }
    }
    ctx->pc = 0x36EA10u;
    // 0x36ea10: 0x2a22001f  slti        $v0, $s1, 0x1F
    ctx->pc = 0x36ea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)31) ? 1 : 0);
label_36ea14:
    // 0x36ea14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36EA14u;
    {
        const bool branch_taken_0x36ea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA14u;
        // 0x36ea18: 0x817c2  srl         $v0, $t0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea14) {
            ctx->pc = 0x36EA50u;
            goto label_36ea50;
        }
    }
    ctx->pc = 0x36EA1Cu;
    // 0x36ea1c: 0x2631ffe1  addiu       $s1, $s1, -0x1F
    ctx->pc = 0x36ea1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967265));
    // 0x36ea20: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36EA20u;
    {
        const bool branch_taken_0x36ea20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA20u;
        // 0x36ea24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea20) {
            ctx->pc = 0x36EA40u;
            goto label_36ea40;
        }
    }
    ctx->pc = 0x36EA28u;
    // 0x36ea28: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x36ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x36ea2c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x36ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x36ea30: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x36ea30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x36ea34: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x36ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36ea38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36EA38u;
    {
        const bool branch_taken_0x36ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA38u;
        // 0x36ea3c: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea38) {
            ctx->pc = 0x36EA48u;
            goto label_36ea48;
        }
    }
    ctx->pc = 0x36EA40u;
label_36ea40:
    // 0x36ea40: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x36ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x36ea44: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x36ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_36ea48:
    // 0x36ea48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x36EA48u;
    {
        const bool branch_taken_0x36ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA48u;
        // 0x36ea4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea48) {
            ctx->pc = 0x36EA58u;
            goto label_36ea58;
        }
    }
    ctx->pc = 0x36EA50u;
label_36ea50:
    // 0x36ea50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36ea50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36ea54: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x36ea54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_36ea58:
    // 0x36ea58: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x36ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x36ea5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36EA5Cu;
    {
        const bool branch_taken_0x36ea5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA5Cu;
        // 0x36ea60: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea5c) {
            ctx->pc = 0x36EA8Cu;
            goto label_36ea8c;
        }
    }
    ctx->pc = 0x36EA64u;
    // 0x36ea64: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x36ea64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_36ea68:
    // 0x36ea68: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x36ea68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x36ea6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36EA6Cu;
    {
        const bool branch_taken_0x36ea6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA6Cu;
        // 0x36ea70: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea6c) {
            ctx->pc = 0x36EA7Cu;
            goto label_36ea7c;
        }
    }
    ctx->pc = 0x36EA74u;
    // 0x36ea74: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x36ea74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x36ea78: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x36ea78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_36ea7c:
    // 0x36ea7c: 0x0  nop
    ctx->pc = 0x36ea7cu;
    // NOP
    // 0x36ea80: 0x0  nop
    ctx->pc = 0x36ea80u;
    // NOP
    // 0x36ea84: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36EA84u;
    {
        const bool branch_taken_0x36ea84 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x36ea84) {
            ctx->pc = 0x36EA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EA84u;
            // 0x36ea88: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ea68;
        }
    }
    ctx->pc = 0x36EA8Cu;
label_36ea8c:
    // 0x36ea8c: 0xc0db882  jal         func_36E208
    ctx->pc = 0x36EA8Cu;
    SET_GPR_U32(ctx, 31, 0x36EA94u);
    ctx->pc = 0x36EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA8Cu;
    // 0x36ea90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E208u, 0x36EA8Cu, 0x36EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA94u;
label_36ea94:
    // 0x36ea94: 0xc0db8de  jal         func_36E378
    ctx->pc = 0x36EA94u;
    SET_GPR_U32(ctx, 31, 0x36EA9Cu);
    ctx->pc = 0x36EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA94u;
    // 0x36ea98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36E378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E378u, 0x36EA94u, 0x36EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA9Cu;
label_36ea9c:
    // 0x36ea9c: 0x8e4202c4  lw          $v0, 0x2C4($s2)
    ctx->pc = 0x36ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 708)));
    // 0x36eaa0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EAA0u;
    {
        const bool branch_taken_0x36eaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36eaa0) {
            ctx->pc = 0x36EAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EAA0u;
            // 0x36eaa4: 0x8e4202c8  lw          $v0, 0x2C8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EAB8u;
            goto label_36eab8;
        }
    }
    ctx->pc = 0x36EAA8u;
    // 0x36eaa8: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x36eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x36eaac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eab0: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x36eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x36eab4: 0x8e4202c8  lw          $v0, 0x2C8($s2)
    ctx->pc = 0x36eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
label_36eab8:
    // 0x36eab8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EAB8u;
    {
        const bool branch_taken_0x36eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36eab8) {
            ctx->pc = 0x36EABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EAB8u;
            // 0x36eabc: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EAD0u;
            goto label_36ead0;
        }
    }
    ctx->pc = 0x36EAC0u;
    // 0x36eac0: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x36eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x36eac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eac8: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x36eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x36eacc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x36eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_36ead0:
    // 0x36ead0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36ead4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x36ead4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x36ead8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EAD8u;
    {
        const bool branch_taken_0x36ead8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ead8) {
            ctx->pc = 0x36EADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36EAD8u;
            // 0x36eadc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36EAF0u;
            goto label_36eaf0;
        }
    }
    ctx->pc = 0x36EAE0u;
    // 0x36eae0: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x36eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x36eae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eae8: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x36eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
    // 0x36eaec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x36eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_36eaf0:
    // 0x36eaf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36eaf4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x36eaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x36eaf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EAF8u;
    {
        const bool branch_taken_0x36eaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EAF8u;
        // 0x36eafc: 0x2131823  subu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eaf8) {
            ctx->pc = 0x36EB0Cu;
            goto label_36eb0c;
        }
    }
    ctx->pc = 0x36EB00u;
    // 0x36eb00: 0x8e420494  lw          $v0, 0x494($s2)
    ctx->pc = 0x36eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1172)));
    // 0x36eb04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36eb08: 0xae420494  sw          $v0, 0x494($s2)
    ctx->pc = 0x36eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1172), GPR_U32(ctx, 2));
label_36eb0c:
    // 0x36eb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36eb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eb10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36eb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36eb18: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x36eb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x36eb1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36eb1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36eb20: 0xae42030c  sw          $v0, 0x30C($s2)
    ctx->pc = 0x36eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 2));
    // 0x36eb24: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x36eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x36eb28: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x36eb28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36eb2c: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x36eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x36eb30: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x36eb30u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x36eb34: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x36eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36eb38: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x36eb38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x36eb3c: 0xae450308  sw          $a1, 0x308($s2)
    ctx->pc = 0x36eb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 5));
    // 0x36eb40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x36eb44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36eb44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36eb48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36eb48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36eb4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36eb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36eb50: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB50u;
        // 0x36eb54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB58u;
}
