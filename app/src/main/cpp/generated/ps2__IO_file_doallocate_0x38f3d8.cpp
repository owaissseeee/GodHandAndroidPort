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

// Function: _IO_file_doallocate
// Address: 0x38f3d8 - 0x38f4c0
void ps2__IO_file_doallocate_0x38f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_doallocate_0x38f3d8");
#endif

    switch (ctx->pc) {
        case 0x38f3d8u: goto label_38f3d8;
        case 0x38f3dcu: goto label_38f3dc;
        case 0x38f3e0u: goto label_38f3e0;
        case 0x38f3e4u: goto label_38f3e4;
        case 0x38f3e8u: goto label_38f3e8;
        case 0x38f3ecu: goto label_38f3ec;
        case 0x38f3f0u: goto label_38f3f0;
        case 0x38f3f4u: goto label_38f3f4;
        case 0x38f3f8u: goto label_38f3f8;
        case 0x38f3fcu: goto label_38f3fc;
        case 0x38f400u: goto label_38f400;
        case 0x38f404u: goto label_38f404;
        case 0x38f408u: goto label_38f408;
        case 0x38f40cu: goto label_38f40c;
        case 0x38f410u: goto label_38f410;
        case 0x38f414u: goto label_38f414;
        case 0x38f418u: goto label_38f418;
        case 0x38f41cu: goto label_38f41c;
        case 0x38f420u: goto label_38f420;
        case 0x38f424u: goto label_38f424;
        case 0x38f428u: goto label_38f428;
        case 0x38f42cu: goto label_38f42c;
        case 0x38f430u: goto label_38f430;
        case 0x38f434u: goto label_38f434;
        case 0x38f438u: goto label_38f438;
        case 0x38f43cu: goto label_38f43c;
        case 0x38f440u: goto label_38f440;
        case 0x38f444u: goto label_38f444;
        case 0x38f448u: goto label_38f448;
        case 0x38f44cu: goto label_38f44c;
        case 0x38f450u: goto label_38f450;
        case 0x38f454u: goto label_38f454;
        case 0x38f458u: goto label_38f458;
        case 0x38f45cu: goto label_38f45c;
        case 0x38f460u: goto label_38f460;
        case 0x38f464u: goto label_38f464;
        case 0x38f468u: goto label_38f468;
        case 0x38f46cu: goto label_38f46c;
        case 0x38f470u: goto label_38f470;
        case 0x38f474u: goto label_38f474;
        case 0x38f478u: goto label_38f478;
        case 0x38f47cu: goto label_38f47c;
        case 0x38f480u: goto label_38f480;
        case 0x38f484u: goto label_38f484;
        case 0x38f488u: goto label_38f488;
        case 0x38f48cu: goto label_38f48c;
        case 0x38f490u: goto label_38f490;
        case 0x38f494u: goto label_38f494;
        case 0x38f498u: goto label_38f498;
        case 0x38f49cu: goto label_38f49c;
        case 0x38f4a0u: goto label_38f4a0;
        case 0x38f4a4u: goto label_38f4a4;
        case 0x38f4a8u: goto label_38f4a8;
        case 0x38f4acu: goto label_38f4ac;
        case 0x38f4b0u: goto label_38f4b0;
        case 0x38f4b4u: goto label_38f4b4;
        case 0x38f4b8u: goto label_38f4b8;
        case 0x38f4bcu: goto label_38f4bc;
        default: break;
    }

    ctx->pc = 0x38f3d8u;

label_38f3d8:
    // 0x38f3d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_38f3dc:
    // 0x38f3dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38f3e0:
    // 0x38f3e0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x38f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_38f3e4:
    // 0x38f3e4: 0x8c425518  lw          $v0, 0x5518($v0)
    ctx->pc = 0x38f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21784)));
