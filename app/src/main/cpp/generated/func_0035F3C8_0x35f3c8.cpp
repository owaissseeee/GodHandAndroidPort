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

// Function: func_0035F3C8
// Address: 0x35f3c8 - 0x35f578
void func_0035F3C8_0x35f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F3C8_0x35f3c8");
#endif

    switch (ctx->pc) {
        case 0x35f3c8u: goto label_35f3c8;
        case 0x35f3ccu: goto label_35f3cc;
        case 0x35f3d0u: goto label_35f3d0;
        case 0x35f3d4u: goto label_35f3d4;
        case 0x35f3d8u: goto label_35f3d8;
        case 0x35f3dcu: goto label_35f3dc;
        case 0x35f3e0u: goto label_35f3e0;
        case 0x35f3e4u: goto label_35f3e4;
        case 0x35f3e8u: goto label_35f3e8;
        case 0x35f3ecu: goto label_35f3ec;
        case 0x35f3f0u: goto label_35f3f0;
        case 0x35f3f4u: goto label_35f3f4;
        case 0x35f3f8u: goto label_35f3f8;
        case 0x35f3fcu: goto label_35f3fc;
        case 0x35f400u: goto label_35f400;
        case 0x35f404u: goto label_35f404;
        case 0x35f408u: goto label_35f408;
        case 0x35f40cu: goto label_35f40c;
        case 0x35f410u: goto label_35f410;
        case 0x35f414u: goto label_35f414;
        case 0x35f418u: goto label_35f418;
        case 0x35f41cu: goto label_35f41c;
        case 0x35f420u: goto label_35f420;
        case 0x35f424u: goto label_35f424;
        case 0x35f428u: goto label_35f428;
        case 0x35f42cu: goto label_35f42c;
        case 0x35f430u: goto label_35f430;
        case 0x35f434u: goto label_35f434;
        case 0x35f438u: goto label_35f438;
        case 0x35f43cu: goto label_35f43c;
        case 0x35f440u: goto label_35f440;
        case 0x35f444u: goto label_35f444;
        case 0x35f448u: goto label_35f448;
        case 0x35f44cu: goto label_35f44c;
        case 0x35f450u: goto label_35f450;
        case 0x35f454u: goto label_35f454;
        case 0x35f458u: goto label_35f458;
        case 0x35f45cu: goto label_35f45c;
        case 0x35f460u: goto label_35f460;
        case 0x35f464u: goto label_35f464;
        case 0x35f468u: goto label_35f468;
        case 0x35f46cu: goto label_35f46c;
        case 0x35f470u: goto label_35f470;
        case 0x35f474u: goto label_35f474;
        case 0x35f478u: goto label_35f478;
        case 0x35f47cu: goto label_35f47c;
        case 0x35f480u: goto label_35f480;
        case 0x35f484u: goto label_35f484;
        case 0x35f488u: goto label_35f488;
        case 0x35f48cu: goto label_35f48c;
        case 0x35f490u: goto label_35f490;
        case 0x35f494u: goto label_35f494;
        case 0x35f498u: goto label_35f498;
        case 0x35f49cu: goto label_35f49c;
        case 0x35f4a0u: goto label_35f4a0;
        case 0x35f4a4u: goto label_35f4a4;
        case 0x35f4a8u: goto label_35f4a8;
        case 0x35f4acu: goto label_35f4ac;
        case 0x35f4b0u: goto label_35f4b0;
        case 0x35f4b4u: goto label_35f4b4;
        case 0x35f4b8u: goto label_35f4b8;
        case 0x35f4bcu: goto label_35f4bc;
        case 0x35f4c0u: goto label_35f4c0;
        case 0x35f4c4u: goto label_35f4c4;
        case 0x35f4c8u: goto label_35f4c8;
        case 0x35f4ccu: goto label_35f4cc;
        case 0x35f4d0u: goto label_35f4d0;
        case 0x35f4d4u: goto label_35f4d4;
        case 0x35f4d8u: goto label_35f4d8;
        case 0x35f4dcu: goto label_35f4dc;
        case 0x35f4e0u: goto label_35f4e0;
        case 0x35f4e4u: goto label_35f4e4;
        case 0x35f4e8u: goto label_35f4e8;
        case 0x35f4ecu: goto label_35f4ec;
        case 0x35f4f0u: goto label_35f4f0;
        case 0x35f4f4u: goto label_35f4f4;
        case 0x35f4f8u: goto label_35f4f8;
        case 0x35f4fcu: goto label_35f4fc;
        case 0x35f500u: goto label_35f500;
        case 0x35f504u: goto label_35f504;
        case 0x35f508u: goto label_35f508;
        case 0x35f50cu: goto label_35f50c;
        case 0x35f510u: goto label_35f510;
        case 0x35f514u: goto label_35f514;
        case 0x35f518u: goto label_35f518;
        case 0x35f51cu: goto label_35f51c;
        case 0x35f520u: goto label_35f520;
        case 0x35f524u: goto label_35f524;
        case 0x35f528u: goto label_35f528;
        case 0x35f52cu: goto label_35f52c;
        case 0x35f530u: goto label_35f530;
        case 0x35f534u: goto label_35f534;
        case 0x35f538u: goto label_35f538;
        case 0x35f53cu: goto label_35f53c;
        case 0x35f540u: goto label_35f540;
        case 0x35f544u: goto label_35f544;
        case 0x35f548u: goto label_35f548;
        case 0x35f54cu: goto label_35f54c;
        case 0x35f550u: goto label_35f550;
        case 0x35f554u: goto label_35f554;
        case 0x35f558u: goto label_35f558;
        case 0x35f55cu: goto label_35f55c;
        case 0x35f560u: goto label_35f560;
        case 0x35f564u: goto label_35f564;
        case 0x35f568u: goto label_35f568;
        case 0x35f56cu: goto label_35f56c;
        case 0x35f570u: goto label_35f570;
        case 0x35f574u: goto label_35f574;
        default: break;
    }

    ctx->pc = 0x35f3c8u;

