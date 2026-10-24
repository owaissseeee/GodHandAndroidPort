#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: Exec05__15cR305_Chihuahua
// Address: 0x799fa8 - 0x79a048
void Exec05__15cR305_Chihuahua_0x799fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exec05__15cR305_Chihuahua_0x799fa8");
#endif

    switch (ctx->pc) {
        case 0x799fe0u: goto label_799fe0;
        case 0x799ffcu: goto label_799ffc;
        default: break;
    }

    ctx->pc = 0x799fa8u;

    // 0x799fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fbc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799fc0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x799FC0u;
    {
        const bool branch_taken_0x799fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC0u;
        // 0x799fc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fc0) {
            ctx->pc = 0x79A00Cu;
            goto label_79a00c;
        }
    }
    ctx->pc = 0x799FC8u;
    // 0x799fc8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x799FC8u;
    {
        const bool branch_taken_0x799fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799fc8) {
            ctx->pc = 0x799FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FC8u;
            // 0x799fcc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A038u;
            goto label_79a038;
        }
    }
    ctx->pc = 0x799FD0u;
    // 0x799fd0: 0x54600019  bnel        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x799FD0u;
    {
        const bool branch_taken_0x799fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799fd0) {
            ctx->pc = 0x799FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FD0u;
            // 0x799fd4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A038u;
            goto label_79a038;
        }
    }
    ctx->pc = 0x799FD8u;
    // 0x799fd8: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799FD8u;
    SET_GPR_U32(ctx, 31, 0x799FE0u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799FD8u, 0x799FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE0u;
label_799fe0:
    // 0x799fe0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x799fe4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799fe8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x799fec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799ff0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x799ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799ff4: 0xc06c806  jal         func_1B2018
    ctx->pc = 0x799FF4u;
    SET_GPR_U32(ctx, 31, 0x799FFCu);
    ctx->pc = 0x799FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FF4u;
    // 0x799ff8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2018u, 0x799FF4u, 0x799FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79a000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a004: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79A004u;
    {
        const bool branch_taken_0x79a004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A004u;
        // 0x79a008: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a004) {
            ctx->pc = 0x79A034u;
            goto label_79a034;
        }
    }
    ctx->pc = 0x79A00Cu;
label_79a00c:
    // 0x79a00c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x79a010: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A010u;
    {
        const bool branch_taken_0x79a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A010u;
        // 0x79a014: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a010) {
            ctx->pc = 0x79A030u;
            goto label_79a030;
        }
    }
    ctx->pc = 0x79A018u;
    // 0x79a018: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x79a01c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a020: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x79a020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x79a024: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x79a024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x79a028: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A028u;
    {
        const bool branch_taken_0x79a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a028) {
            ctx->pc = 0x79A034u;
            goto label_79a034;
        }
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x79a030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_79a034:
    // 0x79a034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a038:
    // 0x79a038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a03c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A03Cu;
        // 0x79a040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A044u;
    // 0x79a044: 0x0  nop
    ctx->pc = 0x79a044u;
    // NOP
    ctx->pc = 0x79a048u;
}
} // namespace gh_r305
