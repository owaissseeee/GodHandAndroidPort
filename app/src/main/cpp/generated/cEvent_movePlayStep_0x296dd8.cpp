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

// Function: cEvent_movePlayStep
// Address: 0x296dd8 - 0x296ef0
void cEvent_movePlayStep_0x296dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_movePlayStep_0x296dd8");
#endif

    switch (ctx->pc) {
        case 0x296e04u: goto label_296e04;
        case 0x296e0cu: goto label_296e0c;
        case 0x296e14u: goto label_296e14;
        case 0x296e20u: goto label_296e20;
        case 0x296e2cu: goto label_296e2c;
        case 0x296e38u: goto label_296e38;
        case 0x296e44u: goto label_296e44;
        case 0x296e50u: goto label_296e50;
        case 0x296e5cu: goto label_296e5c;
        case 0x296e68u: goto label_296e68;
        case 0x296e74u: goto label_296e74;
        case 0x296e80u: goto label_296e80;
        case 0x296e8cu: goto label_296e8c;
        case 0x296e98u: goto label_296e98;
        case 0x296ea4u: goto label_296ea4;
        case 0x296eb0u: goto label_296eb0;
        case 0x296ebcu: goto label_296ebc;
        case 0x296ec8u: goto label_296ec8;
        case 0x296ed0u: goto label_296ed0;
        default: break;
    }

    ctx->pc = 0x296dd8u;

    // 0x296dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296de4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x296de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x296de8: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x296de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x296dec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x296decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x296df0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x296DF0u;
    {
        const bool branch_taken_0x296df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DF0u;
        // 0x296df4: 0x3c100000  lui         $s0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296DF4u) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296df0) {
            ctx->pc = 0x296ED8u;
            goto label_296ed8;
        }
    }
    ctx->pc = 0x296DF8u;
    // 0x296df8: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x296df8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296DF8u) & 0xFFFFu))));
    // 0x296dfc: 0xc000000  jal         func_000000
    ctx->pc = 0x296DFCu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296DFCu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E04u);
        ctx->pc = 0x296E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DFCu;
        // 0x296e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DFCu, 0x296E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E04u;
label_296e04:
    // 0x296e04: 0xc000000  jal         func_000000
    ctx->pc = 0x296E04u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E04u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E0Cu);
        ctx->pc = 0x296E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E04u;
        // 0x296e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E04u, 0x296E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E0Cu;
label_296e0c:
    // 0x296e0c: 0xc000000  jal         func_000000
    ctx->pc = 0x296E0Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E0Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E14u);
        ctx->pc = 0x296E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E0Cu;
        // 0x296e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E0Cu, 0x296E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E14u;
label_296e14:
    // 0x296e14: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e14u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E14u) & 0xFFFFu)) << 16));
    // 0x296e18: 0xc000000  jal         func_000000
    ctx->pc = 0x296E18u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E18u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E20u);
        ctx->pc = 0x296E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E18u;
        // 0x296e1c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E1Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E18u, 0x296E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E20u;
label_296e20:
    // 0x296e20: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e20u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E20u) & 0xFFFFu)) << 16));
    // 0x296e24: 0xc000000  jal         func_000000
    ctx->pc = 0x296E24u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E24u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E2Cu);
        ctx->pc = 0x296E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E24u;
        // 0x296e28: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E28u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E24u, 0x296E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E2Cu;
label_296e2c:
    // 0x296e2c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e2cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E2Cu) & 0xFFFFu)) << 16));
    // 0x296e30: 0xc000000  jal         func_000000
    ctx->pc = 0x296E30u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E30u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E38u);
        ctx->pc = 0x296E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E30u;
        // 0x296e34: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E34u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E30u, 0x296E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E38u;
label_296e38:
    // 0x296e38: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e38u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E38u) & 0xFFFFu)) << 16));
    // 0x296e3c: 0xc000000  jal         func_000000
    ctx->pc = 0x296E3Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E3Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E44u);
        ctx->pc = 0x296E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E3Cu;
        // 0x296e40: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E40u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E3Cu, 0x296E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E44u;
label_296e44:
    // 0x296e44: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e44u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E44u) & 0xFFFFu)) << 16));
    // 0x296e48: 0xc000000  jal         func_000000
    ctx->pc = 0x296E48u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E48u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E50u);
        ctx->pc = 0x296E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E48u;
        // 0x296e4c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E4Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E48u, 0x296E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E50u;
