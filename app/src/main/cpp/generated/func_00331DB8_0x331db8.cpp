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

// Function: func_00331DB8
// Address: 0x331db8 - 0x331e70
void func_00331DB8_0x331db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331DB8_0x331db8");
#endif

    switch (ctx->pc) {
        case 0x331ddcu: goto label_331ddc;
        case 0x331e04u: goto label_331e04;
        case 0x331e20u: goto label_331e20;
        case 0x331e30u: goto label_331e30;
        case 0x331e4cu: goto label_331e4c;
        case 0x331e54u: goto label_331e54;
        default: break;
    }

    ctx->pc = 0x331db8u;

    // 0x331db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331dc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331dc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x331dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331dcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331dd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x331dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x331dd4: 0xc0cc750  jal         func_331D40
    ctx->pc = 0x331DD4u;
    SET_GPR_U32(ctx, 31, 0x331DDCu);
    ctx->pc = 0x331DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331DD4u;
    // 0x331dd8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D40u, 0x331DD4u, 0x331DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331DDCu;
label_331ddc:
    // 0x331ddc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331de0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331de4: 0x8c478480  lw          $a3, -0x7B80($v0)
    ctx->pc = 0x331de4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3D8480u));
    // 0x331de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331dec: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x331decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x331df0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x331df0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x331df4: 0x14e3000c  bne         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x331DF4u;
    {
        const bool branch_taken_0x331df4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x331DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DF4u;
        // 0x331df8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331df4) {
            ctx->pc = 0x331E28u;
            goto label_331e28;
        }
    }
    ctx->pc = 0x331DFCu;
    // 0x331dfc: 0xc0ed5a8  jal         func_3B56A0
    ctx->pc = 0x331DFCu;
    SET_GPR_U32(ctx, 31, 0x331E04u);
    ctx->pc = 0x331E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331DFCu;
    // 0x331e00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B56A0u, 0x331DFCu, 0x331E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E04u;
label_331e04:
    // 0x331e04: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331e08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e0c: 0x248440d0  addiu       $a0, $a0, 0x40D0
    ctx->pc = 0x331e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    // 0x331e10: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x331E10u;
    {
        const bool branch_taken_0x331e10 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x331E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E10u;
        // 0x331e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e10) {
            ctx->pc = 0x331E4Cu;
            goto label_331e4c;
        }
    }
    ctx->pc = 0x331E18u;
    // 0x331e18: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331E18u;
    SET_GPR_U32(ctx, 31, 0x331E20u);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331E18u, 0x331E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E20u;
label_331e20:
    // 0x331e20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x331E20u;
    {
        const bool branch_taken_0x331e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331e20) {
            ctx->pc = 0x331E4Cu;
            goto label_331e4c;
        }
    }
    ctx->pc = 0x331E28u;
label_331e28:
    // 0x331e28: 0xc0ed18a  jal         func_3B4628
    ctx->pc = 0x331E28u;
    SET_GPR_U32(ctx, 31, 0x331E30u);
    ctx->pc = 0x3B4628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4628u, 0x331E28u, 0x331E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E30u;
label_331e30:
    // 0x331e30: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e38: 0x248440f0  addiu       $a0, $a0, 0x40F0
    ctx->pc = 0x331e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16624));
    // 0x331e3c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331E3Cu;
    {
        const bool branch_taken_0x331e3c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x331E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E3Cu;
        // 0x331e40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e3c) {
            ctx->pc = 0x331E4Cu;
            goto label_331e4c;
        }
    }
    ctx->pc = 0x331E44u;
    // 0x331e44: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331E44u;
    SET_GPR_U32(ctx, 31, 0x331E4Cu);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331E44u, 0x331E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E4Cu;
label_331e4c:
    // 0x331e4c: 0xc0cc75e  jal         func_331D78
    ctx->pc = 0x331E4Cu;
    SET_GPR_U32(ctx, 31, 0x331E54u);
    ctx->pc = 0x331D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D78u, 0x331E4Cu, 0x331E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331E54u;
label_331e54:
    // 0x331e54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x331e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331e60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331e64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x331e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x331e68: 0x3e00008  jr          $ra
    ctx->pc = 0x331E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E68u;
        // 0x331e6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331E70u;
}
