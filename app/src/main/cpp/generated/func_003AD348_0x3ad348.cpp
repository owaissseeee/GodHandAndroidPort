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

// Function: func_003AD348
// Address: 0x3ad348 - 0x3ad790
void func_003AD348_0x3ad348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AD348_0x3ad348");
#endif

    switch (ctx->pc) {
        case 0x3ad3ecu: goto label_3ad3ec;
        case 0x3ad3fcu: goto label_3ad3fc;
        case 0x3ad408u: goto label_3ad408;
        case 0x3ad460u: goto label_3ad460;
        case 0x3ad488u: goto label_3ad488;
        case 0x3ad4d8u: goto label_3ad4d8;
        case 0x3ad508u: goto label_3ad508;
        case 0x3ad5d8u: goto label_3ad5d8;
        case 0x3ad668u: goto label_3ad668;
        default: break;
    }

    ctx->pc = 0x3ad348u;

    // 0x3ad348: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ad348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ad34c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ad34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ad350: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3ad350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3ad354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ad354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad358: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ad358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad35c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3ad35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3ad360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ad364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad368: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x3ad368u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad36c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3ad36cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3ad370: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x3ad370u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ad374: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x3ad374u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad378: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3ad378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad37c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x3ad37cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad380: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x3ad380u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x3ad384: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x3ad384u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ad388: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x3ad388u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad38c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ad38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ad390: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3ad390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3ad394: 0xe36824  and         $t5, $a3, $v1
    ctx->pc = 0x3ad394u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3ad398: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad39c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x3ad39cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3ad3a0: 0x12a1825  or          $v1, $t1, $t2
    ctx->pc = 0x3ad3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x3ad3a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3AD3A4u;
    {
        const bool branch_taken_0x3ad3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3A4u;
        // 0x3ad3a8: 0xed3826  xor         $a3, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3a4) {
            ctx->pc = 0x3AD3E0u;
            goto label_3ad3e0;
        }
    }
    ctx->pc = 0x3AD3ACu;
    // 0x3ad3ac: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x3ad3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x3ad3b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad3b4: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3ad3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ad3b8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AD3B8u;
    {
        const bool branch_taken_0x3ad3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3B8u;
        // 0x3ad3bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3b8) {
            ctx->pc = 0x3AD3E4u;
            goto label_3ad3e4;
        }
    }
    ctx->pc = 0x3AD3C0u;
    // 0x3ad3c0: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x3ad3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x3ad3c4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3ad3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3ad3c8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x3ad3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3ad3cc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3ad3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3ad3d0: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x3ad3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3ad3d4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3ad3d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ad3d8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3AD3D8u;
    {
        const bool branch_taken_0x3ad3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD3D8u;
        // 0x3ad3dc: 0x127102a  slt         $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad3d8) {
            ctx->pc = 0x3AD410u;
            goto label_3ad410;
        }
    }
    ctx->pc = 0x3AD3E0u;
label_3ad3e0:
    // 0x3ad3e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ad3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ad3e4:
    // 0x3ad3e4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD3E4u;
    SET_GPR_U32(ctx, 31, 0x3AD3ECu);
    ctx->pc = 0x3AD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD3E4u;
    // 0x3ad3e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD3E4u, 0x3AD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD3ECu;
label_3ad3ec:
    // 0x3ad3ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ad3ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ad3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad3f4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3AD3F4u;
    SET_GPR_U32(ctx, 31, 0x3AD3FCu);
    ctx->pc = 0x3AD3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD3F4u;
    // 0x3ad3f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3AD3F4u, 0x3AD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD3FCu;
label_3ad3fc:
    // 0x3ad3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ad3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad400: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x3AD400u;
    SET_GPR_U32(ctx, 31, 0x3AD408u);
    ctx->pc = 0x3AD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD400u;
    // 0x3ad404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3AD400u, 0x3AD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD408u;
label_3ad408:
    // 0x3ad408: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x3AD408u;
    {
        const bool branch_taken_0x3ad408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD408u;
        // 0x3ad40c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad408) {
            ctx->pc = 0x3AD778u;
            goto label_3ad778;
        }
    }
    ctx->pc = 0x3AD410u;
