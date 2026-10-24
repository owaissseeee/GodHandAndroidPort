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

// Function: func_0025A3E8
// Address: 0x25a3e8 - 0x25a920
void func_0025A3E8_0x25a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025A3E8_0x25a3e8");
#endif

    switch (ctx->pc) {
        case 0x25a48cu: goto label_25a48c;
        case 0x25a49cu: goto label_25a49c;
        case 0x25a4bcu: goto label_25a4bc;
        case 0x25a4c8u: goto label_25a4c8;
        case 0x25a538u: goto label_25a538;
        case 0x25a564u: goto label_25a564;
        case 0x25a638u: goto label_25a638;
        case 0x25a670u: goto label_25a670;
        case 0x25a694u: goto label_25a694;
        case 0x25a6d8u: goto label_25a6d8;
        case 0x25a6f4u: goto label_25a6f4;
        case 0x25a71cu: goto label_25a71c;
        case 0x25a72cu: goto label_25a72c;
        case 0x25a74cu: goto label_25a74c;
        case 0x25a758u: goto label_25a758;
        case 0x25a784u: goto label_25a784;
        case 0x25a7b0u: goto label_25a7b0;
        case 0x25a7d4u: goto label_25a7d4;
        case 0x25a810u: goto label_25a810;
        case 0x25a838u: goto label_25a838;
        case 0x25a844u: goto label_25a844;
        case 0x25a854u: goto label_25a854;
        case 0x25a880u: goto label_25a880;
        case 0x25a8b8u: goto label_25a8b8;
        case 0x25a8c4u: goto label_25a8c4;
        case 0x25a8d0u: goto label_25a8d0;
        case 0x25a8f8u: goto label_25a8f8;
        default: break;
    }

    ctx->pc = 0x25a3e8u;

    // 0x25a3e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a3ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25a3f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x25a3f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25a3fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25a3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x25a400: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x25a404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a408: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25a408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25a40c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a410: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x25A410u;
    {
        const bool branch_taken_0x25a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a410) {
            ctx->pc = 0x25A414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A410u;
            // 0x25a414: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A460u;
            goto label_25a460;
        }
    }
    ctx->pc = 0x25A418u;
    // 0x25a418: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25a418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25a41c: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x25a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x25a420: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25A420u;
    {
        const bool branch_taken_0x25a420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A420u;
        // 0x25a424: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a420) {
            ctx->pc = 0x25A454u;
            goto label_25a454;
        }
    }
    ctx->pc = 0x25A428u;
    // 0x25a428: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A428u;
    {
        const bool branch_taken_0x25a428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A428u;
        // 0x25a42c: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a428) {
            ctx->pc = 0x25A440u;
            goto label_25a440;
        }
    }
    ctx->pc = 0x25A430u;
    // 0x25a430: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A430u;
    {
        const bool branch_taken_0x25a430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A430u;
        // 0x25a434: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a430) {
            ctx->pc = 0x25A45Cu;
            goto label_25a45c;
        }
    }
    ctx->pc = 0x25A438u;
    // 0x25a438: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25A438u;
    {
        const bool branch_taken_0x25a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a438) {
            ctx->pc = 0x25A44Cu;
            goto label_25a44c;
        }
    }
    ctx->pc = 0x25A440u;
label_25a440:
    // 0x25a440: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x25a440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x25a444: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A444u;
    {
        const bool branch_taken_0x25a444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A444u;
        // 0x25a448: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a444) {
            ctx->pc = 0x25A45Cu;
            goto label_25a45c;
        }
    }
    ctx->pc = 0x25A44Cu;
label_25a44c:
    // 0x25a44c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A44Cu;
    {
        const bool branch_taken_0x25a44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a44c) {
            ctx->pc = 0x25A450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A44Cu;
            // 0x25a450: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A460u;
            goto label_25a460;
        }
    }
    ctx->pc = 0x25A454u;
label_25a454:
    // 0x25a454: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a458: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a45c:
    // 0x25a45c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x25a45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25a460:
    // 0x25a460: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x25a460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x25a464: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x25A464u;
    {
        const bool branch_taken_0x25a464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A464u;
        // 0x25a468: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a464) {
            ctx->pc = 0x25A8F8u;
            goto label_25a8f8;
        }
    }
    ctx->pc = 0x25A46Cu;
    // 0x25a46c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a470: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x25a470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x25a474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a47c: 0x800008  jr          $a0
    ctx->pc = 0x25A47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A484u: goto label_25a484;
            case 0x25A6B8u: goto label_25a6b8;
            case 0x25A714u: goto label_25a714;
            case 0x25A7F8u: goto label_25a7f8;
            case 0x25A84Cu: goto label_25a84c;
            case 0x25A898u: goto label_25a898;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A47Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A484u;
