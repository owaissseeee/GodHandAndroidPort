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

// Function: func_0014C328
// Address: 0x14c328 - 0x14c5a0
void func_0014C328_0x14c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014C328_0x14c328");
#endif

    switch (ctx->pc) {
        case 0x14c378u: goto label_14c378;
        case 0x14c390u: goto label_14c390;
        case 0x14c3d8u: goto label_14c3d8;
        case 0x14c418u: goto label_14c418;
        case 0x14c518u: goto label_14c518;
        case 0x14c524u: goto label_14c524;
        case 0x14c530u: goto label_14c530;
        case 0x14c544u: goto label_14c544;
        default: break;
    }

    ctx->pc = 0x14c328u;

    // 0x14c328: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14c328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14c32c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14c32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14c330: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14c334: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14c334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c338: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14c338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x14c33c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14c33cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c340: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14c340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x14c344: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x14c344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x14c348: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14c348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14c34c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x14c350: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x14c350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x14c354: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x14c354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x14c358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c35c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x14c35cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x14c360: 0x8e4602c8  lw          $a2, 0x2C8($s2)
    ctx->pc = 0x14c360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 712)));
    // 0x14c364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c368: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14C368u;
    {
        const bool branch_taken_0x14c368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C368u;
        // 0x14c36c: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c368) {
            ctx->pc = 0x14C380u;
            goto label_14c380;
        }
    }
    ctx->pc = 0x14C370u;
    // 0x14c370: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x14C370u;
    SET_GPR_U32(ctx, 31, 0x14C378u);
    ctx->pc = 0x14C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C370u;
    // 0x14c374: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x14C370u, 0x14C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C378u;
label_14c378:
    // 0x14c378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14C378u;
    {
        const bool branch_taken_0x14c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c378) {
            ctx->pc = 0x14C390u;
            goto label_14c390;
        }
    }
    ctx->pc = 0x14C380u;
label_14c380:
    // 0x14c380: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x14c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x14c384: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x14c384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14c388: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x14C388u;
    SET_GPR_U32(ctx, 31, 0x14C390u);
    ctx->pc = 0x14C38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C388u;
    // 0x14c38c: 0x8c463cf0  lw          $a2, 0x3CF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x14C388u, 0x14C390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C390u;
label_14c390:
    // 0x14c390: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14C390u;
    {
        const bool branch_taken_0x14c390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C390u;
        // 0x14c394: 0x26430220  addiu       $v1, $s2, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c390) {
            ctx->pc = 0x14C440u;
            goto label_14c440;
        }
    }
    ctx->pc = 0x14C398u;
    // 0x14c398: 0xae420238  sw          $v0, 0x238($s2)
    ctx->pc = 0x14c398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 2));
    // 0x14c39c: 0xae420220  sw          $v0, 0x220($s2)
    ctx->pc = 0x14c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 2));
    // 0x14c3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c3a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x14c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x14c3a8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x14c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x14c3ac: 0xae420224  sw          $v0, 0x224($s2)
    ctx->pc = 0x14c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 2));
    // 0x14c3b0: 0x26430228  addiu       $v1, $s2, 0x228
    ctx->pc = 0x14c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    // 0x14c3b4: 0x8e440144  lw          $a0, 0x144($s2)
    ctx->pc = 0x14c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x14c3b8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x14c3bc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x14c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x14c3c0: 0xae420228  sw          $v0, 0x228($s2)
    ctx->pc = 0x14c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 2));
    // 0x14c3c4: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x14c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x14c3c8: 0xae42022c  sw          $v0, 0x22C($s2)
    ctx->pc = 0x14c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 556), GPR_U32(ctx, 2));
    // 0x14c3cc: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x14c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x14c3d0: 0xae420278  sw          $v0, 0x278($s2)
    ctx->pc = 0x14c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 2));
    // 0x14c3d4: 0x0  nop
    ctx->pc = 0x14c3d4u;
    // NOP
label_14c3d8:
    // 0x14c3d8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x14c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x14c3dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x14c3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14c3e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14C3E0u;
    {
        const bool branch_taken_0x14c3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3E0u;
        // 0x14c3e4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3e0) {
            ctx->pc = 0x14C400u;
            goto label_14c400;
        }
    }
    ctx->pc = 0x14C3E8u;
    // 0x14c3e8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x14c3ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14c3f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x14c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x14c3f4: 0x8c840144  lw          $a0, 0x144($a0)
    ctx->pc = 0x14c3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x14c3f8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14C3F8u;
    {
        const bool branch_taken_0x14c3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3F8u;
        // 0x14c3fc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3f8) {
            ctx->pc = 0x14C3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c3d8;
        }
    }
    ctx->pc = 0x14C400u;
label_14c400:
    // 0x14c400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x14c404: 0x3c150fff  lui         $s5, 0xFFF
    ctx->pc = 0x14c404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4095 << 16));
    // 0x14c408: 0x24574700  addiu       $s7, $v0, 0x4700
    ctx->pc = 0x14c408u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x14c40c: 0x3c1e1100  lui         $fp, 0x1100
    ctx->pc = 0x14c40cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4352 << 16));
    // 0x14c410: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x14c410u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x14c414: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x14c414u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
label_14c418:
    // 0x14c418: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x14c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c41c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x14c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x14c420: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x14c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14c424: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x14c424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14c428: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x14c428u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14c42c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14c430: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C430u;
    {
        const bool branch_taken_0x14c430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C430u;
        // 0x14c434: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c430) {
            ctx->pc = 0x14C440u;
            goto label_14c440;
        }
    }
    ctx->pc = 0x14C438u;
    // 0x14c438: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C438u;
    {
        const bool branch_taken_0x14c438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C438u;
        // 0x14c43c: 0xb51024  and         $v0, $a1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c438) {
            ctx->pc = 0x14C448u;
            goto label_14c448;
        }
    }
    ctx->pc = 0x14C440u;
