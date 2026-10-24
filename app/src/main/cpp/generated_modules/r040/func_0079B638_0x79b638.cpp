#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079B638
// Address: 0x79b638 - 0x79b758
void func_0079B638_0x79b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B638_0x79b638");
#endif

    switch (ctx->pc) {
        case 0x79b678u: goto label_79b678;
        case 0x79b6b0u: goto label_79b6b0;
        case 0x79b6c8u: goto label_79b6c8;
        case 0x79b6dcu: goto label_79b6dc;
        case 0x79b6ecu: goto label_79b6ec;
        case 0x79b700u: goto label_79b700;
        case 0x79b710u: goto label_79b710;
        case 0x79b728u: goto label_79b728;
        case 0x79b750u: goto label_79b750;
        default: break;
    }

    ctx->pc = 0x79b638u;

    // 0x79b638: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b640: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b644: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b648: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b64c: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79b64cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x79b650: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79b654: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b658: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x79b658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x79b65c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x79b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x79b660: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b660u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b664: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79b664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x79b668: 0xafbd0028  sw          $sp, 0x28($sp)
    ctx->pc = 0x79b668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 29));
    // 0x79b66c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x79b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x79b670: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79b670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C800u));
    // 0x79b674: 0x0  nop
    ctx->pc = 0x79b674u;
    // NOP
label_79b678:
    // 0x79b678: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x79b678u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x79b67c: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x79b67cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b680: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x79B680u;
    {
        const bool branch_taken_0x79b680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B680u;
        // 0x79b684: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b680) {
            ctx->pc = 0x79B740u;
            goto label_79b740;
        }
    }
    ctx->pc = 0x79B688u;
    // 0x79b688: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x79b688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x79b68c: 0x2442c600  addiu       $v0, $v0, -0x3A00
    ctx->pc = 0x79b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952448));
    // 0x79b690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b694: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b698: 0x800008  jr          $a0
    ctx->pc = 0x79B698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B6A0u: goto label_79b6a0;
            case 0x79B6B8u: goto label_79b6b8;
            case 0x79B6F4u: goto label_79b6f4;
            case 0x79B708u: goto label_79b708;
            case 0x79B720u: goto label_79b720;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B698u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B6A0u;
label_79b6a0:
    // 0x79b6a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b6a4: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x79b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79b6a8: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B6A8u;
    SET_GPR_U32(ctx, 31, 0x79B6B0u);
    ctx->pc = 0x79B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6A8u;
    // 0x79b6ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B6A8u, 0x79B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6B0u;
label_79b6b0:
    // 0x79b6b0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79B6B0u;
    {
        const bool branch_taken_0x79b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6B0u;
        // 0x79b6b4: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6b0) {
            ctx->pc = 0x79B734u;
            goto label_79b734;
        }
    }
    ctx->pc = 0x79B6B8u;
label_79b6b8:
    // 0x79b6b8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x79b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x79b6bc: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x79b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x79b6c0: 0xc1e6fa8  jal         func_79BEA0
    ctx->pc = 0x79B6C0u;
    SET_GPR_U32(ctx, 31, 0x79B6C8u);
    ctx->pc = 0x79B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6C0u;
    // 0x79b6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEA0u, 0x79B6C0u, 0x79B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6C8u;
label_79b6c8:
    // 0x79b6c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x79b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79b6cc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79b6d0: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x79b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x79b6d4: 0xc0a421a  jal         func_290868
    ctx->pc = 0x79B6D4u;
    SET_GPR_U32(ctx, 31, 0x79B6DCu);
    ctx->pc = 0x79B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6D4u;
    // 0x79b6d8: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79B6D4u, 0x79B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6DCu;