label_3ad410:
    // 0x3ad410: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AD410u;
    {
        const bool branch_taken_0x3ad410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD410u;
        // 0x3ad414: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad410) {
            ctx->pc = 0x3AD43Cu;
            goto label_3ad43c;
        }
    }
    ctx->pc = 0x3AD418u;
    // 0x3ad418: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3ad418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3ad41c: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3AD41Cu;
    {
        const bool branch_taken_0x3ad41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD41Cu;
        // 0x3ad420: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad41c) {
            ctx->pc = 0x3AD774u;
            goto label_3ad774;
        }
    }
    ctx->pc = 0x3AD424u;
    // 0x3ad424: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3ad424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ad428: 0x544000d2  bnel        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3AD428u;
    {
        const bool branch_taken_0x3ad428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad428) {
            ctx->pc = 0x3AD42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD428u;
            // 0x3ad42c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD774u;
            goto label_3ad774;
        }
    }
    ctx->pc = 0x3AD430u;
    // 0x3ad430: 0x110a00ba  beq         $t0, $t2, . + 4 + (0xBA << 2)
    ctx->pc = 0x3AD430u;
    {
        const bool branch_taken_0x3ad430 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x3AD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD430u;
        // 0x3ad434: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad430) {
            ctx->pc = 0x3AD71Cu;
            goto label_3ad71c;
        }
    }
    ctx->pc = 0x3AD438u;
    // 0x3ad438: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3ad438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3ad43c:
    // 0x3ad43c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad440: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3ad440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ad444: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AD444u;
    {
        const bool branch_taken_0x3ad444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ad444) {
            ctx->pc = 0x3AD448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AD444u;
            // 0x3ad448: 0x71503  sra         $v0, $a3, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AD4A8u;
            goto label_3ad4a8;
        }
    }
    ctx->pc = 0x3AD44Cu;
    // 0x3ad44c: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x3AD44Cu;
    {
        const bool branch_taken_0x3ad44c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD44Cu;
        // 0x3ad450: 0x712c0  sll         $v0, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad44c) {
            ctx->pc = 0x3AD480u;
            goto label_3ad480;
        }
    }
    ctx->pc = 0x3AD454u;
    // 0x3ad454: 0x2405fbed  addiu       $a1, $zero, -0x413
    ctx->pc = 0x3ad454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x3ad458: 0x19c00014  blez        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AD458u;
    {
        const bool branch_taken_0x3ad458 = (GPR_S64(ctx, 14) <= 0);
        ctx->pc = 0x3AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD458u;
        // 0x3ad45c: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad458) {
            ctx->pc = 0x3AD4ACu;
            goto label_3ad4ac;
        }
    }
    ctx->pc = 0x3AD460u;
label_3ad460:
    // 0x3ad460: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad464: 0x0  nop
    ctx->pc = 0x3ad464u;
    // NOP
    // 0x3ad468: 0x0  nop
    ctx->pc = 0x3ad468u;
    // NOP
    // 0x3ad46c: 0x0  nop
    ctx->pc = 0x3ad46cu;
    // NOP
    // 0x3ad470: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AD470u;
    {
        const bool branch_taken_0x3ad470 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AD474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD470u;
        // 0x3ad474: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad470) {
            ctx->pc = 0x3AD460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad460;
        }
    }
    ctx->pc = 0x3AD478u;
    // 0x3ad478: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3AD478u;
    {
        const bool branch_taken_0x3ad478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD478u;
        // 0x3ad47c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad478) {
            ctx->pc = 0x3AD4B0u;
            goto label_3ad4b0;
        }
    }
    ctx->pc = 0x3AD480u;
label_3ad480:
    // 0x3ad480: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AD480u;
    {
        const bool branch_taken_0x3ad480 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3AD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD480u;
        // 0x3ad484: 0x2405fc02  addiu       $a1, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad480) {
            ctx->pc = 0x3AD4ACu;
            goto label_3ad4ac;
        }
    }
    ctx->pc = 0x3AD488u;
