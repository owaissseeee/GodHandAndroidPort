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

// Function: cSndSeVoice_Stop
// Address: 0x2ce430 - 0x2ce488
void cSndSeVoice_Stop_0x2ce430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Stop_0x2ce430");
#endif

    switch (ctx->pc) {
        case 0x2ce444u: goto label_2ce444;
        case 0x2ce468u: goto label_2ce468;
        case 0x2ce478u: goto label_2ce478;
        default: break;
    }

    ctx->pc = 0x2ce430u;

    // 0x2ce430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ce434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ce438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce43c: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CE43Cu;
    SET_GPR_U32(ctx, 31, 0x2CE444u);
    ctx->pc = 0x2CE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE43Cu;
    // 0x2ce440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CE43Cu, 0x2CE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE444u;
label_2ce444:
    // 0x2ce444: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2CE444u;
    {
        const bool branch_taken_0x2ce444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce444) {
            ctx->pc = 0x2CE448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE444u;
            // 0x2ce448: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE47Cu;
            goto label_2ce47c;
        }
    }
    ctx->pc = 0x2CE44Cu;
    // 0x2ce44c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ce44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ce450: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce454: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE454u;
    {
        const bool branch_taken_0x2ce454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce454) {
            ctx->pc = 0x2CE470u;
            goto label_2ce470;
        }
    }
    ctx->pc = 0x2CE45Cu;
    // 0x2ce45c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ce45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ce460: 0xc0dd414  jal         func_375050
    ctx->pc = 0x2CE460u;
    SET_GPR_U32(ctx, 31, 0x2CE468u);
    ctx->pc = 0x2CE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE460u;
    // 0x2ce464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375050u, 0x2CE460u, 0x2CE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE468u;
label_2ce468:
    // 0x2ce468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE468u;
    {
        const bool branch_taken_0x2ce468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE468u;
        // 0x2ce46c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce468) {
            ctx->pc = 0x2CE47Cu;
            goto label_2ce47c;
        }
    }
    ctx->pc = 0x2CE470u;
label_2ce470:
    // 0x2ce470: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CE470u;
    SET_GPR_U32(ctx, 31, 0x2CE478u);
    ctx->pc = 0x2CE474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE470u;
    // 0x2ce474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3E8u, 0x2CE470u, 0x2CE478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE478u;
label_2ce478:
    // 0x2ce478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ce478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ce47c:
    // 0x2ce47c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce480: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE480u;
        // 0x2ce484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE488u;
}
