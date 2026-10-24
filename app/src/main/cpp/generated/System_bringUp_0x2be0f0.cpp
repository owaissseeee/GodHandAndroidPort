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

// Function: System_bringUp
// Address: 0x2be0f0 - 0x2be200
void System_bringUp_0x2be0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("System_bringUp_0x2be0f0");
#endif

    switch (ctx->pc) {
        case 0x2be110u: goto label_2be110;
        case 0x2be118u: goto label_2be118;
        case 0x2be128u: goto label_2be128;
        case 0x2be130u: goto label_2be130;
        case 0x2be140u: goto label_2be140;
        case 0x2be150u: goto label_2be150;
        case 0x2be158u: goto label_2be158;
        case 0x2be160u: goto label_2be160;
        case 0x2be188u: goto label_2be188;
        case 0x2be1a0u: goto label_2be1a0;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be1b4u: goto label_2be1b4;
        case 0x2be1c0u: goto label_2be1c0;
        case 0x2be1ccu: goto label_2be1cc;
        case 0x2be1d8u: goto label_2be1d8;
        case 0x2be1e0u: goto label_2be1e0;
        case 0x2be1e8u: goto label_2be1e8;
        default: break;
    }

    ctx->pc = 0x2be0f0u;

    // 0x2be0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2be0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2be0f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2be0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2be0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2be0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2be100: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2be100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2be104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be108: 0xc0af916  jal         func_2BE458
    ctx->pc = 0x2BE108u;
    SET_GPR_U32(ctx, 31, 0x2BE110u);
    ctx->pc = 0x2BE10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE108u;
    // 0x2be10c: 0x3c110045  lui         $s1, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE458u, 0x2BE108u, 0x2BE110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE110u;
label_2be110:
    // 0x2be110: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x2be110u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    // 0x2be114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be118:
    // 0x2be118: 0x2625c048  addiu       $a1, $s1, -0x3FB8
    ctx->pc = 0x2be118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950984));
    // 0x2be11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be120: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2BE120u;
    SET_GPR_U32(ctx, 31, 0x2BE128u);
    ctx->pc = 0x2BE124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE120u;
    // 0x2be124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2BE120u, 0x2BE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE128u;
label_2be128:
    // 0x2be128: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE128u;
    {
        const bool branch_taken_0x2be128 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE128u;
        // 0x2be12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be128) {
            ctx->pc = 0x2BE118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be118;
        }
    }
    ctx->pc = 0x2BE130u;
label_2be130:
    // 0x2be130: 0x2645c068  addiu       $a1, $s2, -0x3F98
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951016));
    // 0x2be134: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2be134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be138: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2BE138u;
    SET_GPR_U32(ctx, 31, 0x2BE140u);
    ctx->pc = 0x2BE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE138u;
    // 0x2be13c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2BE138u, 0x2BE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE140u;
label_2be140:
    // 0x2be140: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE140u;
    {
        const bool branch_taken_0x2be140 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE140u;
        // 0x2be144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be140) {
            ctx->pc = 0x2BE130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be130;
        }
    }
    ctx->pc = 0x2BE148u;
    // 0x2be148: 0xc0e5c4a  jal         func_397128
    ctx->pc = 0x2BE148u;
    SET_GPR_U32(ctx, 31, 0x2BE150u);
    ctx->pc = 0x2BE14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE148u;
    // 0x2be14c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397128u, 0x2BE148u, 0x2BE150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE150u;
label_2be150:
    // 0x2be150: 0xc0c2af6  jal         func_30ABD8
    ctx->pc = 0x2BE150u;
    SET_GPR_U32(ctx, 31, 0x2BE158u);
    ctx->pc = 0x30ABD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABD8u, 0x2BE150u, 0x2BE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE158u;
label_2be158:
    // 0x2be158: 0xc0e5416  jal         func_395058
    ctx->pc = 0x2BE158u;
    SET_GPR_U32(ctx, 31, 0x2BE160u);
    ctx->pc = 0x395058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395058u, 0x2BE158u, 0x2BE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE160u;
