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

// Function: func_00185690
// Address: 0x185690 - 0x185910
void func_00185690_0x185690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00185690_0x185690");
#endif

    switch (ctx->pc) {
        case 0x1856b4u: goto label_1856b4;
        case 0x1856c4u: goto label_1856c4;
        case 0x1856d4u: goto label_1856d4;
        case 0x1856e4u: goto label_1856e4;
        case 0x1856f4u: goto label_1856f4;
        case 0x185704u: goto label_185704;
        case 0x185714u: goto label_185714;
        case 0x185748u: goto label_185748;
        case 0x18577cu: goto label_18577c;
        case 0x18578cu: goto label_18578c;
        case 0x1857c0u: goto label_1857c0;
        case 0x1857d0u: goto label_1857d0;
        case 0x1857e0u: goto label_1857e0;
        case 0x185808u: goto label_185808;
        case 0x185830u: goto label_185830;
        case 0x185840u: goto label_185840;
        case 0x185850u: goto label_185850;
        case 0x18585cu: goto label_18585c;
        case 0x185884u: goto label_185884;
        case 0x1858acu: goto label_1858ac;
        case 0x1858bcu: goto label_1858bc;
        case 0x1858ccu: goto label_1858cc;
        case 0x1858d8u: goto label_1858d8;
        case 0x1858e4u: goto label_1858e4;
        case 0x1858f0u: goto label_1858f0;
        case 0x1858fcu: goto label_1858fc;
        default: break;
    }

    ctx->pc = 0x185690u;

    // 0x185690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185698: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18569c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1856a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1856a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1856a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1856a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1856ac: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1856ACu;
    SET_GPR_U32(ctx, 31, 0x1856B4u);
    ctx->pc = 0x1856B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856ACu;
    // 0x1856b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1856ACu, 0x1856B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856B4u;
label_1856b4:
    // 0x1856b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1856b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856b8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1856b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1856bc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1856BCu;
    SET_GPR_U32(ctx, 31, 0x1856C4u);
    ctx->pc = 0x1856C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856BCu;
    // 0x1856c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1856BCu, 0x1856C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856C4u;
label_1856c4:
    // 0x1856c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1856c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856c8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1856c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1856cc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1856CCu;
    SET_GPR_U32(ctx, 31, 0x1856D4u);
    ctx->pc = 0x1856D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856CCu;
    // 0x1856d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1856CCu, 0x1856D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856D4u;
label_1856d4:
    // 0x1856d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1856d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1856d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1856dc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1856DCu;
    SET_GPR_U32(ctx, 31, 0x1856E4u);
    ctx->pc = 0x1856E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856DCu;
    // 0x1856e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1856DCu, 0x1856E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856E4u;
label_1856e4:
    // 0x1856e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1856e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856e8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1856ec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1856ECu;
    SET_GPR_U32(ctx, 31, 0x1856F4u);
    ctx->pc = 0x1856F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856ECu;
    // 0x1856f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1856ECu, 0x1856F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1856F4u;
label_1856f4:
    // 0x1856f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1856f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1856f8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1856f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1856fc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1856FCu;
    SET_GPR_U32(ctx, 31, 0x185704u);
    ctx->pc = 0x185700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1856FCu;
    // 0x185700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1856FCu, 0x185704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185704u;
label_185704:
    // 0x185704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185708: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x185708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18570c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18570Cu;
    SET_GPR_U32(ctx, 31, 0x185714u);
    ctx->pc = 0x185710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18570Cu;
    // 0x185710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18570Cu, 0x185714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185714u;
