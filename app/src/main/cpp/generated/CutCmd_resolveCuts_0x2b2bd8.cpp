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

// Function: CutCmd_resolveCuts
// Address: 0x2b2bd8 - 0x2b2c98
void CutCmd_resolveCuts_0x2b2bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CutCmd_resolveCuts_0x2b2bd8");
#endif

    switch (ctx->pc) {
        case 0x2b2c2cu: goto label_2b2c2c;
        case 0x2b2c58u: goto label_2b2c58;
        case 0x2b2c74u: goto label_2b2c74;
        case 0x2b2c7cu: goto label_2b2c7c;
        default: break;
    }

    ctx->pc = 0x2b2bd8u;

    // 0x2b2bd8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b2bdc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2be0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2b2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b2be4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2b2be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2b2be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2bec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bf4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b2bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b2bf8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2BF8u;
    {
        const bool branch_taken_0x2b2bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BF8u;
        // 0x2b2bfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bf8) {
            ctx->pc = 0x2B2C08u;
            goto label_2b2c08;
        }
    }
    ctx->pc = 0x2B2C00u;
    // 0x2b2c00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B2C00u;
    {
        const bool branch_taken_0x2b2c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C00u;
        // 0x2b2c04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c00) {
            ctx->pc = 0x2B2C84u;
            goto label_2b2c84;
        }
    }
    ctx->pc = 0x2B2C08u;
label_2b2c08:
    // 0x2b2c08: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x2b2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2b2c0c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2b2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b2c10: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2b2c10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b2c14: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2C14u;
    {
        const bool branch_taken_0x2b2c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2c14) {
            ctx->pc = 0x2B2C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C14u;
            // 0x2b2c18: 0x90820002  lbu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C34u;
            goto label_2b2c34;
        }
    }
    ctx->pc = 0x2B2C1Cu;
    // 0x2b2c1c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2b2c20: 0x24446af0  addiu       $a0, $v0, 0x6AF0
    ctx->pc = 0x2b2c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x2b2c24: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B2C24u;
    SET_GPR_U32(ctx, 31, 0x2B2C2Cu);
    ctx->pc = 0x2B2C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C24u;
    // 0x2b2c28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B2C24u, 0x2B2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C2Cu;
label_2b2c2c:
    // 0x2b2c2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2C2Cu;
    {
        const bool branch_taken_0x2b2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C2Cu;
        // 0x2b2c30: 0xa2220044  sb          $v0, 0x44($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c2c) {
            ctx->pc = 0x2B2C3Cu;
            goto label_2b2c3c;
        }
    }
    ctx->pc = 0x2B2C34u;
label_2b2c34:
    // 0x2b2c34: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2b2c34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2b2c38: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x2b2c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
label_2b2c3c:
    // 0x2b2c3c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b2c40: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x2b2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2b2c44: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x2b2c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b2c48: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2C48u;
    {
        const bool branch_taken_0x2b2c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2c48) {
            ctx->pc = 0x2B2C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C48u;
            // 0x2b2c4c: 0x90820004  lbu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C60u;
            goto label_2b2c60;
        }
    }
    ctx->pc = 0x2B2C50u;
    // 0x2b2c50: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B2C50u;
    SET_GPR_U32(ctx, 31, 0x2B2C58u);
    ctx->pc = 0x2B2C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C50u;
    // 0x2b2c54: 0x26046af0  addiu       $a0, $s0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B2C50u, 0x2B2C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C58u;
label_2b2c58:
    // 0x2b2c58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2C58u;
    {
        const bool branch_taken_0x2b2c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C58u;
        // 0x2b2c5c: 0xa222004c  sb          $v0, 0x4C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c58) {
            ctx->pc = 0x2B2C64u;
            goto label_2b2c64;
        }
    }
    ctx->pc = 0x2B2C60u;
label_2b2c60:
    // 0x2b2c60: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x2b2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
label_2b2c64:
    // 0x2b2c64: 0x26106af0  addiu       $s0, $s0, 0x6AF0
    ctx->pc = 0x2b2c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27376));
    // 0x2b2c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c6c: 0xc0a5eea  jal         func_297BA8
    ctx->pc = 0x2B2C6Cu;
    SET_GPR_U32(ctx, 31, 0x2B2C74u);
    ctx->pc = 0x2B2C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C6Cu;
    // 0x2b2c70: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x297BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297BA8u, 0x2B2C6Cu, 0x2B2C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C74u;
label_2b2c74:
    // 0x2b2c74: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B2C74u;
    SET_GPR_U32(ctx, 31, 0x2B2C7Cu);
    ctx->pc = 0x2B2C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C74u;
    // 0x2b2c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B2C74u, 0x2B2C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C7Cu;
label_2b2c7c:
    // 0x2b2c7c: 0x92230044  lbu         $v1, 0x44($s1)
    ctx->pc = 0x2b2c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2b2c80: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b2c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b2c84:
    // 0x2b2c84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C90u;
        // 0x2b2c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2C98u;
}
