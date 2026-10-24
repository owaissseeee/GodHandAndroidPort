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

// Function: func_00333A10
// Address: 0x333a10 - 0x333ad8
void func_00333A10_0x333a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333A10_0x333a10");
#endif

    switch (ctx->pc) {
        case 0x333a58u: goto label_333a58;
        case 0x333a80u: goto label_333a80;
        default: break;
    }

    ctx->pc = 0x333a10u;

    // 0x333a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x333a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x333a14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x333a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x333a18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x333a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333a20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x333a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x333a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x333a28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x333a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x333a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x333a30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x333a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a34: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x333a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x333a38: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x333a38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333a40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x333a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x333a44: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x333A44u;
    {
        const bool branch_taken_0x333a44 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x333A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A44u;
        // 0x333a48: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a44) {
            ctx->pc = 0x333AA8u;
            goto label_333aa8;
        }
    }
    ctx->pc = 0x333A4Cu;
    // 0x333a4c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x333a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x333a50: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x333a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a54: 0x24559dc0  addiu       $s5, $v0, -0x6240
    ctx->pc = 0x333a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942144));
label_333a58:
    // 0x333a58: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x333a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x333a5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x333a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a60: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x333a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x333a64: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x333a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x333a68: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x333a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x333a6c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x333a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x333a70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x333a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x333a74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x333a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x333a78: 0xc0ccd32  jal         func_3334C8
    ctx->pc = 0x333A78u;
    SET_GPR_U32(ctx, 31, 0x333A80u);
    ctx->pc = 0x333A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333A78u;
    // 0x333a7c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3334C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3334C8u, 0x333A78u, 0x333A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333A80u;
label_333a80:
    // 0x333a80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x333A80u;
    {
        const bool branch_taken_0x333a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A80u;
        // 0x333a84: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a80) {
            ctx->pc = 0x333AA0u;
            goto label_333aa0;
        }
    }
    ctx->pc = 0x333A88u;
    // 0x333a88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x333a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333a8c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x333a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x333a90: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x333a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x333a94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x333A94u;
    {
        const bool branch_taken_0x333a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A94u;
        // 0x333a98: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a94) {
            ctx->pc = 0x333AB0u;
            goto label_333ab0;
        }
    }
    ctx->pc = 0x333A9Cu;
    // 0x333a9c: 0x0  nop
    ctx->pc = 0x333a9cu;
    // NOP
label_333aa0:
    // 0x333aa0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x333AA0u;
    {
        const bool branch_taken_0x333aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AA0u;
        // 0x333aa4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333aa0) {
            ctx->pc = 0x333A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333a58;
        }
    }
    ctx->pc = 0x333AA8u;
label_333aa8:
    // 0x333aa8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x333aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x333aac: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x333aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_333ab0:
    // 0x333ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333ab8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333abc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x333abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333ac0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x333ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333ac4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x333ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333ac8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x333ac8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333acc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x333accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x333ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x333AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AD0u;
        // 0x333ad4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333AD8u;
}