label_2be160:
    // 0x2be160: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2be160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2be164: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2be164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2be168: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x2be168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A18u));
    // 0x2be16c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2be16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2be170: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE170u;
    {
        const bool branch_taken_0x2be170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE170u;
        // 0x2be174: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be170) {
            ctx->pc = 0x2BE190u;
            goto label_2be190;
        }
    }
    ctx->pc = 0x2BE178u;
    // 0x2be178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be17c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2be17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be180: 0xc0e547e  jal         func_3951F8
    ctx->pc = 0x2BE180u;
    SET_GPR_U32(ctx, 31, 0x2BE188u);
    ctx->pc = 0x2BE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE180u;
    // 0x2be184: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951F8u, 0x2BE180u, 0x2BE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE188u;
label_2be188:
    // 0x2be188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE188u;
    {
        const bool branch_taken_0x2be188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be188) {
            ctx->pc = 0x2BE1A0u;
            goto label_2be1a0;
        }
    }
    ctx->pc = 0x2BE190u;
label_2be190:
    // 0x2be190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be194: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2be194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be198: 0xc0e547e  jal         func_3951F8
    ctx->pc = 0x2BE198u;
    SET_GPR_U32(ctx, 31, 0x2BE1A0u);
    ctx->pc = 0x2BE19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE198u;
    // 0x2be19c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951F8u, 0x2BE198u, 0x2BE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1A0u;
label_2be1a0:
    // 0x2be1a0: 0xc0e54e6  jal         func_395398
    ctx->pc = 0x2BE1A0u;
    SET_GPR_U32(ctx, 31, 0x2BE1A8u);
    ctx->pc = 0x2BE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1A0u;
    // 0x2be1a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395398u, 0x2BE1A0u, 0x2BE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1A8u;
label_2be1a8:
    // 0x2be1a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2be1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2be1ac: 0xc0802b0  jal         func_200AC0
    ctx->pc = 0x2BE1ACu;
    SET_GPR_U32(ctx, 31, 0x2BE1B4u);
    ctx->pc = 0x2BE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1ACu;
    // 0x2be1b0: 0x24843f20  addiu       $a0, $a0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AC0u, 0x2BE1ACu, 0x2BE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1B4u;
label_2be1b4:
    // 0x2be1b4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2be1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2be1b8: 0xc0b2748  jal         func_2C9D20
    ctx->pc = 0x2BE1B8u;
    SET_GPR_U32(ctx, 31, 0x2BE1C0u);
    ctx->pc = 0x2BE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1B8u;
    // 0x2be1bc: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D20u, 0x2BE1B8u, 0x2BE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1C0u;
label_2be1c0:
    // 0x2be1c0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2be1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2be1c4: 0xc0ad258  jal         func_2B4960
    ctx->pc = 0x2BE1C4u;
    SET_GPR_U32(ctx, 31, 0x2BE1CCu);
    ctx->pc = 0x2BE1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1C4u;
    // 0x2be1c8: 0x248479d0  addiu       $a0, $a0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4960u, 0x2BE1C4u, 0x2BE1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1CCu;
label_2be1cc:
    // 0x2be1cc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2be1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2be1d0: 0xc0ab8fc  jal         func_2AE3F0
    ctx->pc = 0x2BE1D0u;
    SET_GPR_U32(ctx, 31, 0x2BE1D8u);
    ctx->pc = 0x2BE1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1D0u;
    // 0x2be1d4: 0x24846900  addiu       $a0, $a0, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE3F0u, 0x2BE1D0u, 0x2BE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1D8u;
label_2be1d8:
    // 0x2be1d8: 0xc0c69c6  jal         func_31A718
    ctx->pc = 0x2BE1D8u;
    SET_GPR_U32(ctx, 31, 0x2BE1E0u);
    ctx->pc = 0x2BE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1D8u;
    // 0x2be1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A718u, 0x2BE1D8u, 0x2BE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1E0u;
label_2be1e0:
    // 0x2be1e0: 0xc0af93a  jal         func_2BE4E8
    ctx->pc = 0x2BE1E0u;
    SET_GPR_U32(ctx, 31, 0x2BE1E8u);
    ctx->pc = 0x2BE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE1E0u;
    // 0x2be1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE4E8u, 0x2BE1E0u, 0x2BE1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE1E8u;
label_2be1e8:
    // 0x2be1e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2be1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be1ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2be1ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be1f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2be1f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F8u;
        // 0x2be1fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE200u;
}
