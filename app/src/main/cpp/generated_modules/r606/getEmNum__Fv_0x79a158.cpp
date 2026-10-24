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
// Function: getEmNum__Fv
// Address: 0x79a158 - 0x79a220
void getEmNum__Fv_0x79a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x79a158");
#endif

    switch (ctx->pc) {
        case 0x79a188u: goto label_79a188;
        case 0x79a1d8u: goto label_79a1d8;
        default: break;
    }

    ctx->pc = 0x79a158u;

    // 0x79a158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a15c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a160: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a164: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a168: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a16c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a170: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a174: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a178: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79A178u;
    {
        const bool branch_taken_0x79a178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A178u;
        // 0x79a17c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a178) {
            ctx->pc = 0x79A200u;
            goto label_79a200;
        }
    }
    ctx->pc = 0x79A180u;
    // 0x79a180: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x79a180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x79a184: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79a188:
    // 0x79a188: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x79A188u;
    {
        const bool branch_taken_0x79a188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a188) {
            ctx->pc = 0x79A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A188u;
            // 0x79a18c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A190u;
    // 0x79a190: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79a190u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79a194: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A198u;
    {
        const bool branch_taken_0x79a198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A198u;
        // 0x79a19c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a198) {
            ctx->pc = 0x79A1A8u;
            goto label_79a1a8;
        }
    }
    ctx->pc = 0x79A1A0u;
    // 0x79a1a0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a1a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a1a8:
    // 0x79a1a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a1ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A1ACu;
    {
        const bool branch_taken_0x79a1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ACu;
        // 0x79a1b0: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1ac) {
            ctx->pc = 0x79A1F4u;
            goto label_79a1f4;
        }
    }
    ctx->pc = 0x79A1B4u;
    // 0x79a1b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A1B4u;
    {
        const bool branch_taken_0x79a1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1B4u;
        // 0x79a1b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1b4) {
            ctx->pc = 0x79A1C4u;
            goto label_79a1c4;
        }
    }
    ctx->pc = 0x79A1BCu;
    // 0x79a1bc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a1c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a1c4:
    // 0x79a1c4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a1c8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79A1C8u;
    {
        const bool branch_taken_0x79a1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1c8) {
            ctx->pc = 0x79A1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1C8u;
            // 0x79a1cc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A1D0u;
    // 0x79a1d0: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A1D0u;
    SET_GPR_U32(ctx, 31, 0x79A1D8u);
    ctx->pc = 0x79A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D0u;
    // 0x79a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A1D0u, 0x79A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1D8u;
label_79a1d8:
    // 0x79a1d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A1D8u;
    {
        const bool branch_taken_0x79a1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1d8) {
            ctx->pc = 0x79A1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1D8u;
            // 0x79a1dc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A1E0u;
    // 0x79a1e0: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79a1e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79a1e4: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A1E4u;
    {
        const bool branch_taken_0x79a1e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E4u;
        // 0x79a1e8: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1e4) {
            ctx->pc = 0x79A1F4u;
            goto label_79a1f4;
        }
    }
    ctx->pc = 0x79A1ECu;
    // 0x79a1ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a1f0: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x79a1f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_79a1f4:
    // 0x79a1f4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79a1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79a1f8:
    // 0x79a1f8: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79A1F8u;
    {
        const bool branch_taken_0x79a1f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1f8) {
            ctx->pc = 0x79A1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1F8u;
            // 0x79a1fc: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a188;
        }
    }
    ctx->pc = 0x79A200u;
label_79a200:
    // 0x79a200: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79a200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a204: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a208: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a210: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a218: 0x3e00008  jr          $ra
    ctx->pc = 0x79A218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A218u;
        // 0x79a21c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A220u;
}
} // namespace gh_r606
