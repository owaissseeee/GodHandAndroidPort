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

// Function: cOmBase_setDispModeLayers1E
// Address: 0x1855a8 - 0x185690
void cOmBase_setDispModeLayers1E_0x1855a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setDispModeLayers1E_0x1855a8");
#endif

    switch (ctx->pc) {
        case 0x1855ccu: goto label_1855cc;
        case 0x1855dcu: goto label_1855dc;
        case 0x18562cu: goto label_18562c;
        case 0x185654u: goto label_185654;
        case 0x18567cu: goto label_18567c;
        default: break;
    }

    ctx->pc = 0x1855a8u;

    // 0x1855a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1855a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1855ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1855acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1855b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1855b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1855b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1855b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1855b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1855bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1855c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1855c4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1855C4u;
    SET_GPR_U32(ctx, 31, 0x1855CCu);
    ctx->pc = 0x1855C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855C4u;
    // 0x1855c8: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1855C4u, 0x1855CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855CCu;
label_1855cc:
    // 0x1855cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1855ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1855d0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1855d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1855d4: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1855D4u;
    SET_GPR_U32(ctx, 31, 0x1855DCu);
    ctx->pc = 0x1855D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1855D4u;
    // 0x1855d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1855D4u, 0x1855DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855DCu;
label_1855dc:
    // 0x1855dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1855dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1855e0: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1855E0u;
    {
        const bool branch_taken_0x1855e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1855E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855E0u;
        // 0x1855e4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855e0) {
            ctx->pc = 0x18561Cu;
            goto label_18561c;
        }
    }
    ctx->pc = 0x1855E8u;
    // 0x1855e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1855E8u;
    {
        const bool branch_taken_0x1855e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1855e8) {
            ctx->pc = 0x1855ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1855E8u;
            // 0x1855ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185600u;
            goto label_185600;
        }
    }
    ctx->pc = 0x1855F0u;
    // 0x1855f0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1855F0u;
    {
        const bool branch_taken_0x1855f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855F0u;
        // 0x1855f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855f0) {
            ctx->pc = 0x185610u;
            goto label_185610;
        }
    }
    ctx->pc = 0x1855F8u;
    // 0x1855f8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1855F8u;
    {
        const bool branch_taken_0x1855f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1855FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1855F8u;
        // 0x1855fc: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1855f8) {
            ctx->pc = 0x185684u;
            goto label_185684;
        }
    }
    ctx->pc = 0x185600u;
label_185600:
    // 0x185600: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185600u;
    {
        const bool branch_taken_0x185600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185600u;
        // 0x185604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185600) {
            ctx->pc = 0x185634u;
            goto label_185634;
        }
    }
    ctx->pc = 0x185608u;
    // 0x185608: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185608u;
    {
        const bool branch_taken_0x185608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185608u;
        // 0x18560c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185608) {
            ctx->pc = 0x185684u;
            goto label_185684;
        }
    }
    ctx->pc = 0x185610u;
label_185610:
    // 0x185610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185614u;
    {
        const bool branch_taken_0x185614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185614u;
        // 0x185618: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185614) {
            ctx->pc = 0x185624u;
            goto label_185624;
        }
    }
    ctx->pc = 0x18561Cu;
label_18561c:
    // 0x18561c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185620: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x185620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_185624:
    // 0x185624: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185624u;
    SET_GPR_U32(ctx, 31, 0x18562Cu);
    ctx->pc = 0x185628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185624u;
    // 0x185628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185624u, 0x18562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18562Cu;
label_18562c:
    // 0x18562c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18562Cu;
    {
        const bool branch_taken_0x18562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18562Cu;
        // 0x185630: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18562c) {
            ctx->pc = 0x185680u;
            goto label_185680;
        }
    }
    ctx->pc = 0x185634u;
label_185634:
    // 0x185634: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185638: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x18563c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18563cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x185640: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185648: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18564c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x18564Cu;
    SET_GPR_U32(ctx, 31, 0x185654u);
    ctx->pc = 0x185650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18564Cu;
    // 0x185650: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x18564Cu, 0x185654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185654u;
label_185654:
    // 0x185654: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185658: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18565c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185664: 0x24060113  addiu       $a2, $zero, 0x113
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x185668: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185668u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18566c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18566cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185670: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185674: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185674u;
    SET_GPR_U32(ctx, 31, 0x18567Cu);
    ctx->pc = 0x185678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185674u;
    // 0x185678: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185674u, 0x18567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18567Cu;
label_18567c:
    // 0x18567c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185680:
    // 0x185680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185684:
    // 0x185684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185688: 0x3e00008  jr          $ra
    ctx->pc = 0x185688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185688u;
        // 0x18568c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185690u;
}