label_25a484:
    // 0x25a484: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x25A484u;
    SET_GPR_U32(ctx, 31, 0x25A48Cu);
    ctx->pc = 0x25A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A484u;
    // 0x25a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x25A484u, 0x25A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A48Cu;
label_25a48c:
    // 0x25a48c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A48Cu;
    {
        const bool branch_taken_0x25a48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a48c) {
            ctx->pc = 0x25A4B4u;
            goto label_25a4b4;
        }
    }
    ctx->pc = 0x25A494u;
    // 0x25a494: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25A494u;
    SET_GPR_U32(ctx, 31, 0x25A49Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25A494u, 0x25A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A49Cu;
label_25a49c:
    // 0x25a49c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25a4a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A4A0u;
    {
        const bool branch_taken_0x25a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4A0u;
        // 0x25a4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4a0) {
            ctx->pc = 0x25A4B0u;
            goto label_25a4b0;
        }
    }
    ctx->pc = 0x25A4A8u;
    // 0x25a4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A4A8u;
    {
        const bool branch_taken_0x25a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4A8u;
        // 0x25a4ac: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4a8) {
            ctx->pc = 0x25A4B4u;
            goto label_25a4b4;
        }
    }
    ctx->pc = 0x25A4B0u;
label_25a4b0:
    // 0x25a4b0: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x25a4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_25a4b4:
    // 0x25a4b4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25A4B4u;
    SET_GPR_U32(ctx, 31, 0x25A4BCu);
    ctx->pc = 0x25A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A4B4u;
    // 0x25a4b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25A4B4u, 0x25A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4BCu;
label_25a4bc:
    // 0x25a4bc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x25a4bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a4c0: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x25A4C0u;
    SET_GPR_U32(ctx, 31, 0x25A4C8u);
    ctx->pc = 0x25A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A4C0u;
    // 0x25a4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25A4C0u, 0x25A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4C8u;
label_25a4c8:
    // 0x25a4c8: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x25a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x25a4cc: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x25a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x25a4d0: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x25a4d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x25a4d4: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x25A4D4u;
    {
        const bool branch_taken_0x25a4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4D4u;
        // 0x25a4d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4d4) {
            ctx->pc = 0x25A5E4u;
            goto label_25a5e4;
        }
    }
    ctx->pc = 0x25A4DCu;
    // 0x25a4dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25a4e0: 0x24423390  addiu       $v0, $v0, 0x3390
    ctx->pc = 0x25a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x25a4e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a4e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a4ec: 0x800008  jr          $a0
    ctx->pc = 0x25A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A4F4u: goto label_25a4f4;
            case 0x25A504u: goto label_25a504;
            case 0x25A514u: goto label_25a514;
            case 0x25A56Cu: goto label_25a56c;
            case 0x25A57Cu: goto label_25a57c;
            case 0x25A590u: goto label_25a590;
            case 0x25A5A4u: goto label_25a5a4;
            case 0x25A5B4u: goto label_25a5b4;
            case 0x25A5C4u: goto label_25a5c4;
            case 0x25A5E4u: goto label_25a5e4;
            case 0x25A5FCu: goto label_25a5fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A4ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A4F4u;
label_25a4f4:
    // 0x25a4f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a4f8: 0x8c432a28  lw          $v1, 0x2A28($v0)
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10792)));
    // 0x25a4fc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25A4FCu;
    {
        const bool branch_taken_0x25a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4FCu;
        // 0x25a500: 0x8c442a2c  lw          $a0, 0x2A2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4fc) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A504u;
label_25a504:
    // 0x25a504: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a508: 0x8c430b5c  lw          $v1, 0xB5C($v0)
    ctx->pc = 0x25a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2908)));
    // 0x25a50c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x25A50Cu;
    {
        const bool branch_taken_0x25a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A50Cu;
        // 0x25a510: 0x8c440b60  lw          $a0, 0xB60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a50c) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A514u;
label_25a514:
    // 0x25a514: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a518: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25a518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x25a51c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x25a51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x25a520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a524: 0x8c450b60  lw          $a1, 0xB60($v0)
    ctx->pc = 0x25a524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2912)));
    // 0x25a528: 0x8c430b5c  lw          $v1, 0xB5C($v0)
    ctx->pc = 0x25a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2908)));
    // 0x25a52c: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x25a52cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a530: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x25A530u;
    SET_GPR_U32(ctx, 31, 0x25A538u);
    ctx->pc = 0x25A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A530u;
    // 0x25a534: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x25A530u, 0x25A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A538u;
