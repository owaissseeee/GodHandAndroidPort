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

// Function: func_0014ED60
// Address: 0x14ed60 - 0x14ee60
void func_0014ED60_0x14ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014ED60_0x14ed60");
#endif

    switch (ctx->pc) {
        case 0x14edb4u: goto label_14edb4;
        case 0x14edd4u: goto label_14edd4;
        case 0x14ede8u: goto label_14ede8;
        case 0x14ee10u: goto label_14ee10;
        case 0x14ee1cu: goto label_14ee1c;
        case 0x14ee34u: goto label_14ee34;
        case 0x14ee40u: goto label_14ee40;
        case 0x14ee4cu: goto label_14ee4c;
        default: break;
    }

    ctx->pc = 0x14ed60u;

    // 0x14ed60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ed64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ed68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ed6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ed70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ed70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed74: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x14ed74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14ed78: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14ed78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14ed7c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14ED7Cu;
    {
        const bool branch_taken_0x14ed7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED7Cu;
        // 0x14ed80: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed7c) {
            ctx->pc = 0x14EDE0u;
            goto label_14ede0;
        }
    }
    ctx->pc = 0x14ED84u;
    // 0x14ed84: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ED84u;
    {
        const bool branch_taken_0x14ed84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed84) {
            ctx->pc = 0x14ED88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ED84u;
            // 0x14ed88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ED9Cu;
            goto label_14ed9c;
        }
    }
    ctx->pc = 0x14ED8Cu;
    // 0x14ed8c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14ED8Cu;
    {
        const bool branch_taken_0x14ed8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed8c) {
            ctx->pc = 0x14EDACu;
            goto label_14edac;
        }
    }
    ctx->pc = 0x14ED94u;
    // 0x14ed94: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14ED94u;
    {
        const bool branch_taken_0x14ed94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ED94u;
        // 0x14ed98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ed94) {
            ctx->pc = 0x14EE50u;
            goto label_14ee50;
        }
    }
    ctx->pc = 0x14ED9Cu;
label_14ed9c:
    // 0x14ed9c: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14ED9Cu;
    {
        const bool branch_taken_0x14ed9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ed9c) {
            ctx->pc = 0x14EE24u;
            goto label_14ee24;
        }
    }
    ctx->pc = 0x14EDA4u;
    // 0x14eda4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14EDA4u;
    {
        const bool branch_taken_0x14eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDA4u;
        // 0x14eda8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eda4) {
            ctx->pc = 0x14EE50u;
            goto label_14ee50;
        }
    }
    ctx->pc = 0x14EDACu;
label_14edac:
    // 0x14edac: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x14EDACu;
    SET_GPR_U32(ctx, 31, 0x14EDB4u);
    ctx->pc = 0x14EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDACu;
    // 0x14edb0: 0xc60c0438  lwc1        $f12, 0x438($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x14EDACu, 0x14EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDB4u;
label_14edb4:
    // 0x14edb4: 0x8e050428  lw          $a1, 0x428($s0)
    ctx->pc = 0x14edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x14edb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14edb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edbc: 0x8e06042c  lw          $a2, 0x42C($s0)
    ctx->pc = 0x14edbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x14edc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14edc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edc4: 0xc60c0440  lwc1        $f12, 0x440($s0)
    ctx->pc = 0x14edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14edc8: 0xc60d0430  lwc1        $f13, 0x430($s0)
    ctx->pc = 0x14edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14edcc: 0xc055d5a  jal         func_157568
    ctx->pc = 0x14EDCCu;
    SET_GPR_U32(ctx, 31, 0x14EDD4u);
    ctx->pc = 0x14EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDCCu;
    // 0x14edd0: 0x96080434  lhu         $t0, 0x434($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x14EDCCu, 0x14EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDD4u;
label_14edd4:
    // 0x14edd4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14edd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14edd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14edd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14eddc: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x14eddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_14ede0:
    // 0x14ede0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EDE0u;
    SET_GPR_U32(ctx, 31, 0x14EDE8u);
    ctx->pc = 0x14EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDE0u;
    // 0x14ede4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EDE0u, 0x14EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDE8u;
label_14ede8:
    // 0x14ede8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EDE8u;
    {
        const bool branch_taken_0x14ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ede8) {
            ctx->pc = 0x14EDFCu;
            goto label_14edfc;
        }
    }
    ctx->pc = 0x14EDF0u;
    // 0x14edf0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x14edf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14edf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14edf8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x14edf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_14edfc:
    // 0x14edfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14ee00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14ee04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ee04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee08: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x14EE08u;
    SET_GPR_U32(ctx, 31, 0x14EE10u);
    ctx->pc = 0x14EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE08u;
    // 0x14ee0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x14EE08u, 0x14EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE10u;
label_14ee10:
    // 0x14ee10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee14: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x14EE14u;
    SET_GPR_U32(ctx, 31, 0x14EE1Cu);
    ctx->pc = 0x14EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE14u;
    // 0x14ee18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x14EE14u, 0x14EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE1Cu;
label_14ee1c:
    // 0x14ee1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14EE1Cu;
    {
        const bool branch_taken_0x14ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE1Cu;
        // 0x14ee20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee1c) {
            ctx->pc = 0x14EE50u;
            goto label_14ee50;
        }
    }
    ctx->pc = 0x14EE24u;
label_14ee24:
    // 0x14ee24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ee24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ee28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14ee28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14ee2c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EE2Cu;
    SET_GPR_U32(ctx, 31, 0x14EE34u);
    ctx->pc = 0x14EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE2Cu;
    // 0x14ee30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EE2Cu, 0x14EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE34u;
label_14ee34:
    // 0x14ee34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x14EE38u;
    SET_GPR_U32(ctx, 31, 0x14EE40u);
    ctx->pc = 0x14EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE38u;
    // 0x14ee3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x14EE38u, 0x14EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE40u;
label_14ee40:
    // 0x14ee40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x14EE44u;
    SET_GPR_U32(ctx, 31, 0x14EE4Cu);
    ctx->pc = 0x14EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE44u;
    // 0x14ee48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x14EE44u, 0x14EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE4Cu;
label_14ee4c:
    // 0x14ee4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ee50:
    // 0x14ee50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ee50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ee54: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x14ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ee58: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE58u;
        // 0x14ee5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EE60u;
}
