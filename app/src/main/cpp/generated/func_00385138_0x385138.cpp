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

// Function: func_00385138
// Address: 0x385138 - 0x3851c0
void func_00385138_0x385138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385138_0x385138");
#endif

    switch (ctx->pc) {
        case 0x385158u: goto label_385158;
        case 0x38516cu: goto label_38516c;
        case 0x385178u: goto label_385178;
        case 0x385184u: goto label_385184;
        case 0x385190u: goto label_385190;
        case 0x3851a4u: goto label_3851a4;
        default: break;
    }

    ctx->pc = 0x385138u;

    // 0x385138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x385138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38513c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38513cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x385140: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x385140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x385144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x385144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38514c: 0x263004bc  addiu       $s0, $s1, 0x4BC
    ctx->pc = 0x38514cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1212));
    // 0x385150: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x385150u;
    SET_GPR_U32(ctx, 31, 0x385158u);
    ctx->pc = 0x385154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385150u;
    // 0x385154: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x385150u, 0x385158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385158u;
label_385158:
    // 0x385158: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x385158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x38515c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x38515Cu;
    {
        const bool branch_taken_0x38515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38515c) {
            ctx->pc = 0x385160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38515Cu;
            // 0x385160: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3851ACu;
            goto label_3851ac;
        }
    }
    ctx->pc = 0x385164u;
    // 0x385164: 0xc0ca92a  jal         func_32A4A8
    ctx->pc = 0x385164u;
    SET_GPR_U32(ctx, 31, 0x38516Cu);
    ctx->pc = 0x385168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385164u;
    // 0x385168: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x385164u, 0x38516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38516Cu;
label_38516c:
    // 0x38516c: 0xae2204bc  sw          $v0, 0x4BC($s1)
    ctx->pc = 0x38516cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1212), GPR_U32(ctx, 2));
    // 0x385170: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x385170u;
    SET_GPR_U32(ctx, 31, 0x385178u);
    ctx->pc = 0x385174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385170u;
    // 0x385174: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x385170u, 0x385178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385178u;
label_385178:
    // 0x385178: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x385178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x38517c: 0xc0ca96e  jal         func_32A5B8
    ctx->pc = 0x38517Cu;
    SET_GPR_U32(ctx, 31, 0x385184u);
    ctx->pc = 0x385180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38517Cu;
    // 0x385180: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5B8u, 0x38517Cu, 0x385184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385184u;
label_385184:
    // 0x385184: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x385184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x385188: 0xc0ca992  jal         func_32A648
    ctx->pc = 0x385188u;
    SET_GPR_U32(ctx, 31, 0x385190u);
    ctx->pc = 0x38518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385188u;
    // 0x38518c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A648u, 0x385188u, 0x385190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385190u;
label_385190:
    // 0x385190: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x385190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x385194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x385194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38519c: 0xc0e03ac  jal         func_380EB0
    ctx->pc = 0x38519Cu;
    SET_GPR_U32(ctx, 31, 0x3851A4u);
    ctx->pc = 0x3851A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38519Cu;
    // 0x3851a0: 0x26260470  addiu       $a2, $s1, 0x470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380EB0u, 0x38519Cu, 0x3851A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3851A4u;
label_3851a4:
    // 0x3851a4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3851a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3851a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3851a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3851ac:
    // 0x3851ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3851acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3851b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3851b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3851b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3851B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3851B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3851B4u;
        // 0x3851b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3851B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3851BCu;
    // 0x3851bc: 0x0  nop
    ctx->pc = 0x3851bcu;
    // NOP
    ctx->pc = 0x3851c0u;
}
