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

// Function: func_0033E3B8
// Address: 0x33e3b8 - 0x33e558
void func_0033E3B8_0x33e3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E3B8_0x33e3b8");
#endif

    switch (ctx->pc) {
        case 0x33e3b8u: goto label_33e3b8;
        case 0x33e3bcu: goto label_33e3bc;
        case 0x33e3c0u: goto label_33e3c0;
        case 0x33e3c4u: goto label_33e3c4;
        case 0x33e3c8u: goto label_33e3c8;
        case 0x33e3ccu: goto label_33e3cc;
        case 0x33e3d0u: goto label_33e3d0;
        case 0x33e3d4u: goto label_33e3d4;
        case 0x33e3d8u: goto label_33e3d8;
        case 0x33e3dcu: goto label_33e3dc;
        case 0x33e3e0u: goto label_33e3e0;
        case 0x33e3e4u: goto label_33e3e4;
        case 0x33e3e8u: goto label_33e3e8;
        case 0x33e3ecu: goto label_33e3ec;
        case 0x33e3f0u: goto label_33e3f0;
        case 0x33e3f4u: goto label_33e3f4;
        case 0x33e3f8u: goto label_33e3f8;
        case 0x33e3fcu: goto label_33e3fc;
        case 0x33e400u: goto label_33e400;
        case 0x33e404u: goto label_33e404;
        case 0x33e408u: goto label_33e408;
        case 0x33e40cu: goto label_33e40c;
        case 0x33e410u: goto label_33e410;
        case 0x33e414u: goto label_33e414;
        case 0x33e418u: goto label_33e418;
        case 0x33e41cu: goto label_33e41c;
        case 0x33e420u: goto label_33e420;
        case 0x33e424u: goto label_33e424;
        case 0x33e428u: goto label_33e428;
        case 0x33e42cu: goto label_33e42c;
        case 0x33e430u: goto label_33e430;
        case 0x33e434u: goto label_33e434;
        case 0x33e438u: goto label_33e438;
        case 0x33e43cu: goto label_33e43c;
        case 0x33e440u: goto label_33e440;
        case 0x33e444u: goto label_33e444;
        case 0x33e448u: goto label_33e448;
        case 0x33e44cu: goto label_33e44c;
        case 0x33e450u: goto label_33e450;
        case 0x33e454u: goto label_33e454;
        case 0x33e458u: goto label_33e458;
        case 0x33e45cu: goto label_33e45c;
        case 0x33e460u: goto label_33e460;
        case 0x33e464u: goto label_33e464;
        case 0x33e468u: goto label_33e468;
        case 0x33e46cu: goto label_33e46c;
        case 0x33e470u: goto label_33e470;
        case 0x33e474u: goto label_33e474;
        case 0x33e478u: goto label_33e478;
        case 0x33e47cu: goto label_33e47c;
        case 0x33e480u: goto label_33e480;
        case 0x33e484u: goto label_33e484;
        case 0x33e488u: goto label_33e488;
        case 0x33e48cu: goto label_33e48c;
        case 0x33e490u: goto label_33e490;
        case 0x33e494u: goto label_33e494;
        case 0x33e498u: goto label_33e498;
        case 0x33e49cu: goto label_33e49c;
        case 0x33e4a0u: goto label_33e4a0;
        case 0x33e4a4u: goto label_33e4a4;
        case 0x33e4a8u: goto label_33e4a8;
        case 0x33e4acu: goto label_33e4ac;
        case 0x33e4b0u: goto label_33e4b0;
        case 0x33e4b4u: goto label_33e4b4;
        case 0x33e4b8u: goto label_33e4b8;
        case 0x33e4bcu: goto label_33e4bc;
        case 0x33e4c0u: goto label_33e4c0;
        case 0x33e4c4u: goto label_33e4c4;
        case 0x33e4c8u: goto label_33e4c8;
        case 0x33e4ccu: goto label_33e4cc;
        case 0x33e4d0u: goto label_33e4d0;
        case 0x33e4d4u: goto label_33e4d4;
        case 0x33e4d8u: goto label_33e4d8;
        case 0x33e4dcu: goto label_33e4dc;
        case 0x33e4e0u: goto label_33e4e0;
        case 0x33e4e4u: goto label_33e4e4;
        case 0x33e4e8u: goto label_33e4e8;
        case 0x33e4ecu: goto label_33e4ec;
        case 0x33e4f0u: goto label_33e4f0;
        case 0x33e4f4u: goto label_33e4f4;
        case 0x33e4f8u: goto label_33e4f8;
        case 0x33e4fcu: goto label_33e4fc;
        case 0x33e500u: goto label_33e500;
        case 0x33e504u: goto label_33e504;
        case 0x33e508u: goto label_33e508;
        case 0x33e50cu: goto label_33e50c;
        case 0x33e510u: goto label_33e510;
        case 0x33e514u: goto label_33e514;
        case 0x33e518u: goto label_33e518;
        case 0x33e51cu: goto label_33e51c;
        case 0x33e520u: goto label_33e520;
        case 0x33e524u: goto label_33e524;
        case 0x33e528u: goto label_33e528;
        case 0x33e52cu: goto label_33e52c;
        case 0x33e530u: goto label_33e530;
        case 0x33e534u: goto label_33e534;
        case 0x33e538u: goto label_33e538;
        case 0x33e53cu: goto label_33e53c;
        case 0x33e540u: goto label_33e540;
        case 0x33e544u: goto label_33e544;
        case 0x33e548u: goto label_33e548;
        case 0x33e54cu: goto label_33e54c;
        case 0x33e550u: goto label_33e550;
        case 0x33e554u: goto label_33e554;
        default: break;
    }

    ctx->pc = 0x33e3b8u;

