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

// Function: cOl30_setPosAndPlace
// Address: 0x183240 - 0x1832a8
void cOl30_setPosAndPlace_0x183240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl30_setPosAndPlace_0x183240");
#endif

    switch (ctx->pc) {
        case 0x183298u: goto label_183298;
        default: break;
    }

    ctx->pc = 0x183240u;

    // 0x183240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183244: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x183244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x183248: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x183248u;
    {
        const bool branch_taken_0x183248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183248u;
        // 0x18324c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183248) {
            ctx->pc = 0x183268u;
            goto label_183268;
        }
    }
    ctx->pc = 0x183250u;
    // 0x183250: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x183250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183254: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x183254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x183258: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x183258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18325c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x18325cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x183260: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x183260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183264: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x183264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_183268:
    // 0x183268: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x183268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x18326c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18326Cu;
    {
        const bool branch_taken_0x18326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18326c) {
            ctx->pc = 0x183270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18326Cu;
            // 0x183270: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183290u;
            goto label_183290;
        }
    }
    ctx->pc = 0x183274u;
    // 0x183274: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x183274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183278: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x183278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18327c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183280: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x183280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x183284: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x183284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183288: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x183288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18328c: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x18328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_183290:
    // 0x183290: 0xc060bfe  jal         func_182FF8
    ctx->pc = 0x183290u;
    SET_GPR_U32(ctx, 31, 0x183298u);
    ctx->pc = 0x183294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183290u;
    // 0x183294: 0x24860100  addiu       $a2, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182FF8u, 0x183290u, 0x183298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183298u;
label_183298:
    // 0x183298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18329c: 0x3e00008  jr          $ra
    ctx->pc = 0x18329Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18329Cu;
        // 0x1832a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18329Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832A4u;
    // 0x1832a4: 0x0  nop
    ctx->pc = 0x1832a4u;
    // NOP
    ctx->pc = 0x1832a8u;
}
