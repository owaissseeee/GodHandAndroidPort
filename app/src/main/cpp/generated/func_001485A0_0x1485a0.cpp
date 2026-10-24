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

// Function: func_001485A0
// Address: 0x1485a0 - 0x148690
void func_001485A0_0x1485a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001485A0_0x1485a0");
#endif

    switch (ctx->pc) {
        case 0x148600u: goto label_148600;
        case 0x148618u: goto label_148618;
        case 0x148628u: goto label_148628;
        case 0x148640u: goto label_148640;
        case 0x14865cu: goto label_14865c;
        case 0x148670u: goto label_148670;
        default: break;
    }

    ctx->pc = 0x1485a0u;

    // 0x1485a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1485a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1485a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1485a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1485a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1485a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1485ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1485acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1485b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1485b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1485b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1485b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1485bc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1485bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1485c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1485c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1485c4: 0xae060400  sw          $a2, 0x400($s0)
    ctx->pc = 0x1485c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 6));
    // 0x1485c8: 0xa2000384  sb          $zero, 0x384($s0)
    ctx->pc = 0x1485c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 900), (uint8_t)GPR_U32(ctx, 0));
    // 0x1485cc: 0xae120380  sw          $s2, 0x380($s0)
    ctx->pc = 0x1485ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 18));
    // 0x1485d0: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x1485d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x1485d4: 0xae050388  sw          $a1, 0x388($s0)
    ctx->pc = 0x1485d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 5));
    // 0x1485d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1485d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1485dc: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x1485dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1485e0: 0xa2030386  sb          $v1, 0x386($s0)
    ctx->pc = 0x1485e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 902), (uint8_t)GPR_U32(ctx, 3));
    // 0x1485e4: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x1485e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1485e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1485e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1485ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1485ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1485f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1485F0u;
    {
        const bool branch_taken_0x1485f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1485F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1485F0u;
        // 0x1485f4: 0x120982d  daddu       $s3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1485f0) {
            ctx->pc = 0x148620u;
            goto label_148620;
        }
    }
    ctx->pc = 0x1485F8u;
    // 0x1485f8: 0xc05544e  jal         func_155138
    ctx->pc = 0x1485F8u;
    SET_GPR_U32(ctx, 31, 0x148600u);
    ctx->pc = 0x155138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155138u, 0x1485F8u, 0x148600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148600u;
label_148600:
    // 0x148600: 0xae110408  sw          $s1, 0x408($s0)
    ctx->pc = 0x148600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 17));
    // 0x148604: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x148604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14860c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14860cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148610: 0xc0552a4  jal         func_154A90
    ctx->pc = 0x148610u;
    SET_GPR_U32(ctx, 31, 0x148618u);
    ctx->pc = 0x148614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148610u;
    // 0x148614: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A90u, 0x148610u, 0x148618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148618u;
label_148618:
    // 0x148618: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x148618u;
    {
        const bool branch_taken_0x148618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148618u;
        // 0x14861c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148618) {
            ctx->pc = 0x148644u;
            goto label_148644;
        }
    }
    ctx->pc = 0x148620u;
label_148620:
    // 0x148620: 0xc055492  jal         func_155248
    ctx->pc = 0x148620u;
    SET_GPR_U32(ctx, 31, 0x148628u);
    ctx->pc = 0x148624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148620u;
    // 0x148624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155248u, 0x148620u, 0x148628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148628u;
label_148628:
    // 0x148628: 0xae110408  sw          $s1, 0x408($s0)
    ctx->pc = 0x148628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 17));
    // 0x14862c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14862cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148638: 0xc0554d6  jal         func_155358
    ctx->pc = 0x148638u;
    SET_GPR_U32(ctx, 31, 0x148640u);
    ctx->pc = 0x14863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148638u;
    // 0x14863c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155358u, 0x148638u, 0x148640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148640u;
label_148640:
    // 0x148640: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_148644:
    // 0x148644: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x148644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x148648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148648u;
    {
        const bool branch_taken_0x148648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148648u;
        // 0x14864c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148648) {
            ctx->pc = 0x148664u;
            goto label_148664;
        }
    }
    ctx->pc = 0x148650u;
    // 0x148650: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x148650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148654: 0xc0523d4  jal         func_148F50
    ctx->pc = 0x148654u;
    SET_GPR_U32(ctx, 31, 0x14865Cu);
    ctx->pc = 0x148658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148654u;
    // 0x148658: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F50u, 0x148654u, 0x14865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14865Cu;
label_14865c:
    // 0x14865c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14865Cu;
    {
        const bool branch_taken_0x14865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14865Cu;
        // 0x148660: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14865c) {
            ctx->pc = 0x148674u;
            goto label_148674;
        }
    }
    ctx->pc = 0x148664u;
label_148664:
    // 0x148664: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x148664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148668: 0xc05242c  jal         func_1490B0
    ctx->pc = 0x148668u;
    SET_GPR_U32(ctx, 31, 0x148670u);
    ctx->pc = 0x14866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148668u;
    // 0x14866c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B0u, 0x148668u, 0x148670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148670u;
label_148670:
    // 0x148670: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x148670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_148674:
    // 0x148674: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x148674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148678: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x148678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14867c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14867cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148680: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x148680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148688: 0x3e00008  jr          $ra
    ctx->pc = 0x148688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148688u;
        // 0x14868c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148690u;
}