label_33e3b8:
    // 0x33e3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e3bc:
    // 0x33e3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e3c0:
    // 0x33e3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e3c4:
    // 0x33e3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e3c8:
    // 0x33e3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e3cc:
    // 0x33e3cc: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x33e3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_33e3d0:
    // 0x33e3d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e3d4:
    // 0x33e3d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33e3d8:
    // 0x33e3d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33e3dc:
    // 0x33e3dc: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_33e3e0:
    if (ctx->pc == 0x33E3E0u) {
        ctx->pc = 0x33E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3DCu;
        // 0x33e3e0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3E4u;
        goto label_33e3e4;
    }
    ctx->pc = 0x33E3DCu;
    {
        const bool branch_taken_0x33e3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3DCu;
        // 0x33e3e0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e3dc) {
            ctx->pc = 0x33E514u;
            goto label_33e514;
        }
    }
    ctx->pc = 0x33E3E4u;
label_33e3e4:
    // 0x33e3e4: 0xc0cfe9a  jal         func_33FA68
label_33e3e8:
    if (ctx->pc == 0x33E3E8u) {
        ctx->pc = 0x33E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3E4u;
        // 0x33e3e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3ECu;
        goto label_33e3ec;
    }
    ctx->pc = 0x33E3E4u;
    SET_GPR_U32(ctx, 31, 0x33E3ECu);
    ctx->pc = 0x33E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E3E4u;
    // 0x33e3e8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x33E3E4u, 0x33E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E3ECu;
label_33e3ec:
    // 0x33e3ec: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_33e3f0:
    if (ctx->pc == 0x33E3F0u) {
        ctx->pc = 0x33E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E3ECu;
        // 0x33e3f0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E3F4u;
        goto label_33e3f4;
    }
    ctx->pc = 0x33E3ECu;
    {
        const bool branch_taken_0x33e3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e3ec) {
            ctx->pc = 0x33E3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E3ECu;
            // 0x33e3f0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E514u;
            goto label_33e514;
        }
    }
    ctx->pc = 0x33E3F4u;
label_33e3f4:
    // 0x33e3f4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x33e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_33e3f8:
    // 0x33e3f8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x33e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_33e3fc:
    // 0x33e3fc: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x33e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_33e400:
    // 0x33e400: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x33e400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_33e404:
    // 0x33e404: 0x40f809  jalr        $v0
label_33e408:
    if (ctx->pc == 0x33E408u) {
        ctx->pc = 0x33E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E404u;
        // 0x33e408: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E40Cu;
        goto label_33e40c;
    }
    ctx->pc = 0x33E404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E40Cu);
        ctx->pc = 0x33E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E404u;
        // 0x33e408: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E404u, 0x33E40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E40Cu;
