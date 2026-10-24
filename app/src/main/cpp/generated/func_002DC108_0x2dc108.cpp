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

// Function: func_002DC108
// Address: 0x2dc108 - 0x2dc1d0
void func_002DC108_0x2dc108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC108_0x2dc108");
#endif

    switch (ctx->pc) {
        case 0x2dc11cu: goto label_2dc11c;
        case 0x2dc134u: goto label_2dc134;
        case 0x2dc158u: goto label_2dc158;
        case 0x2dc168u: goto label_2dc168;
        case 0x2dc194u: goto label_2dc194;
        case 0x2dc1c0u: goto label_2dc1c0;
        default: break;
    }

    ctx->pc = 0x2dc108u;

    // 0x2dc108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc10c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc114: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC114u;
    SET_GPR_U32(ctx, 31, 0x2DC11Cu);
    ctx->pc = 0x2DC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC114u;
    // 0x2dc118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC114u, 0x2DC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC11Cu;
label_2dc11c:
    // 0x2dc11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc120: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dc120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dc124: 0x58400027  blezl       $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DC124u;
    {
        const bool branch_taken_0x2dc124 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc124) {
            ctx->pc = 0x2DC128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC124u;
            // 0x2dc128: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1C4u;
            goto label_2dc1c4;
        }
    }
    ctx->pc = 0x2DC12Cu;
    // 0x2dc12c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC12Cu;
    SET_GPR_U32(ctx, 31, 0x2DC134u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC12Cu, 0x2DC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC134u;
label_2dc134:
    // 0x2dc134: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DC134u;
    {
        const bool branch_taken_0x2dc134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc134) {
            ctx->pc = 0x2DC138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC134u;
            // 0x2dc138: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1C4u;
            goto label_2dc1c4;
        }
    }
    ctx->pc = 0x2DC13Cu;
    // 0x2dc13c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc140: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc144: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc144u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc148: 0x5c60001e  bgtzl       $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DC148u;
    {
        const bool branch_taken_0x2dc148 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc148) {
            ctx->pc = 0x2DC14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC148u;
            // 0x2dc14c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1C4u;
            goto label_2dc1c4;
        }
    }
    ctx->pc = 0x2DC150u;
    // 0x2dc150: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC150u;
    SET_GPR_U32(ctx, 31, 0x2DC158u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC150u, 0x2DC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC158u;
label_2dc158:
    // 0x2dc158: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC158u;
    {
        const bool branch_taken_0x2dc158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc158) {
            ctx->pc = 0x2DC15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC158u;
            // 0x2dc15c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC1C4u;
            goto label_2dc1c4;
        }
    }
    ctx->pc = 0x2DC160u;
    // 0x2dc160: 0xc0b6df8  jal         func_2DB7E0
    ctx->pc = 0x2DC160u;
    SET_GPR_U32(ctx, 31, 0x2DC168u);
    ctx->pc = 0x2DC164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC160u;
    // 0x2dc164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7E0u, 0x2DC160u, 0x2DC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC168u;
label_2dc168:
    // 0x2dc168: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC168u;
    {
        const bool branch_taken_0x2dc168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC168u;
        // 0x2dc16c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc168) {
            ctx->pc = 0x2DC19Cu;
            goto label_2dc19c;
        }
    }
    ctx->pc = 0x2DC170u;
    // 0x2dc170: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc170u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc174: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc178: 0x2508c1d0  addiu       $t0, $t0, -0x3E30
    ctx->pc = 0x2dc178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951376));
    // 0x2dc17c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dc17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dc180: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2dc180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc18c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC18Cu;
    SET_GPR_U32(ctx, 31, 0x2DC194u);
    ctx->pc = 0x2DC190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC18Cu;
    // 0x2dc190: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC18Cu, 0x2DC194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC194u;
label_2dc194:
    // 0x2dc194: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC194u;
    {
        const bool branch_taken_0x2dc194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC194u;
        // 0x2dc198: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc194) {
            ctx->pc = 0x2DC1C4u;
            goto label_2dc1c4;
        }
    }
    ctx->pc = 0x2DC19Cu;
label_2dc19c:
    // 0x2dc19c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc19cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc1a0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc1a4: 0x2508c1d0  addiu       $t0, $t0, -0x3E30
    ctx->pc = 0x2dc1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951376));
    // 0x2dc1a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dc1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc1ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2dc1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2dc1b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dc1b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc1b8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC1B8u;
    SET_GPR_U32(ctx, 31, 0x2DC1C0u);
    ctx->pc = 0x2DC1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC1B8u;
    // 0x2dc1bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC1B8u, 0x2DC1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC1C0u;
label_2dc1c0:
    // 0x2dc1c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc1c4:
    // 0x2dc1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC1C8u;
        // 0x2dc1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC1D0u;
}