label_296e50:
    // 0x296e50: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e50u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E50u) & 0xFFFFu)) << 16));
    // 0x296e54: 0xc000000  jal         func_000000
    ctx->pc = 0x296E54u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E54u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E5Cu);
        ctx->pc = 0x296E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E54u;
        // 0x296e58: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E58u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E54u, 0x296E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E5Cu;
label_296e5c:
    // 0x296e5c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e5cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E5Cu) & 0xFFFFu)) << 16));
    // 0x296e60: 0xc000000  jal         func_000000
    ctx->pc = 0x296E60u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E60u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E68u);
        ctx->pc = 0x296E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E60u;
        // 0x296e64: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E64u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E60u, 0x296E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E68u;
label_296e68:
    // 0x296e68: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e68u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E68u) & 0xFFFFu)) << 16));
    // 0x296e6c: 0xc000000  jal         func_000000
    ctx->pc = 0x296E6Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E6Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E74u);
        ctx->pc = 0x296E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E6Cu;
        // 0x296e70: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E70u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E6Cu, 0x296E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E74u;
label_296e74:
    // 0x296e74: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e74u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E74u) & 0xFFFFu)) << 16));
    // 0x296e78: 0xc000000  jal         func_000000
    ctx->pc = 0x296E78u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E78u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E80u);
        ctx->pc = 0x296E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E78u;
        // 0x296e7c: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E7Cu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E78u, 0x296E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E80u;
label_296e80:
    // 0x296e80: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e80u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E80u) & 0xFFFFu)) << 16));
    // 0x296e84: 0xc000000  jal         func_000000
    ctx->pc = 0x296E84u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E84u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E8Cu);
        ctx->pc = 0x296E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E84u;
        // 0x296e88: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E88u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E84u, 0x296E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E8Cu;
label_296e8c:
    // 0x296e8c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e8cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E8Cu) & 0xFFFFu)) << 16));
    // 0x296e90: 0xc000000  jal         func_000000
    ctx->pc = 0x296E90u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E90u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296E98u);
        ctx->pc = 0x296E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E90u;
        // 0x296e94: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296E94u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E90u, 0x296E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296E98u;
label_296e98:
    // 0x296e98: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296e98u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296E98u) & 0xFFFFu)) << 16));
    // 0x296e9c: 0xc000000  jal         func_000000
    ctx->pc = 0x296E9Cu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296E9Cu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296EA4u);
        ctx->pc = 0x296EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E9Cu;
        // 0x296ea0: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296EA0u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E9Cu, 0x296EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296EA4u;
label_296ea4:
    // 0x296ea4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296ea4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296EA4u) & 0xFFFFu)) << 16));
    // 0x296ea8: 0xc000000  jal         func_000000
    ctx->pc = 0x296EA8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296EA8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296EB0u);
        ctx->pc = 0x296EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EA8u;
        // 0x296eac: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296EACu) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EA8u, 0x296EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296EB0u;
label_296eb0:
    // 0x296eb0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296eb0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296EB0u) & 0xFFFFu)) << 16));
    // 0x296eb4: 0xc000000  jal         func_000000
    ctx->pc = 0x296EB4u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296EB4u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296EBCu);
        ctx->pc = 0x296EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EB4u;
        // 0x296eb8: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296EB8u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EB4u, 0x296EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296EBCu;
label_296ebc:
    // 0x296ebc: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x296ebcu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x296EBCu) & 0xFFFFu)) << 16));
    // 0x296ec0: 0xc000000  jal         func_000000
    ctx->pc = 0x296EC0u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296EC0u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296EC8u);
        ctx->pc = 0x296EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EC0u;
        // 0x296ec4: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x296EC4u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EC0u, 0x296EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296EC8u;
label_296ec8:
    // 0x296ec8: 0xc000000  jal         func_000000
    ctx->pc = 0x296EC8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x296EC8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x296ED0u);
        ctx->pc = 0x296ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EC8u;
        // 0x296ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EC8u, 0x296ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296ED0u;
label_296ed0:
    // 0x296ed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x296ED0u;
    {
        const bool branch_taken_0x296ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296ED0u;
        // 0x296ed4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ed0) {
            ctx->pc = 0x296EE0u;
            goto label_296ee0;
        }
    }
    ctx->pc = 0x296ED8u;
label_296ed8:
    // 0x296ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x296ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296edc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296ee0:
    // 0x296ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x296EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296EE4u;
        // 0x296ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296EECu;
    // 0x296eec: 0x0  nop
    ctx->pc = 0x296eecu;
    // NOP
    ctx->pc = 0x296ef0u;
}
