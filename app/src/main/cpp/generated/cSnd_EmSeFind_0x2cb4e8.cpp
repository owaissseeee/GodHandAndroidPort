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

// Function: cSnd_EmSeFind
// Address: 0x2cb4e8 - 0x2cb5b8
void cSnd_EmSeFind_0x2cb4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_EmSeFind_0x2cb4e8");
#endif

    switch (ctx->pc) {
        case 0x2cb514u: goto label_2cb514;
        case 0x2cb530u: goto label_2cb530;
        case 0x2cb53cu: goto label_2cb53c;
        case 0x2cb544u: goto label_2cb544;
        case 0x2cb558u: goto label_2cb558;
        case 0x2cb570u: goto label_2cb570;
        case 0x2cb578u: goto label_2cb578;
        default: break;
    }

    ctx->pc = 0x2cb4e8u;

    // 0x2cb4e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cb4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cb4ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cb4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cb4f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cb4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cb4f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb4f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cb4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cb500: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cb500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cb504: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2cb504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2cb508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb50c: 0xc0b2cea  jal         func_2CB3A8
    ctx->pc = 0x2CB50Cu;
    SET_GPR_U32(ctx, 31, 0x2CB514u);
    ctx->pc = 0x2CB510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB50Cu;
    // 0x2cb510: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB3A8u, 0x2CB50Cu, 0x2CB514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB514u;
label_2cb514:
    // 0x2cb514: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb518: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x2cb518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cb51c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2cb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2cb520: 0x43a00b  movn        $s4, $v0, $v1
    ctx->pc = 0x2cb520u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x2cb524: 0x2490ce48  addiu       $s0, $a0, -0x31B8
    ctx->pc = 0x2cb524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954568));
    // 0x2cb528: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cb528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb52c: 0x0  nop
    ctx->pc = 0x2cb52cu;
    // NOP
label_2cb530:
    // 0x2cb530: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb534: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB534u;
    SET_GPR_U32(ctx, 31, 0x2CB53Cu);
    ctx->pc = 0x2CB538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB534u;
    // 0x2cb538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB534u, 0x2CB53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB53Cu;
label_2cb53c:
    // 0x2cb53c: 0xc0b3f1e  jal         func_2CFC78
    ctx->pc = 0x2CB53Cu;
    SET_GPR_U32(ctx, 31, 0x2CB544u);
    ctx->pc = 0x2CB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB53Cu;
    // 0x2cb540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC78u, 0x2CB53Cu, 0x2CB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB544u;
label_2cb544:
    // 0x2cb544: 0x50530010  beql        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB544u;
    {
        const bool branch_taken_0x2cb544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x2cb544) {
            ctx->pc = 0x2CB548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB544u;
            // 0x2cb548: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB588u;
            goto label_2cb588;
        }
    }
    ctx->pc = 0x2CB54Cu;
    // 0x2cb54c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb550: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB550u;
    SET_GPR_U32(ctx, 31, 0x2CB558u);
    ctx->pc = 0x2CB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB550u;
    // 0x2cb554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB550u, 0x2CB558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB558u;
label_2cb558:
    // 0x2cb558: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cb558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cb55c: 0x5474000a  bnel        $v1, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB55Cu;
    {
        const bool branch_taken_0x2cb55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x2cb55c) {
            ctx->pc = 0x2CB560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB55Cu;
            // 0x2cb560: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB588u;
            goto label_2cb588;
        }
    }
    ctx->pc = 0x2CB564u;
    // 0x2cb564: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb568: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB568u;
    SET_GPR_U32(ctx, 31, 0x2CB570u);
    ctx->pc = 0x2CB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB568u;
    // 0x2cb56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB568u, 0x2CB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB570u;
label_2cb570:
    // 0x2cb570: 0xc0b3f22  jal         func_2CFC88
    ctx->pc = 0x2CB570u;
    SET_GPR_U32(ctx, 31, 0x2CB578u);
    ctx->pc = 0x2CB574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB570u;
    // 0x2cb574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC88u, 0x2CB570u, 0x2CB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB578u;
label_2cb578:
    // 0x2cb578: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB578u;
    {
        const bool branch_taken_0x2cb578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2CB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB578u;
        // 0x2cb57c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb578) {
            ctx->pc = 0x2CB588u;
            goto label_2cb588;
        }
    }
    ctx->pc = 0x2CB580u;
    // 0x2cb580: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB580u;
    {
        const bool branch_taken_0x2cb580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB580u;
        // 0x2cb584: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb580) {
            ctx->pc = 0x2CB598u;
            goto label_2cb598;
        }
    }
    ctx->pc = 0x2CB588u;
label_2cb588:
    // 0x2cb588: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x2cb588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cb58c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2CB58Cu;
    {
        const bool branch_taken_0x2cb58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB58Cu;
        // 0x2cb590: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb58c) {
            ctx->pc = 0x2CB530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb530;
        }
    }
    ctx->pc = 0x2CB594u;
    // 0x2cb594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cb598:
    // 0x2cb598: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cb598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb59c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cb59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb5a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cb5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb5a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cb5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb5a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2cb5a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB5B0u;
        // 0x2cb5b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB5B8u;
}
