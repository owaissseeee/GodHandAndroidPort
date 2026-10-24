#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: func_007992D0
// Address: 0x7992d0 - 0x799370
void func_007992D0_0x7992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007992D0_0x7992d0");
#endif

    switch (ctx->pc) {
        case 0x799300u: goto label_799300;
        case 0x799310u: goto label_799310;
        case 0x799318u: goto label_799318;
        case 0x799324u: goto label_799324;
        case 0x79934cu: goto label_79934c;
        case 0x799358u: goto label_799358;
        default: break;
    }

    ctx->pc = 0x7992d0u;

    // 0x7992d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7992d4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7992d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7992dc: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x7992e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7992e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7992e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x7992ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7992ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7992f0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7992f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7992F4u;
    {
        const bool branch_taken_0x7992f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F4u;
        // 0x7992f8: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f4) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x7992FCu;
    // 0x7992fc: 0x0  nop
    ctx->pc = 0x7992fcu;
    // NOP
label_799300:
    // 0x799300: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799308: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799310u;
    SET_GPR_U32(ctx, 31, 0x799318u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799310u, 0x799318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799318u;
label_799318:
    // 0x799318: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79931c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x3c0142aa  lui         $at, 0x42AA
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17066 << 16));
    // 0x799328: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79932c: 0x0  nop
    ctx->pc = 0x79932cu;
    // NOP
    // 0x799330: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x799330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799334: 0x0  nop
    ctx->pc = 0x799334u;
    // NOP
    // 0x799338: 0x4500fff1  bc1f        . + 4 + (-0xF << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799338) {
            ctx->pc = 0x799300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799300;
        }
    }
    ctx->pc = 0x799340u;
    // 0x799340: 0x26259370  addiu       $a1, $s1, -0x6C90
    ctx->pc = 0x799340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939504));
    // 0x799344: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799350: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79935c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79935cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799364: 0x3e00008  jr          $ra
    ctx->pc = 0x799364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79936Cu;
    // 0x79936c: 0x0  nop
    ctx->pc = 0x79936cu;
    // NOP
    ctx->pc = 0x799370u;
}
} // namespace gh_r702
