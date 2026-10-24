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

// Function: cEvent_movePlayQuit
// Address: 0x296ef0 - 0x297038
void cEvent_movePlayQuit_0x296ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_movePlayQuit_0x296ef0");
#endif

    switch (ctx->pc) {
        case 0x296f28u: goto label_296f28;
        case 0x296f44u: goto label_296f44;
        case 0x296f50u: goto label_296f50;
        case 0x296f58u: goto label_296f58;
        case 0x296f64u: goto label_296f64;
        case 0x296f70u: goto label_296f70;
        case 0x296f7cu: goto label_296f7c;
        case 0x296f88u: goto label_296f88;
        case 0x296f94u: goto label_296f94;
        case 0x296fa0u: goto label_296fa0;
        case 0x296facu: goto label_296fac;
        case 0x296fb8u: goto label_296fb8;
        case 0x296fc4u: goto label_296fc4;
        case 0x296fd0u: goto label_296fd0;
        case 0x296fdcu: goto label_296fdc;
        case 0x296fe8u: goto label_296fe8;
        case 0x296ff4u: goto label_296ff4;
        case 0x296ffcu: goto label_296ffc;
        default: break;
    }

    ctx->pc = 0x296ef0u;

    // 0x296ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296ef4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x296ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296f04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x296f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296f08: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x296f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x296f0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296f10: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x296F10u;
    {
        const bool branch_taken_0x296f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F10u;
        // 0x296f14: 0x3c020000  lui         $v0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F14u) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f10) {
            ctx->pc = 0x297020u;
            goto label_297020;
        }
    }
    ctx->pc = 0x296F18u;
    // 0x296f18: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x296f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x296f1c: 0x24510000  addiu       $s1, $v0, 0x0
    ctx->pc = 0x296f1cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F1Cu) & 0xFFFFu))));
    // 0x296f20: 0xc0a600a  jal         func_298028
    ctx->pc = 0x296F20u;
    SET_GPR_U32(ctx, 31, 0x296F28u);
    ctx->pc = 0x296F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296F20u;
    // 0x296f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298028u, 0x296F20u, 0x296F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296F28u;
label_296f28:
    // 0x296f28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x296f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x296f2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x296F2Cu;
    {
        const bool branch_taken_0x296f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F2Cu;
        // 0x296f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296f2c) {
            ctx->pc = 0x296F38u;
            goto label_296f38;
        }
    }
    ctx->pc = 0x296F34u;
    // 0x296f34: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x296f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_296f38:
    // 0x296f38: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f38u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F38u) & 0xFFFFu)) << 16));
    // 0x296f3c: 0xc000000  jal         func_000000
    ctx->pc = 0x296F3Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F3Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F44u);
        ctx->pc = 0x296F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F3Cu;
        // 0x296f40: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F40u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F3Cu, 0x296F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F44u;
label_296f44:
    // 0x296f44: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f44u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F44u) & 0xFFFFu)) << 16));
    // 0x296f48: 0xc000000  jal         func_000000
    ctx->pc = 0x296F48u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F48u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F50u);
        ctx->pc = 0x296F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F48u;
        // 0x296f4c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F4Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F48u, 0x296F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F50u;
label_296f50:
    // 0x296f50: 0xc000000  jal         func_000000
    ctx->pc = 0x296F50u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F50u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F58u);
        ctx->pc = 0x296F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F50u;
        // 0x296f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F50u, 0x296F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F58u;
label_296f58:
    // 0x296f58: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f58u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F58u) & 0xFFFFu)) << 16));
    // 0x296f5c: 0xc000000  jal         func_000000
    ctx->pc = 0x296F5Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F5Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F64u);
        ctx->pc = 0x296F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F5Cu;
        // 0x296f60: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F60u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F5Cu, 0x296F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F64u;
label_296f64:
    // 0x296f64: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f64u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F64u) & 0xFFFFu)) << 16));
    // 0x296f68: 0xc000000  jal         func_000000
    ctx->pc = 0x296F68u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F68u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F70u);
        ctx->pc = 0x296F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F68u;
        // 0x296f6c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F6Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F68u, 0x296F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F70u;
label_296f70:
    // 0x296f70: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f70u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F70u) & 0xFFFFu)) << 16));
    // 0x296f74: 0xc000000  jal         func_000000
    ctx->pc = 0x296F74u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F74u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F7Cu);
        ctx->pc = 0x296F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F74u;
        // 0x296f78: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F78u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F74u, 0x296F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F7Cu;