label_25a538:
    // 0x25a538: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x25a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x25a53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a540: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25a540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25a544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a548: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x25a548u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25a54c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25a54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a558: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a55c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25A55Cu;
    SET_GPR_U32(ctx, 31, 0x25A564u);
    ctx->pc = 0x25A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A55Cu;
    // 0x25a560: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25A55Cu, 0x25A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A564u;
label_25a564:
    // 0x25a564: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25A564u;
    {
        const bool branch_taken_0x25a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a564) {
            ctx->pc = 0x25A618u;
            goto label_25a618;
        }
    }
    ctx->pc = 0x25A56Cu;
label_25a56c:
    // 0x25a56c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a570: 0x8c430b5c  lw          $v1, 0xB5C($v0)
    ctx->pc = 0x25a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2908)));
    // 0x25a574: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25A574u;
    {
        const bool branch_taken_0x25a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A574u;
        // 0x25a578: 0x8c440b60  lw          $a0, 0xB60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a574) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A57Cu;
label_25a57c:
    // 0x25a57c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a584: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x25a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x25a588: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25A588u;
    {
        const bool branch_taken_0x25a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A588u;
        // 0x25a58c: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a588) {
            ctx->pc = 0x25A5D4u;
            goto label_25a5d4;
        }
    }
    ctx->pc = 0x25A590u;
label_25a590:
    // 0x25a590: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a598: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x25a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x25a59c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25A59Cu;
    {
        const bool branch_taken_0x25a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A59Cu;
        // 0x25a5a0: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a59c) {
            ctx->pc = 0x25A5D4u;
            goto label_25a5d4;
        }
    }
    ctx->pc = 0x25A5A4u;
label_25a5a4:
    // 0x25a5a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a5a8: 0x8c4317d0  lw          $v1, 0x17D0($v0)
    ctx->pc = 0x25a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6096)));
    // 0x25a5ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25A5ACu;
    {
        const bool branch_taken_0x25a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5ACu;
        // 0x25a5b0: 0x8c4417d4  lw          $a0, 0x17D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5ac) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A5B4u;
label_25a5b4:
    // 0x25a5b4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a5b8: 0x8c4317d0  lw          $v1, 0x17D0($v0)
    ctx->pc = 0x25a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6096)));
    // 0x25a5bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25A5BCu;
    {
        const bool branch_taken_0x25a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5BCu;
        // 0x25a5c0: 0x8c4417d4  lw          $a0, 0x17D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5bc) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A5C4u;
label_25a5c4:
    // 0x25a5c4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a5c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a5cc: 0x8c4313b0  lw          $v1, 0x13B0($v0)
    ctx->pc = 0x25a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x25a5d0: 0x8c4413b4  lw          $a0, 0x13B4($v0)
    ctx->pc = 0x25a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5044)));
label_25a5d4:
    // 0x25a5d4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25a5d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a5d8: 0xa22502f7  sb          $a1, 0x2F7($s1)
    ctx->pc = 0x25a5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 5));
    // 0x25a5dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25A5DCu;
    {
        const bool branch_taken_0x25a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5DCu;
        // 0x25a5e0: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5dc) {
            ctx->pc = 0x25A618u;
            goto label_25a618;
        }
    }
    ctx->pc = 0x25A5E4u;
label_25a5e4:
    // 0x25a5e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a5e8: 0x8c430638  lw          $v1, 0x638($v0)
    ctx->pc = 0x25a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1592)));
    // 0x25a5ec: 0x8c44063c  lw          $a0, 0x63C($v0)
    ctx->pc = 0x25a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1596)));
label_25a5f0:
    // 0x25a5f0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x25a5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a5f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25A5F4u;
    {
        const bool branch_taken_0x25a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5F4u;
        // 0x25a5f8: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5f4) {
            ctx->pc = 0x25A618u;
            goto label_25a618;
        }
    }
    ctx->pc = 0x25A5FCu;