label_3ad488:
    // 0x3ad488: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad48c: 0x0  nop
    ctx->pc = 0x3ad48cu;
    // NOP
    // 0x3ad490: 0x0  nop
    ctx->pc = 0x3ad490u;
    // NOP
    // 0x3ad494: 0x0  nop
    ctx->pc = 0x3ad494u;
    // NOP
    // 0x3ad498: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AD498u;
    {
        const bool branch_taken_0x3ad498 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD498u;
        // 0x3ad49c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad498) {
            ctx->pc = 0x3AD488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad488;
        }
    }
    ctx->pc = 0x3AD4A0u;
    // 0x3ad4a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD4A0u;
    {
        const bool branch_taken_0x3ad4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4A0u;
        // 0x3ad4a4: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4a0) {
            ctx->pc = 0x3AD4B0u;
            goto label_3ad4b0;
        }
    }
    ctx->pc = 0x3AD4A8u;
label_3ad4a8:
    // 0x3ad4a8: 0x2445fc01  addiu       $a1, $v0, -0x3FF
    ctx->pc = 0x3ad4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_3ad4ac:
    // 0x3ad4ac: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3ad4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3ad4b0:
    // 0x3ad4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad4b4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x3ad4b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3ad4b8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3AD4B8u;
    {
        const bool branch_taken_0x3ad4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4B8u;
        // 0x3ad4bc: 0x91503  sra         $v0, $t1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4b8) {
            ctx->pc = 0x3AD528u;
            goto label_3ad528;
        }
    }
    ctx->pc = 0x3AD4C0u;
    // 0x3ad4c0: 0x1520000d  bnez        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x3AD4C0u;
    {
        const bool branch_taken_0x3ad4c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4C0u;
        // 0x3ad4c4: 0x2404fc02  addiu       $a0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4c0) {
            ctx->pc = 0x3AD4F8u;
            goto label_3ad4f8;
        }
    }
    ctx->pc = 0x3AD4C8u;
    // 0x3ad4c8: 0x2404fbed  addiu       $a0, $zero, -0x413
    ctx->pc = 0x3ad4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x3ad4cc: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x3ad4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad4d0: 0x19e00017  blez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x3AD4D0u;
    {
        const bool branch_taken_0x3ad4d0 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x3AD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4D0u;
        // 0x3ad4d4: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4d0) {
            ctx->pc = 0x3AD530u;
            goto label_3ad530;
        }
    }
    ctx->pc = 0x3AD4D8u;
label_3ad4d8:
    // 0x3ad4d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad4dc: 0x0  nop
    ctx->pc = 0x3ad4dcu;
    // NOP
    // 0x3ad4e0: 0x0  nop
    ctx->pc = 0x3ad4e0u;
    // NOP
    // 0x3ad4e4: 0x0  nop
    ctx->pc = 0x3ad4e4u;
    // NOP
    // 0x3ad4e8: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AD4E8u;
    {
        const bool branch_taken_0x3ad4e8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4E8u;
        // 0x3ad4ec: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4e8) {
            ctx->pc = 0x3AD4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad4d8;
        }
    }
    ctx->pc = 0x3AD4F0u;
    // 0x3ad4f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AD4F0u;
    {
        const bool branch_taken_0x3ad4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad4f0) {
            ctx->pc = 0x3AD530u;
            goto label_3ad530;
        }
    }
    ctx->pc = 0x3AD4F8u;
label_3ad4f8:
    // 0x3ad4f8: 0x912c0  sll         $v0, $t1, 11
    ctx->pc = 0x3ad4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x3ad4fc: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AD4FCu;
    {
        const bool branch_taken_0x3ad4fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3AD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD4FCu;
        // 0x3ad500: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad4fc) {
            ctx->pc = 0x3AD530u;
            goto label_3ad530;
        }
    }
    ctx->pc = 0x3AD504u;
    // 0x3ad504: 0x0  nop
    ctx->pc = 0x3ad504u;
    // NOP
label_3ad508:
    // 0x3ad508: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3ad508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3ad50c: 0x0  nop
    ctx->pc = 0x3ad50cu;
    // NOP
    // 0x3ad510: 0x0  nop
    ctx->pc = 0x3ad510u;
    // NOP
    // 0x3ad514: 0x0  nop
    ctx->pc = 0x3ad514u;
    // NOP
    // 0x3ad518: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AD518u;
    {
        const bool branch_taken_0x3ad518 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD518u;
        // 0x3ad51c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad518) {
            ctx->pc = 0x3AD508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad508;
        }
    }
    ctx->pc = 0x3AD520u;
    // 0x3ad520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD520u;
    {
        const bool branch_taken_0x3ad520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad520) {
            ctx->pc = 0x3AD530u;
            goto label_3ad530;
        }
    }
    ctx->pc = 0x3AD528u;
