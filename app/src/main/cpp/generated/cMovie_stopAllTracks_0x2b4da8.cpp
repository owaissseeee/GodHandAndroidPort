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

// Function: cMovie_stopAllTracks
// Address: 0x2b4da8 - 0x2b4e48
void cMovie_stopAllTracks_0x2b4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovie_stopAllTracks_0x2b4da8");
#endif

    switch (ctx->pc) {
        case 0x2b4dd8u: goto label_2b4dd8;
        case 0x2b4e08u: goto label_2b4e08;
        default: break;
    }

    ctx->pc = 0x2b4da8u;

    // 0x2b4da8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b4da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b4dac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b4dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b4db0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b4db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b4db4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b4db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4db8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b4dbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b4dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4dc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b4dc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4dc8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b4dcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4dd4: 0x3c140074  lui         $s4, 0x74
    ctx->pc = 0x2b4dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
label_2b4dd8:
    // 0x2b4dd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b4ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4de0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2b4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b4de4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4de8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4DE8u;
    {
        const bool branch_taken_0x2b4de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DE8u;
        // 0x2b4dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4de8) {
            ctx->pc = 0x2B4DF4u;
            goto label_2b4df4;
        }
    }
    ctx->pc = 0x2B4DF0u;
    // 0x2b4df0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4df4:
    // 0x2b4df4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b4df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4df8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4DF8u;
    {
        const bool branch_taken_0x2b4df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4df8) {
            ctx->pc = 0x2B4DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4DF8u;
            // 0x2b4dfc: 0x265200ac  addiu       $s2, $s2, 0xAC (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4E0Cu;
            goto label_2b4e0c;
        }
    }
    ctx->pc = 0x2B4E00u;
    // 0x2b4e00: 0xc0b50b8  jal         func_2D42E0
    ctx->pc = 0x2B4E00u;
    SET_GPR_U32(ctx, 31, 0x2B4E08u);
    ctx->pc = 0x2B4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E00u;
    // 0x2b4e04: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42E0u, 0x2B4E00u, 0x2B4E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E08u;
label_2b4e08:
    // 0x2b4e08: 0x265200ac  addiu       $s2, $s2, 0xAC
    ctx->pc = 0x2b4e08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
label_2b4e0c:
    // 0x2b4e0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b4e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2b4e10: 0x601fff1  bgez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2B4E10u;
    {
        const bool branch_taken_0x2b4e10 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2B4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E10u;
        // 0x2b4e14: 0x263100ac  addiu       $s1, $s1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e10) {
            ctx->pc = 0x2B4DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4dd8;
        }
    }
    ctx->pc = 0x2B4E18u;
    // 0x2b4e18: 0x8e827a84  lw          $v0, 0x7A84($s4)
    ctx->pc = 0x2b4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31364)));
    // 0x2b4e1c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2b4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2b4e20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b4e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b4e28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b4e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4e2c: 0xae827a84  sw          $v0, 0x7A84($s4)
    ctx->pc = 0x2b4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 31364), GPR_U32(ctx, 2));
    // 0x2b4e30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b4e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4e34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b4e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4e38: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b4e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4e40: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E40u;
        // 0x2b4e44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4E48u;
}