label_33e40c:
    // 0x33e40c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x33e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33e410:
    // 0x33e410: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x33e410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_33e414:
    // 0x33e414: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33e414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e418:
    // 0x33e418: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x33e418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33e41c:
    // 0x33e41c: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x33e41cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_33e420:
    // 0x33e420: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x33e420u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33e424:
    // 0x33e424: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x33e424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e428:
    // 0x33e428: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x33e428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_33e42c:
    // 0x33e42c: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x33e42cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_33e430:
    // 0x33e430: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x33e430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_33e434:
    // 0x33e434: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x33e434u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_33e438:
    // 0x33e438: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x33e438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e43c:
    // 0x33e43c: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x33e43cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_33e440:
    // 0x33e440: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x33e440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_33e444:
    // 0x33e444: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_33e448:
    if (ctx->pc == 0x33E448u) {
        ctx->pc = 0x33E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E444u;
        // 0x33e448: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E44Cu;
        goto label_33e44c;
    }
    ctx->pc = 0x33E444u;
    {
        const bool branch_taken_0x33e444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x33E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E444u;
        // 0x33e448: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e444) {
            ctx->pc = 0x33E4B8u;
            goto label_33e4b8;
        }
    }
    ctx->pc = 0x33E44Cu;
label_33e44c:
    // 0x33e44c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x33e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33e450:
    // 0x33e450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33e450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33e454:
    // 0x33e454: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33e458:
    // 0x33e458: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33e458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e45c:
    // 0x33e45c: 0x19200025  blez        $t1, . + 4 + (0x25 << 2)
label_33e460:
    if (ctx->pc == 0x33E460u) {
        ctx->pc = 0x33E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E45Cu;
        // 0x33e460: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E464u;
        goto label_33e464;
    }
    ctx->pc = 0x33E45Cu;
    {
        const bool branch_taken_0x33e45c = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E45Cu;
        // 0x33e460: 0x1625821  addu        $t3, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e45c) {
            ctx->pc = 0x33E4F4u;
            goto label_33e4f4;
        }
    }
    ctx->pc = 0x33E464u;
label_33e464:
    // 0x33e464: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33e464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e468:
    // 0x33e468: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x33e468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_33e46c:
    // 0x33e46c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x33e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_33e470:
    // 0x33e470: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x33e470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_33e474:
    // 0x33e474: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x33e474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_33e478:
    // 0x33e478: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x33e478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_33e47c:
    // 0x33e47c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33e480:
    // 0x33e480: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33e480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33e484:
    // 0x33e484: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x33e484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_33e488:
    // 0x33e488: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x33e488u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_33e48c:
    // 0x33e48c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x33e48cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e490:
    // 0x33e490: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x33e490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_33e494:
    // 0x33e494: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x33e494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_33e498:
    // 0x33e498: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_33e49c:
    // 0x33e49c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x33e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_33e4a0:
    // 0x33e4a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33e4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33e4a4:
    // 0x33e4a4: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_33e4a8:
    if (ctx->pc == 0x33E4A8u) {
        ctx->pc = 0x33E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4A4u;
        // 0x33e4a8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4ACu;
        goto label_33e4ac;
    }
    ctx->pc = 0x33E4A4u;
    {
        const bool branch_taken_0x33e4a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4A4u;
        // 0x33e4a8: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4a4) {
            ctx->pc = 0x33E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e468;
        }
    }
    ctx->pc = 0x33E4ACu;
label_33e4ac:
    // 0x33e4ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_33e4b0:
    if (ctx->pc == 0x33E4B0u) {
        ctx->pc = 0x33E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4ACu;
        // 0x33e4b0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4B4u;
        goto label_33e4b4;
    }
    ctx->pc = 0x33E4ACu;
    {
        const bool branch_taken_0x33e4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4ACu;
        // 0x33e4b0: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4ac) {
            ctx->pc = 0x33E4F4u;
            goto label_33e4f4;
        }
    }
    ctx->pc = 0x33E4B4u;