label_3ad528:
    // 0x3ad528: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x3ad528u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3ad52c: 0x2444fc01  addiu       $a0, $v0, -0x3FF
    ctx->pc = 0x3ad52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_3ad530:
    // 0x3ad530: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AD530u;
    {
        const bool branch_taken_0x3ad530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD530u;
        // 0x3ad534: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad530) {
            ctx->pc = 0x3AD550u;
            goto label_3ad550;
        }
    }
    ctx->pc = 0x3AD538u;
    // 0x3ad538: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3ad538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3ad53c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3ad53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3ad540: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad544: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3ad544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3ad548: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AD548u;
    {
        const bool branch_taken_0x3ad548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD548u;
        // 0x3ad54c: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad548) {
            ctx->pc = 0x3AD57Cu;
            goto label_3ad57c;
        }
    }
    ctx->pc = 0x3AD550u;
label_3ad550:
    // 0x3ad550: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x3ad550u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ad554: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x3ad554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3ad558: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD558u;
    {
        const bool branch_taken_0x3ad558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD558u;
        // 0x3ad55c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad558) {
            ctx->pc = 0x3AD574u;
            goto label_3ad574;
        }
    }
    ctx->pc = 0x3AD560u;
    // 0x3ad560: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x3ad560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad564: 0x4e1006  srlv        $v0, $t6, $v0
    ctx->pc = 0x3ad564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ad568: 0xce4004  sllv        $t0, $t6, $a2
    ctx->pc = 0x3ad568u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad56c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD56Cu;
    {
        const bool branch_taken_0x3ad56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD56Cu;
        // 0x3ad570: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad56c) {
            ctx->pc = 0x3AD57Cu;
            goto label_3ad57c;
        }
    }
    ctx->pc = 0x3AD574u;
label_3ad574:
    // 0x3ad574: 0xce3804  sllv        $a3, $t6, $a2
    ctx->pc = 0x3ad574u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad578: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ad578u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad57c:
    // 0x3ad57c: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x3ad57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3ad580: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AD580u;
    {
        const bool branch_taken_0x3ad580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD580u;
        // 0x3ad584: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad580) {
            ctx->pc = 0x3AD5A0u;
            goto label_3ad5a0;
        }
    }
    ctx->pc = 0x3AD588u;
    // 0x3ad588: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3ad588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3ad58c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3ad58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3ad590: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad594: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3ad594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3ad598: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AD598u;
    {
        const bool branch_taken_0x3ad598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD598u;
        // 0x3ad59c: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad598) {
            ctx->pc = 0x3AD5CCu;
            goto label_3ad5cc;
        }
    }
    ctx->pc = 0x3AD5A0u;
label_3ad5a0:
    // 0x3ad5a0: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x3ad5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ad5a4: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x3ad5a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3ad5a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD5A8u;
    {
        const bool branch_taken_0x3ad5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5A8u;
        // 0x3ad5ac: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5a8) {
            ctx->pc = 0x3AD5C4u;
            goto label_3ad5c4;
        }
    }
    ctx->pc = 0x3AD5B0u;
    // 0x3ad5b0: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x3ad5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad5b4: 0x4f1006  srlv        $v0, $t7, $v0
    ctx->pc = 0x3ad5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ad5b8: 0xcf5004  sllv        $t2, $t7, $a2
    ctx->pc = 0x3ad5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad5bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD5BCu;
    {
        const bool branch_taken_0x3ad5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5BCu;
        // 0x3ad5c0: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5bc) {
            ctx->pc = 0x3AD5CCu;
            goto label_3ad5cc;
        }
    }
    ctx->pc = 0x3AD5C4u;
