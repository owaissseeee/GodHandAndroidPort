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

// Function: cOm4f_setCloseFix
// Address: 0x1a4e88 - 0x1a4f10
void cOm4f_setCloseFix_0x1a4e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_setCloseFix_0x1a4e88");
#endif

    ctx->pc = 0x1a4e88u;

    // 0x1a4e88: 0x90820761  lbu         $v0, 0x761($a0)
    ctx->pc = 0x1a4e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1889)));
    // 0x1a4e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4e90: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A4F04u;
            goto label_1a4f04;
        }
    }
    ctx->pc = 0x1A4E98u;
    // 0x1a4e98: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a4e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a4e9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E9Cu;
    {
        const bool branch_taken_0x1a4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E9Cu;
        // 0x1a4ea0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e9c) {
            ctx->pc = 0x1A4EB0u;
            goto label_1a4eb0;
        }
    }
    ctx->pc = 0x1A4EA4u;
    // 0x1a4ea4: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a4ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4EA8u;
    {
        const bool branch_taken_0x1a4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EA8u;
        // 0x1a4eac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ea8) {
            ctx->pc = 0x1A4EB4u;
            goto label_1a4eb4;
        }
    }
    ctx->pc = 0x1A4EB0u;
label_1a4eb0:
    // 0x1a4eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4eb4:
    // 0x1a4eb4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4EB4u;
    {
        const bool branch_taken_0x1a4eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4eb4) {
            ctx->pc = 0x1A4EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4EB4u;
            // 0x1a4eb8: 0xa08002f7  sb          $zero, 0x2F7($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4EF0u;
            goto label_1a4ef0;
        }
    }
    ctx->pc = 0x1A4EBCu;
    // 0x1a4ebc: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a4ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a4ec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4EC0u;
    {
        const bool branch_taken_0x1a4ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EC0u;
        // 0x1a4ec4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ec0) {
            ctx->pc = 0x1A4ED4u;
            goto label_1a4ed4;
        }
    }
    ctx->pc = 0x1A4EC8u;
    // 0x1a4ec8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a4ecc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4ECCu;
    {
        const bool branch_taken_0x1a4ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ECCu;
        // 0x1a4ed0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ecc) {
            ctx->pc = 0x1A4ED8u;
            goto label_1a4ed8;
        }
    }
    ctx->pc = 0x1A4ED4u;
label_1a4ed4:
    // 0x1a4ed4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a4ed4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ed8:
    // 0x1a4ed8: 0xc4800798  lwc1        $f0, 0x798($a0)
    ctx->pc = 0x1a4ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4edc: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1a4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1a4ee0: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1a4ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1a4ee4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a4ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a4ee8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a4eec: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a4eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
label_1a4ef0:
    // 0x1a4ef0: 0xa0800761  sb          $zero, 0x761($a0)
    ctx->pc = 0x1a4ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1889), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4ef4: 0xa0800760  sb          $zero, 0x760($a0)
    ctx->pc = 0x1a4ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1888), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4ef8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1a4ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4efc: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1a4efcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4f00: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a4f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a4f04:
    // 0x1a4f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F04u;
        // 0x1a4f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F0Cu;
    // 0x1a4f0c: 0x0  nop
    ctx->pc = 0x1a4f0cu;
    // NOP
    ctx->pc = 0x1a4f10u;
}
