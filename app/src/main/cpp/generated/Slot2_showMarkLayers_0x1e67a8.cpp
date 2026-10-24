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

// Function: Slot2_showMarkLayers
// Address: 0x1e67a8 - 0x1e6820
void Slot2_showMarkLayers_0x1e67a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_showMarkLayers_0x1e67a8");
#endif

    switch (ctx->pc) {
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67d8u: goto label_1e67d8;
        case 0x1e67e4u: goto label_1e67e4;
        case 0x1e67f0u: goto label_1e67f0;
        case 0x1e67fcu: goto label_1e67fc;
        case 0x1e680cu: goto label_1e680c;
        default: break;
    }

    ctx->pc = 0x1e67a8u;

    // 0x1e67a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e67a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e67ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e67acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e67b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e67b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e67b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e67b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e67b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e67b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e67bc: 0xc079a08  jal         func_1E6820
    ctx->pc = 0x1E67BCu;
    SET_GPR_U32(ctx, 31, 0x1E67C4u);
    ctx->pc = 0x1E67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67BCu;
    // 0x1e67c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6820u, 0x1E67BCu, 0x1E67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67C4u;
label_1e67c4:
    // 0x1e67c4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E67C4u;
    {
        const bool branch_taken_0x1e67c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e67c4) {
            ctx->pc = 0x1E67C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E67C4u;
            // 0x1e67c8: 0x8e2403a4  lw          $a0, 0x3A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6804u;
            goto label_1e6804;
        }
    }
    ctx->pc = 0x1E67CCu;
    // 0x1e67cc: 0x8e2403a0  lw          $a0, 0x3A0($s1)
    ctx->pc = 0x1e67ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 928)));
    // 0x1e67d0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E67D0u;
    SET_GPR_U32(ctx, 31, 0x1E67D8u);
    ctx->pc = 0x1E67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67D0u;
    // 0x1e67d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E67D0u, 0x1E67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67D8u;
label_1e67d8:
    // 0x1e67d8: 0x8e2403a8  lw          $a0, 0x3A8($s1)
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x1e67dc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E67DCu;
    SET_GPR_U32(ctx, 31, 0x1E67E4u);
    ctx->pc = 0x1E67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67DCu;
    // 0x1e67e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E67DCu, 0x1E67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67E4u;
label_1e67e4:
    // 0x1e67e4: 0x8e2403ac  lw          $a0, 0x3AC($s1)
    ctx->pc = 0x1e67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1e67e8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E67E8u;
    SET_GPR_U32(ctx, 31, 0x1E67F0u);
    ctx->pc = 0x1E67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67E8u;
    // 0x1e67ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E67E8u, 0x1E67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67F0u;
label_1e67f0:
    // 0x1e67f0: 0x8e2403b0  lw          $a0, 0x3B0($s1)
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x1e67f4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E67F4u;
    SET_GPR_U32(ctx, 31, 0x1E67FCu);
    ctx->pc = 0x1E67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67F4u;
    // 0x1e67f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E67F4u, 0x1E67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67FCu;
label_1e67fc:
    // 0x1e67fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E67FCu;
    {
        const bool branch_taken_0x1e67fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67FCu;
        // 0x1e6800: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67fc) {
            ctx->pc = 0x1E6810u;
            goto label_1e6810;
        }
    }
    ctx->pc = 0x1E6804u;
label_1e6804:
    // 0x1e6804: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6804u;
    SET_GPR_U32(ctx, 31, 0x1E680Cu);
    ctx->pc = 0x1E6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6804u;
    // 0x1e6808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6804u, 0x1E680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E680Cu;
label_1e680c:
    // 0x1e680c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e680cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6810:
    // 0x1e6810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6818: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6818u;
        // 0x1e681c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6820u;
}
