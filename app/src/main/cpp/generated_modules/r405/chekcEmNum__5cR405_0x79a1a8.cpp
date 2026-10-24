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
// Function: chekcEmNum__5cR405
// Address: 0x79a1a8 - 0x79a250
void chekcEmNum__5cR405_0x79a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chekcEmNum__5cR405_0x79a1a8");
#endif

    switch (ctx->pc) {
        case 0x79a1d0u: goto label_79a1d0;
        case 0x79a220u: goto label_79a220;
        default: break;
    }

    ctx->pc = 0x79a1a8u;

    // 0x79a1a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a1ac: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a1b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a1b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a1b8: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79a1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a1bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1c0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A1C0u;
    {
        const bool branch_taken_0x79a1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1C0u;
        // 0x79a1c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1c0) {
            ctx->pc = 0x79A238u;
            goto label_79a238;
        }
    }
    ctx->pc = 0x79A1C8u;
    // 0x79a1c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79a1cc: 0x0  nop
    ctx->pc = 0x79a1ccu;
    // NOP
label_79a1d0:
    // 0x79a1d0: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A1D0u;
    {
        const bool branch_taken_0x79a1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a1d0) {
            ctx->pc = 0x79A1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1D0u;
            // 0x79a1d4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A230u;
            goto label_79a230;
        }
    }
    ctx->pc = 0x79A1D8u;
    // 0x79a1d8: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79a1d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79a1dc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a1dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a1e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A1E0u;
    {
        const bool branch_taken_0x79a1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E0u;
        // 0x79a1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1e0) {
            ctx->pc = 0x79A1F0u;
            goto label_79a1f0;
        }
    }
    ctx->pc = 0x79A1E8u;
    // 0x79a1e8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a1f0:
    // 0x79a1f0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79a1f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A1F4u;
    {
        const bool branch_taken_0x79a1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F4u;
        // 0x79a1f8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1f4) {
            ctx->pc = 0x79A22Cu;
            goto label_79a22c;
        }
    }
    ctx->pc = 0x79A1FCu;
    // 0x79a1fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A1FCu;
    {
        const bool branch_taken_0x79a1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1FCu;
        // 0x79a200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1fc) {
            ctx->pc = 0x79A20Cu;
            goto label_79a20c;
        }
    }
    ctx->pc = 0x79A204u;
    // 0x79a204: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a208: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a20c:
    // 0x79a20c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79a210: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A210u;
    {
        const bool branch_taken_0x79a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a210) {
            ctx->pc = 0x79A214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A210u;
            // 0x79a214: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A230u;
            goto label_79a230;
        }
    }
    ctx->pc = 0x79A218u;
    // 0x79a218: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A218u;
    SET_GPR_U32(ctx, 31, 0x79A220u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A218u, 0x79A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A220u;
label_79a220:
    // 0x79a220: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a224: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a228: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79a228u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79a22c:
    // 0x79a22c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79a230:
    // 0x79a230: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79A230u;
    {
        const bool branch_taken_0x79a230 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a230) {
            ctx->pc = 0x79A234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A230u;
            // 0x79a234: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1d0;
        }
    }
    ctx->pc = 0x79A238u;
label_79a238:
    // 0x79a238: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79a238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a23c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a240: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a248: 0x3e00008  jr          $ra
    ctx->pc = 0x79A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A248u;
        // 0x79a24c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A250u;
}
} // namespace gh_r405