label_25a5fc:
    // 0x25a5fc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a600: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a604: 0x8c442e34  lw          $a0, 0x2E34($v0)
    ctx->pc = 0x25a604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11828)));
    // 0x25a608: 0x8c452e38  lw          $a1, 0x2E38($v0)
    ctx->pc = 0x25a608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11832)));
    // 0x25a60c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x25a60cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x25a610: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x25a610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25a614: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x25a614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25a618:
    // 0x25a618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a61c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25a61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a620: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25a620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a624: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25a624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a62c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25a62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a630: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A630u;
    SET_GPR_U32(ctx, 31, 0x25A638u);
    ctx->pc = 0x25A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A630u;
    // 0x25a634: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A630u, 0x25A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A638u;
label_25a638:
    // 0x25a638: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25a638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25a63c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x25A63Cu;
    {
        const bool branch_taken_0x25a63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a63c) {
            ctx->pc = 0x25A640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A63Cu;
            // 0x25a640: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A698u;
            goto label_25a698;
        }
    }
    ctx->pc = 0x25A644u;
    // 0x25a644: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25a644u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x25a648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a64c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x25a64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x25a650: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x25a650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x25a654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a658: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25a658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a65c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a660: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a664: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a668: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25A668u;
    SET_GPR_U32(ctx, 31, 0x25A670u);
    ctx->pc = 0x25A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A668u;
    // 0x25a66c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25A668u, 0x25A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A670u;
label_25a670:
    // 0x25a670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a678: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x25a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x25a67c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25a67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a688: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a68c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25A68Cu;
    SET_GPR_U32(ctx, 31, 0x25A694u);
    ctx->pc = 0x25A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A68Cu;
    // 0x25a690: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25A68Cu, 0x25A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A694u;
label_25a694:
    // 0x25a694: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x25a694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_25a698:
    // 0x25a698: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A698u;
    {
        const bool branch_taken_0x25a698 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x25a698) {
            ctx->pc = 0x25A69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A698u;
            // 0x25a69c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A6ACu;
            goto label_25a6ac;
        }
    }
    ctx->pc = 0x25A6A0u;
    // 0x25a6a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a6a4: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x25a6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a6a8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25a6ac:
    // 0x25a6ac: 0xae2016ec  sw          $zero, 0x16EC($s1)
    ctx->pc = 0x25a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5868), GPR_U32(ctx, 0));
    // 0x25a6b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a6b4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a6b8:
    // 0x25a6b8: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25a6b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25a6bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A6BCu;
    {
        const bool branch_taken_0x25a6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6BCu;
        // 0x25a6c0: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6bc) {
            ctx->pc = 0x25A6D0u;
            goto label_25a6d0;
        }
    }
    ctx->pc = 0x25A6C4u;
    // 0x25a6c4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25a6c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25a6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25a6cc: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x25a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_25a6d0:
    // 0x25a6d0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A6D0u;
    SET_GPR_U32(ctx, 31, 0x25A6D8u);
    ctx->pc = 0x25A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A6D0u;
    // 0x25a6d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A6D0u, 0x25A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6D8u;
label_25a6d8:
    // 0x25a6d8: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x25A6D8u;
    {
        const bool branch_taken_0x25a6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6d8) {
            ctx->pc = 0x25A824u;
            goto label_25a824;
        }
    }
    ctx->pc = 0x25A6E0u;
    // 0x25a6e0: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25a6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25a6e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A6E4u;
    {
        const bool branch_taken_0x25a6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6E4u;
        // 0x25a6e8: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6e4) {
            ctx->pc = 0x25A6FCu;
            goto label_25a6fc;
        }
    }
    ctx->pc = 0x25A6ECu;
    // 0x25a6ec: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25A6ECu;
    SET_GPR_U32(ctx, 31, 0x25A6F4u);
    ctx->pc = 0x25A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A6ECu;
    // 0x25a6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25A6ECu, 0x25A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6F4u;
label_25a6f4:
    // 0x25a6f4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x25A6F4u;
    {
        const bool branch_taken_0x25a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a6f4) {
            ctx->pc = 0x25A824u;
            goto label_25a824;
        }
    }
    ctx->pc = 0x25A6FCu;