label_38f3e8:
    // 0x38f3e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38f3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f3ec:
    // 0x38f3ec: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x38f3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_38f3f0:
    // 0x38f3f0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x38f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_38f3f4:
    // 0x38f3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38f3f8:
    if (ctx->pc == 0x38F3F8u) {
        ctx->pc = 0x38F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3F4u;
        // 0x38f3f8: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3FCu;
        goto label_38f3fc;
    }
    ctx->pc = 0x38F3F4u;
    {
        const bool branch_taken_0x38f3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3F4u;
        // 0x38f3f8: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3f4) {
            ctx->pc = 0x38F404u;
            goto label_38f404;
        }
    }
    ctx->pc = 0x38F3FCu;
label_38f3fc:
    // 0x38f3fc: 0x40f809  jalr        $v0
label_38f400:
    if (ctx->pc == 0x38F400u) {
        ctx->pc = 0x38F404u;
        goto label_38f404;
    }
    ctx->pc = 0x38F3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F404u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F3FCu, 0x38F404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F404u;
label_38f404:
    // 0x38f404: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x38f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_38f408:
    // 0x38f408: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_38f40c:
    if (ctx->pc == 0x38F40Cu) {
        ctx->pc = 0x38F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F408u;
        // 0x38f40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F410u;
        goto label_38f410;
    }
    ctx->pc = 0x38F408u;
    {
        const bool branch_taken_0x38f408 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x38F40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F408u;
        // 0x38f40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f408) {
            ctx->pc = 0x38F428u;
            goto label_38f428;
        }
    }
    ctx->pc = 0x38F410u;
label_38f410:
    // 0x38f410: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38f410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38f414:
    // 0x38f414: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x38f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_38f418:
    // 0x38f418: 0x40f809  jalr        $v0
label_38f41c:
    if (ctx->pc == 0x38F41Cu) {
        ctx->pc = 0x38F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F418u;
        // 0x38f41c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F420u;
        goto label_38f420;
    }
    ctx->pc = 0x38F418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F420u);
        ctx->pc = 0x38F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F418u;
        // 0x38f41c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F418u, 0x38F420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F420u;
label_38f420:
    // 0x38f420: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_38f424:
    if (ctx->pc == 0x38F424u) {
        ctx->pc = 0x38F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F420u;
        // 0x38f424: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F428u;
        goto label_38f428;
    }
    ctx->pc = 0x38F420u;
    {
        const bool branch_taken_0x38f420 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x38F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F420u;
        // 0x38f424: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f420) {
            ctx->pc = 0x38F434u;
            goto label_38f434;
        }
    }
    ctx->pc = 0x38F428u;
label_38f428:
    // 0x38f428: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38f428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38f42c:
    // 0x38f42c: 0x1000000a  b           . + 4 + (0xA << 2)
label_38f430:
    if (ctx->pc == 0x38F430u) {
        ctx->pc = 0x38F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F42Cu;
        // 0x38f430: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F434u;
        goto label_38f434;
    }
    ctx->pc = 0x38F42Cu;
    {
        const bool branch_taken_0x38f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F42Cu;
        // 0x38f430: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f42c) {
            ctx->pc = 0x38F458u;
            goto label_38f458;
        }
    }
    ctx->pc = 0x38F434u;
label_38f434:
    // 0x38f434: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x38f434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_38f438:
    // 0x38f438: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x38f438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_38f43c:
    // 0x38f43c: 0x3071f000  andi        $s1, $v1, 0xF000
    ctx->pc = 0x38f43cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_38f440:
    // 0x38f440: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x38f440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_38f444:
    // 0x38f444: 0x3a242000  xori        $a0, $s1, 0x2000
    ctx->pc = 0x38f444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
label_38f448:
    // 0x38f448: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_38f44c:
    // 0x38f44c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38f44cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_38f450:
    // 0x38f450: 0x2c910001  sltiu       $s1, $a0, 0x1
    ctx->pc = 0x38f450u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38f454:
    // 0x38f454: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x38f454u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_38f458:
    // 0x38f458: 0xc0e9f1c  jal         func_3A7C70
label_38f45c:
    if (ctx->pc == 0x38F45Cu) {
        ctx->pc = 0x38F45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F458u;
        // 0x38f45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F460u;
        goto label_38f460;
    }
    ctx->pc = 0x38F458u;
    SET_GPR_U32(ctx, 31, 0x38F460u);
    ctx->pc = 0x38F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F458u;
    // 0x38f45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x38F458u, 0x38F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F460u;
