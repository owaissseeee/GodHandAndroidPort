#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079B0F0
// Address: 0x79b0f0 - 0x79b160
void func_0079B0F0_0x79b0f0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B0F0_0x79b0f0");
#endif

    if (__builtin_expect(ctx->pc != 0x79b0f0u, 0)) {
        switch (ctx->pc) {
            case 0x79b118u: goto label_79b118;
            case 0x79b124u: goto label_79b124;
            case 0x79b12cu: goto label_79b12c;
            case 0x79b140u: goto label_79b140;
            case 0x79b14cu: goto label_79b14c;
            default: break;
        }
    }



    // 0x79b0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b0f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79b0f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b0fc: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b104: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79b104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b108: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b10c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B10Cu;
    {
        const bool branch_taken_0x79b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B10Cu;
        // 0x79b110: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b10c) {
            ctx->pc = 0x79B124u;
            goto label_79b124;
        }
    }
    // 0x79b114: 0x0  nop
    // NOP
label_79b118:
    // 0x79b118: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b11c: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79B124u);
    ctx->pc = 0x79B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B11Cu;
    // 0x79b120: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B11Cu, 0x79B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79b124:
    // 0x79b124: 0xc0a5772  jal         func_295DC8
    SET_GPR_U32(ctx, 31, 0x79B12Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B124u;
    // 0x79b128: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cEmWrap_GetVital_0x295dc8, 0x295DC8u, 0x79B12Cu)) {
        return;
    }
label_79b12c:
    // 0x79b12c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B12Cu;
    {
        const bool branch_taken_0x79b12c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B12Cu;
        // 0x79b130: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b12c) {
            ctx->pc = 0x79B118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b118;
        }
    }
    // 0x79b134: 0x26240008  addiu       $a0, $s1, 0x8
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x79b138: 0xc0b038a  jal         func_2C0E28
    SET_GPR_U32(ctx, 31, 0x79B140u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B138u;
    // 0x79b13c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSceAtUnit_SetDisable_0x2c0e28, 0x2C0E28u, 0x79B140u)) {
        return;
    }
label_79b140:
    // 0x79b140: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b144: 0xc0b5692  jal         func_2D5A48
    SET_GPR_U32(ctx, 31, 0x79B14Cu);
    ctx->pc = 0x79B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B144u;
    // 0x79b148: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->callDirectStatic(rdram, ctx, &cTaskWork_exit_0x2d5a48, 0x2D5A48u, 0x79B14Cu)) {
        return;
    }
label_79b14c:
    // 0x79b14c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b158: 0x3e00008  jr          $ra
    ctx->pc = 0x79B158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B158u;
        // 0x79b15c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B160u;
}
} // namespace gh_r604