label_25a6fc:
    // 0x25a6fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a700: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x25a700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x25a704: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x25a704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x25a708: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x25a708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a70c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x25A70Cu;
    {
        const bool branch_taken_0x25a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A70Cu;
        // 0x25a710: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a70c) {
            ctx->pc = 0x25A824u;
            goto label_25a824;
        }
    }
    ctx->pc = 0x25A714u;
label_25a714:
    // 0x25a714: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x25A714u;
    SET_GPR_U32(ctx, 31, 0x25A71Cu);
    ctx->pc = 0x25A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A714u;
    // 0x25a718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x25A714u, 0x25A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A71Cu;
label_25a71c:
    // 0x25a71c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A71Cu;
    {
        const bool branch_taken_0x25a71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a71c) {
            ctx->pc = 0x25A744u;
            goto label_25a744;
        }
    }
    ctx->pc = 0x25A724u;
    // 0x25a724: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25A724u;
    SET_GPR_U32(ctx, 31, 0x25A72Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25A724u, 0x25A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A72Cu;
label_25a72c:
    // 0x25a72c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25a72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25a730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A730u;
    {
        const bool branch_taken_0x25a730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A730u;
        // 0x25a734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a730) {
            ctx->pc = 0x25A740u;
            goto label_25a740;
        }
    }
    ctx->pc = 0x25A738u;
    // 0x25a738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A738u;
    {
        const bool branch_taken_0x25a738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A738u;
        // 0x25a73c: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a738) {
            ctx->pc = 0x25A744u;
            goto label_25a744;
        }
    }
    ctx->pc = 0x25A740u;
label_25a740:
    // 0x25a740: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x25a740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_25a744:
    // 0x25a744: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25A744u;
    SET_GPR_U32(ctx, 31, 0x25A74Cu);
    ctx->pc = 0x25A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A744u;
    // 0x25a748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25A744u, 0x25A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A74Cu;
label_25a74c:
    // 0x25a74c: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x25a74cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a750: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x25A750u;
    SET_GPR_U32(ctx, 31, 0x25A758u);
    ctx->pc = 0x25A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A750u;
    // 0x25a754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25A750u, 0x25A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A758u;
label_25a758:
    // 0x25a758: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a75c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25a75cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a760: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a768: 0x8c450f84  lw          $a1, 0xF84($v0)
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3972)));
    // 0x25a76c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25a76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a770: 0x8c460f88  lw          $a2, 0xF88($v0)
    ctx->pc = 0x25a770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3976)));
    // 0x25a774: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a778: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25a778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25a77c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A77Cu;
    SET_GPR_U32(ctx, 31, 0x25A784u);
    ctx->pc = 0x25A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A77Cu;
    // 0x25a780: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A77Cu, 0x25A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A784u;
label_25a784:
    // 0x25a784: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x25a784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x25a788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a78c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x25a78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x25a790: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x25a790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x25a794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a798: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25a798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a79c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a7a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a7a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7a8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25A7A8u;
    SET_GPR_U32(ctx, 31, 0x25A7B0u);
    ctx->pc = 0x25A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7A8u;
    // 0x25a7ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25A7A8u, 0x25A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7B0u;
label_25a7b0:
    // 0x25a7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25a7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7b8: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x25a7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x25a7bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25a7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a7c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a7c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a7c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25A7CCu;
    SET_GPR_U32(ctx, 31, 0x25A7D4u);
    ctx->pc = 0x25A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7CCu;
    // 0x25a7d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25A7CCu, 0x25A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7D4u;
label_25a7d4:
    // 0x25a7d4: 0x8623054a  lh          $v1, 0x54A($s1)
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x25a7d8: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A7D8u;
    {
        const bool branch_taken_0x25a7d8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x25a7d8) {
            ctx->pc = 0x25A7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A7D8u;
            // 0x25a7dc: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A7ECu;
            goto label_25a7ec;
        }
    }
    ctx->pc = 0x25A7E0u;
    // 0x25a7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a7e4: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x25a7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a7e8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25a7ec:
    // 0x25a7ec: 0xae2016ec  sw          $zero, 0x16EC($s1)
    ctx->pc = 0x25a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5868), GPR_U32(ctx, 0));
    // 0x25a7f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a7f4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a7f8:
    // 0x25a7f8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25a7fc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x25a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x25a800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25a808: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A808u;
    SET_GPR_U32(ctx, 31, 0x25A810u);
    ctx->pc = 0x25A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A808u;
    // 0x25a80c: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A808u, 0x25A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A810u;
