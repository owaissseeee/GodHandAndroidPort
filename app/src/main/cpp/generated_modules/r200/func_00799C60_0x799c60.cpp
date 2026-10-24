#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_00799C60
// Address: 0x799c60 - 0x799d10
void func_00799C60_0x799c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C60_0x799c60");
#endif

    switch (ctx->pc) {
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cecu: goto label_799cec;
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        case 0x799d08u: goto label_799d08;
        case 0x799d0cu: goto label_799d0c;
        default: break;
    }

    ctx->pc = 0x799c60u;

label_799c60:
    // 0x799c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799c64:
    // 0x799c64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x799c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799c68:
    // 0x799c68: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799c6c:
    // 0x799c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799c70:
    // 0x799c70: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
label_799c74:
    // 0x799c74: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799c74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_799c78:
    // 0x799c78: 0xc0a54b4  jal         func_2952D0
label_799c7c:
    if (ctx->pc == 0x799C7Cu) {
        ctx->pc = 0x799C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C78u;
        // 0x799c7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C80u;
        goto label_799c80;
    }
    ctx->pc = 0x799C78u;
    SET_GPR_U32(ctx, 31, 0x799C80u);
    ctx->pc = 0x799C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C78u;
    // 0x799c7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799C78u, 0x799C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C80u;
label_799c80:
    // 0x799c80: 0xc0a57ca  jal         func_295F28
label_799c84:
    if (ctx->pc == 0x799C84u) {
        ctx->pc = 0x799C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C80u;
        // 0x799c84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C88u;
        goto label_799c88;
    }
    ctx->pc = 0x799C80u;
    SET_GPR_U32(ctx, 31, 0x799C88u);
    ctx->pc = 0x799C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C80u;
    // 0x799c84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799C80u, 0x799C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C88u;
label_799c88:
    // 0x799c88: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_799c8c:
    if (ctx->pc == 0x799C8Cu) {
        ctx->pc = 0x799C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C88u;
        // 0x799c8c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C90u;
        goto label_799c90;
    }
    ctx->pc = 0x799C88u;
    {
        const bool branch_taken_0x799c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c88) {
            ctx->pc = 0x799C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C88u;
            // 0x799c8c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CD0u;
            goto label_799cd0;
        }
    }
    ctx->pc = 0x799C90u;
label_799c90:
    // 0x799c90: 0xc0b6dac  jal         func_2DB6B0
label_799c94:
    if (ctx->pc == 0x799C94u) {
        ctx->pc = 0x799C98u;
        goto label_799c98;
    }
    ctx->pc = 0x799C90u;
    SET_GPR_U32(ctx, 31, 0x799C98u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C90u, 0x799C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799c9c:
    // 0x799c9c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799ca0:
    // 0x799ca0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799ca4:
    // 0x799ca4: 0xa0f809  jalr        $a1
label_799ca8:
    if (ctx->pc == 0x799CA8u) {
        ctx->pc = 0x799CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA4u;
        // 0x799ca8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CACu;
        goto label_799cac;
    }
    ctx->pc = 0x799CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799CACu);
        ctx->pc = 0x799CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA4u;
        // 0x799ca8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CA4u, 0x799CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799CACu;
label_799cac:
    // 0x799cac: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799cb0:
    // 0x799cb0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799cb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799cb4:
    // 0x799cb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799cb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799cb8:
    // 0x799cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799cbc:
    // 0x799cbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799cc0:
    // 0x799cc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799cc4:
    // 0x799cc4: 0xc0a57e0  jal         func_295F80
label_799cc8:
    if (ctx->pc == 0x799CC8u) {
        ctx->pc = 0x799CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CC4u;
        // 0x799cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CCCu;
        goto label_799ccc;
    }
    ctx->pc = 0x799CC4u;
    SET_GPR_U32(ctx, 31, 0x799CCCu);
    ctx->pc = 0x799CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CC4u;
    // 0x799cc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799CC4u, 0x799CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CCCu;
label_799ccc:
    // 0x799ccc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799cd0:
    // 0x799cd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799cd4:
    // 0x799cd4: 0xc0b0a7e  jal         func_2C29F8
label_799cd8:
    if (ctx->pc == 0x799CD8u) {
        ctx->pc = 0x799CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD4u;
        // 0x799cd8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CDCu;
        goto label_799cdc;
    }
    ctx->pc = 0x799CD4u;
    SET_GPR_U32(ctx, 31, 0x799CDCu);
    ctx->pc = 0x799CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD4u;
    // 0x799cd8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799CD4u, 0x799CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CDCu;
label_799cdc:
    // 0x799cdc: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_799ce0:
    // 0x799ce0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_799ce4:
    // 0x799ce4: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_799ce8:
    // 0x799ce8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_799cec:
    // 0x799cec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_799cf0:
    // 0x799cf0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_799cf4:
    // 0x799cf4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x799cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_799cf8:
    // 0x799cf8: 0x8cc32f84  lw          $v1, 0x2F84($a2)
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
label_799cfc:
    // 0x799cfc: 0xc0b5692  jal         func_2D5A48
label_799d00:
    if (ctx->pc == 0x799D00u) {
        ctx->pc = 0x799D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CFCu;
        // 0x799d00: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D04u;
        goto label_799d04;
    }
    ctx->pc = 0x799CFCu;
    SET_GPR_U32(ctx, 31, 0x799D04u);
    ctx->pc = 0x799D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CFCu;
    // 0x799d00: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799CFCu, 0x799D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D04u;
label_799d04:
    // 0x799d04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799d08:
    // 0x799d08: 0x3e00008  jr          $ra
label_799d0c:
    if (ctx->pc == 0x799D0Cu) {
        ctx->pc = 0x799D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D08u;
        // 0x799d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D10u;
        goto label_fallthrough_0x799d08;
    }
    ctx->pc = 0x799D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D08u;
        // 0x799d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799d08:
    ctx->pc = 0x799D10u;
}
} // namespace gh_r200