label_79b6dc:
    // 0x79b6dc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79B6DCu;
    {
        const bool branch_taken_0x79b6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6DCu;
        // 0x79b6e0: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6dc) {
            ctx->pc = 0x79B734u;
            goto label_79b734;
        }
    }
    ctx->pc = 0x79B6E4u;
    // 0x79b6e4: 0xc09d050  jal         func_274140
    ctx->pc = 0x79B6E4u;
    SET_GPR_U32(ctx, 31, 0x79B6ECu);
    ctx->pc = 0x79B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6E4u;
    // 0x79b6e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274140u, 0x79B6E4u, 0x79B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6ECu;
label_79b6ec:
    // 0x79b6ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79B6ECu;
    {
        const bool branch_taken_0x79b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6ECu;
        // 0x79b6f0: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6ec) {
            ctx->pc = 0x79B734u;
            goto label_79b734;
        }
    }
    ctx->pc = 0x79B6F4u;
label_79b6f4:
    // 0x79b6f4: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x79b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x79b6f8: 0xc1e6f3e  jal         func_79BCF8
    ctx->pc = 0x79B6F8u;
    SET_GPR_U32(ctx, 31, 0x79B700u);
    ctx->pc = 0x79B6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6F8u;
    // 0x79b6fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BCF8u, 0x79B6F8u, 0x79B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B700u;
label_79b700:
    // 0x79b700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79B700u;
    {
        const bool branch_taken_0x79b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b700) {
            ctx->pc = 0x79B728u;
            goto label_79b728;
        }
    }
    ctx->pc = 0x79B708u;
label_79b708:
    // 0x79b708: 0xc1e6f18  jal         func_79BC60
    ctx->pc = 0x79B708u;
    SET_GPR_U32(ctx, 31, 0x79B710u);
    ctx->pc = 0x79B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B708u;
    // 0x79b70c: 0x24040209  addiu       $a0, $zero, 0x209 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BC60u, 0x79B708u, 0x79B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B710u;
label_79b710:
    // 0x79b710: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79B710u;
    {
        const bool branch_taken_0x79b710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B710u;
        // 0x79b714: 0x8e03c800  lw          $v1, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b710) {
            ctx->pc = 0x79B740u;
            goto label_79b740;
        }
    }
    ctx->pc = 0x79B718u;
    // 0x79b718: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79B718u;
    {
        const bool branch_taken_0x79b718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B718u;
        // 0x79b71c: 0x90620014  lbu         $v0, 0x14($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b718) {
            ctx->pc = 0x79B738u;
            goto label_79b738;
        }
    }
    ctx->pc = 0x79B720u;
label_79b720:
    // 0x79b720: 0xc1e6eea  jal         func_79BBA8
    ctx->pc = 0x79B720u;
    SET_GPR_U32(ctx, 31, 0x79B728u);
    ctx->pc = 0x79BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BBA8u, 0x79B720u, 0x79B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B728u;
label_79b728:
    // 0x79b728: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B728u;
    {
        const bool branch_taken_0x79b728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B728u;
        // 0x79b72c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b728) {
            ctx->pc = 0x79B744u;
            goto label_79b744;
        }
    }
    ctx->pc = 0x79B730u;
    // 0x79b730: 0x8e03c800  lw          $v1, -0x3800($s0)
    ctx->pc = 0x79b730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
label_79b734:
    // 0x79b734: 0x90620014  lbu         $v0, 0x14($v1)
    ctx->pc = 0x79b734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_79b738:
    // 0x79b738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79b73c: 0xa0620014  sb          $v0, 0x14($v1)
    ctx->pc = 0x79b73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 2));
label_79b740:
    // 0x79b740: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79b744:
    // 0x79b744: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b748: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B748u;
    SET_GPR_U32(ctx, 31, 0x79B750u);
    ctx->pc = 0x79B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B748u;
    // 0x79b74c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B748u, 0x79B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B750u;
label_79b750:
    // 0x79b750: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x79B750u;
    {
        const bool branch_taken_0x79b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B750u;
        // 0x79b754: 0x8e02c800  lw          $v0, -0x3800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b750) {
            ctx->pc = 0x79B678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b678;
        }
    }
    ctx->pc = 0x79B758u;
}
} // namespace gh_r040
