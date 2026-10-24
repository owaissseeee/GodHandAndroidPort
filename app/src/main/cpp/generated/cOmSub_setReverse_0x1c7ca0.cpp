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

// Function: cOmSub_setReverse
// Address: 0x1c7ca0 - 0x1c7d50
void cOmSub_setReverse_0x1c7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_setReverse_0x1c7ca0");
#endif

    switch (ctx->pc) {
        case 0x1c7cf8u: goto label_1c7cf8;
        case 0x1c7d00u: goto label_1c7d00;
        case 0x1c7d14u: goto label_1c7d14;
        case 0x1c7d18u: goto label_1c7d18;
        case 0x1c7d2cu: goto label_1c7d2c;
        default: break;
    }

    ctx->pc = 0x1c7ca0u;

    // 0x1c7ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7ca8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c7ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c7cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7cb4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7CB4u;
    {
        const bool branch_taken_0x1c7cb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CB4u;
        // 0x1c7cb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cb4) {
            ctx->pc = 0x1C7CC4u;
            goto label_1c7cc4;
        }
    }
    ctx->pc = 0x1C7CBCu;
    // 0x1c7cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7CBCu;
    {
        const bool branch_taken_0x1c7cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CBCu;
        // 0x1c7cc0: 0xa2050001  sb          $a1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cbc) {
            ctx->pc = 0x1C7CCCu;
            goto label_1c7ccc;
        }
    }
    ctx->pc = 0x1C7CC4u;
label_1c7cc4:
    // 0x1c7cc4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1c7cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7ccc:
    // 0x1c7ccc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C7CCCu;
    {
        const bool branch_taken_0x1c7ccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CCCu;
        // 0x1c7cd0: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ccc) {
            ctx->pc = 0x1C7CE0u;
            goto label_1c7ce0;
        }
    }
    ctx->pc = 0x1C7CD4u;
    // 0x1c7cd4: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x1c7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7cd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7CD8u;
    {
        const bool branch_taken_0x1c7cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CD8u;
        // 0x1c7cdc: 0xc6010138  lwc1        $f1, 0x138($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cd8) {
            ctx->pc = 0x1C7CE8u;
            goto label_1c7ce8;
        }
    }
    ctx->pc = 0x1C7CE0u;
label_1c7ce0:
    // 0x1c7ce0: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x1c7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7ce4: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x1c7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7ce8:
    // 0x1c7ce8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x1c7ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x1c7cec: 0xe6010134  swc1        $f1, 0x134($s0)
    ctx->pc = 0x1c7cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x1c7cf0: 0xc071c4e  jal         func_1C7138
    ctx->pc = 0x1C7CF0u;
    SET_GPR_U32(ctx, 31, 0x1C7CF8u);
    ctx->pc = 0x1C7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CF0u;
    // 0x1c7cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7138u, 0x1C7CF0u, 0x1C7CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7CF8u;
label_1c7cf8:
    // 0x1c7cf8: 0xc071cc4  jal         func_1C7310
    ctx->pc = 0x1C7CF8u;
    SET_GPR_U32(ctx, 31, 0x1C7D00u);
    ctx->pc = 0x1C7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CF8u;
    // 0x1c7cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C7CF8u, 0x1C7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D00u;
label_1c7d00:
    // 0x1c7d00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c7d04: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7D04u;
    {
        const bool branch_taken_0x1c7d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d04) {
            ctx->pc = 0x1C7D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C7D04u;
            // 0x1c7d08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C7D3Cu;
            goto label_1c7d3c;
        }
    }
    ctx->pc = 0x1C7D0Cu;
    // 0x1c7d0c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1C7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7D14u);
    ctx->pc = 0x1C7D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D0Cu;
    // 0x1c7d10: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C7D0Cu, 0x1C7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D14u;
label_1c7d14:
    // 0x1c7d14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7d18:
    // 0x1c7d18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c7d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7d1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7D1Cu;
    {
        const bool branch_taken_0x1c7d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D1Cu;
        // 0x1c7d20: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d1c) {
            ctx->pc = 0x1C7D2Cu;
            goto label_1c7d2c;
        }
    }
    ctx->pc = 0x1C7D24u;
    // 0x1c7d24: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1C7D24u;
    SET_GPR_U32(ctx, 31, 0x1C7D2Cu);
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C7D24u, 0x1C7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D2Cu;
label_1c7d2c:
    // 0x1c7d2c: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1c7d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c7d30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C7D30u;
    {
        const bool branch_taken_0x1c7d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D30u;
        // 0x1c7d34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d30) {
            ctx->pc = 0x1C7D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7d18;
        }
    }
    ctx->pc = 0x1C7D38u;
    // 0x1c7d38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c7d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7d3c:
    // 0x1c7d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c7d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D44u;
        // 0x1c7d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7D4Cu;
    // 0x1c7d4c: 0x0  nop
    ctx->pc = 0x1c7d4cu;
    // NOP
    ctx->pc = 0x1c7d50u;
}
