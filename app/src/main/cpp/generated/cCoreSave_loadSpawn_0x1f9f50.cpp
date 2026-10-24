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

// Function: cCoreSave_loadSpawn
// Address: 0x1f9f50 - 0x1f9fc0
void cCoreSave_loadSpawn_0x1f9f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_loadSpawn_0x1f9f50");
#endif

    switch (ctx->pc) {
        case 0x1f9fb0u: goto label_1f9fb0;
        default: break;
    }

    ctx->pc = 0x1f9f50u;

    // 0x1f9f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9f54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f9f58: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1f9f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9f5c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F9F5Cu;
    {
        const bool branch_taken_0x1f9f5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F5Cu;
        // 0x1f9f60: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f5c) {
            ctx->pc = 0x1F9FB0u;
            goto label_1f9fb0;
        }
    }
    ctx->pc = 0x1F9F64u;
    // 0x1f9f64: 0x94c2015a  lhu         $v0, 0x15A($a2)
    ctx->pc = 0x1f9f64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 346)));
    // 0x1f9f68: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x1f9f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x1f9f6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f9f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f70: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x1f9f70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f9f74: 0xc4c0015c  lwc1        $f0, 0x15C($a2)
    ctx->pc = 0x1f9f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f78: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f9f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f9f7c: 0xc4c10160  lwc1        $f1, 0x160($a2)
    ctx->pc = 0x1f9f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f9f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f9f84: 0xc4c00164  lwc1        $f0, 0x164($a2)
    ctx->pc = 0x1f9f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f88: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f9f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f9f8c: 0xc4c10168  lwc1        $f1, 0x168($a2)
    ctx->pc = 0x1f9f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9f90: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1f9f90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f9f94: 0x90c20158  lbu         $v0, 0x158($a2)
    ctx->pc = 0x1f9f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x1f9f98: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x1f9f98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f9f9c: 0x90c30159  lbu         $v1, 0x159($a2)
    ctx->pc = 0x1f9f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 345)));
    // 0x1f9fa0: 0xa3a30013  sb          $v1, 0x13($sp)
    ctx->pc = 0x1f9fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f9fa4: 0x8cc2016c  lw          $v0, 0x16C($a2)
    ctx->pc = 0x1f9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 364)));
    // 0x1f9fa8: 0xc08026c  jal         func_2009B0
    ctx->pc = 0x1F9FA8u;
    SET_GPR_U32(ctx, 31, 0x1F9FB0u);
    ctx->pc = 0x1F9FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9FA8u;
    // 0x1f9fac: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2009B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2009B0u, 0x1F9FA8u, 0x1F9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FB0u;
label_1f9fb0:
    // 0x1f9fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f9fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9FB4u;
        // 0x1f9fb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9FBCu;
    // 0x1f9fbc: 0x0  nop
    ctx->pc = 0x1f9fbcu;
    // NOP
    ctx->pc = 0x1f9fc0u;
}
