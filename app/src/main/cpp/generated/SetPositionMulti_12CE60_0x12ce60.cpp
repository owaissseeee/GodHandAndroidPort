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

// Function: SetPositionMulti_12CE60
// Address: 0x12ce60 - 0x12ced8
void SetPositionMulti_12CE60_0x12ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPositionMulti_12CE60_0x12ce60");
#endif

    ctx->pc = 0x12ce60u;

    // 0x12ce60: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x12ce64: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CE64u;
    {
        const bool branch_taken_0x12ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12ce64) {
            ctx->pc = 0x12CE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CE64u;
            // 0x12ce68: 0x24820490  addiu       $v0, $a0, 0x490 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CE88u;
            goto label_12ce88;
        }
    }
    ctx->pc = 0x12CE6Cu;
    // 0x12ce6c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x12ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12ce74: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ce78: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12ce78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ce7c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12ce7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce80: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12ce80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12ce84: 0x24820490  addiu       $v0, $a0, 0x490
    ctx->pc = 0x12ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
label_12ce88:
    // 0x12ce88: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CE88u;
    {
        const bool branch_taken_0x12ce88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x12CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE88u;
        // 0x12ce8c: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce88) {
            ctx->pc = 0x12CEA8u;
            goto label_12cea8;
        }
    }
    ctx->pc = 0x12CE90u;
    // 0x12ce90: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x12ce90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x12ce94: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ce98: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12ce98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ce9c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cea0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12cea4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12cea8:
    // 0x12cea8: 0x8c83068c  lw          $v1, 0x68C($a0)
    ctx->pc = 0x12cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1676)));
    // 0x12ceac: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x12ceacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x12ceb0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ceb4: 0xe48100b4  swc1        $f1, 0xB4($a0)
    ctx->pc = 0x12ceb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x12ceb8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cebc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CEBCu;
    {
        const bool branch_taken_0x12cebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEBCu;
        // 0x12cec0: 0xe48000b8  swc1        $f0, 0xB8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cebc) {
            ctx->pc = 0x12CED0u;
            goto label_12ced0;
        }
    }
    ctx->pc = 0x12CEC4u;
    // 0x12cec4: 0x8c6202f0  lw          $v0, 0x2F0($v1)
    ctx->pc = 0x12cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 752)));
    // 0x12cec8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12cecc: 0xac6202f0  sw          $v0, 0x2F0($v1)
    ctx->pc = 0x12ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 752), GPR_U32(ctx, 2));
label_12ced0:
    // 0x12ced0: 0x3e00008  jr          $ra
    ctx->pc = 0x12CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CED8u;
}
