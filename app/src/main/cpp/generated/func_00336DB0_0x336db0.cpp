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

// Function: func_00336DB0
// Address: 0x336db0 - 0x336e20
void func_00336DB0_0x336db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336DB0_0x336db0");
#endif

    switch (ctx->pc) {
        case 0x336ddcu: goto label_336ddc;
        case 0x336de4u: goto label_336de4;
        case 0x336decu: goto label_336dec;
        case 0x336df8u: goto label_336df8;
        default: break;
    }

    ctx->pc = 0x336db0u;

    // 0x336db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336db8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336dc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x336dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x336dc4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x336dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336dc8: 0x8e3000e8  lw          $s0, 0xE8($s1)
    ctx->pc = 0x336dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x336dcc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x336DCCu;
    {
        const bool branch_taken_0x336dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x336dcc) {
            ctx->pc = 0x336DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336DCCu;
            // 0x336dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336E10u;
            goto label_336e10;
        }
    }
    ctx->pc = 0x336DD4u;
    // 0x336dd4: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x336DD4u;
    SET_GPR_U32(ctx, 31, 0x336DDCu);
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x336DD4u, 0x336DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DDCu;
label_336ddc:
    // 0x336ddc: 0xc0c9718  jal         func_325C60
    ctx->pc = 0x336DDCu;
    SET_GPR_U32(ctx, 31, 0x336DE4u);
    ctx->pc = 0x325C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C60u, 0x336DDCu, 0x336DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DE4u;
label_336de4:
    // 0x336de4: 0xc0d01a0  jal         func_340680
    ctx->pc = 0x336DE4u;
    SET_GPR_U32(ctx, 31, 0x336DECu);
    ctx->pc = 0x336DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DE4u;
    // 0x336de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340680u, 0x336DE4u, 0x336DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DECu;
label_336dec:
    // 0x336dec: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x336decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x336df0: 0xc0d013c  jal         func_3404F0
    ctx->pc = 0x336DF0u;
    SET_GPR_U32(ctx, 31, 0x336DF8u);
    ctx->pc = 0x336DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DF0u;
    // 0x336df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3404F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3404F0u, 0x336DF0u, 0x336DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DF8u;
label_336df8:
    // 0x336df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336dfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336e04: 0x80c971e  j           func_325C78
    ctx->pc = 0x336E04u;
    ctx->pc = 0x336E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336E04u;
    // 0x336e08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325C78u, 0x336E04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336E0Cu;
    // 0x336e0c: 0x0  nop
    ctx->pc = 0x336e0cu;
    // NOP
label_336e10:
    // 0x336e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336e14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336e18: 0x3e00008  jr          $ra
    ctx->pc = 0x336E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E18u;
        // 0x336e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E20u;
}