label_185714:
    // 0x185714: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x185714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x185718: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x185718u;
    {
        const bool branch_taken_0x185718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185718u;
        // 0x18571c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185718) {
            ctx->pc = 0x1858FCu;
            goto label_1858fc;
        }
    }
    ctx->pc = 0x185720u;
    // 0x185720: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x185720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x185724: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x185724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x185728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x185728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18572c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x18572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185730: 0x800008  jr          $a0
    ctx->pc = 0x185730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185738u: goto label_185738;
            case 0x185754u: goto label_185754;
            case 0x185798u: goto label_185798;
            case 0x1857E8u: goto label_1857e8;
            case 0x185864u: goto label_185864;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x185738u;
label_185738:
    // 0x185738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18573c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x18573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x185740: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185740u;
    SET_GPR_U32(ctx, 31, 0x185748u);
    ctx->pc = 0x185744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185740u;
    // 0x185744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185740u, 0x185748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185748u;
label_185748:
    // 0x185748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18574c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18574Cu;
    {
        const bool branch_taken_0x18574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18574Cu;
        // 0x185750: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18574c) {
            ctx->pc = 0x1857D8u;
            goto label_1857d8;
        }
    }
    ctx->pc = 0x185754u;
label_185754:
    // 0x185754: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185758: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18575c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185760: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x185760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x185764: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185768: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18576c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18576cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185774: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185774u;
    SET_GPR_U32(ctx, 31, 0x18577Cu);
    ctx->pc = 0x185778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185774u;
    // 0x185778: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185774u, 0x18577Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18577Cu;
label_18577c:
    // 0x18577c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18577cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185780: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x185780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x185784: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185784u;
    SET_GPR_U32(ctx, 31, 0x18578Cu);
    ctx->pc = 0x185788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185784u;
    // 0x185788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185784u, 0x18578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18578Cu;
label_18578c:
    // 0x18578c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185790: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x185790u;
    {
        const bool branch_taken_0x185790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185790u;
        // 0x185794: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185790) {
            ctx->pc = 0x1857D8u;
            goto label_1857d8;
        }
    }
    ctx->pc = 0x185798u;
label_185798:
    // 0x185798: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x18579c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1857a0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1857a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1857a4: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x1857a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1857a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1857a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1857acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1857b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1857b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857b8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1857B8u;
    SET_GPR_U32(ctx, 31, 0x1857C0u);
    ctx->pc = 0x1857BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857B8u;
    // 0x1857bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1857B8u, 0x1857C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857C0u;
label_1857c0:
    // 0x1857c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1857c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857c4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1857c8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1857C8u;
    SET_GPR_U32(ctx, 31, 0x1857D0u);
    ctx->pc = 0x1857CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857C8u;
    // 0x1857cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1857C8u, 0x1857D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857D0u;
label_1857d0:
    // 0x1857d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1857d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857d4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1857d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1857d8:
    // 0x1857d8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1857D8u;
    SET_GPR_U32(ctx, 31, 0x1857E0u);
    ctx->pc = 0x1857DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1857D8u;
    // 0x1857dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1857D8u, 0x1857E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1857E0u;
label_1857e0:
    // 0x1857e0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1857E0u;
    {
        const bool branch_taken_0x1857e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1857E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1857E0u;
        // 0x1857e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1857e0) {
            ctx->pc = 0x185900u;
            goto label_185900;
        }
    }
    ctx->pc = 0x1857E8u;
label_1857e8:
    // 0x1857e8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1857e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1857ec: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x1857ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x1857f0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1857f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1857f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1857f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1857f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1857fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1857fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185800: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185800u;
    SET_GPR_U32(ctx, 31, 0x185808u);
    ctx->pc = 0x185804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185800u;
    // 0x185804: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185800u, 0x185808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185808u;
label_185808:
    // 0x185808: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x18580c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x18580cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18581c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18581cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185820: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185828: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185828u;
    SET_GPR_U32(ctx, 31, 0x185830u);
    ctx->pc = 0x18582Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185828u;
    // 0x18582c: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185828u, 0x185830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185830u;
label_185830:
    // 0x185830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185834: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x185834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x185838: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185838u;
    SET_GPR_U32(ctx, 31, 0x185840u);
    ctx->pc = 0x18583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185838u;
    // 0x18583c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185838u, 0x185840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185840u;