label_3ad5c4:
    // 0x3ad5c4: 0xcf4804  sllv        $t1, $t7, $a2
    ctx->pc = 0x3ad5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad5c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ad5c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ad5cc:
    // 0x3ad5cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3AD5CCu;
    {
        const bool branch_taken_0x3ad5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5CCu;
        // 0x3ad5d0: 0xa43023  subu        $a2, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5cc) {
            ctx->pc = 0x3AD618u;
            goto label_3ad618;
        }
    }
    ctx->pc = 0x3AD5D4u;
    // 0x3ad5d4: 0x0  nop
    ctx->pc = 0x3ad5d4u;
    // NOP
label_3ad5d8:
    // 0x3ad5d8: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3ad5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3ad5dc: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3ad5dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ad5e0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ad5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad5e4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD5E4u;
    {
        const bool branch_taken_0x3ad5e4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3AD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5E4u;
        // 0x3ad5e8: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5e4) {
            ctx->pc = 0x3AD600u;
            goto label_3ad600;
        }
    }
    ctx->pc = 0x3AD5ECu;
    // 0x3ad5ec: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x3ad5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x3ad5f0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3ad5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3ad5f4: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x3ad5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad5f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3AD5F8u;
    {
        const bool branch_taken_0x3ad5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD5F8u;
        // 0x3ad5fc: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad5f8) {
            ctx->pc = 0x3AD618u;
            goto label_3ad618;
        }
    }
    ctx->pc = 0x3AD600u;
label_3ad600:
    // 0x3ad600: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x3ad600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3ad604: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3AD604u;
    {
        const bool branch_taken_0x3ad604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD604u;
        // 0x3ad608: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad604) {
            ctx->pc = 0x3AD718u;
            goto label_3ad718;
        }
    }
    ctx->pc = 0x3AD60Cu;
    // 0x3ad60c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3ad60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3ad610: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x3ad610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad614: 0x54040  sll         $t0, $a1, 1
    ctx->pc = 0x3ad614u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3ad618:
    // 0x3ad618: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3ad618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad61c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3AD61Cu;
    {
        const bool branch_taken_0x3ad61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD61Cu;
        // 0x3ad620: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad61c) {
            ctx->pc = 0x3AD5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad5d8;
        }
    }
    ctx->pc = 0x3AD624u;
    // 0x3ad624: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3ad624u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3ad628: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3ad628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ad62c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3ad62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad630: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD630u;
    {
        const bool branch_taken_0x3ad630 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3AD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD630u;
        // 0x3ad634: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad630) {
            ctx->pc = 0x3AD640u;
            goto label_3ad640;
        }
    }
    ctx->pc = 0x3AD638u;
    // 0x3ad638: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3ad638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad63c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3ad63cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad640:
    // 0x3ad640: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x3ad640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3ad644: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3AD644u;
    {
        const bool branch_taken_0x3ad644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD644u;
        // 0x3ad648: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad644) {
            ctx->pc = 0x3AD71Cu;
            goto label_3ad71c;
        }
    }
    ctx->pc = 0x3AD64Cu;
    // 0x3ad64c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3ad64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3ad650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad654: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3ad654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ad658: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AD658u;
    {
        const bool branch_taken_0x3ad658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD658u;
        // 0x3ad65c: 0x2882fc02  slti        $v0, $a0, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad658) {
            ctx->pc = 0x3AD688u;
            goto label_3ad688;
        }
    }
    ctx->pc = 0x3AD660u;
    // 0x3ad660: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x3ad660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x3ad664: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3ad664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3ad668:
    // 0x3ad668: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3ad668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3ad66c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x3ad66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x3ad670: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x3ad670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ad674: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3ad674u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3ad678: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x3ad678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ad67c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AD67Cu;
    {
        const bool branch_taken_0x3ad67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD67Cu;
        // 0x3ad680: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad67c) {
            ctx->pc = 0x3AD668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ad668;
        }
    }
    ctx->pc = 0x3AD684u;
    // 0x3ad684: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x3ad684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_3ad688:
    // 0x3ad688: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AD688u;
    {
        const bool branch_taken_0x3ad688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD688u;
        // 0x3ad68c: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad688) {
            ctx->pc = 0x3AD6D8u;
            goto label_3ad6d8;
        }
    }
    ctx->pc = 0x3AD690u;
    // 0x3ad690: 0x248403ff  addiu       $a0, $a0, 0x3FF
    ctx->pc = 0x3ad690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x3ad694: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x3ad694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x3ad698: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3ad698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3ad69c: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x3ad69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x3ad6a0: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x3ad6a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3ad6a4: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x3ad6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x3ad6a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3ad6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad6ac: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3ad6acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3ad6b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ad6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad6b4: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x3ad6b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x3ad6b8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x3ad6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3ad6bc: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x3ad6bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x3ad6c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3ad6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad6c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3ad6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3ad6c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3ad6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3ad6cc: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x3ad6ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x3ad6d0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3AD6D0u;
    {
        const bool branch_taken_0x3ad6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6D0u;
        // 0x3ad6d4: 0x1638825  or          $s1, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6d0) {
            ctx->pc = 0x3AD770u;
            goto label_3ad770;
        }
    }
    ctx->pc = 0x3AD6D8u;