label_35f3c8:
    // 0x35f3c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35f3cc:
    // 0x35f3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35f3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f3d0:
    // 0x35f3d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35f3d4:
    // 0x35f3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35f3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35f3d8:
    // 0x35f3d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35f3dc:
    // 0x35f3dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35f3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35f3e0:
    // 0x35f3e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_35f3e4:
    // 0x35f3e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_35f3e8:
    // 0x35f3e8: 0xc0d7c74  jal         func_35F1D0
label_35f3ec:
    if (ctx->pc == 0x35F3ECu) {
        ctx->pc = 0x35F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3E8u;
        // 0x35f3ec: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F3F0u;
        goto label_35f3f0;
    }
    ctx->pc = 0x35F3E8u;
    SET_GPR_U32(ctx, 31, 0x35F3F0u);
    ctx->pc = 0x35F3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F3E8u;
    // 0x35f3ec: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x35F3E8u, 0x35F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F3F0u;
label_35f3f0:
    // 0x35f3f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35f3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35f3f4:
    // 0x35f3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35f3f8:
    // 0x35f3f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35f3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f3fc:
    // 0x35f3fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_35f400:
    // 0x35f400: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35f400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35f404:
    // 0x35f404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35f408:
    // 0x35f408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35f40c:
    // 0x35f40c: 0x80d7d06  j           func_35F418
label_35f410:
    if (ctx->pc == 0x35F410u) {
        ctx->pc = 0x35F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F40Cu;
        // 0x35f410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F414u;
        goto label_35f414;
    }
    ctx->pc = 0x35F40Cu;
    ctx->pc = 0x35F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F40Cu;
    // 0x35f410: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F418u;
    goto label_35f418;
    ctx->pc = 0x35F414u;
label_35f414:
    // 0x35f414: 0x0  nop
    ctx->pc = 0x35f414u;
    // NOP
label_35f418:
    // 0x35f418: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x35f418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_35f41c:
    // 0x35f41c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x35f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_35f420:
    // 0x35f420: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_35f424:
    // 0x35f424: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x35f424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
label_35f428:
    // 0x35f428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35f428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35f42c:
    // 0x35f42c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x35f42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35f430:
    // 0x35f430: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x35f430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_35f434:
    // 0x35f434: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x35f434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_35f438:
    // 0x35f438: 0xc0d7ca2  jal         func_35F288
label_35f43c:
    if (ctx->pc == 0x35F43Cu) {
        ctx->pc = 0x35F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F438u;
        // 0x35f43c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F440u;
        goto label_35f440;
    }
    ctx->pc = 0x35F438u;
    SET_GPR_U32(ctx, 31, 0x35F440u);
    ctx->pc = 0x35F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F438u;
    // 0x35f43c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F288u, 0x35F438u, 0x35F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F440u;
label_35f440:
    // 0x35f440: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x35f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_35f444:
    // 0x35f444: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x35f444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_35f448:
    // 0x35f448: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x35f448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_35f44c:
    // 0x35f44c: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x35f44cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_35f450:
    // 0x35f450: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_35f454:
    if (ctx->pc == 0x35F454u) {
        ctx->pc = 0x35F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F450u;
        // 0x35f454: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F458u;
        goto label_35f458;
    }
    ctx->pc = 0x35F450u;
    {
        const bool branch_taken_0x35f450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F450u;
        // 0x35f454: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f450) {
            ctx->pc = 0x35F518u;
            goto label_35f518;
        }
    }
    ctx->pc = 0x35F458u;
