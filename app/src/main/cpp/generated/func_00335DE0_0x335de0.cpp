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

// Function: func_00335DE0
// Address: 0x335de0 - 0x335e60
void func_00335DE0_0x335de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335DE0_0x335de0");
#endif

    switch (ctx->pc) {
        case 0x335e00u: goto label_335e00;
        case 0x335e28u: goto label_335e28;
        case 0x335e30u: goto label_335e30;
        case 0x335e3cu: goto label_335e3c;
        case 0x335e50u: goto label_335e50;
        default: break;
    }

    ctx->pc = 0x335de0u;

    // 0x335de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335de4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x335de8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x335de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x335dec: 0x2442a5d8  addiu       $v0, $v0, -0x5A28
    ctx->pc = 0x335decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944216));
    // 0x335df0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x335df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x335df4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x335df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335df8: 0xc0cd73a  jal         func_335CE8
    ctx->pc = 0x335DF8u;
    SET_GPR_U32(ctx, 31, 0x335E00u);
    ctx->pc = 0x335DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335DF8u;
    // 0x335dfc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE8u, 0x335DF8u, 0x335E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E00u;
label_335e00:
    // 0x335e00: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x335e04: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x335e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x335e08: 0x2450a5f0  addiu       $s0, $v0, -0x5A10
    ctx->pc = 0x335e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
    // 0x335e0c: 0x2484a5f8  addiu       $a0, $a0, -0x5A08
    ctx->pc = 0x335e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944248));
    // 0x335e10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x335e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3DA5F0u));
    // 0x335e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335E18u;
    {
        const bool branch_taken_0x335e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E18u;
        // 0x335e1c: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e18) {
            ctx->pc = 0x335E40u;
            goto label_335e40;
        }
    }
    ctx->pc = 0x335E20u;
    // 0x335e20: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x335E20u;
    SET_GPR_U32(ctx, 31, 0x335E28u);
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x335E20u, 0x335E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E28u;
label_335e28:
    // 0x335e28: 0xc0cd774  jal         func_335DD0
    ctx->pc = 0x335E28u;
    SET_GPR_U32(ctx, 31, 0x335E30u);
    ctx->pc = 0x335DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335DD0u, 0x335E28u, 0x335E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E30u;
label_335e30:
    // 0x335e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e34: 0xc0cd746  jal         func_335D18
    ctx->pc = 0x335E34u;
    SET_GPR_U32(ctx, 31, 0x335E3Cu);
    ctx->pc = 0x335E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E34u;
    // 0x335e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D18u, 0x335E34u, 0x335E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E3Cu;
label_335e3c:
    // 0x335e3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x335e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_335e40:
    // 0x335e40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x335e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x335e44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x335e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e48: 0xc0cd740  jal         func_335D00
    ctx->pc = 0x335E48u;
    SET_GPR_U32(ctx, 31, 0x335E50u);
    ctx->pc = 0x335E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E48u;
    // 0x335e4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D00u, 0x335E48u, 0x335E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E50u;
label_335e50:
    // 0x335e50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x335e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x335e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335e58: 0x3e00008  jr          $ra
    ctx->pc = 0x335E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E58u;
        // 0x335e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335E60u;
}
