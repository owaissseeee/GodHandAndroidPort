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

// Function: cOmThrow_SetFall
// Address: 0x1c8cb8 - 0x1c8d48
void cOmThrow_SetFall_0x1c8cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmThrow_SetFall_0x1c8cb8");
#endif

    ctx->pc = 0x1c8cb8u;

    // 0x1c8cb8: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1c8cbc: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1c8cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1c8cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8cc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8cc8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1c8cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1c8ccc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8cd0: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1c8cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c8cd4: 0xe4800614  swc1        $f0, 0x614($a0)
    ctx->pc = 0x1c8cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1556), bits); }
    // 0x1c8cd8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1c8cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8cdc: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1c8cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8ce0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1c8ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8ce4: 0xac800610  sw          $zero, 0x610($a0)
    ctx->pc = 0x1c8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1552), GPR_U32(ctx, 0));
    // 0x1c8ce8: 0xac800618  sw          $zero, 0x618($a0)
    ctx->pc = 0x1c8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1560), GPR_U32(ctx, 0));
    // 0x1c8cec: 0xac800644  sw          $zero, 0x644($a0)
    ctx->pc = 0x1c8cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1604), GPR_U32(ctx, 0));
    // 0x1c8cf0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8CF0u;
    {
        const bool branch_taken_0x1c8cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CF0u;
        // 0x1c8cf4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cf0) {
            ctx->pc = 0x1C8D04u;
            goto label_1c8d04;
        }
    }
    ctx->pc = 0x1C8CF8u;
    // 0x1c8cf8: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1c8cfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8CFCu;
    {
        const bool branch_taken_0x1c8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8CFCu;
        // 0x1c8d00: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8cfc) {
            ctx->pc = 0x1C8D08u;
            goto label_1c8d08;
        }
    }
    ctx->pc = 0x1C8D04u;
label_1c8d04:
    // 0x1c8d04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8d08:
    // 0x1c8d08: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8D08u;
    {
        const bool branch_taken_0x1c8d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D08u;
        // 0x1c8d0c: 0x24830630  addiu       $v1, $a0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8d08) {
            ctx->pc = 0x1C8D40u;
            goto label_1c8d40;
        }
    }
    ctx->pc = 0x1C8D10u;
    // 0x1c8d10: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x1c8d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1c8d14: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8D14u;
    {
        const bool branch_taken_0x1c8d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c8d14) {
            ctx->pc = 0x1C8D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D14u;
            // 0x1c8d18: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8D38u;
            goto label_1c8d38;
        }
    }
    ctx->pc = 0x1C8D1Cu;
    // 0x1c8d1c: 0xc4800630  lwc1        $f0, 0x630($a0)
    ctx->pc = 0x1c8d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8d20: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1c8d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c8d24: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c8d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8d28: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c8d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c8d2c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8d30: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c8d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1c8d34: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1c8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
label_1c8d38:
    // 0x1c8d38: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1c8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1c8d3c: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1c8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1c8d40:
    // 0x1c8d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D40u;
        // 0x1c8d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8D48u;
}