label_33e4b4:
    // 0x33e4b4: 0x0  nop
    ctx->pc = 0x33e4b4u;
    // NOP
label_33e4b8:
    // 0x33e4b8: 0x1920000e  blez        $t1, . + 4 + (0xE << 2)
label_33e4bc:
    if (ctx->pc == 0x33E4BCu) {
        ctx->pc = 0x33E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4B8u;
        // 0x33e4bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4C0u;
        goto label_33e4c0;
    }
    ctx->pc = 0x33E4B8u;
    {
        const bool branch_taken_0x33e4b8 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x33E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4B8u;
        // 0x33e4bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4b8) {
            ctx->pc = 0x33E4F4u;
            goto label_33e4f4;
        }
    }
    ctx->pc = 0x33E4C0u;
label_33e4c0:
    // 0x33e4c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e4c4:
    // 0x33e4c4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x33e4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_33e4c8:
    // 0x33e4c8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x33e4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_33e4cc:
    // 0x33e4cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_33e4d0:
    // 0x33e4d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x33e4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_33e4d4:
    // 0x33e4d4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x33e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_33e4d8:
    // 0x33e4d8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x33e4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_33e4dc:
    // 0x33e4dc: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x33e4dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_33e4e0:
    // 0x33e4e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33e4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_33e4e4:
    // 0x33e4e4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x33e4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_33e4e8:
    // 0x33e4e8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_33e4ec:
    if (ctx->pc == 0x33E4ECu) {
        ctx->pc = 0x33E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4E8u;
        // 0x33e4ec: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4F0u;
        goto label_33e4f0;
    }
    ctx->pc = 0x33E4E8u;
    {
        const bool branch_taken_0x33e4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4E8u;
        // 0x33e4ec: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4e8) {
            ctx->pc = 0x33E4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e4c8;
        }
    }
    ctx->pc = 0x33E4F0u;
label_33e4f0:
    // 0x33e4f0: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x33e4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33e4f4:
    // 0x33e4f4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x33e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_33e4f8:
    // 0x33e4f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e4fc:
    // 0x33e4fc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33e4fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_33e500:
    // 0x33e500: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33e500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33e504:
    // 0x33e504: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x33e504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33e508:
    // 0x33e508: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x33e508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_33e50c:
    // 0x33e50c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33e510:
    // 0x33e510: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x33e510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_33e514:
    // 0x33e514: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33e518:
    // 0x33e518: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_33e51c:
    if (ctx->pc == 0x33E51Cu) {
        ctx->pc = 0x33E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E518u;
        // 0x33e51c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E520u;
        goto label_33e520;
    }
    ctx->pc = 0x33E518u;
    {
        const bool branch_taken_0x33e518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e518) {
            ctx->pc = 0x33E51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E518u;
            // 0x33e51c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E540u;
            goto label_33e540;
        }
    }
    ctx->pc = 0x33E520u;
label_33e520:
    // 0x33e520: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x33e520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_33e524:
    // 0x33e524: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x33e524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_33e528:
    // 0x33e528: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x33e528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33e52c:
    // 0x33e52c: 0x60f809  jalr        $v1
label_33e530:
    if (ctx->pc == 0x33E530u) {
        ctx->pc = 0x33E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E52Cu;
        // 0x33e530: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E534u;
        goto label_33e534;
    }
    ctx->pc = 0x33E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E534u);
        ctx->pc = 0x33E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E52Cu;
        // 0x33e530: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E52Cu, 0x33E534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E534u;
label_33e534:
    // 0x33e534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33e538:
    // 0x33e538: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33e538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33e53c:
    // 0x33e53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e540:
    // 0x33e540: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e544:
    // 0x33e544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e548:
    // 0x33e548: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e54c:
    // 0x33e54c: 0x3e00008  jr          $ra
label_33e550:
    if (ctx->pc == 0x33E550u) {
        ctx->pc = 0x33E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E54Cu;
        // 0x33e550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E554u;
        goto label_33e554;
    }
    ctx->pc = 0x33E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E54Cu;
        // 0x33e550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E554u;
label_33e554:
    // 0x33e554: 0x0  nop
    ctx->pc = 0x33e554u;
    // NOP
    ctx->pc = 0x33e558u;
}
