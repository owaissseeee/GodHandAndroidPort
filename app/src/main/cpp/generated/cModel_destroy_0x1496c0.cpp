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

// Function: cModel_destroy
// Address: 0x1496c0 - 0x149738
void cModel_destroy_0x1496c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_destroy_0x1496c0");
#endif

    switch (ctx->pc) {
        case 0x1496f8u: goto label_1496f8;
        case 0x149700u: goto label_149700;
        case 0x149708u: goto label_149708;
        case 0x149714u: goto label_149714;
        case 0x149720u: goto label_149720;
        default: break;
    }

    ctx->pc = 0x1496c0u;

    // 0x1496c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1496c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1496c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1496c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1496c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1496c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1496cc: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x1496ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x1496d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1496d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1496d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1496d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1496d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1496d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1496dc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1496dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1496e0: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x1496e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x1496e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1496E4u;
    {
        const bool branch_taken_0x1496e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1496E4u;
        // 0x1496e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496e4) {
            ctx->pc = 0x1496F8u;
            goto label_1496f8;
        }
    }
    ctx->pc = 0x1496ECu;
    // 0x1496ec: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x1496f0: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x1496F0u;
    SET_GPR_U32(ctx, 31, 0x1496F8u);
    ctx->pc = 0x1496F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496F0u;
    // 0x1496f4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x1496F0u, 0x1496F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1496F8u;
label_1496f8:
    // 0x1496f8: 0xc052de6  jal         func_14B798
    ctx->pc = 0x1496F8u;
    SET_GPR_U32(ctx, 31, 0x149700u);
    ctx->pc = 0x1496FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1496F8u;
    // 0x1496fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B798u, 0x1496F8u, 0x149700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149700u;
label_149700:
    // 0x149700: 0xc052798  jal         func_149E60
    ctx->pc = 0x149700u;
    SET_GPR_U32(ctx, 31, 0x149708u);
    ctx->pc = 0x149704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149700u;
    // 0x149704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E60u, 0x149700u, 0x149708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149708u;
label_149708:
    // 0x149708: 0x26040260  addiu       $a0, $s0, 0x260
    ctx->pc = 0x149708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x14970c: 0xc07e298  jal         func_1F8A60
    ctx->pc = 0x14970Cu;
    SET_GPR_U32(ctx, 31, 0x149714u);
    ctx->pc = 0x149710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14970Cu;
    // 0x149710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A60u, 0x14970Cu, 0x149714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149714u;
label_149714:
    // 0x149714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149718: 0xc054012  jal         func_150048
    ctx->pc = 0x149718u;
    SET_GPR_U32(ctx, 31, 0x149720u);
    ctx->pc = 0x14971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149718u;
    // 0x14971c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150048u, 0x149718u, 0x149720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149720u;
label_149720:
    // 0x149720: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14972c: 0x3e00008  jr          $ra
    ctx->pc = 0x14972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14972Cu;
        // 0x149730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149734u;
    // 0x149734: 0x0  nop
    ctx->pc = 0x149734u;
    // NOP
    ctx->pc = 0x149738u;
}
