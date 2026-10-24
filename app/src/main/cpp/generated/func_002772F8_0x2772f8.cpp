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

// Function: func_002772F8
// Address: 0x2772f8 - 0x277348
void func_002772F8_0x2772f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002772F8_0x2772f8");
#endif

    switch (ctx->pc) {
        case 0x277320u: goto label_277320;
        case 0x277328u: goto label_277328;
        case 0x277334u: goto label_277334;
        default: break;
    }

    ctx->pc = 0x2772f8u;

    // 0x2772f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2772f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2772fc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2772fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x277300: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277304: 0x24427ba0  addiu       $v0, $v0, 0x7BA0
    ctx->pc = 0x277304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31648));
    // 0x277308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27730c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27730cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277318: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x277318u;
    SET_GPR_U32(ctx, 31, 0x277320u);
    ctx->pc = 0x27731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277318u;
    // 0x27731c: 0xae020214  sw          $v0, 0x214($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x277318u, 0x277320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277320u;
label_277320:
    // 0x277320: 0xc09dd50  jal         func_277540
    ctx->pc = 0x277320u;
    SET_GPR_U32(ctx, 31, 0x277328u);
    ctx->pc = 0x277324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277320u;
    // 0x277324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277540u, 0x277320u, 0x277328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277328u;
label_277328:
    // 0x277328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27732c: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x27732Cu;
    SET_GPR_U32(ctx, 31, 0x277334u);
    ctx->pc = 0x277330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27732Cu;
    // 0x277330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x27732Cu, 0x277334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277334u;
label_277334:
    // 0x277334: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27733c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277340: 0x3e00008  jr          $ra
    ctx->pc = 0x277340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277340u;
        // 0x277344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277348u;
}
