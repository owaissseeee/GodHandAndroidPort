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

// Function: cSnd_AllocBgmNode
// Address: 0x2d2228 - 0x2d22b0
void cSnd_AllocBgmNode_0x2d2228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_AllocBgmNode_0x2d2228");
#endif

    switch (ctx->pc) {
        case 0x2d2248u: goto label_2d2248;
        case 0x2d2250u: goto label_2d2250;
        case 0x2d2258u: goto label_2d2258;
        case 0x2d226cu: goto label_2d226c;
        case 0x2d2274u: goto label_2d2274;
        case 0x2d2280u: goto label_2d2280;
        default: break;
    }

    ctx->pc = 0x2d2228u;

    // 0x2d2228: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d222c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d2230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2234: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d2234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d223c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d223cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2244: 0x0  nop
    ctx->pc = 0x2d2244u;
    // NOP
label_2d2248:
    // 0x2d2248: 0xc0b4b6c  jal         func_2D2DB0
    ctx->pc = 0x2D2248u;
    SET_GPR_U32(ctx, 31, 0x2D2250u);
    ctx->pc = 0x2D224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2248u;
    // 0x2d224c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2DB0u, 0x2D2248u, 0x2D2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2250u;
label_2d2250:
    // 0x2d2250: 0xc0b315a  jal         func_2CC568
    ctx->pc = 0x2D2250u;
    SET_GPR_U32(ctx, 31, 0x2D2258u);
    ctx->pc = 0x2D2254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2250u;
    // 0x2d2254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC568u, 0x2D2250u, 0x2D2258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2258u;
label_2d2258:
    // 0x2d2258: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2258u;
    {
        const bool branch_taken_0x2d2258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2258) {
            ctx->pc = 0x2D225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2258u;
            // 0x2d225c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2288u;
            goto label_2d2288;
        }
    }
    ctx->pc = 0x2D2260u;
    // 0x2d2260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d2260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2264: 0xc0b4b6c  jal         func_2D2DB0
    ctx->pc = 0x2D2264u;
    SET_GPR_U32(ctx, 31, 0x2D226Cu);
    ctx->pc = 0x2D2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2264u;
    // 0x2d2268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2DB0u, 0x2D2264u, 0x2D226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D226Cu;
label_2d226c:
    // 0x2d226c: 0xc0b315e  jal         func_2CC578
    ctx->pc = 0x2D226Cu;
    SET_GPR_U32(ctx, 31, 0x2D2274u);
    ctx->pc = 0x2D2270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D226Cu;
    // 0x2d2270: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC578u, 0x2D226Cu, 0x2D2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2274u;
label_2d2274:
    // 0x2d2274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2278: 0xc0b4b6c  jal         func_2D2DB0
    ctx->pc = 0x2D2278u;
    SET_GPR_U32(ctx, 31, 0x2D2280u);
    ctx->pc = 0x2D227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2278u;
    // 0x2d227c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2DB0u, 0x2D2278u, 0x2D2280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2280u;
label_2d2280:
    // 0x2d2280: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2280u;
    {
        const bool branch_taken_0x2d2280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2280u;
        // 0x2d2284: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2280) {
            ctx->pc = 0x2D229Cu;
            goto label_2d229c;
        }
    }
    ctx->pc = 0x2D2288u;
label_2d2288:
    // 0x2d2288: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2d2288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d228c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D228Cu;
    {
        const bool branch_taken_0x2d228c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D228Cu;
        // 0x2d2290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d228c) {
            ctx->pc = 0x2D2248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2248;
        }
    }
    ctx->pc = 0x2D2294u;
    // 0x2d2294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2298: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d2298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d229c:
    // 0x2d229c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d229cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d22a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d22a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d22a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D22A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D22A4u;
        // 0x2d22a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D22A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D22ACu;
    // 0x2d22ac: 0x0  nop
    ctx->pc = 0x2d22acu;
    // NOP
    ctx->pc = 0x2d22b0u;
}
