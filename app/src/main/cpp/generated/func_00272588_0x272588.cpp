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

// Function: func_00272588
// Address: 0x272588 - 0x272688
void func_00272588_0x272588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00272588_0x272588");
#endif

    switch (ctx->pc) {
        case 0x2725f4u: goto label_2725f4;
        case 0x272608u: goto label_272608;
        case 0x272614u: goto label_272614;
        case 0x272638u: goto label_272638;
        case 0x272654u: goto label_272654;
        default: break;
    }

    ctx->pc = 0x272588u;

    // 0x272588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27258c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272590: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x272590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x272594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x272594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27259c: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x27259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x2725a0: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2725A0u;
    {
        const bool branch_taken_0x2725a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725A0u;
        // 0x2725a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725a0) {
            ctx->pc = 0x272674u;
            goto label_272674;
        }
    }
    ctx->pc = 0x2725A8u;
    // 0x2725a8: 0x8e2206f0  lw          $v0, 0x6F0($s1)
    ctx->pc = 0x2725a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1776)));
    // 0x2725ac: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2725ACu;
    {
        const bool branch_taken_0x2725ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725ACu;
        // 0x2725b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725ac) {
            ctx->pc = 0x272674u;
            goto label_272674;
        }
    }
    ctx->pc = 0x2725B4u;
    // 0x2725b4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2725b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2725b8: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x2725bc: 0x2c83004c  sltiu       $v1, $a0, 0x4C
    ctx->pc = 0x2725bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x2725c0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2725C0u;
    {
        const bool branch_taken_0x2725c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725C0u;
        // 0x2725c4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725c0) {
            ctx->pc = 0x272670u;
            goto label_272670;
        }
    }
    ctx->pc = 0x2725C8u;
    // 0x2725c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2725c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2725cc: 0x244263a0  addiu       $v0, $v0, 0x63A0
    ctx->pc = 0x2725ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25504));
    // 0x2725d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2725d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2725d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2725d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2725d8: 0x800008  jr          $a0
    ctx->pc = 0x2725D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2725E0u: goto label_2725e0;
            case 0x272670u: goto label_272670;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2725D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2725E0u;
label_2725e0:
    // 0x2725e0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2725e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2725e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2725e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2725e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2725e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2725ec: 0xc0b76ac  jal         func_2DDAB0
    ctx->pc = 0x2725ECu;
    SET_GPR_U32(ctx, 31, 0x2725F4u);
    ctx->pc = 0x2725F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2725ECu;
    // 0x2725f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDAB0u, 0x2725ECu, 0x2725F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2725F4u;
label_2725f4:
    // 0x2725f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2725f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725f8: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2725F8u;
    {
        const bool branch_taken_0x2725f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2725F8u;
        // 0x2725fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725f8) {
            ctx->pc = 0x272674u;
            goto label_272674;
        }
    }
    ctx->pc = 0x272600u;
    // 0x272600: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x272600u;
    SET_GPR_U32(ctx, 31, 0x272608u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x272600u, 0x272608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272608u;
label_272608:
    // 0x272608: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x272608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27260c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x27260Cu;
    SET_GPR_U32(ctx, 31, 0x272614u);
    ctx->pc = 0x272610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27260Cu;
    // 0x272610: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x27260Cu, 0x272614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272614u;
label_272614:
    // 0x272614: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x272614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x272618: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27261c: 0x0  nop
    ctx->pc = 0x27261cu;
    // NOP
    // 0x272620: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x272620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272624: 0x0  nop
    ctx->pc = 0x272624u;
    // NOP
    // 0x272628: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x272628u;
    {
        const bool branch_taken_0x272628 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272628u;
        // 0x27262c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272628) {
            ctx->pc = 0x272674u;
            goto label_272674;
        }
    }
    ctx->pc = 0x272630u;
    // 0x272630: 0xc0742b4  jal         func_1D0AD0
    ctx->pc = 0x272630u;
    SET_GPR_U32(ctx, 31, 0x272638u);
    ctx->pc = 0x272634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272630u;
    // 0x272634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AD0u, 0x272630u, 0x272638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272638u;
label_272638:
    // 0x272638: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x272638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27263c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272640: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x272640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x272644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272648: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x272648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27264c: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x27264Cu;
    SET_GPR_U32(ctx, 31, 0x272654u);
    ctx->pc = 0x272650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27264Cu;
    // 0x272650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x27264Cu, 0x272654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272654u;
label_272654:
    // 0x272654: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x272654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x272658: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x272658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27265c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x27265cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x272660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272664: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x272664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x272668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x272668u;
    {
        const bool branch_taken_0x272668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272668u;
        // 0x27266c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272668) {
            ctx->pc = 0x272674u;
            goto label_272674;
        }
    }
    ctx->pc = 0x272670u;
label_272670:
    // 0x272670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272674:
    // 0x272674: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x272674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27267c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27267cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272680: 0x3e00008  jr          $ra
    ctx->pc = 0x272680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272680u;
        // 0x272684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272688u;
}
