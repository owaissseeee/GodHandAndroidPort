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

// Function: ForwardInit1A9688_315DD0
// Address: 0x315dd0 - 0x315e40
void ForwardInit1A9688_315DD0_0x315dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A9688_315DD0_0x315dd0");
#endif

    switch (ctx->pc) {
        case 0x315e04u: goto label_315e04;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e24u: goto label_315e24;
        default: break;
    }

    ctx->pc = 0x315dd0u;

    // 0x315dd0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315dd4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315dd8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315ddc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315de0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315de4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315de8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315DE8u;
    {
        const bool branch_taken_0x315de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DE8u;
        // 0x315dec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315de8) {
            ctx->pc = 0x315E2Cu;
            goto label_315e2c;
        }
    }
    ctx->pc = 0x315DF0u;
    // 0x315df0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315df4: 0x24040600  addiu       $a0, $zero, 0x600
    ctx->pc = 0x315df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x315df8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315dfc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315DFCu;
    SET_GPR_U32(ctx, 31, 0x315E04u);
    ctx->pc = 0x315E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315DFCu;
    // 0x315e00: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315DFCu, 0x315E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E04u;
label_315e04:
    // 0x315e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e08: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315E08u;
    {
        const bool branch_taken_0x315e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E08u;
        // 0x315e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e08) {
            ctx->pc = 0x315E2Cu;
            goto label_315e2c;
        }
    }
    ctx->pc = 0x315E10u;
    // 0x315e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315E14u;
    SET_GPR_U32(ctx, 31, 0x315E1Cu);
    ctx->pc = 0x315E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E14u;
    // 0x315e18: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315E14u, 0x315E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E1Cu;
label_315e1c:
    // 0x315e1c: 0xc06a5a2  jal         func_1A9688
    ctx->pc = 0x315E1Cu;
    SET_GPR_U32(ctx, 31, 0x315E24u);
    ctx->pc = 0x315E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315E1Cu;
    // 0x315e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9688u, 0x315E1Cu, 0x315E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315E24u;
label_315e24:
    // 0x315e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315E24u;
    {
        const bool branch_taken_0x315e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E24u;
        // 0x315e28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e24) {
            ctx->pc = 0x315E34u;
            goto label_315e34;
        }
    }
    ctx->pc = 0x315E2Cu;
label_315e2c:
    // 0x315e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315e34:
    // 0x315e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315e38: 0x3e00008  jr          $ra
    ctx->pc = 0x315E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E38u;
        // 0x315e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315E40u;
}
