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

// Function: func_0030F348
// Address: 0x30f348 - 0x30f518
void func_0030F348_0x30f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030F348_0x30f348");
#endif

    switch (ctx->pc) {
        case 0x30f384u: goto label_30f384;
        case 0x30f3a0u: goto label_30f3a0;
        case 0x30f418u: goto label_30f418;
        default: break;
    }

    ctx->pc = 0x30f348u;

    // 0x30f348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30f348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30f34c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30f350: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30f354: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x30f354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30f35c: 0x8c633d08  lw          $v1, 0x3D08($v1)
    ctx->pc = 0x30f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C3D08u));
    // 0x30f360: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30f364: 0x28620270  slti        $v0, $v1, 0x270
    ctx->pc = 0x30f364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
    // 0x30f368: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x30F368u;
    {
        const bool branch_taken_0x30f368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F368u;
        // 0x30f36c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f368) {
            ctx->pc = 0x30F4B0u;
            goto label_30f4b0;
        }
    }
    ctx->pc = 0x30F370u;
    // 0x30f370: 0x24020271  addiu       $v0, $zero, 0x271
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    // 0x30f374: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F374u;
    {
        const bool branch_taken_0x30f374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F374u;
        // 0x30f378: 0x3c0d003c  lui         $t5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f374) {
            ctx->pc = 0x30F388u;
            goto label_30f388;
        }
    }
    ctx->pc = 0x30F37Cu;
    // 0x30f37c: 0xc0c3cac  jal         func_30F2B0
    ctx->pc = 0x30F37Cu;
    SET_GPR_U32(ctx, 31, 0x30F384u);
    ctx->pc = 0x30F380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F37Cu;
    // 0x30f380: 0x24041571  addiu       $a0, $zero, 0x1571 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5489));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F2B0u, 0x30F37Cu, 0x30F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F384u;
label_30f384:
    // 0x30f384: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x30f384u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
label_30f388:
    // 0x30f388: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x30f388u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x30f38c: 0x25ac3d10  addiu       $t4, $t5, 0x3D10
    ctx->pc = 0x30f38cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 15632));
    // 0x30f390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30f390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f394: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x30f394u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x30f398: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x30f398u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x30f39c: 0x26284250  addiu       $t0, $s1, 0x4250
    ctx->pc = 0x30f39cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16976));
label_30f3a0:
    // 0x30f3a0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30f3a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30f3a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30f3a8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x30f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x30f3ac: 0x292600e3  slti        $a2, $t1, 0xE3
    ctx->pc = 0x30f3acu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)227) ? 1 : 0);
    // 0x30f3b0: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x30f3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x30f3b4: 0x8d040634  lw          $a0, 0x634($t0)
    ctx->pc = 0x30f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1588)));
    // 0x30f3b8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x30f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x30f3bc: 0xa23825  or          $a3, $a1, $v0
    ctx->pc = 0x30f3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30f3c0: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x30f3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x30f3c4: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x30f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x30f3c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f3cc: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x30f3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x30f3d0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x30f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x30f3d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f3d8: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x30f3d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x30f3dc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x30f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x30f3e0: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x30F3E0u;
    {
        const bool branch_taken_0x30f3e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3E0u;
        // 0x30f3e4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3e0) {
            ctx->pc = 0x30F3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f3a0;
        }
    }
    ctx->pc = 0x30F3E8u;
    // 0x30f3e8: 0x2922026f  slti        $v0, $t1, 0x26F
    ctx->pc = 0x30f3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)623) ? 1 : 0);
    // 0x30f3ec: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30F3ECu;
    {
        const bool branch_taken_0x30f3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F3ECu;
        // 0x30f3f0: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3ec) {
            ctx->pc = 0x30F460u;
            goto label_30f460;
        }
    }
    ctx->pc = 0x30F3F4u;
    // 0x30f3f4: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x30f3f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x30f3f8: 0x24424250  addiu       $v0, $v0, 0x4250
    ctx->pc = 0x30f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16976));
    // 0x30f3fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30f400: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x30f400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x30f404: 0x246c3d10  addiu       $t4, $v1, 0x3D10
    ctx->pc = 0x30f404u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 15632));
    // 0x30f408: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x30f408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30f40c: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x30f410: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x30f410u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x30f414: 0x0  nop
    ctx->pc = 0x30f414u;
    // NOP
