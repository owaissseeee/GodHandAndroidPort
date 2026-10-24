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

// Function: FreeObjectSlot_2018F0
// Address: 0x2018f0 - 0x201960
void FreeObjectSlot_2018F0_0x2018f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjectSlot_2018F0_0x2018f0");
#endif

    switch (ctx->pc) {
        case 0x201914u: goto label_201914;
        case 0x201938u: goto label_201938;
        case 0x201948u: goto label_201948;
        default: break;
    }

    ctx->pc = 0x2018f0u;

    // 0x2018f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2018f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2018f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2018f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2018f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2018f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2018fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2018fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201900: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x201900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201904: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x201904u;
    {
        const bool branch_taken_0x201904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201904) {
            ctx->pc = 0x201908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201904u;
            // 0x201908: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201950u;
            goto label_201950;
        }
    }
    ctx->pc = 0x20190Cu;
    // 0x20190c: 0xc0c8e9c  jal         func_323A70
    ctx->pc = 0x20190Cu;
    SET_GPR_U32(ctx, 31, 0x201914u);
    ctx->pc = 0x201910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20190Cu;
    // 0x201910: 0x8c440084  lw          $a0, 0x84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A70u, 0x20190Cu, 0x201914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201914u;
label_201914:
    // 0x201914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x201914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201918: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x201918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x20191c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201920: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x201920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x201924: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201924u;
    {
        const bool branch_taken_0x201924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201924u;
        // 0x201928: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201924) {
            ctx->pc = 0x201938u;
            goto label_201938;
        }
    }
    ctx->pc = 0x20192Cu;
    // 0x20192c: 0x8c460078  lw          $a2, 0x78($v0)
    ctx->pc = 0x20192cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x201930: 0xc0aa592  jal         func_2A9648
    ctx->pc = 0x201930u;
    SET_GPR_U32(ctx, 31, 0x201938u);
    ctx->pc = 0x201934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201930u;
    // 0x201934: 0x8c450080  lw          $a1, 0x80($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9648u, 0x201930u, 0x201938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201938u;
label_201938:
    // 0x201938: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20193c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20193cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201940: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x201940u;
    SET_GPR_U32(ctx, 31, 0x201948u);
    ctx->pc = 0x201944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201940u;
    // 0x201944: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x201940u, 0x201948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201948u;
label_201948:
    // 0x201948: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x201948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x20194c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20194cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201950:
    // 0x201950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201954: 0x3e00008  jr          $ra
    ctx->pc = 0x201954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201954u;
        // 0x201958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20195Cu;
    // 0x20195c: 0x0  nop
    ctx->pc = 0x20195cu;
    // NOP
    ctx->pc = 0x201960u;
}
