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

// Function: CustomIDOwner_setColumnNumber
// Address: 0x1f4ff0 - 0x1f5098
void CustomIDOwner_setColumnNumber_0x1f4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDOwner_setColumnNumber_0x1f4ff0");
#endif

    switch (ctx->pc) {
        case 0x1f505cu: goto label_1f505c;
        case 0x1f5068u: goto label_1f5068;
        case 0x1f5078u: goto label_1f5078;
        default: break;
    }

    ctx->pc = 0x1f4ff0u;

    // 0x1f4ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f4ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f4ff4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f4ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f4ff8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f4ffc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1f4ffcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f5000: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f5000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f5004: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f5004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5008: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f5008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f500c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f500cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5010: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f5014: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f5014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5018: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1f5018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f501c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F501Cu;
    {
        const bool branch_taken_0x1f501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F501Cu;
        // 0x1f5020: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f501c) {
            ctx->pc = 0x1F5078u;
            goto label_1f5078;
        }
    }
    ctx->pc = 0x1F5024u;
    // 0x1f5024: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x1f5024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f5028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F5028u;
    {
        const bool branch_taken_0x1f5028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5028u;
        // 0x1f502c: 0x2405ffef  addiu       $a1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5028) {
            ctx->pc = 0x1F5040u;
            goto label_1f5040;
        }
    }
    ctx->pc = 0x1F5030u;
    // 0x1f5030: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1f5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1f5034: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x1f5034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x1f5038: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x1f5038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1f503c: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x1f503cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1f5040:
    // 0x1f5040: 0x26310026  addiu       $s1, $s1, 0x26
    ctx->pc = 0x1f5040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x1f5044: 0x2410007c  addiu       $s0, $zero, 0x7C
    ctx->pc = 0x1f5044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1f5048: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x1f5048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1f504c: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1f504cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1f5050: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x1f5050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1f5054: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1F5054u;
    SET_GPR_U32(ctx, 31, 0x1F505Cu);
    ctx->pc = 0x1F5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5054u;
    // 0x1f5058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1F5054u, 0x1F505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F505Cu;
label_1f505c:
    // 0x1f505c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5060: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1F5060u;
    SET_GPR_U32(ctx, 31, 0x1F5068u);
    ctx->pc = 0x1F5064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5060u;
    // 0x1f5064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1F5060u, 0x1F5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5068u;
label_1f5068:
    // 0x1f5068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f5068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f506c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f506cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5070: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F5070u;
    SET_GPR_U32(ctx, 31, 0x1F5078u);
    ctx->pc = 0x1F5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5070u;
    // 0x1f5074: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F5070u, 0x1F5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5078u;
label_1f5078:
    // 0x1f5078: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f5078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f507c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f507cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5080: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f5080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5084: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f5084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5088: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f5088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f508c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5090: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5090u;
        // 0x1f5094: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5098u;
}