label_30f418:
    // 0x30f418: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x30f418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30f41c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30f41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30f420: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x30f424: 0x2926026f  slti        $a2, $t1, 0x26F
    ctx->pc = 0x30f424u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)623) ? 1 : 0);
    // 0x30f428: 0xab2824  and         $a1, $a1, $t3
    ctx->pc = 0x30f428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x30f42c: 0x8d04fc74  lw          $a0, -0x38C($t0)
    ctx->pc = 0x30f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294966388)));
    // 0x30f430: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x30f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x30f434: 0xa23825  or          $a3, $a1, $v0
    ctx->pc = 0x30f434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30f438: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x30f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x30f43c: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x30f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x30f440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f444: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x30f444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x30f448: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x30f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x30f44c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f450: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x30f450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x30f454: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x30f454u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x30f458: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x30F458u;
    {
        const bool branch_taken_0x30f458 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F458u;
        // 0x30f45c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f458) {
            ctx->pc = 0x30F418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f418;
        }
    }
    ctx->pc = 0x30F460u;
label_30f460:
    // 0x30f460: 0x26264250  addiu       $a2, $s1, 0x4250
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16976));
    // 0x30f464: 0x8e244250  lw          $a0, 0x4250($s1)
    ctx->pc = 0x30f464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16976)));
    // 0x30f468: 0x8cc309bc  lw          $v1, 0x9BC($a2)
    ctx->pc = 0x30f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2492)));
    // 0x30f46c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30f470: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x30f470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x30f474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30f478: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30f478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30f47c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x30f47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x30f480: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x30f480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30f484: 0x25a53d10  addiu       $a1, $t5, 0x3D10
    ctx->pc = 0x30f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 15632));
    // 0x30f488: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x30f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x30f48c: 0x8cc30630  lw          $v1, 0x630($a2)
    ctx->pc = 0x30f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1584)));
    // 0x30f490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f494: 0x72042  srl         $a0, $a3, 1
    ctx->pc = 0x30f494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x30f498: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30f49c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x30f49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x30f4a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f4a4: 0xae003d08  sw          $zero, 0x3D08($s0)
    ctx->pc = 0x30f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15624), GPR_U32(ctx, 0));
    // 0x30f4a8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x30f4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x30f4ac: 0xacc309bc  sw          $v1, 0x9BC($a2)
    ctx->pc = 0x30f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2492), GPR_U32(ctx, 3));
label_30f4b0:
    // 0x30f4b0: 0x8e043d08  lw          $a0, 0x3D08($s0)
    ctx->pc = 0x30f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15624)));
    // 0x30f4b4: 0x26234250  addiu       $v1, $s1, 0x4250
    ctx->pc = 0x30f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16976));
    // 0x30f4b8: 0x3c059d2c  lui         $a1, 0x9D2C
    ctx->pc = 0x30f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40236 << 16));
    // 0x30f4bc: 0x3c06efc6  lui         $a2, 0xEFC6
    ctx->pc = 0x30f4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61382 << 16));
    // 0x30f4c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30f4c4: 0x34a55680  ori         $a1, $a1, 0x5680
    ctx->pc = 0x30f4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22144);
    // 0x30f4c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f4cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30f4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30f4d0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x30f4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30f4d4: 0xae043d08  sw          $a0, 0x3D08($s0)
    ctx->pc = 0x30f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15624), GPR_U32(ctx, 4));
    // 0x30f4d8: 0x71ac2  srl         $v1, $a3, 11
    ctx->pc = 0x30f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x30f4dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30f4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f4e0: 0xe33826  xor         $a3, $a3, $v1
    ctx->pc = 0x30f4e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x30f4e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30f4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f4e8: 0x711c0  sll         $v0, $a3, 7
    ctx->pc = 0x30f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x30f4ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f4f0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x30f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x30f4f4: 0xe23826  xor         $a3, $a3, $v0
    ctx->pc = 0x30f4f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x30f4f8: 0x71bc0  sll         $v1, $a3, 15
    ctx->pc = 0x30f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x30f4fc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x30f4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x30f500: 0xe33826  xor         $a3, $a3, $v1
    ctx->pc = 0x30f500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x30f504: 0x71482  srl         $v0, $a3, 18
    ctx->pc = 0x30f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 18));
    // 0x30f508: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x30f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x30f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x30F50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F50Cu;
        // 0x30f510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F514u;
    // 0x30f514: 0x0  nop
    ctx->pc = 0x30f514u;
    // NOP
    ctx->pc = 0x30f518u;
}
