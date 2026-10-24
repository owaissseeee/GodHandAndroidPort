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

// Function: func_00376370
// Address: 0x376370 - 0x376400
void func_00376370_0x376370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376370_0x376370");
#endif

    switch (ctx->pc) {
        case 0x376390u: goto label_376390;
        case 0x3763a8u: goto label_3763a8;
        case 0x3763b8u: goto label_3763b8;
        case 0x3763ccu: goto label_3763cc;
        case 0x3763d4u: goto label_3763d4;
        case 0x3763dcu: goto label_3763dc;
        default: break;
    }

    ctx->pc = 0x376370u;

    // 0x376370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376374: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x376378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37637c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376380: 0x24500850  addiu       $s0, $v0, 0x850
    ctx->pc = 0x376380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x376384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376388: 0x26112a00  addiu       $s1, $s0, 0x2A00
    ctx->pc = 0x376388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 10752));
    // 0x37638c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x37638cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x770850u));
label_376390:
    // 0x376390: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x376390u;
    {
        const bool branch_taken_0x376390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376390u;
        // 0x376394: 0x30421000  andi        $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376390) {
            ctx->pc = 0x3763DCu;
            goto label_3763dc;
        }
    }
    ctx->pc = 0x376398u;
    // 0x376398: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376398u;
    {
        const bool branch_taken_0x376398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376398) {
            ctx->pc = 0x3763B0u;
            goto label_3763b0;
        }
    }
    ctx->pc = 0x3763A0u;
    // 0x3763a0: 0xc0dd900  jal         func_376400
    ctx->pc = 0x3763A0u;
    SET_GPR_U32(ctx, 31, 0x3763A8u);
    ctx->pc = 0x3763A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763A0u;
    // 0x3763a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376400u, 0x3763A0u, 0x3763A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763A8u;
label_3763a8:
    // 0x3763a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3763A8u;
    {
        const bool branch_taken_0x3763a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3763ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763A8u;
        // 0x3763ac: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3763a8) {
            ctx->pc = 0x3763BCu;
            goto label_3763bc;
        }
    }
    ctx->pc = 0x3763B0u;
label_3763b0:
    // 0x3763b0: 0xc0dd90e  jal         func_376438
    ctx->pc = 0x3763B0u;
    SET_GPR_U32(ctx, 31, 0x3763B8u);
    ctx->pc = 0x3763B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763B0u;
    // 0x3763b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376438u, 0x3763B0u, 0x3763B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763B8u;
label_3763b8:
    // 0x3763b8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3763b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3763bc:
    // 0x3763bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3763BCu;
    {
        const bool branch_taken_0x3763bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3763bc) {
            ctx->pc = 0x3763C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3763BCu;
            // 0x3763c0: 0x261000e0  addiu       $s0, $s0, 0xE0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3763E0u;
            goto label_3763e0;
        }
    }
    ctx->pc = 0x3763C4u;
    // 0x3763c4: 0xc0dd9c8  jal         func_376720
    ctx->pc = 0x3763C4u;
    SET_GPR_U32(ctx, 31, 0x3763CCu);
    ctx->pc = 0x3763C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763C4u;
    // 0x3763c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376720u, 0x3763C4u, 0x3763CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763CCu;
label_3763cc:
    // 0x3763cc: 0xc0dd9ec  jal         func_3767B0
    ctx->pc = 0x3763CCu;
    SET_GPR_U32(ctx, 31, 0x3763D4u);
    ctx->pc = 0x3763D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763CCu;
    // 0x3763d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3767B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3767B0u, 0x3763CCu, 0x3763D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763D4u;
label_3763d4:
    // 0x3763d4: 0xc0dda08  jal         func_376820
    ctx->pc = 0x3763D4u;
    SET_GPR_U32(ctx, 31, 0x3763DCu);
    ctx->pc = 0x3763D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3763D4u;
    // 0x3763d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376820u, 0x3763D4u, 0x3763DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3763DCu;
label_3763dc:
    // 0x3763dc: 0x261000e0  addiu       $s0, $s0, 0xE0
    ctx->pc = 0x3763dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_3763e0:
    // 0x3763e0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3763e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3763e4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3763E4u;
    {
        const bool branch_taken_0x3763e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3763e4) {
            ctx->pc = 0x3763E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3763E4u;
            // 0x3763e8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376390;
        }
    }
    ctx->pc = 0x3763ECu;
    // 0x3763ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3763ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3763f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3763f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3763f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3763f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3763f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3763F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3763FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3763F8u;
        // 0x3763fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3763F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376400u;
}