label_14c440:
    // 0x14c440: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x14C440u;
    {
        const bool branch_taken_0x14c440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C440u;
        // 0x14c444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c440) {
            ctx->pc = 0x14C56Cu;
            goto label_14c56c;
        }
    }
    ctx->pc = 0x14C448u;
label_14c448:
    // 0x14c448: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x14c448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x14c44c: 0x34630015  ori         $v1, $v1, 0x15
    ctx->pc = 0x14c44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21);
    // 0x14c450: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14c454: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x14c454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x14c458: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14c458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14c45c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x14c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x14c460: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x14c460u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x14c464: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x14c464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x14c468: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x14c468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x14c46c: 0x3c026c14  lui         $v0, 0x6C14
    ctx->pc = 0x14c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27668 << 16));
    // 0x14c470: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x14c470u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x14c474: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x14c474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x14c478: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x14c478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x14c47c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x14c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x14c480: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x14c480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x14c484: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x14c484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x14c488: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14c488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14c48c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x14c48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x14c490: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x14c490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14c494: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x14c494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x14c498: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x14c498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x14c49c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x14c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14c4a0: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x14c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x14c4a4: 0xae250028  sw          $a1, 0x28($s1)
    ctx->pc = 0x14c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    // 0x14c4a8: 0x2408003d  addiu       $t0, $zero, 0x3D
    ctx->pc = 0x14c4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x14c4ac: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x14c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x14c4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4b4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x14c4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x14c4b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c4bc: 0xae3e0018  sw          $fp, 0x18($s1)
    ctx->pc = 0x14c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 30));
    // 0x14c4c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14c4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c4c4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x14c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x14c4c8: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14c4cc: 0x92e20005  lbu         $v0, 0x5($s7)
    ctx->pc = 0x14c4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 5)));
    // 0x14c4d0: 0x92e70004  lbu         $a3, 0x4($s7)
    ctx->pc = 0x14c4d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x14c4d4: 0x92e30006  lbu         $v1, 0x6($s7)
    ctx->pc = 0x14c4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x14c4d8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x14c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x14c4dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x14c4dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14c4e0: 0xfe360040  sd          $s6, 0x40($s1)
    ctx->pc = 0x14c4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 22));
    // 0x14c4e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x14c4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x14c4e8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x14c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x14c4ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x14c4ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x14c4f0: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x14c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x14c4f4: 0xfe360050  sd          $s6, 0x50($s1)
    ctx->pc = 0x14c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 22));
    // 0x14c4f8: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x14c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x14c4fc: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x14c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x14c500: 0xfe360060  sd          $s6, 0x60($s1)
    ctx->pc = 0x14c500u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 22));
    // 0x14c504: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x14c504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x14c508: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x14c508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x14c50c: 0xfe270030  sd          $a3, 0x30($s1)
    ctx->pc = 0x14c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 7));
    // 0x14c510: 0xc0556fa  jal         func_155BE8
    ctx->pc = 0x14C510u;
    SET_GPR_U32(ctx, 31, 0x14C518u);
    ctx->pc = 0x14C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C510u;
    // 0x14c514: 0xfe280038  sd          $t0, 0x38($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE8u, 0x14C510u, 0x14C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C518u;
label_14c518:
    // 0x14c518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c51c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14C51Cu;
    SET_GPR_U32(ctx, 31, 0x14C524u);
    ctx->pc = 0x14C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C51Cu;
    // 0x14c520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14C51Cu, 0x14C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C524u;
label_14c524:
    // 0x14c524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c528: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14C528u;
    {
        const bool branch_taken_0x14c528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C528u;
        // 0x14c52c: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c528) {
            ctx->pc = 0x14C550u;
            goto label_14c550;
        }
    }
    ctx->pc = 0x14C530u;
label_14c530:
    // 0x14c530: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14c534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c538: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x14c538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x14c53c: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14C53Cu;
    SET_GPR_U32(ctx, 31, 0x14C544u);
    ctx->pc = 0x14C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C53Cu;
    // 0x14c540: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14C53Cu, 0x14C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C544u;
label_14c544:
    // 0x14c544: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14c544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14c548: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14C548u;
    {
        const bool branch_taken_0x14c548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C548u;
        // 0x14c54c: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c548) {
            ctx->pc = 0x14C530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c530;
        }
    }
    ctx->pc = 0x14C550u;
label_14c550:
    // 0x14c550: 0xae3e007c  sw          $fp, 0x7C($s1)
    ctx->pc = 0x14c550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 30));
    // 0x14c554: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x14c554u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x14c558: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x14c558u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c55c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c560: 0x1682ffad  bne         $s4, $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x14C560u;
    {
        const bool branch_taken_0x14c560 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C560u;
        // 0x14c564: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c560) {
            ctx->pc = 0x14C418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c418;
        }
    }
    ctx->pc = 0x14C568u;
    // 0x14c568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c56c:
    // 0x14c56c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14c56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14c570: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x14c570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14c574: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x14c574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14c578: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x14c578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14c57c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14c57cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14c580: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14c580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c584: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x14c584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14c588: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x14c588u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14c58c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x14c58cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c594: 0x3e00008  jr          $ra
    ctx->pc = 0x14C594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C594u;
        // 0x14c598: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C59Cu;
    // 0x14c59c: 0x0  nop
    ctx->pc = 0x14c59cu;
    // NOP
    ctx->pc = 0x14c5a0u;
}
