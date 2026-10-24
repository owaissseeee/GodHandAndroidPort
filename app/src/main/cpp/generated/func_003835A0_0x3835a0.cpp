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

// Function: func_003835A0
// Address: 0x3835a0 - 0x383690
void func_003835A0_0x3835a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003835A0_0x3835a0");
#endif

    switch (ctx->pc) {
        case 0x3835d8u: goto label_3835d8;
        case 0x3835fcu: goto label_3835fc;
        case 0x383610u: goto label_383610;
        case 0x383630u: goto label_383630;
        case 0x383654u: goto label_383654;
        case 0x38365cu: goto label_38365c;
        case 0x383668u: goto label_383668;
        case 0x383674u: goto label_383674;
        default: break;
    }

    ctx->pc = 0x3835a0u;

    // 0x3835a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3835a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3835a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3835a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3835a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3835a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3835ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3835acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3835b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3835b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3835b4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3835b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3835b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3835b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3835bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3835BCu;
    {
        const bool branch_taken_0x3835bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835BCu;
        // 0x3835c0: 0x261100a4  addiu       $s1, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835bc) {
            ctx->pc = 0x383618u;
            goto label_383618;
        }
    }
    ctx->pc = 0x3835C4u;
    // 0x3835c4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3835c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3835c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3835C8u;
    {
        const bool branch_taken_0x3835c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835C8u;
        // 0x3835cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835c8) {
            ctx->pc = 0x3835E0u;
            goto label_3835e0;
        }
    }
    ctx->pc = 0x3835D0u;
    // 0x3835d0: 0xc0cb716  jal         func_32DC58
    ctx->pc = 0x3835D0u;
    SET_GPR_U32(ctx, 31, 0x3835D8u);
    ctx->pc = 0x32DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC58u, 0x3835D0u, 0x3835D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3835D8u;
label_3835d8:
    // 0x3835d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3835D8u;
    {
        const bool branch_taken_0x3835d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3835DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835D8u;
        // 0x3835dc: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835d8) {
            ctx->pc = 0x3835E4u;
            goto label_3835e4;
        }
    }
    ctx->pc = 0x3835E0u;
label_3835e0:
    // 0x3835e0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3835e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3835e4:
    // 0x3835e4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3835e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3835e8: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3835E8u;
    {
        const bool branch_taken_0x3835e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3835ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835E8u;
        // 0x3835ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835e8) {
            ctx->pc = 0x38367Cu;
            goto label_38367c;
        }
    }
    ctx->pc = 0x3835F0u;
    // 0x3835f0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3835f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3835f4: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x3835F4u;
    SET_GPR_U32(ctx, 31, 0x3835FCu);
    ctx->pc = 0x3835F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3835F4u;
    // 0x3835f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x3835F4u, 0x3835FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3835FCu;
label_3835fc:
    // 0x3835fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3835FCu;
    {
        const bool branch_taken_0x3835fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835FCu;
        // 0x383600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835fc) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383604u;
    // 0x383604: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x383604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x383608: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x383608u;
    SET_GPR_U32(ctx, 31, 0x383610u);
    ctx->pc = 0x38360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383608u;
    // 0x38360c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A160u, 0x383608u, 0x383610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383610u;
label_383610:
    // 0x383610: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x383610u;
    {
        const bool branch_taken_0x383610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383610u;
        // 0x383614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383610) {
            ctx->pc = 0x38367Cu;
            goto label_38367c;
        }
    }
    ctx->pc = 0x383618u;
label_383618:
    // 0x383618: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x383618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x38361c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x38361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x383620: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x383620u;
    {
        const bool branch_taken_0x383620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x383624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383620u;
        // 0x383624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383620) {
            ctx->pc = 0x383638u;
            goto label_383638;
        }
    }
    ctx->pc = 0x383628u;
    // 0x383628: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x383628u;
    SET_GPR_U32(ctx, 31, 0x383630u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x383628u, 0x383630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383630u;
label_383630:
    // 0x383630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x383630u;
    {
        const bool branch_taken_0x383630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383630u;
        // 0x383634: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383630) {
            ctx->pc = 0x38363Cu;
            goto label_38363c;
        }
    }
    ctx->pc = 0x383638u;
label_383638:
    // 0x383638: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x383638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_38363c:
    // 0x38363c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x38363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x383640: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x383640u;
    {
        const bool branch_taken_0x383640 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x383644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383640u;
        // 0x383644: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383640) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383648u;
    // 0x383648: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x383648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x38364c: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x38364Cu;
    SET_GPR_U32(ctx, 31, 0x383654u);
    ctx->pc = 0x383650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38364Cu;
    // 0x383650: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A160u, 0x38364Cu, 0x383654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383654u;
label_383654:
    // 0x383654: 0xc0cadb8  jal         func_32B6E0
    ctx->pc = 0x383654u;
    SET_GPR_U32(ctx, 31, 0x38365Cu);
    ctx->pc = 0x383658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383654u;
    // 0x383658: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B6E0u, 0x383654u, 0x38365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38365Cu;
label_38365c:
    // 0x38365c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x38365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x383660: 0xc0cab84  jal         func_32AE10
    ctx->pc = 0x383660u;
    SET_GPR_U32(ctx, 31, 0x383668u);
    ctx->pc = 0x383664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383660u;
    // 0x383664: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE10u, 0x383660u, 0x383668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383668u;
label_383668:
    // 0x383668: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x383668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x38366c: 0xc0cb430  jal         func_32D0C0
    ctx->pc = 0x38366Cu;
    SET_GPR_U32(ctx, 31, 0x383674u);
    ctx->pc = 0x383670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38366Cu;
    // 0x383670: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0C0u, 0x38366Cu, 0x383674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383674u;
label_383674:
    // 0x383674: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x383674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_383678:
    // 0x383678: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x383678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38367c:
    // 0x38367c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38367cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383684: 0x3e00008  jr          $ra
    ctx->pc = 0x383684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383684u;
        // 0x383688: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38368Cu;
    // 0x38368c: 0x0  nop
    ctx->pc = 0x38368cu;
    // NOP
    ctx->pc = 0x383690u;
}
