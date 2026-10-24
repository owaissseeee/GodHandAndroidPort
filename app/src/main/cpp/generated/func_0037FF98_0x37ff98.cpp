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

// Function: func_0037FF98
// Address: 0x37ff98 - 0x380048
void func_0037FF98_0x37ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037FF98_0x37ff98");
#endif

    switch (ctx->pc) {
        case 0x37ffc0u: goto label_37ffc0;
        case 0x37ffd4u: goto label_37ffd4;
        case 0x37ffe0u: goto label_37ffe0;
        case 0x37ffecu: goto label_37ffec;
        case 0x37fff8u: goto label_37fff8;
        case 0x38000cu: goto label_38000c;
        case 0x380020u: goto label_380020;
        default: break;
    }

    ctx->pc = 0x37ff98u;

    // 0x37ff98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37ff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37ff9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37ffa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37ffa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37ffa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ffa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37ffac: 0x263004bc  addiu       $s0, $s1, 0x4BC
    ctx->pc = 0x37ffacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1212));
    // 0x37ffb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ffb4: 0x26320470  addiu       $s2, $s1, 0x470
    ctx->pc = 0x37ffb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1136));
    // 0x37ffb8: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x37FFB8u;
    SET_GPR_U32(ctx, 31, 0x37FFC0u);
    ctx->pc = 0x37FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FFB8u;
    // 0x37ffbc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x37FFB8u, 0x37FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FFC0u;
label_37ffc0:
    // 0x37ffc0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x37ffc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37ffc4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x37FFC4u;
    {
        const bool branch_taken_0x37ffc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ffc4) {
            ctx->pc = 0x37FFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FFC4u;
            // 0x37ffc8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380030u;
            goto label_380030;
        }
    }
    ctx->pc = 0x37FFCCu;
    // 0x37ffcc: 0xc0ca92a  jal         func_32A4A8
    ctx->pc = 0x37FFCCu;
    SET_GPR_U32(ctx, 31, 0x37FFD4u);
    ctx->pc = 0x37FFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FFCCu;
    // 0x37ffd0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x37FFCCu, 0x37FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FFD4u;
label_37ffd4:
    // 0x37ffd4: 0xae2204bc  sw          $v0, 0x4BC($s1)
    ctx->pc = 0x37ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1212), GPR_U32(ctx, 2));
    // 0x37ffd8: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x37FFD8u;
    SET_GPR_U32(ctx, 31, 0x37FFE0u);
    ctx->pc = 0x37FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FFD8u;
    // 0x37ffdc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x37FFD8u, 0x37FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FFE0u;
label_37ffe0:
    // 0x37ffe0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37ffe4: 0xc0ca96e  jal         func_32A5B8
    ctx->pc = 0x37FFE4u;
    SET_GPR_U32(ctx, 31, 0x37FFECu);
    ctx->pc = 0x37FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FFE4u;
    // 0x37ffe8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A5B8u, 0x37FFE4u, 0x37FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FFECu;
label_37ffec:
    // 0x37ffec: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x37ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37fff0: 0xc0ca992  jal         func_32A648
    ctx->pc = 0x37FFF0u;
    SET_GPR_U32(ctx, 31, 0x37FFF8u);
    ctx->pc = 0x37FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FFF0u;
    // 0x37fff4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A648u, 0x37FFF0u, 0x37FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FFF8u;
label_37fff8:
    // 0x37fff8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37fffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37fffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380000: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x380000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380004: 0xc0e03ac  jal         func_380EB0
    ctx->pc = 0x380004u;
    SET_GPR_U32(ctx, 31, 0x38000Cu);
    ctx->pc = 0x380008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380004u;
    // 0x380008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380EB0u, 0x380004u, 0x38000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38000Cu;
label_38000c:
    // 0x38000c: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x38000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x380010: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x380010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x380014: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x380014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380018: 0xc0e021c  jal         func_380870
    ctx->pc = 0x380018u;
    SET_GPR_U32(ctx, 31, 0x380020u);
    ctx->pc = 0x38001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380018u;
    // 0x38001c: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380870u, 0x380018u, 0x380020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380020u;
label_380020:
    // 0x380020: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x380020u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x380024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380028: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x380028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x38002c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38002cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_380030:
    // 0x380030: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x380030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380034: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x380034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38003c: 0x3e00008  jr          $ra
    ctx->pc = 0x38003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38003Cu;
        // 0x380040: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380044u;
    // 0x380044: 0x0  nop
    ctx->pc = 0x380044u;
    // NOP
    ctx->pc = 0x380048u;
}
