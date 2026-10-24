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

// Function: func_00331F50
// Address: 0x331f50 - 0x331fa8
void func_00331F50_0x331f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331F50_0x331f50");
#endif

    switch (ctx->pc) {
        case 0x331f64u: goto label_331f64;
        case 0x331f6cu: goto label_331f6c;
        case 0x331f88u: goto label_331f88;
        case 0x331f90u: goto label_331f90;
        default: break;
    }

    ctx->pc = 0x331f50u;

    // 0x331f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331f58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x331f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x331f5c: 0xc0cc750  jal         func_331D40
    ctx->pc = 0x331F5Cu;
    SET_GPR_U32(ctx, 31, 0x331F64u);
    ctx->pc = 0x331F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F5Cu;
    // 0x331f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D40u, 0x331F5Cu, 0x331F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F64u;
label_331f64:
    // 0x331f64: 0xc0ed12c  jal         func_3B44B0
    ctx->pc = 0x331F64u;
    SET_GPR_U32(ctx, 31, 0x331F6Cu);
    ctx->pc = 0x331F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F64u;
    // 0x331f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B44B0u, 0x331F64u, 0x331F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F6Cu;
label_331f6c:
    // 0x331f6c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f74: 0x24844150  addiu       $a0, $a0, 0x4150
    ctx->pc = 0x331f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16720));
    // 0x331f78: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331F78u;
    {
        const bool branch_taken_0x331f78 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x331F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F78u;
        // 0x331f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f78) {
            ctx->pc = 0x331F88u;
            goto label_331f88;
        }
    }
    ctx->pc = 0x331F80u;
    // 0x331f80: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331F80u;
    SET_GPR_U32(ctx, 31, 0x331F88u);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331F80u, 0x331F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F88u;
label_331f88:
    // 0x331f88: 0xc0cc75e  jal         func_331D78
    ctx->pc = 0x331F88u;
    SET_GPR_U32(ctx, 31, 0x331F90u);
    ctx->pc = 0x331D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D78u, 0x331F88u, 0x331F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F90u;
label_331f90:
    // 0x331f90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x331f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x331f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x331F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F9Cu;
        // 0x331fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331FA4u;
    // 0x331fa4: 0x0  nop
    ctx->pc = 0x331fa4u;
    // NOP
    ctx->pc = 0x331fa8u;
}
