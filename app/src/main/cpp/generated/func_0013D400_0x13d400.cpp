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

// Function: func_0013D400
// Address: 0x13d400 - 0x13d540
void func_0013D400_0x13d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013D400_0x13d400");
#endif

    switch (ctx->pc) {
        case 0x13d430u: goto label_13d430;
        case 0x13d438u: goto label_13d438;
        case 0x13d444u: goto label_13d444;
        case 0x13d460u: goto label_13d460;
        case 0x13d480u: goto label_13d480;
        case 0x13d4acu: goto label_13d4ac;
        case 0x13d4b4u: goto label_13d4b4;
        case 0x13d4b8u: goto label_13d4b8;
        case 0x13d4c4u: goto label_13d4c4;
        case 0x13d4d4u: goto label_13d4d4;
        case 0x13d4e0u: goto label_13d4e0;
        case 0x13d4f8u: goto label_13d4f8;
        case 0x13d504u: goto label_13d504;
        case 0x13d518u: goto label_13d518;
        default: break;
    }

    ctx->pc = 0x13d400u;

    // 0x13d400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13d400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13d404: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13d404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13d408: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13d408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13d40c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13d40cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d410: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13d410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13d414: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13d414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d418: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13d41c: 0x26510094  addiu       $s1, $s2, 0x94
    ctx->pc = 0x13d41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
    // 0x13d420: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13d424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d428: 0xa6400092  sh          $zero, 0x92($s2)
    ctx->pc = 0x13d428u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 0));
    // 0x13d42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d430:
    // 0x13d430: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x13D430u;
    SET_GPR_U32(ctx, 31, 0x13D438u);
    ctx->pc = 0x13D434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D430u;
    // 0x13d434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x13D430u, 0x13D438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D438u;
label_13d438:
    // 0x13d438: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d43c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13D43Cu;
    SET_GPR_U32(ctx, 31, 0x13D444u);
    ctx->pc = 0x13D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D43Cu;
    // 0x13d440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13D43Cu, 0x13D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D444u;
label_13d444:
    // 0x13d444: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13d444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13d448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d44c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x13d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13d450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d454: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13d454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13d458: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x13D458u;
    SET_GPR_U32(ctx, 31, 0x13D460u);
    ctx->pc = 0x13D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D458u;
    // 0x13d45c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x13D458u, 0x13D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D460u;
label_13d460:
    // 0x13d460: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13d464: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x13d464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13d468: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x13d468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x13d46c: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13D46Cu;
    {
        const bool branch_taken_0x13d46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d46c) {
            ctx->pc = 0x13D470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D46Cu;
            // 0x13d470: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d430;
        }
    }
    ctx->pc = 0x13D474u;
    // 0x13d474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d478: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13D478u;
    SET_GPR_U32(ctx, 31, 0x13D480u);
    ctx->pc = 0x13D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D478u;
    // 0x13d47c: 0x265000d0  addiu       $s0, $s2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13D478u, 0x13D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D480u;
label_13d480:
    // 0x13d480: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x13d480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d484: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x13d484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x13d488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d48c: 0xa2420090  sb          $v0, 0x90($s2)
    ctx->pc = 0x13d48cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13d490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d494: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x13d494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    // 0x13d498: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13d498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d49c: 0x26510120  addiu       $s1, $s2, 0x120
    ctx->pc = 0x13d49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x13d4a0: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x13d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x13d4a4: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13D4A4u;
    SET_GPR_U32(ctx, 31, 0x13D4ACu);
    ctx->pc = 0x13D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4A4u;
    // 0x13d4a8: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13D4A4u, 0x13D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4ACu;
label_13d4ac:
    // 0x13d4ac: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x13D4ACu;
    SET_GPR_U32(ctx, 31, 0x13D4B4u);
    ctx->pc = 0x13D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4ACu;
    // 0x13d4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x13D4ACu, 0x13D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4B4u;
label_13d4b4:
    // 0x13d4b4: 0x0  nop
    ctx->pc = 0x13d4b4u;
    // NOP
label_13d4b8:
    // 0x13d4b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13d4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4bc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x13D4BCu;
    SET_GPR_U32(ctx, 31, 0x13D4C4u);
    ctx->pc = 0x13D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4BCu;
    // 0x13d4c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x13D4BCu, 0x13D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4C4u;
label_13d4c4:
    // 0x13d4c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x13d4c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13d4c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4cc: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x13D4CCu;
    SET_GPR_U32(ctx, 31, 0x13D4D4u);
    ctx->pc = 0x13D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4CCu;
    // 0x13d4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x13D4CCu, 0x13D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4D4u;
label_13d4d4:
    // 0x13d4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13d4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4d8: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x13D4D8u;
    SET_GPR_U32(ctx, 31, 0x13D4E0u);
    ctx->pc = 0x13D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4D8u;
    // 0x13d4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x13D4D8u, 0x13D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4E0u;
label_13d4e0:
    // 0x13d4e0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x13d4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x13d4e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13D4E4u;
    {
        const bool branch_taken_0x13d4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E4u;
        // 0x13d4e8: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d4e4) {
            ctx->pc = 0x13D4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d4b8;
        }
    }
    ctx->pc = 0x13D4ECu;
    // 0x13d4ec: 0x26500120  addiu       $s0, $s2, 0x120
    ctx->pc = 0x13d4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x13d4f0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x13d4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13d4f4: 0x0  nop
    ctx->pc = 0x13d4f4u;
    // NOP
label_13d4f8:
    // 0x13d4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d4fc: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x13D4FCu;
    SET_GPR_U32(ctx, 31, 0x13D504u);
    ctx->pc = 0x13D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D4FCu;
    // 0x13d500: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x13D4FCu, 0x13D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D504u;
label_13d504:
    // 0x13d504: 0x0  nop
    ctx->pc = 0x13d504u;
    // NOP
    // 0x13d508: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13D508u;
    {
        const bool branch_taken_0x13d508 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x13D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D508u;
        // 0x13d50c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d508) {
            ctx->pc = 0x13D4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d4f8;
        }
    }
    ctx->pc = 0x13D510u;
    // 0x13d510: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x13D510u;
    SET_GPR_U32(ctx, 31, 0x13D518u);
    ctx->pc = 0x13D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D510u;
    // 0x13d514: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x13D510u, 0x13D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D518u;
label_13d518:
    // 0x13d518: 0xa240038c  sb          $zero, 0x38C($s2)
    ctx->pc = 0x13d518u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 908), (uint8_t)GPR_U32(ctx, 0));
    // 0x13d51c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13d51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d520: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13d520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d524: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13d524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d528: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13d528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d52c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13d52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d534: 0x3e00008  jr          $ra
    ctx->pc = 0x13D534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D534u;
        // 0x13d538: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D53Cu;
    // 0x13d53c: 0x0  nop
    ctx->pc = 0x13d53cu;
    // NOP
    ctx->pc = 0x13d540u;
}
