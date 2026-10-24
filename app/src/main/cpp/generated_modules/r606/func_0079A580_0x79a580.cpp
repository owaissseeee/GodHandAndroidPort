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
// Function: func_0079A580
// Address: 0x79a580 - 0x79a5f0
void func_0079A580_0x79a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A580_0x79a580");
#endif

    switch (ctx->pc) {
        case 0x79a5a8u: goto label_79a5a8;
        case 0x79a5b4u: goto label_79a5b4;
        case 0x79a5bcu: goto label_79a5bc;
        case 0x79a5d0u: goto label_79a5d0;
        case 0x79a5dcu: goto label_79a5dc;
        default: break;
    }

    ctx->pc = 0x79a580u;

    // 0x79a580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a584: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a588: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a58c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a594: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79a594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a598: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a59c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A59Cu;
    {
        const bool branch_taken_0x79a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A59Cu;
        // 0x79a5a0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a59c) {
            ctx->pc = 0x79A5B4u;
            goto label_79a5b4;
        }
    }
    ctx->pc = 0x79A5A4u;
    // 0x79a5a4: 0x0  nop
    ctx->pc = 0x79a5a4u;
    // NOP
label_79a5a8:
    // 0x79a5a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a5ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A5ACu;
    SET_GPR_U32(ctx, 31, 0x79A5B4u);
    ctx->pc = 0x79A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5ACu;
    // 0x79a5b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A5ACu, 0x79A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5B4u;
label_79a5b4:
    // 0x79a5b4: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79A5B4u;
    SET_GPR_U32(ctx, 31, 0x79A5BCu);
    ctx->pc = 0x79A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5B4u;
    // 0x79a5b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79A5B4u, 0x79A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5BCu;
label_79a5bc:
    // 0x79a5bc: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79A5BCu;
    {
        const bool branch_taken_0x79a5bc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5BCu;
        // 0x79a5c0: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5bc) {
            ctx->pc = 0x79A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5a8;
        }
    }
    ctx->pc = 0x79A5C4u;
    // 0x79a5c4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x79a5c8: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x79A5C8u;
    SET_GPR_U32(ctx, 31, 0x79A5D0u);
    ctx->pc = 0x79A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5C8u;
    // 0x79a5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x79A5C8u, 0x79A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5D0u;
label_79a5d0:
    // 0x79a5d0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a5d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A5D4u;
    SET_GPR_U32(ctx, 31, 0x79A5DCu);
    ctx->pc = 0x79A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A5D4u;
    // 0x79a5d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A5D4u, 0x79A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5DCu;
label_79a5dc:
    // 0x79a5dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a5e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E8u;
        // 0x79a5ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5F0u;
}
} // namespace gh_r606