label_38f460:
    // 0x38f460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_38f464:
    if (ctx->pc == 0x38F464u) {
        ctx->pc = 0x38F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F460u;
        // 0x38f464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F468u;
        goto label_38f468;
    }
    ctx->pc = 0x38F460u;
    {
        const bool branch_taken_0x38f460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F460u;
        // 0x38f464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f460) {
            ctx->pc = 0x38F470u;
            goto label_38f470;
        }
    }
    ctx->pc = 0x38F468u;
label_38f468:
    // 0x38f468: 0x1000000f  b           . + 4 + (0xF << 2)
label_38f46c:
    if (ctx->pc == 0x38F46Cu) {
        ctx->pc = 0x38F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F468u;
        // 0x38f46c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F470u;
        goto label_38f470;
    }
    ctx->pc = 0x38F468u;
    {
        const bool branch_taken_0x38f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F468u;
        // 0x38f46c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f468) {
            ctx->pc = 0x38F4A8u;
            goto label_38f4a8;
        }
    }
    ctx->pc = 0x38F470u;
label_38f470:
    // 0x38f470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f474:
    // 0x38f474: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x38f474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_38f478:
    // 0x38f478: 0xc0e31da  jal         func_38C768
label_38f47c:
    if (ctx->pc == 0x38F47Cu) {
        ctx->pc = 0x38F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F478u;
        // 0x38f47c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F480u;
        goto label_38f480;
    }
    ctx->pc = 0x38F478u;
    SET_GPR_U32(ctx, 31, 0x38F480u);
    ctx->pc = 0x38F47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F478u;
    // 0x38f47c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C768u, 0x38F478u, 0x38F480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F480u;
label_38f480:
    // 0x38f480: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_38f484:
    if (ctx->pc == 0x38F484u) {
        ctx->pc = 0x38F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F480u;
        // 0x38f484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F488u;
        goto label_38f488;
    }
    ctx->pc = 0x38F480u;
    {
        const bool branch_taken_0x38f480 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F480u;
        // 0x38f484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f480) {
            ctx->pc = 0x38F4A8u;
            goto label_38f4a8;
        }
    }
    ctx->pc = 0x38F488u;
label_38f488:
    // 0x38f488: 0xc0ec112  jal         func_3B0448
label_38f48c:
    if (ctx->pc == 0x38F48Cu) {
        ctx->pc = 0x38F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F488u;
        // 0x38f48c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F490u;
        goto label_38f490;
    }
    ctx->pc = 0x38F488u;
    SET_GPR_U32(ctx, 31, 0x38F490u);
    ctx->pc = 0x38F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F488u;
    // 0x38f48c: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0448u, 0x38F488u, 0x38F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F490u;
label_38f490:
    // 0x38f490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38f494:
    if (ctx->pc == 0x38F494u) {
        ctx->pc = 0x38F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F490u;
        // 0x38f494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F498u;
        goto label_38f498;
    }
    ctx->pc = 0x38F490u;
    {
        const bool branch_taken_0x38f490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F490u;
        // 0x38f494: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f490) {
            ctx->pc = 0x38F4A8u;
            goto label_38f4a8;
        }
    }
    ctx->pc = 0x38F498u;
label_38f498:
    // 0x38f498: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38f49c:
    // 0x38f49c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x38f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_38f4a0:
    // 0x38f4a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38f4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38f4a4:
    // 0x38f4a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f4a8:
    // 0x38f4a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x38f4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_38f4ac:
    // 0x38f4ac: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x38f4acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38f4b0:
    // 0x38f4b0: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x38f4b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_38f4b4:
    // 0x38f4b4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x38f4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38f4b8:
    // 0x38f4b8: 0x3e00008  jr          $ra
label_38f4bc:
    if (ctx->pc == 0x38F4BCu) {
        ctx->pc = 0x38F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4B8u;
        // 0x38f4bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4C0u;
        goto label_fallthrough_0x38f4b8;
    }
    ctx->pc = 0x38F4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4B8u;
        // 0x38f4bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38f4b8:
    ctx->pc = 0x38F4C0u;
}
