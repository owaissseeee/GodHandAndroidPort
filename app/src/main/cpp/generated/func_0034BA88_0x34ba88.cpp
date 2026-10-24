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

// Function: func_0034BA88
// Address: 0x34ba88 - 0x34bbc0
void func_0034BA88_0x34ba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BA88_0x34ba88");
#endif

    switch (ctx->pc) {
        case 0x34bac0u: goto label_34bac0;
        case 0x34baf0u: goto label_34baf0;
        case 0x34bb10u: goto label_34bb10;
        case 0x34bb30u: goto label_34bb30;
        case 0x34bb4cu: goto label_34bb4c;
        case 0x34bb60u: goto label_34bb60;
        case 0x34bb78u: goto label_34bb78;
        case 0x34bb8cu: goto label_34bb8c;
        case 0x34bba0u: goto label_34bba0;
        default: break;
    }

    ctx->pc = 0x34ba88u;

    // 0x34ba88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34ba88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34ba8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34ba90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34ba90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ba94: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34ba98: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x34ba98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x34ba9c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34baa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34baa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baa4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34baa8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34baa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34baacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34bab0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34bab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bab8: 0xc0d2ef0  jal         func_34BBC0
    ctx->pc = 0x34BAB8u;
    SET_GPR_U32(ctx, 31, 0x34BAC0u);
    ctx->pc = 0x34BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BAB8u;
    // 0x34babc: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BBC0u, 0x34BAB8u, 0x34BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BAC0u;
label_34bac0:
    // 0x34bac0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x34bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34bac4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x34bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x34bac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bacc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34baccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bad0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34bad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bad4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x34bad4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34bad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34bad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34badc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34BADCu;
    {
        const bool branch_taken_0x34badc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34badc) {
            ctx->pc = 0x34BAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BADCu;
            // 0x34bae0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BAE4u;
            goto label_34bae4;
        }
    }
    ctx->pc = 0x34BAE4u;
label_34bae4:
    // 0x34bae4: 0x4010  mfhi        $t0
    ctx->pc = 0x34bae4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x34bae8: 0xc0d2f00  jal         func_34BC00
    ctx->pc = 0x34BAE8u;
    SET_GPR_U32(ctx, 31, 0x34BAF0u);
    ctx->pc = 0x34BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC00u, 0x34BAE8u, 0x34BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BAF0u;
label_34baf0:
    // 0x34baf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34baf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34baf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34baf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34baf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bafc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34bafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bb00: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x34BB00u;
    {
        const bool branch_taken_0x34bb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB00u;
        // 0x34bb04: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb00) {
            ctx->pc = 0x34BBA4u;
            goto label_34bba4;
        }
    }
    ctx->pc = 0x34BB08u;
    // 0x34bb08: 0xc0d2f00  jal         func_34BC00
    ctx->pc = 0x34BB08u;
    SET_GPR_U32(ctx, 31, 0x34BB10u);
    ctx->pc = 0x34BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC00u, 0x34BB08u, 0x34BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB10u;
label_34bb10:
    // 0x34bb10: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x34BB10u;
    {
        const bool branch_taken_0x34bb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb10) {
            ctx->pc = 0x34BB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BB10u;
            // 0x34bb14: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BBA8u;
            goto label_34bba8;
        }
    }
    ctx->pc = 0x34BB18u;
    // 0x34bb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34bb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34bb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bb24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34bb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb28: 0xc0d2f00  jal         func_34BC00
    ctx->pc = 0x34BB28u;
    SET_GPR_U32(ctx, 31, 0x34BB30u);
    ctx->pc = 0x34BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB28u;
    // 0x34bb2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BC00u, 0x34BB28u, 0x34BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB30u;
label_34bb30:
    // 0x34bb30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb34: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x34bb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34bb38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34bb38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb3c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34BB3Cu;
    {
        const bool branch_taken_0x34bb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BB3Cu;
        // 0x34bb40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bb3c) {
            ctx->pc = 0x34BBA4u;
            goto label_34bba4;
        }
    }
    ctx->pc = 0x34BB44u;
    // 0x34bb44: 0xc0d2f80  jal         func_34BE00
    ctx->pc = 0x34BB44u;
    SET_GPR_U32(ctx, 31, 0x34BB4Cu);
    ctx->pc = 0x34BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB44u;
    // 0x34bb48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE00u, 0x34BB44u, 0x34BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB4Cu;
label_34bb4c:
    // 0x34bb4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34bb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb58: 0xc0d2fae  jal         func_34BEB8
    ctx->pc = 0x34BB58u;
    SET_GPR_U32(ctx, 31, 0x34BB60u);
    ctx->pc = 0x34BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB58u;
    // 0x34bb5c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BEB8u, 0x34BB58u, 0x34BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB60u;
label_34bb60:
    // 0x34bb60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb64: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34bb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb68: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x34bb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34bb6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34bb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb70: 0xc0d2f80  jal         func_34BE00
    ctx->pc = 0x34BB70u;
    SET_GPR_U32(ctx, 31, 0x34BB78u);
    ctx->pc = 0x34BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB70u;
    // 0x34bb74: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE00u, 0x34BB70u, 0x34BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB78u;
label_34bb78:
    // 0x34bb78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34bb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34bb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb84: 0xc0d2fae  jal         func_34BEB8
    ctx->pc = 0x34BB84u;
    SET_GPR_U32(ctx, 31, 0x34BB8Cu);
    ctx->pc = 0x34BB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB84u;
    // 0x34bb88: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BEB8u, 0x34BB84u, 0x34BB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BB8Cu;
label_34bb8c:
    // 0x34bb8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34bb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34bb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34bb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bb98: 0xc0d2fd6  jal         func_34BF58
    ctx->pc = 0x34BB98u;
    SET_GPR_U32(ctx, 31, 0x34BBA0u);
    ctx->pc = 0x34BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BB98u;
    // 0x34bb9c: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF58u, 0x34BB98u, 0x34BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBA0u;
label_34bba0:
    // 0x34bba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34bba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34bba4:
    // 0x34bba4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34bba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34bba8:
    // 0x34bba8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34bba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34bbac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34bbacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bbb0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34bbb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34bbb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34bbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x34BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBB8u;
        // 0x34bbbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BBC0u;
}
