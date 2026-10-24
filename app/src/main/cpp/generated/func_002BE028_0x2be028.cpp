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

// Function: func_002BE028
// Address: 0x2be028 - 0x2be0f0
void func_002BE028_0x2be028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE028_0x2be028");
#endif

    switch (ctx->pc) {
        case 0x2be040u: goto label_2be040;
        case 0x2be048u: goto label_2be048;
        case 0x2be058u: goto label_2be058;
        case 0x2be060u: goto label_2be060;
        case 0x2be070u: goto label_2be070;
        case 0x2be078u: goto label_2be078;
        case 0x2be090u: goto label_2be090;
        case 0x2be098u: goto label_2be098;
        case 0x2be0b0u: goto label_2be0b0;
        case 0x2be0b8u: goto label_2be0b8;
        case 0x2be0c0u: goto label_2be0c0;
        case 0x2be0c8u: goto label_2be0c8;
        case 0x2be0dcu: goto label_2be0dc;
        case 0x2be0e4u: goto label_2be0e4;
        default: break;
    }

    ctx->pc = 0x2be028u;

    // 0x2be028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be02c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2be02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2be030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2be034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be038: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x2BE038u;
    SET_GPR_U32(ctx, 31, 0x2BE040u);
    ctx->pc = 0x2BE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE038u;
    // 0x2be03c: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x2BE038u, 0x2BE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE040u;
label_2be040:
    // 0x2be040: 0xc0e6402  jal         func_399008
    ctx->pc = 0x2BE040u;
    SET_GPR_U32(ctx, 31, 0x2BE048u);
    ctx->pc = 0x2BE044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE040u;
    // 0x2be044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399008u, 0x2BE040u, 0x2BE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE048u;
label_2be048:
    // 0x2be048: 0x0  nop
    ctx->pc = 0x2be048u;
    // NOP
    // 0x2be04c: 0x0  nop
    ctx->pc = 0x2be04cu;
    // NOP
    // 0x2be050: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE050u;
    {
        const bool branch_taken_0x2be050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be050) {
            ctx->pc = 0x2BE040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be040;
        }
    }
    ctx->pc = 0x2BE058u;
label_2be058:
    // 0x2be058: 0xc0ed8a4  jal         func_3B6290
    ctx->pc = 0x2BE058u;
    SET_GPR_U32(ctx, 31, 0x2BE060u);
    ctx->pc = 0x2BE05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE058u;
    // 0x2be05c: 0x2604c008  addiu       $a0, $s0, -0x3FF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6290u, 0x2BE058u, 0x2BE060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE060u;
label_2be060:
    // 0x2be060: 0x0  nop
    ctx->pc = 0x2be060u;
    // NOP
    // 0x2be064: 0x0  nop
    ctx->pc = 0x2be064u;
    // NOP
    // 0x2be068: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE068u;
    {
        const bool branch_taken_0x2be068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be068) {
            ctx->pc = 0x2BE058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be058;
        }
    }
    ctx->pc = 0x2BE070u;
label_2be070:
    // 0x2be070: 0xc0ed890  jal         func_3B6240
    ctx->pc = 0x2BE070u;
    SET_GPR_U32(ctx, 31, 0x2BE078u);
    ctx->pc = 0x3B6240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6240u, 0x2BE070u, 0x2BE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE078u;
label_2be078:
    // 0x2be078: 0x0  nop
    ctx->pc = 0x2be078u;
    // NOP
    // 0x2be07c: 0x0  nop
    ctx->pc = 0x2be07cu;
    // NOP
    // 0x2be080: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE080u;
    {
        const bool branch_taken_0x2be080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be080) {
            ctx->pc = 0x2BE070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be070;
        }
    }
    ctx->pc = 0x2BE088u;
    // 0x2be088: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x2BE088u;
    SET_GPR_U32(ctx, 31, 0x2BE090u);
    ctx->pc = 0x2BE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE088u;
    // 0x2be08c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x2BE088u, 0x2BE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE090u;
label_2be090:
    // 0x2be090: 0xc0e6402  jal         func_399008
    ctx->pc = 0x2BE090u;
    SET_GPR_U32(ctx, 31, 0x2BE098u);
    ctx->pc = 0x2BE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE090u;
    // 0x2be094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399008u, 0x2BE090u, 0x2BE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE098u;
label_2be098:
    // 0x2be098: 0x0  nop
    ctx->pc = 0x2be098u;
    // NOP
    // 0x2be09c: 0x0  nop
    ctx->pc = 0x2be09cu;
    // NOP
    // 0x2be0a0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE0A0u;
    {
        const bool branch_taken_0x2be0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be0a0) {
            ctx->pc = 0x2BE090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be090;
        }
    }
    ctx->pc = 0x2BE0A8u;
    // 0x2be0a8: 0xc0ed07a  jal         func_3B41E8
    ctx->pc = 0x2BE0A8u;
    SET_GPR_U32(ctx, 31, 0x2BE0B0u);
    ctx->pc = 0x3B41E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B41E8u, 0x2BE0A8u, 0x2BE0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0B0u;
label_2be0b0:
    // 0x2be0b0: 0xc0e66f6  jal         func_399BD8
    ctx->pc = 0x2BE0B0u;
    SET_GPR_U32(ctx, 31, 0x2BE0B8u);
    ctx->pc = 0x2BE0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0B0u;
    // 0x2be0b4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BD8u, 0x2BE0B0u, 0x2BE0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0B8u;
label_2be0b8:
    // 0x2be0b8: 0xc0ed704  jal         func_3B5C10
    ctx->pc = 0x2BE0B8u;
    SET_GPR_U32(ctx, 31, 0x2BE0C0u);
    ctx->pc = 0x3B5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5C10u, 0x2BE0B8u, 0x2BE0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0C0u;
label_2be0c0:
    // 0x2be0c0: 0xc0ed638  jal         func_3B58E0
    ctx->pc = 0x2BE0C0u;
    SET_GPR_U32(ctx, 31, 0x2BE0C8u);
    ctx->pc = 0x3B58E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B58E0u, 0x2BE0C0u, 0x2BE0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0C8u;
label_2be0c8:
    // 0x2be0c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE0C8u;
    {
        const bool branch_taken_0x2be0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0C8u;
        // 0x2be0cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0c8) {
            ctx->pc = 0x2BE0E4u;
            goto label_2be0e4;
        }
    }
    ctx->pc = 0x2BE0D0u;
    // 0x2be0d0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2be0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2be0d4: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x2BE0D4u;
    SET_GPR_U32(ctx, 31, 0x2BE0DCu);
    ctx->pc = 0x2BE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0D4u;
    // 0x2be0d8: 0x2484c028  addiu       $a0, $a0, -0x3FD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x2BE0D4u, 0x2BE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0DCu;
label_2be0dc:
    // 0x2be0dc: 0xc0c76dc  jal         func_31DB70
    ctx->pc = 0x2BE0DCu;
    SET_GPR_U32(ctx, 31, 0x2BE0E4u);
    ctx->pc = 0x2BE0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE0DCu;
    // 0x2be0e0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB70u, 0x2BE0DCu, 0x2BE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE0E4u;
label_2be0e4:
    // 0x2be0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0E8u;
        // 0x2be0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE0F0u;
}
