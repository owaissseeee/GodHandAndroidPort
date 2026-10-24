#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r500_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r500
{
// Function: __5cR500
// Address: 0x799280 - 0x799318
void ps2___5cR500_0x799280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR500_0x799280");
#endif

    switch (ctx->pc) {
        case 0x7992b4u: goto label_7992b4;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992ecu: goto label_7992ec;
        case 0x799300u: goto label_799300;
        default: break;
    }

    ctx->pc = 0x799280u;

    // 0x799280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799284: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x799288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79928c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x799290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799294: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799298: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x79929c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992a0: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x7992a4: 0x240503b1  addiu       $a1, $zero, 0x3B1
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 945));
    // 0x7992a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992ac: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x7992b8: 0x8c628658  lw          $v0, -0x79A8($v1)
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7992c0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992D8u;
            goto label_7992d8;
        }
    }
    ctx->pc = 0x7992C8u;
    // 0x7992c8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7992cc: 0x24a59320  addiu       $a1, $a1, -0x6CE0
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939424));
    // 0x7992d0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992D0u;
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->pc = 0x7992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992D0u, 0x7992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7992dc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992e0: 0x24a59578  addiu       $a1, $a1, -0x6A88
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
    // 0x7992e4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7992f0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992f4: 0x24a59478  addiu       $a1, $a1, -0x6B88
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939768));
    // 0x7992f8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992F8u;
    SET_GPR_U32(ctx, 31, 0x799300u);
    ctx->pc = 0x7992FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F8u;
    // 0x7992fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992F8u, 0x799300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799300u;
label_799300:
    // 0x799300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79930c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799310: 0x3e00008  jr          $ra
    ctx->pc = 0x799310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799310u;
        // 0x799314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799318u;
}
} // namespace gh_r500
