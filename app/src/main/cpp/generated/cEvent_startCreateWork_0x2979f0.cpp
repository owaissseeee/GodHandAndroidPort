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

// Function: cEvent_startCreateWork
// Address: 0x2979f0 - 0x297a68
void cEvent_startCreateWork_0x2979f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_startCreateWork_0x2979f0");
#endif

    switch (ctx->pc) {
        case 0x297a10u: goto label_297a10;
        case 0x297a24u: goto label_297a24;
        case 0x297a48u: goto label_297a48;
        case 0x297a50u: goto label_297a50;
        default: break;
    }

    ctx->pc = 0x2979f0u;

    // 0x2979f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2979f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2979f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2979f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2979f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2979f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2979fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x297a00: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297a00u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297A00u) & 0xFFFFu)) << 16));
    // 0x297a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297a08: 0xc000000  jal         func_000000
    ctx->pc = 0x297A08u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297A08u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297A10u);
        ctx->pc = 0x297A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A08u;
        // 0x297a0c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297A0Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A08u, 0x297A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297A10u;
label_297a10:
    // 0x297a10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297A10u;
    {
        const bool branch_taken_0x297a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A10u;
        // 0x297a14: 0x3c020000  lui         $v0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297A14u) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a10) {
            ctx->pc = 0x297A2Cu;
            goto label_297a2c;
        }
    }
    ctx->pc = 0x297A18u;
    // 0x297a18: 0x24500000  addiu       $s0, $v0, 0x0
    ctx->pc = 0x297a18u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297A18u) & 0xFFFFu))));
    // 0x297a1c: 0xc000000  jal         func_000000
    ctx->pc = 0x297A1Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297A1Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297A24u);
        ctx->pc = 0x297A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A1Cu;
        // 0x297a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A1Cu, 0x297A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297A24u;
label_297a24:
    // 0x297a24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297A24u;
    {
        const bool branch_taken_0x297a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297a24) {
            ctx->pc = 0x297A40u;
            goto label_297a40;
        }
    }
    ctx->pc = 0x297A2Cu;
label_297a2c:
    // 0x297a2c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x297a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x297a30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x297a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x297a34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297a38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297A38u;
    {
        const bool branch_taken_0x297a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A38u;
        // 0x297a3c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a38) {
            ctx->pc = 0x297A50u;
            goto label_297a50;
        }
    }
    ctx->pc = 0x297A40u;
label_297a40:
    // 0x297a40: 0xc000000  jal         func_000000
    ctx->pc = 0x297A40u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297A40u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297A48u);
        ctx->pc = 0x297A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A40u;
        // 0x297a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A40u, 0x297A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297A48u;
label_297a48:
    // 0x297a48: 0xc000000  jal         func_000000
    ctx->pc = 0x297A48u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297A48u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297A50u);
        ctx->pc = 0x297A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A48u;
        // 0x297a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A48u, 0x297A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297A50u;
label_297a50:
    // 0x297a50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x297a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297a54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297a54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x297A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A5Cu;
        // 0x297a60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297A64u;
    // 0x297a64: 0x0  nop
    ctx->pc = 0x297a64u;
    // NOP
    ctx->pc = 0x297a68u;
}
