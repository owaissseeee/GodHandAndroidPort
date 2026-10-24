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

// Function: BufOwner_deletingDtor
// Address: 0x2e3500 - 0x2e35c0
void BufOwner_deletingDtor_0x2e3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BufOwner_deletingDtor_0x2e3500");
#endif

    switch (ctx->pc) {
        case 0x2e3538u: goto label_2e3538;
        case 0x2e354cu: goto label_2e354c;
        case 0x2e3560u: goto label_2e3560;
        case 0x2e3574u: goto label_2e3574;
        case 0x2e3588u: goto label_2e3588;
        case 0x2e359cu: goto label_2e359c;
        case 0x2e35a8u: goto label_2e35a8;
        default: break;
    }

    ctx->pc = 0x2e3500u;

    // 0x2e3500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3504: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2e3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2e3508: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e350c: 0x2442e300  addiu       $v0, $v0, -0x1D00
    ctx->pc = 0x2e350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
    // 0x2e3510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e351c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2e351cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2e3520: 0x8e030330  lw          $v1, 0x330($s0)
    ctx->pc = 0x2e3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x2e3524: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3524u;
    {
        const bool branch_taken_0x2e3524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3524u;
        // 0x2e3528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3524) {
            ctx->pc = 0x2E3538u;
            goto label_2e3538;
        }
    }
    ctx->pc = 0x2E352Cu;
    // 0x2e352c: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x2e352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x2e3530: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2E3530u;
    SET_GPR_U32(ctx, 31, 0x2E3538u);
    ctx->pc = 0x2E3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3530u;
    // 0x2e3534: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2E3530u, 0x2E3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3538u;
label_2e3538:
    // 0x2e3538: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x2e3538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2e353c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E353Cu;
    {
        const bool branch_taken_0x2e353c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e353c) {
            ctx->pc = 0x2E3540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E353Cu;
            // 0x2e3540: 0x8e050338  lw          $a1, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3550u;
            goto label_2e3550;
        }
    }
    ctx->pc = 0x2E3544u;
    // 0x2e3544: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2E3544u;
    SET_GPR_U32(ctx, 31, 0x2E354Cu);
    ctx->pc = 0x2E3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3544u;
    // 0x2e3548: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2E3544u, 0x2E354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E354Cu;
label_2e354c:
    // 0x2e354c: 0x8e050338  lw          $a1, 0x338($s0)
    ctx->pc = 0x2e354cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_2e3550:
    // 0x2e3550: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3550u;
    {
        const bool branch_taken_0x2e3550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3550) {
            ctx->pc = 0x2E3554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3550u;
            // 0x2e3554: 0x8e05033c  lw          $a1, 0x33C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3564u;
            goto label_2e3564;
        }
    }
    ctx->pc = 0x2E3558u;
    // 0x2e3558: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2E3558u;
    SET_GPR_U32(ctx, 31, 0x2E3560u);
    ctx->pc = 0x2E355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3558u;
    // 0x2e355c: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2E3558u, 0x2E3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3560u;
label_2e3560:
    // 0x2e3560: 0x8e05033c  lw          $a1, 0x33C($s0)
    ctx->pc = 0x2e3560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 828)));
label_2e3564:
    // 0x2e3564: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3564u;
    {
        const bool branch_taken_0x2e3564 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3564) {
            ctx->pc = 0x2E3568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3564u;
            // 0x2e3568: 0x8e050324  lw          $a1, 0x324($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3578u;
            goto label_2e3578;
        }
    }
    ctx->pc = 0x2E356Cu;
    // 0x2e356c: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2E356Cu;
    SET_GPR_U32(ctx, 31, 0x2E3574u);
    ctx->pc = 0x2E3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E356Cu;
    // 0x2e3570: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2E356Cu, 0x2E3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3574u;
label_2e3574:
    // 0x2e3574: 0x8e050324  lw          $a1, 0x324($s0)
    ctx->pc = 0x2e3574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_2e3578:
    // 0x2e3578: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3578u;
    {
        const bool branch_taken_0x2e3578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3578) {
            ctx->pc = 0x2E357Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3578u;
            // 0x2e357c: 0x8e05030c  lw          $a1, 0x30C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E358Cu;
            goto label_2e358c;
        }
    }
    ctx->pc = 0x2E3580u;
    // 0x2e3580: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2E3580u;
    SET_GPR_U32(ctx, 31, 0x2E3588u);
    ctx->pc = 0x2E3584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3580u;
    // 0x2e3584: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2E3580u, 0x2E3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3588u;
label_2e3588:
    // 0x2e3588: 0x8e05030c  lw          $a1, 0x30C($s0)
    ctx->pc = 0x2e3588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 780)));
label_2e358c:
    // 0x2e358c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E358Cu;
    {
        const bool branch_taken_0x2e358c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E358Cu;
        // 0x2e3590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e358c) {
            ctx->pc = 0x2E35A0u;
            goto label_2e35a0;
        }
    }
    ctx->pc = 0x2E3594u;
    // 0x2e3594: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2E3594u;
    SET_GPR_U32(ctx, 31, 0x2E359Cu);
    ctx->pc = 0x2E3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3594u;
    // 0x2e3598: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2E3594u, 0x2E359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E359Cu;
label_2e359c:
    // 0x2e359c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e359cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e35a0:
    // 0x2e35a0: 0xc0baf14  jal         func_2EBC50
    ctx->pc = 0x2E35A0u;
    SET_GPR_U32(ctx, 31, 0x2E35A8u);
    ctx->pc = 0x2E35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35A0u;
    // 0x2e35a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC50u, 0x2E35A0u, 0x2E35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35A8u;
label_2e35a8:
    // 0x2e35a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e35a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e35ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e35acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e35b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e35b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e35b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E35B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E35B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35B4u;
        // 0x2e35b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E35B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E35BCu;
    // 0x2e35bc: 0x0  nop
    ctx->pc = 0x2e35bcu;
    // NOP
    ctx->pc = 0x2e35c0u;
}