label_185840:
    // 0x185840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185844: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x185844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x185848: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185848u;
    SET_GPR_U32(ctx, 31, 0x185850u);
    ctx->pc = 0x18584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185848u;
    // 0x18584c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185848u, 0x185850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185850u;
label_185850:
    // 0x185850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185854: 0xc06180e  jal         func_186038
    ctx->pc = 0x185854u;
    SET_GPR_U32(ctx, 31, 0x18585Cu);
    ctx->pc = 0x185858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185854u;
    // 0x185858: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x185854u, 0x18585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18585Cu;
label_18585c:
    // 0x18585c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18585Cu;
    {
        const bool branch_taken_0x18585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18585Cu;
        // 0x185860: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18585c) {
            ctx->pc = 0x185900u;
            goto label_185900;
        }
    }
    ctx->pc = 0x185864u;
label_185864:
    // 0x185864: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185864u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185868: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x18586c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18586cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x185870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x185870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185878: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18587c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x18587Cu;
    SET_GPR_U32(ctx, 31, 0x185884u);
    ctx->pc = 0x185880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18587Cu;
    // 0x185880: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x18587Cu, 0x185884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185884u;
label_185884:
    // 0x185884: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185888: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x185888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18588c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18588cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185894: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185894u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185898: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x185898u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18589c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1858a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1858a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1858a4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1858A4u;
    SET_GPR_U32(ctx, 31, 0x1858ACu);
    ctx->pc = 0x1858A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858A4u;
    // 0x1858a8: 0x24060112  addiu       $a2, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1858A4u, 0x1858ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858ACu;
label_1858ac:
    // 0x1858ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1858acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858b0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1858b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1858b4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1858B4u;
    SET_GPR_U32(ctx, 31, 0x1858BCu);
    ctx->pc = 0x1858B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858B4u;
    // 0x1858b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1858B4u, 0x1858BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858BCu;
label_1858bc:
    // 0x1858bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1858bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1858c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1858c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858c4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1858C4u;
    SET_GPR_U32(ctx, 31, 0x1858CCu);
    ctx->pc = 0x1858C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858C4u;
    // 0x1858c8: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1858C4u, 0x1858CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858CCu;
label_1858cc:
    // 0x1858cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1858ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858d0: 0xc06180e  jal         func_186038
    ctx->pc = 0x1858D0u;
    SET_GPR_U32(ctx, 31, 0x1858D8u);
    ctx->pc = 0x1858D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858D0u;
    // 0x1858d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1858D0u, 0x1858D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858D8u;
label_1858d8:
    // 0x1858d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1858d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858dc: 0xc06180e  jal         func_186038
    ctx->pc = 0x1858DCu;
    SET_GPR_U32(ctx, 31, 0x1858E4u);
    ctx->pc = 0x1858E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858DCu;
    // 0x1858e0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1858DCu, 0x1858E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858E4u;
label_1858e4:
    // 0x1858e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1858e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858e8: 0xc06180e  jal         func_186038
    ctx->pc = 0x1858E8u;
    SET_GPR_U32(ctx, 31, 0x1858F0u);
    ctx->pc = 0x1858ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858E8u;
    // 0x1858ec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1858E8u, 0x1858F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858F0u;
label_1858f0:
    // 0x1858f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1858f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858f4: 0xc06180e  jal         func_186038
    ctx->pc = 0x1858F4u;
    SET_GPR_U32(ctx, 31, 0x1858FCu);
    ctx->pc = 0x1858F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858F4u;
    // 0x1858f8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186038u, 0x1858F4u, 0x1858FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858FCu;
label_1858fc:
    // 0x1858fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1858fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185900:
    // 0x185900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185908: 0x3e00008  jr          $ra
    ctx->pc = 0x185908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185908u;
        // 0x18590c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185910u;
}
