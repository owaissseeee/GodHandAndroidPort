#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: dptofp
// Address: 0x79d7a8 - 0x79d800
void dptofp_0x79d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x79d7a8");
#endif

    switch (ctx->pc) {
        case 0x79d7c0u: goto label_79d7c0;
        case 0x79d7f0u: goto label_79d7f0;
        default: break;
    }

    ctx->pc = 0x79d7a8u;

    // 0x79d7a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79d7ac: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79d7b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79d7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d7b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79d7b8: 0xc1e730e  jal         func_79CC38
    ctx->pc = 0x79D7B8u;
    SET_GPR_U32(ctx, 31, 0x79D7C0u);
    ctx->pc = 0x79D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D7B8u;
    // 0x79d7bc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CC38u, 0x79D7B8u, 0x79D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D7C0u;
label_79d7c0:
    // 0x79d7c0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79d7c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d7c4: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x79d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x79d7c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79d7cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d7d0: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x79d7d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x79d7d4: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x79d7d4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x79d7d8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79d7dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x79d7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x79d7e0: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x79d7e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x79d7e4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x79d7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79d7e8: 0xc1e72a6  jal         func_79CA98
    ctx->pc = 0x79D7E8u;
    SET_GPR_U32(ctx, 31, 0x79D7F0u);
    ctx->pc = 0x79D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D7E8u;
    // 0x79d7ec: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CA98u, 0x79D7E8u, 0x79D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D7F0u;
label_79d7f0:
    // 0x79d7f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79d7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x79D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D7F4u;
        // 0x79d7f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D7FCu;
    // 0x79d7fc: 0x0  nop
    ctx->pc = 0x79d7fcu;
    // NOP
    ctx->pc = 0x79d800u;
}
} // namespace gh_r501
