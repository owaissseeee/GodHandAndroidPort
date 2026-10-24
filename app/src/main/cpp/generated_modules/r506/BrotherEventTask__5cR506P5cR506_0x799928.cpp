#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: BrotherEventTask__5cR506P5cR506
// Address: 0x799928 - 0x7999d8
void BrotherEventTask__5cR506P5cR506_0x799928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrotherEventTask__5cR506P5cR506_0x799928");
#endif

    switch (ctx->pc) {
        case 0x79995cu: goto label_79995c;
        case 0x799968u: goto label_799968;
        case 0x799978u: goto label_799978;
        case 0x799984u: goto label_799984;
        case 0x79998cu: goto label_79998c;
        case 0x79999cu: goto label_79999c;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999c0u: goto label_7999c0;
        default: break;
    }

    ctx->pc = 0x799928u;

    // 0x799928: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79992c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799934: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799938: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79993c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799940: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799944: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79994c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799950: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799950u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799954: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799954u;
    SET_GPR_U32(ctx, 31, 0x79995Cu);
    ctx->pc = 0x799958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799954u;
    // 0x799958: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799954u, 0x79995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799960: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x799960u;
    SET_GPR_U32(ctx, 31, 0x799968u);
    ctx->pc = 0x799964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799960u;
    // 0x799964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x799960u, 0x799968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x799968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79996c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79996Cu;
    {
        const bool branch_taken_0x79996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79996Cu;
        // 0x799970: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79996c) {
            ctx->pc = 0x799984u;
            goto label_799984;
        }
    }
    ctx->pc = 0x799974u;
    // 0x799974: 0x0  nop
    ctx->pc = 0x799974u;
    // NOP
label_799978:
    // 0x799978: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79997c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79997Cu;
    SET_GPR_U32(ctx, 31, 0x799984u);
    ctx->pc = 0x799980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79997Cu;
    // 0x799980: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79997Cu, 0x799984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799984u;
label_799984:
    // 0x799984: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79998Cu;
    {
        const bool branch_taken_0x79998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79998c) {
            ctx->pc = 0x799978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799978;
        }
    }
    ctx->pc = 0x799994u;
    // 0x799994: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799994u;
    SET_GPR_U32(ctx, 31, 0x79999Cu);
    ctx->pc = 0x799998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799994u;
    // 0x799998: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799994u, 0x79999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79999Cu;
label_79999c:
    // 0x79999c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79999cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999a0: 0xc1e6676  jal         func_7999D8
    ctx->pc = 0x7999A0u;
    SET_GPR_U32(ctx, 31, 0x7999A8u);
    ctx->pc = 0x7999A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999A0u;
    // 0x7999a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7999D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7999D8u, 0x7999A0u, 0x7999A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A8u;
label_7999a8:
    // 0x7999a8: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x7999ac: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7999ACu;
    SET_GPR_U32(ctx, 31, 0x7999B4u);
    ctx->pc = 0x7999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999ACu;
    // 0x7999b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7999ACu, 0x7999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999B4u;
label_7999b4:
    // 0x7999b4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7999b8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7999B8u;
    SET_GPR_U32(ctx, 31, 0x7999C0u);
    ctx->pc = 0x7999BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999B8u;
    // 0x7999bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7999B8u, 0x7999C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999C0u;
label_7999c0:
    // 0x7999c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7999c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7999c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7999c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7999c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7999c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7999cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7999d0: 0x3e00008  jr          $ra
    ctx->pc = 0x7999D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7999D8u;
}
} // namespace gh_r506
