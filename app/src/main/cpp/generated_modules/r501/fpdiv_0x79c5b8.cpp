#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: fpdiv
// Address: 0x79c5b8 - 0x79c718
void fpdiv_0x79c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpdiv_0x79c5b8");
#endif

    switch (ctx->pc) {
        case 0x79c5d8u: goto label_79c5d8;
        case 0x79c5e8u: goto label_79c5e8;
        case 0x79c6b0u: goto label_79c6b0;
        case 0x79c708u: goto label_79c708;
        default: break;
    }

    ctx->pc = 0x79c5b8u;

    // 0x79c5b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c5bc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x79c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x79c5c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c5c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79c5c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c5cc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x79c5ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79c5d0: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C5D0u;
    SET_GPR_U32(ctx, 31, 0x79C5D8u);
    ctx->pc = 0x79C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C5D0u;
    // 0x79c5d4: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C5D0u, 0x79C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C5D8u;
label_79c5d8:
    // 0x79c5d8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79c5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c5dc: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x79c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79c5e0: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C5E0u;
    SET_GPR_U32(ctx, 31, 0x79C5E8u);
    ctx->pc = 0x79C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C5E0u;
    // 0x79c5e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C5E0u, 0x79C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C5E8u;
label_79c5e8:
    // 0x79c5e8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x79c5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c5ec: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x79c5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c5f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C5F0u;
    {
        const bool branch_taken_0x79c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5F0u;
        // 0x79c5f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5f0) {
            ctx->pc = 0x79C600u;
            goto label_79c600;
        }
    }
    ctx->pc = 0x79C5F8u;
    // 0x79c5f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x79C5F8u;
    {
        const bool branch_taken_0x79c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5F8u;
        // 0x79c5fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5f8) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C600u;
label_79c600:
    // 0x79c600: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x79c600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c604: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79c604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c608: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x79C608u;
    {
        const bool branch_taken_0x79c608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C608u;
        // 0x79c60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c608) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C610u;
    // 0x79c610: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c614: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x79c614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x79c618: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79c61c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79c61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79c620: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C620u;
    {
        const bool branch_taken_0x79c620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C620u;
        // 0x79c624: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c620) {
            ctx->pc = 0x79C634u;
            goto label_79c634;
        }
    }
    ctx->pc = 0x79C628u;
    // 0x79c628: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x79c628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x79c62c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C62Cu;
    {
        const bool branch_taken_0x79c62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C62Cu;
        // 0x79c630: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c62c) {
            ctx->pc = 0x79C648u;
            goto label_79c648;
        }
    }
    ctx->pc = 0x79C634u;
label_79c634:
    // 0x79c634: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x79C634u;
    {
        const bool branch_taken_0x79c634 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x79C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C634u;
        // 0x79c638: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c634) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C63Cu;
    // 0x79c63c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c640: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x79C640u;
    {
        const bool branch_taken_0x79c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C640u;
        // 0x79c644: 0x244409e8  addiu       $a0, $v0, 0x9E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c640) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C648u;
label_79c648:
    // 0x79c648: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C648u;
    {
        const bool branch_taken_0x79c648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C648u;
        // 0x79c64c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c648) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C650u;
    // 0x79c650: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x79c650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x79c654: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c658: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x79C658u;
    {
        const bool branch_taken_0x79c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C658u;
        // 0x79c65c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c658) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C660u;
label_79c660:
    // 0x79c660: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C660u;
    {
        const bool branch_taken_0x79c660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C660u;
        // 0x79c664: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c660) {
            ctx->pc = 0x79C678u;
            goto label_79c678;
        }
    }
    ctx->pc = 0x79C668u;
    // 0x79c668: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79c668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79c66c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c670: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x79C670u;
    {
        const bool branch_taken_0x79c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C670u;
        // 0x79c674: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c670) {
            ctx->pc = 0x79C700u;
            goto label_79c700;
        }
    }
    ctx->pc = 0x79C678u;
label_79c678:
    // 0x79c678: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x79c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x79c67c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x79c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79c680: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x79c680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x79c684: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x79c684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79c688: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79c688u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x79c68c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C68Cu;
    {
        const bool branch_taken_0x79c68c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C68Cu;
        // 0x79c690: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c68c) {
            ctx->pc = 0x79C6A4u;
            goto label_79c6a4;
        }
    }
    ctx->pc = 0x79C694u;
    // 0x79c694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79c698: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x79c698u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x79c69c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79c6a0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79c6a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79c6a4:
    // 0x79c6a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x79c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x79c6a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C6A8u;
    {
        const bool branch_taken_0x79c6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6A8u;
        // 0x79c6ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6a8) {
            ctx->pc = 0x79C6B4u;
            goto label_79c6b4;
        }
    }
    ctx->pc = 0x79C6B0u;
label_79c6b0:
    // 0x79c6b0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79c6b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79c6b4:
    // 0x79c6b4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C6B4u;
    {
        const bool branch_taken_0x79c6b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c6b4) {
            ctx->pc = 0x79C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C6B4u;
            // 0x79c6b8: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C6C8u;
            goto label_79c6c8;
        }
    }
    ctx->pc = 0x79C6BCu;
    // 0x79c6bc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x79c6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x79c6c0: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x79c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x79c6c4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x79c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_79c6c8:
    // 0x79c6c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79C6C8u;
    {
        const bool branch_taken_0x79c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6C8u;
        // 0x79c6cc: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6c8) {
            ctx->pc = 0x79C6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c6b0;
        }
    }
    ctx->pc = 0x79C6D0u;
    // 0x79c6d0: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x79c6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x79c6d4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79c6d8: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C6D8u;
    {
        const bool branch_taken_0x79c6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79c6d8) {
            ctx->pc = 0x79C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C6D8u;
            // 0x79c6dc: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C6FCu;
            goto label_79c6fc;
        }
    }
    ctx->pc = 0x79C6E0u;
    // 0x79c6e0: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x79c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x79c6e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C6E4u;
    {
        const bool branch_taken_0x79c6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6E4u;
        // 0x79c6e8: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6e4) {
            ctx->pc = 0x79C6F4u;
            goto label_79c6f4;
        }
    }
    ctx->pc = 0x79C6ECu;
    // 0x79c6ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C6ECu;
    {
        const bool branch_taken_0x79c6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6ECu;
        // 0x79c6f0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6ec) {
            ctx->pc = 0x79C6F8u;
            goto label_79c6f8;
        }
    }
    ctx->pc = 0x79C6F4u;
label_79c6f4:
    // 0x79c6f4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x79c6f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_79c6f8:
    // 0x79c6f8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x79c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_79c6fc:
    // 0x79c6fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x79c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79c700:
    // 0x79c700: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79C700u;
    SET_GPR_U32(ctx, 31, 0x79C708u);
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79C700u, 0x79C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C708u;
label_79c708:
    // 0x79c708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79c708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c70c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x79c70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c710: 0x3e00008  jr          $ra
    ctx->pc = 0x79C710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C710u;
        // 0x79c714: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C718u;
}
} // namespace gh_r501
