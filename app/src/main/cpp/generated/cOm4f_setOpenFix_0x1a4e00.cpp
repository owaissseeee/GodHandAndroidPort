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

// Function: cOm4f_setOpenFix
// Address: 0x1a4e00 - 0x1a4e88
void cOm4f_setOpenFix_0x1a4e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_setOpenFix_0x1a4e00");
#endif

    ctx->pc = 0x1a4e00u;

    // 0x1a4e00: 0x90820761  lbu         $v0, 0x761($a0)
    ctx->pc = 0x1a4e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1889)));
    // 0x1a4e04: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A4E04u;
    {
        const bool branch_taken_0x1a4e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E04u;
        // 0x1a4e08: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e04) {
            ctx->pc = 0x1A4E7Cu;
            goto label_1a4e7c;
        }
    }
    ctx->pc = 0x1A4E0Cu;
    // 0x1a4e0c: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a4e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a4e10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E10u;
    {
        const bool branch_taken_0x1a4e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E10u;
        // 0x1a4e14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e10) {
            ctx->pc = 0x1A4E24u;
            goto label_1a4e24;
        }
    }
    ctx->pc = 0x1A4E18u;
    // 0x1a4e18: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a4e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4E1Cu;
    {
        const bool branch_taken_0x1a4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E1Cu;
        // 0x1a4e20: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e1c) {
            ctx->pc = 0x1A4E28u;
            goto label_1a4e28;
        }
    }
    ctx->pc = 0x1A4E24u;
label_1a4e24:
    // 0x1a4e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e28:
    // 0x1a4e28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4E28u;
    {
        const bool branch_taken_0x1a4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E28u;
        // 0x1a4e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e28) {
            ctx->pc = 0x1A4E64u;
            goto label_1a4e64;
        }
    }
    ctx->pc = 0x1A4E30u;
    // 0x1a4e30: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1a4e30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1a4e34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E34u;
    {
        const bool branch_taken_0x1a4e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E34u;
        // 0x1a4e38: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e34) {
            ctx->pc = 0x1A4E48u;
            goto label_1a4e48;
        }
    }
    ctx->pc = 0x1A4E3Cu;
    // 0x1a4e3c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1a4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1a4e40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4E40u;
    {
        const bool branch_taken_0x1a4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E40u;
        // 0x1a4e44: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e40) {
            ctx->pc = 0x1A4E4Cu;
            goto label_1a4e4c;
        }
    }
    ctx->pc = 0x1A4E48u;
label_1a4e48:
    // 0x1a4e48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a4e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e4c:
    // 0x1a4e4c: 0xc4800794  lwc1        $f0, 0x794($a0)
    ctx->pc = 0x1a4e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4e50: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1a4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1a4e54: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1a4e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x1a4e58: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1a4e5c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a4e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4e64:
    // 0x1a4e64: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1a4e64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4e68: 0xa0820761  sb          $v0, 0x761($a0)
    ctx->pc = 0x1a4e68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1889), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a4e6c: 0xa0800760  sb          $zero, 0x760($a0)
    ctx->pc = 0x1a4e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1888), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4e70: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1a4e70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4e74: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x1a4e74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4e78: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1a4e78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a4e7c:
    // 0x1a4e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E7Cu;
        // 0x1a4e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4E84u;
    // 0x1a4e84: 0x0  nop
    ctx->pc = 0x1a4e84u;
    // NOP
    ctx->pc = 0x1a4e88u;
}
