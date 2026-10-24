#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B0B0
// Address: 0x79b0b0 - 0x79b158
void func_0079B0B0_0x79b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B0B0_0x79b0b0");
#endif

    switch (ctx->pc) {
        case 0x79b0f0u: goto label_79b0f0;
        case 0x79b100u: goto label_79b100;
        default: break;
    }

    ctx->pc = 0x79b0b0u;

    // 0x79b0b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79b0b4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b0b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79b0bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79b0c0: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79b0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b0c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79b0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b0c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79b0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79b0cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79b0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79b0d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79b0d4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79b0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x79b0d8: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x79B0D8u;
    {
        const bool branch_taken_0x79b0d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0D8u;
        // 0x79b0dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0d8) {
            ctx->pc = 0x79B12Cu;
            goto label_79b12c;
        }
    }
    ctx->pc = 0x79B0E0u;
    // 0x79b0e0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79b0e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b0e4: 0x24140226  addiu       $s4, $zero, 0x226
    ctx->pc = 0x79b0e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x79b0e8: 0x2413020f  addiu       $s3, $zero, 0x20F
    ctx->pc = 0x79b0e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    // 0x79b0ec: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79b0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79b0f0:
    // 0x79b0f0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x79B0F0u;
    {
        const bool branch_taken_0x79b0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b0f0) {
            ctx->pc = 0x79B0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B0F0u;
            // 0x79b0f4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B124u;
            goto label_79b124;
        }
    }
    ctx->pc = 0x79B0F8u;
    // 0x79b0f8: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79B0F8u;
    SET_GPR_U32(ctx, 31, 0x79B100u);
    ctx->pc = 0x79B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0F8u;
    // 0x79b0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79B0F8u, 0x79B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B100u;
label_79b100:
    // 0x79b100: 0x50550008  beql        $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x79B100u;
    {
        const bool branch_taken_0x79b100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x79b100) {
            ctx->pc = 0x79B104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B100u;
            // 0x79b104: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B124u;
            goto label_79b124;
        }
    }
    ctx->pc = 0x79B108u;
    // 0x79b108: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x79b10c: 0x50940004  beql        $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B10Cu;
    {
        const bool branch_taken_0x79b10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x79b10c) {
            ctx->pc = 0x79B110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B10Cu;
            // 0x79b110: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B120u;
            goto label_79b120;
        }
    }
    ctx->pc = 0x79B114u;
    // 0x79b114: 0x54930003  bnel        $a0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B114u;
    {
        const bool branch_taken_0x79b114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x79b114) {
            ctx->pc = 0x79B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B114u;
            // 0x79b118: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B124u;
            goto label_79b124;
        }
    }
    ctx->pc = 0x79B11Cu;
    // 0x79b11c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79b11cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_79b120:
    // 0x79b120: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79b120u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79b124:
    // 0x79b124: 0x5620fff2  bnel        $s1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x79B124u;
    {
        const bool branch_taken_0x79b124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b124) {
            ctx->pc = 0x79B128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B124u;
            // 0x79b128: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0f0;
        }
    }
    ctx->pc = 0x79B12Cu;
label_79b12c:
    // 0x79b12c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79b12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b130: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79b130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b134: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79b134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b138: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79b138u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79b13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b140: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79b140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b144: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79b144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B14Cu;
        // 0x79b150: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B154u;
    // 0x79b154: 0x0  nop
    ctx->pc = 0x79b154u;
    // NOP
    ctx->pc = 0x79b158u;
}
} // namespace gh_r700
