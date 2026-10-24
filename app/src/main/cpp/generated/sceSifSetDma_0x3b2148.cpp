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

// Function: sceSifSetDma
// Address: 0x3b2148 - 0x3b21d0
void sceSifSetDma_0x3b2148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSetDma_0x3b2148");
#endif

    switch (ctx->pc) {
        case 0x3b2164u: goto label_3b2164;
        case 0x3b2188u: goto label_3b2188;
        case 0x3b2198u: goto label_3b2198;
        case 0x3b21b0u: goto label_3b21b0;
        case 0x3b21bcu: goto label_3b21bc;
        default: break;
    }

    ctx->pc = 0x3b2148u;

    // 0x3b2148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b2148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b214c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b214cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b2150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2154: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b2154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b2158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b215c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B215Cu;
    SET_GPR_U32(ctx, 31, 0x3B2164u);
    ctx->pc = 0x3B2160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B215Cu;
    // 0x3b2160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B215Cu, 0x3B2164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2164u;
label_3b2164:
    // 0x3b2164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b2164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2168: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b2168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b216c: 0x8c43ae50  lw          $v1, -0x51B0($v0)
    ctx->pc = 0x3b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAE50u));
    // 0x3b2170: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B2170u;
    {
        const bool branch_taken_0x3b2170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2170) {
            ctx->pc = 0x3B21A0u;
            goto label_3b21a0;
        }
    }
    ctx->pc = 0x3B2178u;
    // 0x3b2178: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2178u;
    {
        const bool branch_taken_0x3b2178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2178u;
        // 0x3b217c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2178) {
            ctx->pc = 0x3B218Cu;
            goto label_3b218c;
        }
    }
    ctx->pc = 0x3B2180u;
    // 0x3b2180: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B2180u;
    SET_GPR_U32(ctx, 31, 0x3B2188u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B2180u, 0x3B2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2188u;
label_3b2188:
    // 0x3b2188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b2188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b218c:
    // 0x3b218c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b218cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2190: 0xc0ec820  jal         func_3B2080
    ctx->pc = 0x3B2190u;
    SET_GPR_U32(ctx, 31, 0x3B2198u);
    ctx->pc = 0x3B2194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2190u;
    // 0x3b2194: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2080u, 0x3B2190u, 0x3B2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2198u;
label_3b2198:
    // 0x3b2198: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B2198u;
    {
        const bool branch_taken_0x3b2198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2198u;
        // 0x3b219c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2198) {
            ctx->pc = 0x3B21C0u;
            goto label_3b21c0;
        }
    }
    ctx->pc = 0x3B21A0u;
label_3b21a0:
    // 0x3b21a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B21A0u;
    {
        const bool branch_taken_0x3b21a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21A0u;
        // 0x3b21a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b21a0) {
            ctx->pc = 0x3B21B4u;
            goto label_3b21b4;
        }
    }
    ctx->pc = 0x3B21A8u;
    // 0x3b21a8: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B21A8u;
    SET_GPR_U32(ctx, 31, 0x3B21B0u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B21A8u, 0x3B21B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21B0u;
label_3b21b0:
    // 0x3b21b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b21b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b21b4:
    // 0x3b21b4: 0xc0ec018  jal         func_3B0060
    ctx->pc = 0x3B21B4u;
    SET_GPR_U32(ctx, 31, 0x3B21BCu);
    ctx->pc = 0x3B21B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B21B4u;
    // 0x3b21b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0060u, 0x3B21B4u, 0x3B21BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B21BCu;
label_3b21bc:
    // 0x3b21bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b21bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b21c0:
    // 0x3b21c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b21c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b21c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b21c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b21c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B21C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B21C8u;
        // 0x3b21cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B21C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B21D0u;
}
