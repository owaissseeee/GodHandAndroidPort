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
// Function: startEvent4c__5cR405
// Address: 0x7992d0 - 0x799368
void startEvent4c__5cR405_0x7992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startEvent4c__5cR405_0x7992d0");
#endif

    switch (ctx->pc) {
        case 0x799314u: goto label_799314;
        case 0x799324u: goto label_799324;
        case 0x799334u: goto label_799334;
        case 0x79934cu: goto label_79934c;
        case 0x799358u: goto label_799358;
        default: break;
    }

    ctx->pc = 0x7992d0u;

    // 0x7992d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7992d4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7992dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7992e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992e4: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x7992e8: 0x8c458658  lw          $a1, -0x79A8($v0)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992ec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7992f0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x7992f4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7992f8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7992fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799300: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x799300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x799304: 0x8cc379f0  lw          $v1, 0x79F0($a2)
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7479F0u));
    // 0x799308: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x79930c: 0xc0a52d8  jal         func_294B60
    ctx->pc = 0x79930Cu;
    SET_GPR_U32(ctx, 31, 0x799314u);
    ctx->pc = 0x799310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79930Cu;
    // 0x799310: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B60u, 0x79930Cu, 0x799314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799314u;
label_799314:
    // 0x799314: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799318: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x79931c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79931Cu;
    SET_GPR_U32(ctx, 31, 0x799324u);
    ctx->pc = 0x799320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79931Cu;
    // 0x799320: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79931Cu, 0x799324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799324u;
label_799324:
    // 0x799324: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79933c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0xc0b1144  jal         func_2C4510
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4510u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799350: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79935c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799360: 0x3e00008  jr          $ra
    ctx->pc = 0x799360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799360u;
        // 0x799364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799368u;
}
} // namespace gh_r405
