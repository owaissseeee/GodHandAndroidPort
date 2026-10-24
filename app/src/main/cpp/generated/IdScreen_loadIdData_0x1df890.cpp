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

// Function: IdScreen_loadIdData
// Address: 0x1df890 - 0x1df940
void IdScreen_loadIdData_0x1df890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdScreen_loadIdData_0x1df890");
#endif

    switch (ctx->pc) {
        case 0x1df8c0u: goto label_1df8c0;
        case 0x1df8f0u: goto label_1df8f0;
        case 0x1df900u: goto label_1df900;
        case 0x1df918u: goto label_1df918;
        case 0x1df920u: goto label_1df920;
        case 0x1df928u: goto label_1df928;
        default: break;
    }

    ctx->pc = 0x1df890u;

    // 0x1df890: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1df890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1df894: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1df894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1df898: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1df898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1df89c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1df89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1df8a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1df8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df8a8: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1df8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1df8ac: 0x24c6b6e8  addiu       $a2, $a2, -0x4918
    ctx->pc = 0x1df8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948584));
    // 0x1df8b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1df8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1df8b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1df8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1df8b8: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1DF8B8u;
    SET_GPR_U32(ctx, 31, 0x1DF8C0u);
    ctx->pc = 0x1DF8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8B8u;
    // 0x1df8bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1DF8B8u, 0x1DF8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8C0u;
label_1df8c0:
    // 0x1df8c0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1df8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1df8c4: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1df8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1df8c8: 0x24703f20  addiu       $s0, $v1, 0x3F20
    ctx->pc = 0x1df8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
    // 0x1df8cc: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1df8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1df8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1df8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8d8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1df8dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1df8dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1df8e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1df8e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8e8: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1DF8E8u;
    SET_GPR_U32(ctx, 31, 0x1DF8F0u);
    ctx->pc = 0x1DF8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8E8u;
    // 0x1df8ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1DF8E8u, 0x1DF8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8F0u;
label_1df8f0:
    // 0x1df8f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DF8F0u;
    {
        const bool branch_taken_0x1df8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8F0u;
        // 0x1df8f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8f0) {
            ctx->pc = 0x1DF928u;
            goto label_1df928;
        }
    }
    ctx->pc = 0x1DF8F8u;
    // 0x1df8f8: 0xc080458  jal         func_201160
    ctx->pc = 0x1DF8F8u;
    SET_GPR_U32(ctx, 31, 0x1DF900u);
    ctx->pc = 0x1DF8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8F8u;
    // 0x1df8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1DF8F8u, 0x1DF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF900u;
label_1df900:
    // 0x1df900: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1df900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1df904: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1df904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df908: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1df908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1df90c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1df90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1df910: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1DF910u;
    SET_GPR_U32(ctx, 31, 0x1DF918u);
    ctx->pc = 0x1DF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF910u;
    // 0x1df914: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1DF910u, 0x1DF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF918u;
label_1df918:
    // 0x1df918: 0xc077436  jal         func_1DD0D8
    ctx->pc = 0x1DF918u;
    SET_GPR_U32(ctx, 31, 0x1DF920u);
    ctx->pc = 0x1DF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF918u;
    // 0x1df91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0D8u, 0x1DF918u, 0x1DF920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF920u;
label_1df920:
    // 0x1df920: 0xc077b38  jal         func_1DECE0
    ctx->pc = 0x1DF920u;
    SET_GPR_U32(ctx, 31, 0x1DF928u);
    ctx->pc = 0x1DF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF920u;
    // 0x1df924: 0x262425b0  addiu       $a0, $s1, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DECE0u, 0x1DF920u, 0x1DF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF928u;
label_1df928:
    // 0x1df928: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1df928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df92c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1df92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df930: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1df930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df934: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF934u;
        // 0x1df938: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF93Cu;
    // 0x1df93c: 0x0  nop
    ctx->pc = 0x1df93cu;
    // NOP
    ctx->pc = 0x1df940u;
}
