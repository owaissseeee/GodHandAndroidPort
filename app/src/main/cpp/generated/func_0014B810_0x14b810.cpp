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

// Function: func_0014B810
// Address: 0x14b810 - 0x14b918
void func_0014B810_0x14b810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014B810_0x14b810");
#endif

    switch (ctx->pc) {
        case 0x14b874u: goto label_14b874;
        case 0x14b88cu: goto label_14b88c;
        case 0x14b8b0u: goto label_14b8b0;
        case 0x14b8ccu: goto label_14b8cc;
        case 0x14b8f0u: goto label_14b8f0;
        case 0x14b90cu: goto label_14b90c;
        default: break;
    }

    ctx->pc = 0x14b810u;

    // 0x14b810: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x14b814: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x14b814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x14b818: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x14b818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14b81c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b81cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b824: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x14b824u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x14b828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14b82c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x14b82cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x14b830: 0x474018  mult        $t0, $v0, $a3
    ctx->pc = 0x14b830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x14b834: 0x8c8302c0  lw          $v1, 0x2C0($a0)
    ctx->pc = 0x14b834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x14b838: 0x8caa0380  lw          $t2, 0x380($a1)
    ctx->pc = 0x14b838u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x14b83c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b840: 0x1054821  addu        $t1, $t0, $a1
    ctx->pc = 0x14b840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x14b844: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x14b844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b848: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14B848u;
    {
        const bool branch_taken_0x14b848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B848u;
        // 0x14b84c: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b848) {
            ctx->pc = 0x14B8D4u;
            goto label_14b8d4;
        }
    }
    ctx->pc = 0x14B850u;
    // 0x14b850: 0x31424080  andi        $v0, $t2, 0x4080
    ctx->pc = 0x14b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16512);
    // 0x14b854: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14B854u;
    {
        const bool branch_taken_0x14b854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b854) {
            ctx->pc = 0x14B894u;
            goto label_14b894;
        }
    }
    ctx->pc = 0x14B85Cu;
    // 0x14b85c: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B85Cu;
    {
        const bool branch_taken_0x14b85c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B85Cu;
        // 0x14b860: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b85c) {
            ctx->pc = 0x14B87Cu;
            goto label_14b87c;
        }
    }
    ctx->pc = 0x14B864u;
    // 0x14b864: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14b864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b868: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14b868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14b86c: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B86Cu;
    SET_GPR_U32(ctx, 31, 0x14B874u);
    ctx->pc = 0x14B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B86Cu;
    // 0x14b870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B86Cu, 0x14B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B874u;
label_14b874:
    // 0x14b874: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14B874u;
    {
        const bool branch_taken_0x14b874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B874u;
        // 0x14b878: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b874) {
            ctx->pc = 0x14B910u;
            goto label_14b910;
        }
    }
    ctx->pc = 0x14B87Cu;
label_14b87c:
    // 0x14b87c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14b87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b880: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14b880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14b884: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B884u;
    SET_GPR_U32(ctx, 31, 0x14B88Cu);
    ctx->pc = 0x14B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B884u;
    // 0x14b888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B884u, 0x14B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B88Cu;
label_14b88c:
    // 0x14b88c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14B88Cu;
    {
        const bool branch_taken_0x14b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B88Cu;
        // 0x14b890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b88c) {
            ctx->pc = 0x14B910u;
            goto label_14b910;
        }
    }
    ctx->pc = 0x14B894u;
label_14b894:
    // 0x14b894: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B894u;
    {
        const bool branch_taken_0x14b894 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B894u;
        // 0x14b898: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b894) {
            ctx->pc = 0x14B8B8u;
            goto label_14b8b8;
        }
    }
    ctx->pc = 0x14B89Cu;
    // 0x14b89c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14b89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8a0: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14b8a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b8a8: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B8A8u;
    SET_GPR_U32(ctx, 31, 0x14B8B0u);
    ctx->pc = 0x14B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8A8u;
    // 0x14b8ac: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B8A8u, 0x14B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8B0u;
label_14b8b0:
    // 0x14b8b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14B8B0u;
    {
        const bool branch_taken_0x14b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8B0u;
        // 0x14b8b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8b0) {
            ctx->pc = 0x14B910u;
            goto label_14b910;
        }
    }
    ctx->pc = 0x14B8B8u;
label_14b8b8:
    // 0x14b8b8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14b8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8bc: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14b8c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b8c4: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B8C4u;
    SET_GPR_U32(ctx, 31, 0x14B8CCu);
    ctx->pc = 0x14B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8C4u;
    // 0x14b8c8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B8C4u, 0x14B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8CCu;
label_14b8cc:
    // 0x14b8cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14B8CCu;
    {
        const bool branch_taken_0x14b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8CCu;
        // 0x14b8d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8cc) {
            ctx->pc = 0x14B910u;
            goto label_14b910;
        }
    }
    ctx->pc = 0x14B8D4u;
label_14b8d4:
    // 0x14b8d4: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B8D4u;
    {
        const bool branch_taken_0x14b8d4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8D4u;
        // 0x14b8d8: 0x848602ac  lh          $a2, 0x2AC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8d4) {
            ctx->pc = 0x14B8F8u;
            goto label_14b8f8;
        }
    }
    ctx->pc = 0x14B8DCu;
    // 0x14b8dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14b8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x14b8e4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14b8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8e8: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x14B8E8u;
    SET_GPR_U32(ctx, 31, 0x14B8F0u);
    ctx->pc = 0x14B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8E8u;
    // 0x14b8ec: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x14B8E8u, 0x14B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8F0u;
label_14b8f0:
    // 0x14b8f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B8F0u;
    {
        const bool branch_taken_0x14b8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B8F0u;
        // 0x14b8f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8f0) {
            ctx->pc = 0x14B910u;
            goto label_14b910;
        }
    }
    ctx->pc = 0x14B8F8u;
label_14b8f8:
    // 0x14b8f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14b8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8fc: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x14b900: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14b900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b904: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B904u;
    SET_GPR_U32(ctx, 31, 0x14B90Cu);
    ctx->pc = 0x14B908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B904u;
    // 0x14b908: 0x24844c80  addiu       $a0, $a0, 0x4C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B904u, 0x14B90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B90Cu;
label_14b90c:
    // 0x14b90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b910:
    // 0x14b910: 0x3e00008  jr          $ra
    ctx->pc = 0x14B910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B910u;
        // 0x14b914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B918u;
}
