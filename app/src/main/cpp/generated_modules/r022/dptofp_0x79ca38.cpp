#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: dptofp
// Address: 0x79ca38 - 0x79ca90
void dptofp_0x79ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x79ca38");
#endif

    switch (ctx->pc) {
        case 0x79ca50u: goto label_79ca50;
        case 0x79ca80u: goto label_79ca80;
        default: break;
    }

    ctx->pc = 0x79ca38u;

    // 0x79ca38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79ca3c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79ca40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79ca40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ca44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79ca48: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79CA48u;
    SET_GPR_U32(ctx, 31, 0x79CA50u);
    ctx->pc = 0x79CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CA48u;
    // 0x79ca4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79CA48u, 0x79CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CA50u;
label_79ca50:
    // 0x79ca50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79ca50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ca54: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x79ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x79ca58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79ca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79ca5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ca60: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x79ca60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x79ca64: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x79ca64u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x79ca68: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79ca6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79ca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79ca70: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x79ca70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x79ca74: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x79ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79ca78: 0xc1e6f4a  jal         func_79BD28
    ctx->pc = 0x79CA78u;
    SET_GPR_U32(ctx, 31, 0x79CA80u);
    ctx->pc = 0x79CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CA78u;
    // 0x79ca7c: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD28u, 0x79CA78u, 0x79CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CA80u;
label_79ca80:
    // 0x79ca80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79ca80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x79CA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA84u;
        // 0x79ca88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CA8Cu;
    // 0x79ca8c: 0x0  nop
    ctx->pc = 0x79ca8cu;
    // NOP
    ctx->pc = 0x79ca90u;
}
} // namespace gh_r022
