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

// Function: cOmb2_SetMove
// Address: 0x1b3910 - 0x1b3978
void cOmb2_SetMove_0x1b3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmb2_SetMove_0x1b3910");
#endif

    switch (ctx->pc) {
        case 0x1b3960u: goto label_1b3960;
        default: break;
    }

    ctx->pc = 0x1b3910u;

    // 0x1b3910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b3914: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b391c: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x1b391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1b3920: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3920u;
    {
        const bool branch_taken_0x1b3920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3920u;
        // 0x1b3924: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3920) {
            ctx->pc = 0x1B3940u;
            goto label_1b3940;
        }
    }
    ctx->pc = 0x1B3928u;
    // 0x1b3928: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b3928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b392c: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1b392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1b3930: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b3930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3934: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1b3934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b3938: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1b3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b393c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b393cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1b3940:
    // 0x1b3940: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1b3940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3944: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x1b3944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x1b3948: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b3948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b394c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1b394cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b3950: 0x26040610  addiu       $a0, $s0, 0x610
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1b3954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3958: 0xc071ada  jal         func_1C6B68
    ctx->pc = 0x1B3958u;
    SET_GPR_U32(ctx, 31, 0x1B3960u);
    ctx->pc = 0x1B395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3958u;
    // 0x1b395c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B68u, 0x1B3958u, 0x1B3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3960u;
label_1b3960:
    // 0x1b3960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3968: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1b3968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b396c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b396cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3970: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3970u;
        // 0x1b3974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3978u;
}
