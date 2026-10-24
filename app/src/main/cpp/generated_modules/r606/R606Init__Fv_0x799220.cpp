#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r606_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r606
{
// Function: R606Init__Fv
// Address: 0x799220 - 0x799338
void R606Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R606Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x79923cu: goto label_79923c;
        case 0x799244u: goto label_799244;
        case 0x79926cu: goto label_79926c;
        case 0x799280u: goto label_799280;
        case 0x799294u: goto label_799294;
        case 0x7992a8u: goto label_7992a8;
        case 0x7992d0u: goto label_7992d0;
        case 0x7992f0u: goto label_7992f0;
        case 0x799310u: goto label_799310;
        case 0x799324u: goto label_799324;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x2404032c  addiu       $a0, $zero, 0x32C
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 812));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799234: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799234u;
    SET_GPR_U32(ctx, 31, 0x79923Cu);
    ctx->pc = 0x799238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799234u;
    // 0x799238: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799234u, 0x79923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79923Cu;
label_79923c:
    // 0x79923c: 0xc1e64d2  jal         func_799348
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0xae02a980  sw          $v0, -0x5680($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799348u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799248: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79924c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799250: 0x4800029  bltz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799250u;
    {
        const bool branch_taken_0x799250 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x799254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799250u;
        // 0x799254: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799250) {
            ctx->pc = 0x7992F8u;
            goto label_7992f8;
        }
    }
    ctx->pc = 0x799258u;
    // 0x799258: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79925c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799260: 0x24a596e8  addiu       $a1, $a1, -0x6918
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940392));
    // 0x799264: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799270: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799274: 0x24a594a8  addiu       $a1, $a1, -0x6B58
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939816));
    // 0x799278: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799278u;
    SET_GPR_U32(ctx, 31, 0x799280u);
    ctx->pc = 0x79927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799278u;
    // 0x79927c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799278u, 0x799280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799280u;
label_799280:
    // 0x799280: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799284: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799288: 0x24a59408  addiu       $a1, $a1, -0x6BF8
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939656));
    // 0x79928c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79928Cu;
    SET_GPR_U32(ctx, 31, 0x799294u);
    ctx->pc = 0x799290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79928Cu;
    // 0x799290: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79928Cu, 0x799294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799294u;
label_799294:
    // 0x799294: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799298: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79929c: 0x24a598c8  addiu       $a1, $a1, -0x6738
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940872));
    // 0x7992a0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992A0u;
    SET_GPR_U32(ctx, 31, 0x7992A8u);
    ctx->pc = 0x7992A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992A0u;
    // 0x7992a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992A0u, 0x7992A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A8u;
label_7992a8:
    // 0x7992a8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7992ac: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992b0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7992b4: 0x24e79c58  addiu       $a3, $a3, -0x63A8
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941784));
    // 0x7992b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992c8: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992C8u;
    SET_GPR_U32(ctx, 31, 0x7992D0u);
    ctx->pc = 0x7992CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C8u;
    // 0x7992cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992C8u, 0x7992D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D0u;
label_7992d0:
    // 0x7992d0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7992d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d8: 0x24e79d80  addiu       $a3, $a3, -0x6280
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942080));
    // 0x7992dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7992e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7992e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7992e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992e8: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7992E8u;
    SET_GPR_U32(ctx, 31, 0x7992F0u);
    ctx->pc = 0x7992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E8u;
    // 0x7992ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7992E8u, 0x7992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F0u;
label_7992f0:
    // 0x7992f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7992F0u;
    {
        const bool branch_taken_0x7992f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F0u;
        // 0x7992f4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f0) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7992fc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799300: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799304: 0x24a59b20  addiu       $a1, $a1, -0x64E0
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941472));
    // 0x799308: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799314: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799318: 0x24a59340  addiu       $a1, $a1, -0x6CC0
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939456));
    // 0x79931c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79932c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799330: 0x3e00008  jr          $ra
    ctx->pc = 0x799330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799338u;
}
} // namespace gh_r606