label_3ad6d8:
    // 0x3ad6d8: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x3ad6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ad6dc: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x3ad6dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3ad6e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AD6E0u;
    {
        const bool branch_taken_0x3ad6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6E0u;
        // 0x3ad6e4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6e0) {
            ctx->pc = 0x3AD6FCu;
            goto label_3ad6fc;
        }
    }
    ctx->pc = 0x3AD6E8u;
    // 0x3ad6e8: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x3ad6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad6ec: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3ad6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ad6f0: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x3ad6f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ad6f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3AD6F4u;
    {
        const bool branch_taken_0x3ad6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD6F4u;
        // 0x3ad6f8: 0xc73807  srav        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad6f4) {
            ctx->pc = 0x3AD73Cu;
            goto label_3ad73c;
        }
    }
    ctx->pc = 0x3AD6FCu;
label_3ad6fc:
    // 0x3ad6fc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3ad6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3ad700: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AD700u;
    {
        const bool branch_taken_0x3ad700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD700u;
        // 0x3ad704: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad700) {
            ctx->pc = 0x3AD734u;
            goto label_3ad734;
        }
    }
    ctx->pc = 0x3AD708u;
    // 0x3ad708: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x3ad708u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ad70c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3ad70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ad710: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AD710u;
    {
        const bool branch_taken_0x3ad710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD710u;
        // 0x3ad714: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad710) {
            ctx->pc = 0x3AD738u;
            goto label_3ad738;
        }
    }
    ctx->pc = 0x3AD718u;
label_3ad718:
    // 0x3ad718: 0xd1fc2  srl         $v1, $t5, 31
    ctx->pc = 0x3ad718u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_3ad71c:
    // 0x3ad71c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ad71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ad720: 0x2442fbf8  addiu       $v0, $v0, -0x408
    ctx->pc = 0x3ad720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966264));
    // 0x3ad724: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ad724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3ad728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ad728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ad72c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3AD72Cu;
    {
        const bool branch_taken_0x3ad72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD72Cu;
        // 0x3ad730: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad72c) {
            ctx->pc = 0x3AD774u;
            goto label_3ad774;
        }
    }
    ctx->pc = 0x3AD734u;
label_3ad734:
    // 0x3ad734: 0xc74007  srav        $t0, $a3, $a2
    ctx->pc = 0x3ad734u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_3ad738:
    // 0x3ad738: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x3ad738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3ad73c:
    // 0x3ad73c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ad73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad740: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3ad740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3ad744: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x3ad744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x3ad748: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ad748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad74c: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x3ad74cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x3ad750: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x3ad750u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x3ad754: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x3ad754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3ad758: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ad758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad75c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ad75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad760: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3ad760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3ad764: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x3ad764u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x3ad768: 0x1838825  or          $s1, $t4, $v1
    ctx->pc = 0x3ad768u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x3ad76c: 0x0  nop
    ctx->pc = 0x3ad76cu;
    // NOP
label_3ad770:
    // 0x3ad770: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ad770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ad774:
    // 0x3ad774: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ad774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ad778:
    // 0x3ad778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ad778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad77c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ad77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad784: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD784u;
        // 0x3ad788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD78Cu;
    // 0x3ad78c: 0x0  nop
    ctx->pc = 0x3ad78cu;
    // NOP
    ctx->pc = 0x3ad790u;
}
