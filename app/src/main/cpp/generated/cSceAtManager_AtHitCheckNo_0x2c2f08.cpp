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

// Function: cSceAtManager_AtHitCheckNo
// Address: 0x2c2f08 - 0x2c2f90
void cSceAtManager_AtHitCheckNo_0x2c2f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_AtHitCheckNo_0x2c2f08");
#endif

    switch (ctx->pc) {
        case 0x2c2f28u: goto label_2c2f28;
        case 0x2c2f64u: goto label_2c2f64;
        case 0x2c2f70u: goto label_2c2f70;
        default: break;
    }

    ctx->pc = 0x2c2f08u;

    // 0x2c2f08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c2f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c2f0c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c2f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2c2f10: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c2f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2c2f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c2f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c2f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c2f20: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x2C2F20u;
    SET_GPR_U32(ctx, 31, 0x2C2F28u);
    ctx->pc = 0x2C2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F20u;
    // 0x2c2f24: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x2C2F20u, 0x2C2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F28u;
label_2c2f28:
    // 0x2c2f28: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2c2f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c2f2c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2f30: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2c2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c2f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2f38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c2f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c2f3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c2f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c2f40: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c2f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c2f44: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2c2f44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c2f48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2F48u;
    {
        const bool branch_taken_0x2c2f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F48u;
        // 0x2c2f4c: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f48) {
            ctx->pc = 0x2C2F78u;
            goto label_2c2f78;
        }
    }
    ctx->pc = 0x2C2F50u;
    // 0x2c2f50: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2c2f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c2f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c2f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f5c: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2C2F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2F64u);
    ctx->pc = 0x2C2F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F5Cu;
    // 0x2c2f60: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1D68u, 0x2C2F5Cu, 0x2C2F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F64u;
label_2c2f64:
    // 0x2c2f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f68: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2C2F68u;
    SET_GPR_U32(ctx, 31, 0x2C2F70u);
    ctx->pc = 0x2C2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2F68u;
    // 0x2c2f6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2C2F68u, 0x2C2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2F70u;
label_2c2f70:
    // 0x2c2f70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2F70u;
    {
        const bool branch_taken_0x2c2f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F70u;
        // 0x2c2f74: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f70) {
            ctx->pc = 0x2C2F80u;
            goto label_2c2f80;
        }
    }
    ctx->pc = 0x2C2F78u;
label_2c2f78:
    // 0x2c2f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c2f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c2f80:
    // 0x2c2f80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c2f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2f84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F88u;
        // 0x2c2f8c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2F90u;
}