label_25a810:
    // 0x25a810: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A810u;
    {
        const bool branch_taken_0x25a810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a810) {
            ctx->pc = 0x25A824u;
            goto label_25a824;
        }
    }
    ctx->pc = 0x25A818u;
    // 0x25a818: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a81c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a820: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a824:
    // 0x25a824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a828: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25a828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25a82c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a830: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25A830u;
    SET_GPR_U32(ctx, 31, 0x25A838u);
    ctx->pc = 0x25A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A830u;
    // 0x25a834: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25A830u, 0x25A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A838u;
label_25a838:
    // 0x25a838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a83c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25A83Cu;
    SET_GPR_U32(ctx, 31, 0x25A844u);
    ctx->pc = 0x25A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A83Cu;
    // 0x25a840: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25A83Cu, 0x25A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A844u;
label_25a844:
    // 0x25a844: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x25A844u;
    {
        const bool branch_taken_0x25a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A844u;
        // 0x25a848: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a844) {
            ctx->pc = 0x25A8FCu;
            goto label_25a8fc;
        }
    }
    ctx->pc = 0x25A84Cu;
label_25a84c:
    // 0x25a84c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25A84Cu;
    SET_GPR_U32(ctx, 31, 0x25A854u);
    ctx->pc = 0x25A850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A84Cu;
    // 0x25a850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25A84Cu, 0x25A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A854u;
label_25a854:
    // 0x25a854: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x25a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25a858: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25a858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a85c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25a85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25a860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a864: 0x8c650f8c  lw          $a1, 0xF8C($v1)
    ctx->pc = 0x25a864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3980)));
    // 0x25a868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25a868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a86c: 0x8c660f90  lw          $a2, 0xF90($v1)
    ctx->pc = 0x25a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x25a870: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25a870u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a874: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x25a878: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25A878u;
    SET_GPR_U32(ctx, 31, 0x25A880u);
    ctx->pc = 0x25A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A878u;
    // 0x25a87c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25A878u, 0x25A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A880u;
label_25a880:
    // 0x25a880: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25a880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x25a884: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x25a888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a88c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a890: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x25a890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x25a894: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25a894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25a898:
    // 0x25a898: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x25a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x25a89c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x25a8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25a8a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25a8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25a8ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25a8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25a8b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25A8B0u;
    SET_GPR_U32(ctx, 31, 0x25A8B8u);
    ctx->pc = 0x25A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A8B0u;
    // 0x25a8b4: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25A8B0u, 0x25A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A8B8u;
label_25a8b8:
    // 0x25a8b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25A8BCu;
    SET_GPR_U32(ctx, 31, 0x25A8C4u);
    ctx->pc = 0x25A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A8BCu;
    // 0x25a8c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25A8BCu, 0x25A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A8C4u;
label_25a8c4:
    // 0x25a8c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25a8c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25a8c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25A8C8u;
    SET_GPR_U32(ctx, 31, 0x25A8D0u);
    ctx->pc = 0x25A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A8C8u;
    // 0x25a8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25A8C8u, 0x25A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A8D0u;
label_25a8d0:
    // 0x25a8d0: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x25a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8d4: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x25a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a8d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25a8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25a8dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a8dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a8e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25a8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a8e4: 0x0  nop
    ctx->pc = 0x25a8e4u;
    // NOP
    // 0x25a8e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25A8E8u;
    {
        const bool branch_taken_0x25a8e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8E8u;
        // 0x25a8ec: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8e8) {
            ctx->pc = 0x25A8F8u;
            goto label_25a8f8;
        }
    }
    ctx->pc = 0x25A8F0u;
    // 0x25a8f0: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x25A8F0u;
    SET_GPR_U32(ctx, 31, 0x25A8F8u);
    ctx->pc = 0x25A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A8F0u;
    // 0x25a8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x25A8F0u, 0x25A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A8F8u;
label_25a8f8:
    // 0x25a8f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25a8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25a8fc:
    // 0x25a8fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25a8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a900: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25a900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a904: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25a904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a908: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25a908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a910: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a914: 0x3e00008  jr          $ra
    ctx->pc = 0x25A914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A914u;
        // 0x25a918: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A91Cu;
    // 0x25a91c: 0x0  nop
    ctx->pc = 0x25a91cu;
    // NOP
    ctx->pc = 0x25a920u;
}
