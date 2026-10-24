#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: R405Init__Fv
// Address: 0x799228 - 0x7992c8
void R405Init__Fv_0x799228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R405Init__Fv_0x799228");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x799248u: goto label_799248;
        case 0x799254u: goto label_799254;
        case 0x79925cu: goto label_79925c;
        case 0x79929cu: goto label_79929c;
        case 0x7992b4u: goto label_7992b4;
        default: break;
    }

    ctx->pc = 0x799228u;

    // 0x799228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79922c: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x799230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0xc1e690a  jal         func_79A428
    ctx->pc = 0x799240u;
    SET_GPR_U32(ctx, 31, 0x799248u);
    ctx->pc = 0x799244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799240u;
    // 0x799244: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A428u, 0x799240u, 0x799248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799248u;
label_799248:
    // 0x799248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79924c: 0xc1e66ac  jal         func_799AB0
    ctx->pc = 0x79924Cu;
    SET_GPR_U32(ctx, 31, 0x799254u);
    ctx->pc = 0x799250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79924Cu;
    // 0x799250: 0xae02a800  sw          $v0, -0x5800($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294944768), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799AB0u, 0x79924Cu, 0x799254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799254u;
label_799254:
    // 0x799254: 0xc1e6574  jal         func_7995D0
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x8e04a800  lw          $a0, -0x5800($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944768)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995D0u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799260: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x799264: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799268: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79926c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799270u;
    {
        const bool branch_taken_0x799270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799270u;
        // 0x799274: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799270) {
            ctx->pc = 0x7992A0u;
            goto label_7992a0;
        }
    }
    ctx->pc = 0x799278u;
    // 0x799278: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79927c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x799280: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799284: 0x24e792d0  addiu       $a3, $a3, -0x6D30
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939344));
    // 0x799288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79928c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799294: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799294u;
    // 0x799298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7992a0:
    // 0x7992a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992a4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7992a8: 0x24a5a250  addiu       $a1, $a1, -0x5DB0
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943312));
    // 0x7992ac: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7992BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992BCu;
        // 0x7992c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992C4u;
    // 0x7992c4: 0x0  nop
    ctx->pc = 0x7992c4u;
    // NOP
    ctx->pc = 0x7992c8u;
}
} // namespace gh_r405
