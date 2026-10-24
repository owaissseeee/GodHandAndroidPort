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

// Function: DamageFiveObj_clearHits
// Address: 0x20f310 - 0x20f3c0
void DamageFiveObj_clearHits_0x20f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageFiveObj_clearHits_0x20f310");
#endif

    switch (ctx->pc) {
        case 0x20f33cu: goto label_20f33c;
        case 0x20f358u: goto label_20f358;
        case 0x20f374u: goto label_20f374;
        case 0x20f390u: goto label_20f390;
        case 0x20f3acu: goto label_20f3ac;
        default: break;
    }

    ctx->pc = 0x20f310u;

    // 0x20f310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f318: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20f318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20f31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f324: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x20f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x20f328: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x20f328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f32c: 0x8e030670  lw          $v1, 0x670($s0)
    ctx->pc = 0x20f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x20f330: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x20f330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x20f334: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x20F334u;
    SET_GPR_U32(ctx, 31, 0x20F33Cu);
    ctx->pc = 0x20F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F334u;
    // 0x20f338: 0x8e040670  lw          $a0, 0x670($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x20F334u, 0x20F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F33Cu;
label_20f33c:
    // 0x20f33c: 0x8e030678  lw          $v1, 0x678($s0)
    ctx->pc = 0x20f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x20f340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f344: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x20f344u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f348: 0x8e020678  lw          $v0, 0x678($s0)
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x20f34c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20f350: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x20F350u;
    SET_GPR_U32(ctx, 31, 0x20F358u);
    ctx->pc = 0x20F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F350u;
    // 0x20f354: 0x8e040678  lw          $a0, 0x678($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x20F350u, 0x20F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F358u;
label_20f358:
    // 0x20f358: 0x8e030680  lw          $v1, 0x680($s0)
    ctx->pc = 0x20f358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x20f35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f360: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x20f360u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f364: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x20f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    // 0x20f368: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20f368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20f36c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x20F36Cu;
    SET_GPR_U32(ctx, 31, 0x20F374u);
    ctx->pc = 0x20F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F36Cu;
    // 0x20f370: 0x8e040680  lw          $a0, 0x680($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x20F36Cu, 0x20F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F374u;
label_20f374:
    // 0x20f374: 0x8e030688  lw          $v1, 0x688($s0)
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x20f378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f37c: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x20f37cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f380: 0x8e020688  lw          $v0, 0x688($s0)
    ctx->pc = 0x20f380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x20f384: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20f384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20f388: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x20F388u;
    SET_GPR_U32(ctx, 31, 0x20F390u);
    ctx->pc = 0x20F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F388u;
    // 0x20f38c: 0x8e040688  lw          $a0, 0x688($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x20F388u, 0x20F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F390u;
label_20f390:
    // 0x20f390: 0x8e030690  lw          $v1, 0x690($s0)
    ctx->pc = 0x20f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x20f394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f398: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x20f398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
    // 0x20f39c: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x20f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x20f3a0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20f3a4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x20F3A4u;
    SET_GPR_U32(ctx, 31, 0x20F3ACu);
    ctx->pc = 0x20F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3A4u;
    // 0x20f3a8: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x20F3A4u, 0x20F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3ACu;
label_20f3ac:
    // 0x20f3ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20f3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x20F3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3B4u;
        // 0x20f3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F3BCu;
    // 0x20f3bc: 0x0  nop
    ctx->pc = 0x20f3bcu;
    // NOP
    ctx->pc = 0x20f3c0u;
}
