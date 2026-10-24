#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: getEmNum__5cR802
// Address: 0x7992f8 - 0x7993a0
void getEmNum__5cR802_0x7992f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__5cR802_0x7992f8");
#endif

    switch (ctx->pc) {
        case 0x799320u: goto label_799320;
        case 0x799370u: goto label_799370;
        default: break;
    }

    ctx->pc = 0x7992f8u;

    // 0x7992f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7992fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799300: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799308: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79930c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799310: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799310u;
    {
        const bool branch_taken_0x799310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799310u;
        // 0x799314: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799310) {
            ctx->pc = 0x799388u;
            goto label_799388;
        }
    }
    ctx->pc = 0x799318u;
    // 0x799318: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79931c: 0x0  nop
    ctx->pc = 0x79931cu;
    // NOP
label_799320:
    // 0x799320: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799320) {
            ctx->pc = 0x799324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799320u;
            // 0x799324: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799380u;
            goto label_799380;
        }
    }
    ctx->pc = 0x799328u;
    // 0x799328: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79932c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799330) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799338u;
    // 0x799338: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79933c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799340:
    // 0x799340: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799344: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799344u;
    {
        const bool branch_taken_0x799344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799344) {
            ctx->pc = 0x79937Cu;
            goto label_79937c;
        }
    }
    ctx->pc = 0x79934Cu;
    // 0x79934c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79934Cu;
    {
        const bool branch_taken_0x79934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79934c) {
            ctx->pc = 0x79935Cu;
            goto label_79935c;
        }
    }
    ctx->pc = 0x799354u;
    // 0x799354: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799358: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79935c:
    // 0x79935c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799360: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799360u;
    {
        const bool branch_taken_0x799360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799360) {
            ctx->pc = 0x799364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799360u;
            // 0x799364: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799380u;
            goto label_799380;
        }
    }
    ctx->pc = 0x799368u;
    // 0x799368: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799374: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799378: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x799378u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79937c:
    // 0x79937c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_799380:
    // 0x799380: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x799380u;
    {
        const bool branch_taken_0x799380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799380) {
            ctx->pc = 0x799384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799380u;
            // 0x799384: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799320;
        }
    }
    ctx->pc = 0x799388u;
label_799388:
    // 0x799388: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79938c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79938cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799398: 0x3e00008  jr          $ra
    ctx->pc = 0x799398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799398u;
        // 0x79939c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993A0u;
}
} // namespace gh_r802
