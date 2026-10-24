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

// Function: func_00138BE8
// Address: 0x138be8 - 0x138c70
void func_00138BE8_0x138be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00138BE8_0x138be8");
#endif

    switch (ctx->pc) {
        case 0x138c00u: goto label_138c00;
        case 0x138c0cu: goto label_138c0c;
        case 0x138c38u: goto label_138c38;
        case 0x138c40u: goto label_138c40;
        case 0x138c48u: goto label_138c48;
        case 0x138c54u: goto label_138c54;
        default: break;
    }

    ctx->pc = 0x138be8u;

    // 0x138be8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138bec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x138becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x138bf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138bf8: 0xc04e6f2  jal         func_139BC8
    ctx->pc = 0x138BF8u;
    SET_GPR_U32(ctx, 31, 0x138C00u);
    ctx->pc = 0x138BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BF8u;
    // 0x138bfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BC8u, 0x138BF8u, 0x138C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C00u;
label_138c00:
    // 0x138c00: 0x26110530  addiu       $s1, $s0, 0x530
    ctx->pc = 0x138c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x138c04: 0xc04e02a  jal         func_1380A8
    ctx->pc = 0x138C04u;
    SET_GPR_U32(ctx, 31, 0x138C0Cu);
    ctx->pc = 0x138C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C04u;
    // 0x138c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1380A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1380A8u, 0x138C04u, 0x138C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C0Cu;
label_138c0c:
    // 0x138c0c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x138c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x138c10: 0x2463d8f8  addiu       $v1, $v1, -0x2708
    ctx->pc = 0x138c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957304));
    // 0x138c14: 0xae23035c  sw          $v1, 0x35C($s1)
    ctx->pc = 0x138c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 3));
    // 0x138c18: 0xfa0008a0  sqc2        $vf0, 0x8A0($s0)
    ctx->pc = 0x138c18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138c1c: 0xfa0008b0  sqc2        $vf0, 0x8B0($s0)
    ctx->pc = 0x138c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138c20: 0xfa0008c0  sqc2        $vf0, 0x8C0($s0)
    ctx->pc = 0x138c20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138c24: 0xfa0008e0  sqc2        $vf0, 0x8E0($s0)
    ctx->pc = 0x138c24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138c28: 0xfa0008f0  sqc2        $vf0, 0x8F0($s0)
    ctx->pc = 0x138c28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138c2c: 0xfa000900  sqc2        $vf0, 0x900($s0)
    ctx->pc = 0x138c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138c30: 0xc04e634  jal         func_1398D0
    ctx->pc = 0x138C30u;
    SET_GPR_U32(ctx, 31, 0x138C38u);
    ctx->pc = 0x138C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C30u;
    // 0x138c34: 0x26040920  addiu       $a0, $s0, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1398D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1398D0u, 0x138C30u, 0x138C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C38u;
label_138c38:
    // 0x138c38: 0xc04e02a  jal         func_1380A8
    ctx->pc = 0x138C38u;
    SET_GPR_U32(ctx, 31, 0x138C40u);
    ctx->pc = 0x138C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C38u;
    // 0x138c3c: 0x26040c90  addiu       $a0, $s0, 0xC90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1380A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1380A8u, 0x138C38u, 0x138C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C40u;
label_138c40:
    // 0x138c40: 0xc04de92  jal         func_137A48
    ctx->pc = 0x138C40u;
    SET_GPR_U32(ctx, 31, 0x138C48u);
    ctx->pc = 0x138C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C40u;
    // 0x138c44: 0x26040ff4  addiu       $a0, $s0, 0xFF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4084));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A48u, 0x138C40u, 0x138C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C48u;
label_138c48:
    // 0x138c48: 0xae000ff0  sw          $zero, 0xFF0($s0)
    ctx->pc = 0x138c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4080), GPR_U32(ctx, 0));
    // 0x138c4c: 0xc04e31c  jal         func_138C70
    ctx->pc = 0x138C4Cu;
    SET_GPR_U32(ctx, 31, 0x138C54u);
    ctx->pc = 0x138C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C4Cu;
    // 0x138c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C70u, 0x138C4Cu, 0x138C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C54u;
label_138c54:
    // 0x138c54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x138c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138c5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x138c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138c64: 0x3e00008  jr          $ra
    ctx->pc = 0x138C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C64u;
        // 0x138c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138C6Cu;
    // 0x138c6c: 0x0  nop
    ctx->pc = 0x138c6cu;
    // NOP
    ctx->pc = 0x138c70u;
}