label_35f458:
    // 0x35f458: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x35f458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_35f45c:
    // 0x35f45c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_35f460:
    if (ctx->pc == 0x35F460u) {
        ctx->pc = 0x35F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F45Cu;
        // 0x35f460: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F464u;
        goto label_35f464;
    }
    ctx->pc = 0x35F45Cu;
    {
        const bool branch_taken_0x35f45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f45c) {
            ctx->pc = 0x35F460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F45Cu;
            // 0x35f460: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F4E0u;
            goto label_35f4e0;
        }
    }
    ctx->pc = 0x35F464u;
label_35f464:
    // 0x35f464: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35f468:
    // 0x35f468: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_35f46c:
    if (ctx->pc == 0x35F46Cu) {
        ctx->pc = 0x35F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F468u;
        // 0x35f46c: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F470u;
        goto label_35f470;
    }
    ctx->pc = 0x35F468u;
    {
        const bool branch_taken_0x35f468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F468u;
        // 0x35f46c: 0x3c060046  lui         $a2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f468) {
            ctx->pc = 0x35F51Cu;
            goto label_35f51c;
        }
    }
    ctx->pc = 0x35F470u;
label_35f470:
    // 0x35f470: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x35f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_35f474:
    // 0x35f474: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x35f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_35f478:
    // 0x35f478: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x35f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35f47c:
    // 0x35f47c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x35f47cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_35f480:
    // 0x35f480: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x35f480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_35f484:
    // 0x35f484: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x35f484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_35f488:
    // 0x35f488: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x35f488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_35f48c:
    // 0x35f48c: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x35f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_35f490:
    // 0x35f490: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x35f490u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_35f494:
    // 0x35f494: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x35f494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_35f498:
    // 0x35f498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35f49c:
    // 0x35f49c: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x35f49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
label_35f4a0:
    // 0x35f4a0: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x35f4a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_35f4a4:
    // 0x35f4a4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x35f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_35f4a8:
    // 0x35f4a8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x35f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_35f4ac:
    // 0x35f4ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_35f4b0:
    // 0x35f4b0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x35f4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_35f4b4:
    // 0x35f4b4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x35f4b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_35f4b8:
    // 0x35f4b8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x35f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_35f4bc:
    // 0x35f4bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_35f4c0:
    // 0x35f4c0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x35f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_35f4c4:
    // 0x35f4c4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x35f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_35f4c8:
    // 0x35f4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_35f4cc:
    // 0x35f4cc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x35f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_35f4d0:
    // 0x35f4d0: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_35f4d4:
    if (ctx->pc == 0x35F4D4u) {
        ctx->pc = 0x35F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4D0u;
        // 0x35f4d4: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F4D8u;
        goto label_35f4d8;
    }
    ctx->pc = 0x35F4D0u;
    {
        const bool branch_taken_0x35f4d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4D0u;
        // 0x35f4d4: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4d0) {
            ctx->pc = 0x35F4FCu;
            goto label_35f4fc;
        }
    }
    ctx->pc = 0x35F4D8u;
label_35f4d8:
    // 0x35f4d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_35f4dc:
    if (ctx->pc == 0x35F4DCu) {
        ctx->pc = 0x35F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4D8u;
        // 0x35f4dc: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F4E0u;
        goto label_35f4e0;
    }
    ctx->pc = 0x35F4D8u;
    {
        const bool branch_taken_0x35f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4D8u;
        // 0x35f4dc: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4d8) {
            ctx->pc = 0x35F52Cu;
            goto label_35f52c;
        }
    }
    ctx->pc = 0x35F4E0u;
label_35f4e0:
    // 0x35f4e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_35f4e4:
    // 0x35f4e4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_35f4e8:
    // 0x35f4e8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x35f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_35f4ec:
    // 0x35f4ec: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x35f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_35f4f0:
    // 0x35f4f0: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x35f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_35f4f4:
    // 0x35f4f4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_35f4f8:
    if (ctx->pc == 0x35F4F8u) {
        ctx->pc = 0x35F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4F4u;
        // 0x35f4f8: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F4FCu;
        goto label_35f4fc;
    }
    ctx->pc = 0x35F4F4u;
    {
        const bool branch_taken_0x35f4f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F4F4u;
        // 0x35f4f8: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f4f4) {
            ctx->pc = 0x35F510u;
            goto label_35f510;
        }
    }
    ctx->pc = 0x35F4FCu;
label_35f4fc:
    // 0x35f4fc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_35f500:
    // 0x35f500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35f500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35f504:
    // 0x35f504: 0x10000009  b           . + 4 + (0x9 << 2)
