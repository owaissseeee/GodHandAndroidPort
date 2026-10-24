#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: iconDataLoad__7cMcSave
// Address: 0x7c3c40 - 0x7c3d00
void iconDataLoad__7cMcSave_0x7c3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iconDataLoad__7cMcSave_0x7c3c40");
#endif

    switch (ctx->pc) {
        case 0x7c3c88u: goto label_7c3c88;
        case 0x7c3c90u: goto label_7c3c90;
        case 0x7c3c98u: goto label_7c3c98;
        case 0x7c3ca4u: goto label_7c3ca4;
        default: break;
    }

    ctx->pc = 0x7c3c40u;

    // 0x7c3c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7c3c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c3c44: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c3c48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c3c4c: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x7c3c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x7c3c50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c3c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c3c54: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x7c3c54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x7c3c58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c3c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3c5c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7c3c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7c3c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3c64: 0x24a50b80  addiu       $a1, $a1, 0xB80
    ctx->pc = 0x7c3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2944));
    // 0x7c3c68: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x7c3c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x7c3c6c: 0x26043f20  addiu       $a0, $s0, 0x3F20
    ctx->pc = 0x7c3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x7c3c70: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x7c3c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x7c3c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c3c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3c78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7c3c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3c7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7c3c7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3c80: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x7C3C80u;
    SET_GPR_U32(ctx, 31, 0x7C3C88u);
    ctx->pc = 0x7C3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3C80u;
    // 0x7c3c84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x7C3C80u, 0x7C3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3C88u;
label_7c3c88:
    // 0x7c3c88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C3C88u;
    {
        const bool branch_taken_0x7c3c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3C88u;
        // 0x7c3c8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3c88) {
            ctx->pc = 0x7C3C98u;
            goto label_7c3c98;
        }
    }
    ctx->pc = 0x7C3C90u;
label_7c3c90:
    // 0x7c3c90: 0xc1f22ca  jal         func_7C8B28
    ctx->pc = 0x7C3C90u;
    SET_GPR_U32(ctx, 31, 0x7C3C98u);
    ctx->pc = 0x7C3C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3C90u;
    // 0x7c3c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B28u, 0x7C3C90u, 0x7C3C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3C98u;
label_7c3c98:
    // 0x7c3c98: 0x26043f20  addiu       $a0, $s0, 0x3F20
    ctx->pc = 0x7c3c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16160));
    // 0x7c3c9c: 0xc080426  jal         func_201098
    ctx->pc = 0x7C3C9Cu;
    SET_GPR_U32(ctx, 31, 0x7C3CA4u);
    ctx->pc = 0x7C3CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3C9Cu;
    // 0x7c3ca0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x7C3C9Cu, 0x7C3CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3CA4u;
label_7c3ca4:
    // 0x7c3ca4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C3CA4u;
    {
        const bool branch_taken_0x7c3ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3CA4u;
        // 0x7c3ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3ca4) {
            ctx->pc = 0x7C3C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c3c90;
        }
    }
    ctx->pc = 0x7C3CACu;
    // 0x7c3cac: 0x8e260100  lw          $a2, 0x100($s1)
    ctx->pc = 0x7c3cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x7c3cb0: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x7C3CB0u;
    {
        const bool branch_taken_0x7c3cb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3CB0u;
        // 0x7c3cb4: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3cb0) {
            ctx->pc = 0x7C3CE0u;
            goto label_7c3ce0;
        }
    }
    ctx->pc = 0x7C3CB8u;
    // 0x7c3cb8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x7c3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7c3cbc: 0x34a58ea8  ori         $a1, $a1, 0x8EA8
    ctx->pc = 0x7c3cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36520);
    // 0x7c3cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c3cc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x7c3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x7c3cc8: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x7c3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
    // 0x7c3ccc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x7c3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x7c3cd0: 0xae250110  sw          $a1, 0x110($s1)
    ctx->pc = 0x7c3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 5));
    // 0x7c3cd4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x7c3cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x7c3cd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7C3CD8u;
    {
        const bool branch_taken_0x7c3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3CD8u;
        // 0x7c3cdc: 0xae240114  sw          $a0, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3cd8) {
            ctx->pc = 0x7C3CE4u;
            goto label_7c3ce4;
        }
    }
    ctx->pc = 0x7C3CE0u;
label_7c3ce0:
    // 0x7c3ce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7c3ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7c3ce4:
    // 0x7c3ce4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c3ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c3ce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c3ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c3cec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7c3cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c3cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3CF4u;
        // 0x7c3cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3CFCu;
    // 0x7c3cfc: 0x0  nop
    ctx->pc = 0x7c3cfcu;
    // NOP
    ctx->pc = 0x7c3d00u;
}
} // namespace gh_mcport
