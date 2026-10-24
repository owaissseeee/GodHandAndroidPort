#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_00799CB0
// Address: 0x799cb0 - 0x799d28
void func_00799CB0_0x799cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799CB0_0x799cb0");
#endif

    switch (ctx->pc) {
        case 0x799ce0u: goto label_799ce0;
        case 0x799cecu: goto label_799cec;
        case 0x799cf8u: goto label_799cf8;
        case 0x799d08u: goto label_799d08;
        case 0x799d18u: goto label_799d18;
        default: break;
    }

    ctx->pc = 0x799cb0u;

    // 0x799cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799cb4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799cb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799cbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799cc0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x799cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x799cc8: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x799ccc: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799cd0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cd8: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799CD8u;
    SET_GPR_U32(ctx, 31, 0x799CE0u);
    ctx->pc = 0x799CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CD8u;
    // 0x799cdc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799CD8u, 0x799CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799ce0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799ce4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799CE4u;
    SET_GPR_U32(ctx, 31, 0x799CECu);
    ctx->pc = 0x799CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CE4u;
    // 0x799ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799CE4u, 0x799CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CECu;
label_799cec:
    // 0x799cec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799cf0: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799CF0u;
    SET_GPR_U32(ctx, 31, 0x799CF8u);
    ctx->pc = 0x799CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CF0u;
    // 0x799cf4: 0x240503e3  addiu       $a1, $zero, 0x3E3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 995));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799CF0u, 0x799CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF8u;
label_799cf8:
    // 0x799cf8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799cfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799d00: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799D00u;
    SET_GPR_U32(ctx, 31, 0x799D08u);
    ctx->pc = 0x799D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D00u;
    // 0x799d04: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799D00u, 0x799D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D08u;
label_799d08:
    // 0x799d08: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799d0c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799d10: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D10u;
    SET_GPR_U32(ctx, 31, 0x799D18u);
    ctx->pc = 0x799D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D10u;
    // 0x799d14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D10u, 0x799D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D18u;
label_799d18:
    // 0x799d18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799d20: 0x3e00008  jr          $ra
    ctx->pc = 0x799D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D20u;
        // 0x799d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D28u;
}
} // namespace gh_r701
