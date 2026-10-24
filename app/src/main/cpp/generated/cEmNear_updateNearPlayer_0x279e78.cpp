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

// Function: cEmNear_updateNearPlayer
// Address: 0x279e78 - 0x279f00
void cEmNear_updateNearPlayer_0x279e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmNear_updateNearPlayer_0x279e78");
#endif

    switch (ctx->pc) {
        case 0x279ea4u: goto label_279ea4;
        case 0x279eb0u: goto label_279eb0;
        case 0x279ebcu: goto label_279ebc;
        case 0x279ec4u: goto label_279ec4;
        default: break;
    }

    ctx->pc = 0x279e78u;

    // 0x279e78: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x279e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x279e7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279e7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279e80: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x279e80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x279e84: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x279e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x279e88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279e8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279e90: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x279e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x279e94: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x279E94u;
    {
        const bool branch_taken_0x279e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E94u;
        // 0x279e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e94) {
            ctx->pc = 0x279EECu;
            goto label_279eec;
        }
    }
    ctx->pc = 0x279E9Cu;
    // 0x279e9c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x279E9Cu;
    SET_GPR_U32(ctx, 31, 0x279EA4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x279E9Cu, 0x279EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EA4u;
label_279ea4:
    // 0x279ea4: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x279ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x279ea8: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x279EA8u;
    SET_GPR_U32(ctx, 31, 0x279EB0u);
    ctx->pc = 0x279EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279EA8u;
    // 0x279eac: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x279EA8u, 0x279EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EB0u;
label_279eb0:
    // 0x279eb0: 0xe6000618  swc1        $f0, 0x618($s0)
    ctx->pc = 0x279eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    // 0x279eb4: 0xc09e7fc  jal         func_279FF0
    ctx->pc = 0x279EB4u;
    SET_GPR_U32(ctx, 31, 0x279EBCu);
    ctx->pc = 0x279EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279EB4u;
    // 0x279eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279FF0u, 0x279EB4u, 0x279EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EBCu;
label_279ebc:
    // 0x279ebc: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x279EBCu;
    SET_GPR_U32(ctx, 31, 0x279EC4u);
    ctx->pc = 0x279EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279EBCu;
    // 0x279ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x279EBCu, 0x279EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279EC4u;
label_279ec4:
    // 0x279ec4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x279ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x279ec8: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x279ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x279ecc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x279ECCu;
    {
        const bool branch_taken_0x279ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279ecc) {
            ctx->pc = 0x279ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279ECCu;
            // 0x279ed0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279EF0u;
            goto label_279ef0;
        }
    }
    ctx->pc = 0x279ED4u;
    // 0x279ed4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ed8: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x279ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x279edc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x279edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279ee0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x279ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x279ee4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279ee8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x279ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_279eec:
    // 0x279eec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279ef0:
    // 0x279ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x279EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EF4u;
        // 0x279ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279EFCu;
    // 0x279efc: 0x0  nop
    ctx->pc = 0x279efcu;
    // NOP
    ctx->pc = 0x279f00u;
}