label_296f7c:
    // 0x296f7c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f7cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F7Cu) & 0xFFFFu)) << 16));
    // 0x296f80: 0xc000000  jal         func_000000
    ctx->pc = 0x296F80u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F80u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F88u);
        ctx->pc = 0x296F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F80u;
        // 0x296f84: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F84u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F80u, 0x296F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F88u;
label_296f88:
    // 0x296f88: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f88u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F88u) & 0xFFFFu)) << 16));
    // 0x296f8c: 0xc000000  jal         func_000000
    ctx->pc = 0x296F8Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F8Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296F94u);
        ctx->pc = 0x296F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F8Cu;
        // 0x296f90: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F90u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F8Cu, 0x296F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296F94u;
label_296f94:
    // 0x296f94: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296f94u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296F94u) & 0xFFFFu)) << 16));
    // 0x296f98: 0xc000000  jal         func_000000
    ctx->pc = 0x296F98u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296F98u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FA0u);
        ctx->pc = 0x296F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296F98u;
        // 0x296f9c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296F9Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F98u, 0x296FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FA0u;
label_296fa0:
    // 0x296fa0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296fa0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FA0u) & 0xFFFFu)) << 16));
    // 0x296fa4: 0xc000000  jal         func_000000
    ctx->pc = 0x296FA4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FA4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FACu);
        ctx->pc = 0x296FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FA4u;
        // 0x296fa8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FA8u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FA4u, 0x296FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FACu;
label_296fac:
    // 0x296fac: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296facu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FACu) & 0xFFFFu)) << 16));
    // 0x296fb0: 0xc000000  jal         func_000000
    ctx->pc = 0x296FB0u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FB0u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FB8u);
        ctx->pc = 0x296FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FB0u;
        // 0x296fb4: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FB4u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FB0u, 0x296FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FB8u;
label_296fb8:
    // 0x296fb8: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296fb8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FB8u) & 0xFFFFu)) << 16));
    // 0x296fbc: 0xc000000  jal         func_000000
    ctx->pc = 0x296FBCu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FBCu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FC4u);
        ctx->pc = 0x296FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FBCu;
        // 0x296fc0: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FC0u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FBCu, 0x296FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FC4u;
label_296fc4:
    // 0x296fc4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296fc4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FC4u) & 0xFFFFu)) << 16));
    // 0x296fc8: 0xc000000  jal         func_000000
    ctx->pc = 0x296FC8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FC8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FD0u);
        ctx->pc = 0x296FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FC8u;
        // 0x296fcc: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FCCu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FC8u, 0x296FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FD0u;
label_296fd0:
    // 0x296fd0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296fd0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FD0u) & 0xFFFFu)) << 16));
    // 0x296fd4: 0xc000000  jal         func_000000
    ctx->pc = 0x296FD4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FD4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FDCu);
        ctx->pc = 0x296FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FD4u;
        // 0x296fd8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FD8u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FD4u, 0x296FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FDCu;
label_296fdc:
    // 0x296fdc: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296fdcu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FDCu) & 0xFFFFu)) << 16));
    // 0x296fe0: 0xc000000  jal         func_000000
    ctx->pc = 0x296FE0u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FE0u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FE8u);
        ctx->pc = 0x296FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FE0u;
        // 0x296fe4: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FE4u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FE0u, 0x296FE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FE8u;
label_296fe8:
    // 0x296fe8: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296fe8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296FE8u) & 0xFFFFu)) << 16));
    // 0x296fec: 0xc000000  jal         func_000000
    ctx->pc = 0x296FECu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FECu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FF4u);
        ctx->pc = 0x296FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FECu;
        // 0x296ff0: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296FF0u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FECu, 0x296FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FF4u;
label_296ff4:
    // 0x296ff4: 0xc000000  jal         func_000000
    ctx->pc = 0x296FF4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296FF4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296FFCu);
        ctx->pc = 0x296FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296FF4u;
        // 0x296ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296FF4u, 0x296FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296FFCu;
label_296ffc:
    // 0x296ffc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x296ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297000: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x297000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x297004: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x297004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x297008: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x297008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x29700c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x29700cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x297010: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x297010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x297014: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x297014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31364)));
    // 0x297018: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x297018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29701c: 0xac827a84  sw          $v0, 0x7A84($a0)
    ctx->pc = 0x29701cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31364), GPR_U32(ctx, 2));
label_297020:
    // 0x297020: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x297020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297024: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29702c: 0x3e00008  jr          $ra
    ctx->pc = 0x29702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29702Cu;
        // 0x297030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297034u;
    // 0x297034: 0x0  nop
    ctx->pc = 0x297034u;
    // NOP
    ctx->pc = 0x297038u;
}
