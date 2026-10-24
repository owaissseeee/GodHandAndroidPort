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

// Function: cObj_releaseActorData
// Address: 0x14e5d0 - 0x14e690
void cObj_releaseActorData_0x14e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObj_releaseActorData_0x14e5d0");
#endif

    switch (ctx->pc) {
        case 0x14e61cu: goto label_14e61c;
        case 0x14e634u: goto label_14e634;
        case 0x14e64cu: goto label_14e64c;
        case 0x14e664u: goto label_14e664;
        case 0x14e670u: goto label_14e670;
        default: break;
    }

    ctx->pc = 0x14e5d0u;

    // 0x14e5d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e5d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x14e5d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14e5dc: 0x2442eaf0  addiu       $v0, $v0, -0x1510
    ctx->pc = 0x14e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x14e5e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14e5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14e5e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14e5ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e5f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e5f4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x14e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x14e5f8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x14e5f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x14e5fc: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14E5FCu;
    {
        const bool branch_taken_0x14e5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5FCu;
        // 0x14e600: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5fc) {
            ctx->pc = 0x14E664u;
            goto label_14e664;
        }
    }
    ctx->pc = 0x14E604u;
    // 0x14e604: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x14e604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x14e608: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x14e608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e60c: 0x245164e0  addiu       $s1, $v0, 0x64E0
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25824));
    // 0x14e610: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e614: 0xc07fa6e  jal         func_1FE9B8
    ctx->pc = 0x14E614u;
    SET_GPR_U32(ctx, 31, 0x14E61Cu);
    ctx->pc = 0x14E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E614u;
    // 0x14e618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE9B8u, 0x14E614u, 0x14E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E61Cu;
label_14e61c:
    // 0x14e61c: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E61Cu;
    {
        const bool branch_taken_0x14e61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x14E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E61Cu;
        // 0x14e620: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e61c) {
            ctx->pc = 0x14E63Cu;
            goto label_14e63c;
        }
    }
    ctx->pc = 0x14E624u;
    // 0x14e624: 0x960502fe  lhu         $a1, 0x2FE($s0)
    ctx->pc = 0x14e624u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x14e628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e62c: 0xc07fb5e  jal         func_1FED78
    ctx->pc = 0x14E62Cu;
    SET_GPR_U32(ctx, 31, 0x14E634u);
    ctx->pc = 0x14E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E62Cu;
    // 0x14e630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FED78u, 0x14E62Cu, 0x14E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E634u;
label_14e634:
    // 0x14e634: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14E634u;
    {
        const bool branch_taken_0x14e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E634u;
        // 0x14e638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e634) {
            ctx->pc = 0x14E668u;
            goto label_14e668;
        }
    }
    ctx->pc = 0x14E63Cu;
label_14e63c:
    // 0x14e63c: 0x960502fe  lhu         $a1, 0x2FE($s0)
    ctx->pc = 0x14e63cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x14e640: 0x24510d20  addiu       $s1, $v0, 0xD20
    ctx->pc = 0x14e640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3360));
    // 0x14e644: 0xc07fa6e  jal         func_1FE9B8
    ctx->pc = 0x14E644u;
    SET_GPR_U32(ctx, 31, 0x14E64Cu);
    ctx->pc = 0x14E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E644u;
    // 0x14e648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE9B8u, 0x14E644u, 0x14E64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E64Cu;
label_14e64c:
    // 0x14e64c: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E64Cu;
    {
        const bool branch_taken_0x14e64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x14E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E64Cu;
        // 0x14e650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e64c) {
            ctx->pc = 0x14E668u;
            goto label_14e668;
        }
    }
    ctx->pc = 0x14E654u;
    // 0x14e654: 0x960502fe  lhu         $a1, 0x2FE($s0)
    ctx->pc = 0x14e654u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x14e658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e65c: 0xc07fb5e  jal         func_1FED78
    ctx->pc = 0x14E65Cu;
    SET_GPR_U32(ctx, 31, 0x14E664u);
    ctx->pc = 0x14E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E65Cu;
    // 0x14e660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FED78u, 0x14E65Cu, 0x14E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E664u;
label_14e664:
    // 0x14e664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14e668:
    // 0x14e668: 0xc0525b0  jal         func_1496C0
    ctx->pc = 0x14E668u;
    SET_GPR_U32(ctx, 31, 0x14E670u);
    ctx->pc = 0x14E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E668u;
    // 0x14e66c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1496C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1496C0u, 0x14E668u, 0x14E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14e670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e674: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14e674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e67c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14e67cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e684: 0x3e00008  jr          $ra
    ctx->pc = 0x14E684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E684u;
        // 0x14e688: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E68Cu;
    // 0x14e68c: 0x0  nop
    ctx->pc = 0x14e68cu;
    // NOP
    ctx->pc = 0x14e690u;
}
