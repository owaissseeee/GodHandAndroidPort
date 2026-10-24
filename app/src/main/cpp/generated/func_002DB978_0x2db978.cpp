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

// Function: func_002DB978
// Address: 0x2db978 - 0x2dba00
void func_002DB978_0x2db978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DB978_0x2db978");
#endif

    switch (ctx->pc) {
        case 0x2db98cu: goto label_2db98c;
        case 0x2db9a4u: goto label_2db9a4;
        case 0x2db9e0u: goto label_2db9e0;
        case 0x2db9f0u: goto label_2db9f0;
        default: break;
    }

    ctx->pc = 0x2db978u;

    // 0x2db978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db97c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2db97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2db980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db984: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DB984u;
    SET_GPR_U32(ctx, 31, 0x2DB98Cu);
    ctx->pc = 0x2DB988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB984u;
    // 0x2db988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DB984u, 0x2DB98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB98Cu;
label_2db98c:
    // 0x2db98c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db990: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2db994: 0x58400017  blezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB994u;
    {
        const bool branch_taken_0x2db994 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2db994) {
            ctx->pc = 0x2DB998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB994u;
            // 0x2db998: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9F4u;
            goto label_2db9f4;
        }
    }
    ctx->pc = 0x2DB99Cu;
    // 0x2db99c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DB99Cu;
    SET_GPR_U32(ctx, 31, 0x2DB9A4u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DB99Cu, 0x2DB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9A4u;
label_2db9a4:
    // 0x2db9a4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB9A4u;
    {
        const bool branch_taken_0x2db9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db9a4) {
            ctx->pc = 0x2DB9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9A4u;
            // 0x2db9a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9F4u;
            goto label_2db9f4;
        }
    }
    ctx->pc = 0x2DB9ACu;
    // 0x2db9ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2db9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2db9b0: 0x8c436a04  lw          $v1, 0x6A04($v0)
    ctx->pc = 0x2db9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2db9b4: 0x5c60000f  bgtzl       $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB9B4u;
    {
        const bool branch_taken_0x2db9b4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2db9b4) {
            ctx->pc = 0x2DB9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9B4u;
            // 0x2db9b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9F4u;
            goto label_2db9f4;
        }
    }
    ctx->pc = 0x2DB9BCu;
    // 0x2db9bc: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB9BCu;
    {
        const bool branch_taken_0x2db9bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db9bc) {
            ctx->pc = 0x2DB9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9BCu;
            // 0x2db9c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9F4u;
            goto label_2db9f4;
        }
    }
    ctx->pc = 0x2DB9C4u;
    // 0x2db9c4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x2db9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x2db9c8: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB9C8u;
    {
        const bool branch_taken_0x2db9c8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x2db9c8) {
            ctx->pc = 0x2DB9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9C8u;
            // 0x2db9cc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9F4u;
            goto label_2db9f4;
        }
    }
    ctx->pc = 0x2DB9D0u;
    // 0x2db9d0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2db9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2db9d4: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x2db9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x2db9d8: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2DB9D8u;
    SET_GPR_U32(ctx, 31, 0x2DB9E0u);
    ctx->pc = 0x2DB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9D8u;
    // 0x2db9dc: 0x2484d420  addiu       $a0, $a0, -0x2BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2DB9D8u, 0x2DB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9E0u;
label_2db9e0:
    // 0x2db9e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB9E0u;
    {
        const bool branch_taken_0x2db9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db9e0) {
            ctx->pc = 0x2DB9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB9E0u;
            // 0x2db9e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB9F4u;
            goto label_2db9f4;
        }
    }
    ctx->pc = 0x2DB9E8u;
    // 0x2db9e8: 0xc07093a  jal         func_1C24E8
    ctx->pc = 0x2DB9E8u;
    SET_GPR_U32(ctx, 31, 0x2DB9F0u);
    ctx->pc = 0x2DB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9E8u;
    // 0x2db9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C24E8u, 0x2DB9E8u, 0x2DB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9F0u;
label_2db9f0:
    // 0x2db9f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db9f4:
    // 0x2db9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9F8u;
        // 0x2db9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBA00u;
}