label_35f508:
    if (ctx->pc == 0x35F508u) {
        ctx->pc = 0x35F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F504u;
        // 0x35f508: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F50Cu;
        goto label_35f50c;
    }
    ctx->pc = 0x35F504u;
    {
        const bool branch_taken_0x35f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F504u;
        // 0x35f508: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f504) {
            ctx->pc = 0x35F52Cu;
            goto label_35f52c;
        }
    }
    ctx->pc = 0x35F50Cu;
label_35f50c:
    // 0x35f50c: 0x0  nop
    ctx->pc = 0x35f50cu;
    // NOP
label_35f510:
    // 0x35f510: 0x10000006  b           . + 4 + (0x6 << 2)
label_35f514:
    if (ctx->pc == 0x35F514u) {
        ctx->pc = 0x35F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F510u;
        // 0x35f514: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F518u;
        goto label_35f518;
    }
    ctx->pc = 0x35F510u;
    {
        const bool branch_taken_0x35f510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F510u;
        // 0x35f514: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f510) {
            ctx->pc = 0x35F52Cu;
            goto label_35f52c;
        }
    }
    ctx->pc = 0x35F518u;
label_35f518:
    // 0x35f518: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35f518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_35f51c:
    // 0x35f51c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35f51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35f520:
    // 0x35f520: 0x24c69f60  addiu       $a2, $a2, -0x60A0
    ctx->pc = 0x35f520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942560));
label_35f524:
    // 0x35f524: 0xc0d7ef6  jal         func_35FBD8
label_35f528:
    if (ctx->pc == 0x35F528u) {
        ctx->pc = 0x35F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F524u;
        // 0x35f528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F52Cu;
        goto label_35f52c;
    }
    ctx->pc = 0x35F524u;
    SET_GPR_U32(ctx, 31, 0x35F52Cu);
    ctx->pc = 0x35F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F524u;
    // 0x35f528: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35F524u, 0x35F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F52Cu;
label_35f52c:
    // 0x35f52c: 0xc0d7f0a  jal         func_35FC28
label_35f530:
    if (ctx->pc == 0x35F530u) {
        ctx->pc = 0x35F534u;
        goto label_35f534;
    }
    ctx->pc = 0x35F52Cu;
    SET_GPR_U32(ctx, 31, 0x35F534u);
    ctx->pc = 0x35FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FC28u, 0x35F52Cu, 0x35F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F534u;
label_35f534:
    // 0x35f534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35f538:
    // 0x35f538: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_35f53c:
    if (ctx->pc == 0x35F53Cu) {
        ctx->pc = 0x35F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F538u;
        // 0x35f53c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F540u;
        goto label_35f540;
    }
    ctx->pc = 0x35F538u;
    {
        const bool branch_taken_0x35f538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35f538) {
            ctx->pc = 0x35F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35F538u;
            // 0x35f53c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35F548u;
            goto label_35f548;
        }
    }
    ctx->pc = 0x35F540u;
label_35f540:
    // 0x35f540: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x35f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_35f544:
    // 0x35f544: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x35f544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_35f548:
    // 0x35f548: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x35f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_35f54c:
    // 0x35f54c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_35f550:
    if (ctx->pc == 0x35F550u) {
        ctx->pc = 0x35F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F54Cu;
        // 0x35f550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F554u;
        goto label_35f554;
    }
    ctx->pc = 0x35F54Cu;
    {
        const bool branch_taken_0x35f54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F54Cu;
        // 0x35f550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f54c) {
            ctx->pc = 0x35F560u;
            goto label_35f560;
        }
    }
    ctx->pc = 0x35F554u;
label_35f554:
    // 0x35f554: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x35f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35f558:
    // 0x35f558: 0x40f809  jalr        $v0
label_35f55c:
    if (ctx->pc == 0x35F55Cu) {
        ctx->pc = 0x35F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F558u;
        // 0x35f55c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F560u;
        goto label_35f560;
    }
    ctx->pc = 0x35F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35F560u);
        ctx->pc = 0x35F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F558u;
        // 0x35f55c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F558u, 0x35F560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35F560u;
label_35f560:
    // 0x35f560: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x35f560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_35f564:
    // 0x35f564: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x35f564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_35f568:
    // 0x35f568: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x35f568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_35f56c:
    // 0x35f56c: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x35f56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_35f570:
    // 0x35f570: 0x3e00008  jr          $ra
label_35f574:
    if (ctx->pc == 0x35F574u) {
        ctx->pc = 0x35F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F570u;
        // 0x35f574: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35F578u;
        goto label_fallthrough_0x35f570;
    }
    ctx->pc = 0x35F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F570u;
        // 0x35f574: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35f570:
    ctx->pc = 0x35F578u;
}
