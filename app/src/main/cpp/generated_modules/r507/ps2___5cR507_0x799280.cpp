#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r507_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r507
{
// Function: __5cR507
// Address: 0x799280 - 0x799360
void ps2___5cR507_0x799280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR507_0x799280");
#endif

    switch (ctx->pc) {
        case 0x7992a8u: goto label_7992a8;
        case 0x7992e0u: goto label_7992e0;
        case 0x7992f4u: goto label_7992f4;
        case 0x799308u: goto label_799308;
        case 0x79931cu: goto label_79931c;
        case 0x799330u: goto label_799330;
        case 0x799348u: goto label_799348;
        default: break;
    }

    ctx->pc = 0x799280u;

    // 0x799280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799284: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799288: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79928c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799290: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799298: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x79929c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7992a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992a4: 0x0  nop
    ctx->pc = 0x7992a4u;
    // NOP
label_7992a8:
    // 0x7992a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7992ac: 0xf8400010  sqc2        $vf0, 0x10($v0)
    ctx->pc = 0x7992acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7992b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7992b4: 0x0  nop
    ctx->pc = 0x7992b4u;
    // NOP
    // 0x7992b8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7992B8u;
    {
        const bool branch_taken_0x7992b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992B8u;
        // 0x7992bc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992b8) {
            ctx->pc = 0x7992A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992a8;
        }
    }
    ctx->pc = 0x7992C0u;
    // 0x7992c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x7992c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992c4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992c8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x7992c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992cc: 0x24a593a8  addiu       $a1, $a1, -0x6C58
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939560));
    // 0x7992d0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x7992d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992d8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992D8u;
    SET_GPR_U32(ctx, 31, 0x7992E0u);
    ctx->pc = 0x7992DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D8u;
    // 0x7992dc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992D8u, 0x7992E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E0u;
label_7992e0:
    // 0x7992e0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7992e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992e8: 0x24a59648  addiu       $a1, $a1, -0x69B8
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940232));
    // 0x7992ec: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992ECu;
    SET_GPR_U32(ctx, 31, 0x7992F4u);
    ctx->pc = 0x7992F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ECu;
    // 0x7992f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992ECu, 0x7992F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F4u;
label_7992f4:
    // 0x7992f4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7992f8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992fc: 0x24a598f0  addiu       $a1, $a1, -0x6710
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
    // 0x799300: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799300u;
    SET_GPR_U32(ctx, 31, 0x799308u);
    ctx->pc = 0x799304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799300u;
    // 0x799304: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799300u, 0x799308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799308u;
label_799308:
    // 0x799308: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79930c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79930cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799310: 0x24a59ca0  addiu       $a1, $a1, -0x6360
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941856));
    // 0x799314: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799314u;
    SET_GPR_U32(ctx, 31, 0x79931Cu);
    ctx->pc = 0x799318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799314u;
    // 0x799318: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799314u, 0x79931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799320: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799324: 0x24a59be8  addiu       $a1, $a1, -0x6418
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941672));
    // 0x799328: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799328u;
    SET_GPR_U32(ctx, 31, 0x799330u);
    ctx->pc = 0x79932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799328u;
    // 0x79932c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799328u, 0x799330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799330u;
label_799330:
    // 0x799330: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799334: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799338: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79933c: 0x24a59d70  addiu       $a1, $a1, -0x6290
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
    // 0x799340: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799340u;
    SET_GPR_U32(ctx, 31, 0x799348u);
    ctx->pc = 0x799344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799340u;
    // 0x799344: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799340u, 0x799348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799348u;
label_799348:
    // 0x799348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x799348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79934c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79934cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799350: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799358: 0x3e00008  jr          $ra
    ctx->pc = 0x799358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799358u;
        // 0x79935c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799360u;
}
} // namespace gh_r507
