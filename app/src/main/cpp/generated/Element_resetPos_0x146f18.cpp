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

// Function: Element_resetPos
// Address: 0x146f18 - 0x146f70
void Element_resetPos_0x146f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Element_resetPos_0x146f18");
#endif

    switch (ctx->pc) {
        case 0x146f2cu: goto label_146f2c;
        default: break;
    }

    ctx->pc = 0x146f18u;

    // 0x146f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146f24: 0xc04f186  jal         func_13C618
    ctx->pc = 0x146F24u;
    SET_GPR_U32(ctx, 31, 0x146F2Cu);
    ctx->pc = 0x146F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F24u;
    // 0x146f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C618u, 0x146F24u, 0x146F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F2Cu;
label_146f2c:
    // 0x146f2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x146f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x146f30: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x146f34: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x146f34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x146f38: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146F38u;
    {
        const bool branch_taken_0x146f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x146f38) {
            ctx->pc = 0x146F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146F38u;
            // 0x146f3c: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146F5Cu;
            goto label_146f5c;
        }
    }
    ctx->pc = 0x146F40u;
    // 0x146f40: 0x3c01c302  lui         $at, 0xC302
    ctx->pc = 0x146f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49922 << 16));
    // 0x146f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146f48: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x146f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x146f4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146f50: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x146f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x146f54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146F54u;
    {
        const bool branch_taken_0x146f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F54u;
        // 0x146f58: 0xe6010064  swc1        $f1, 0x64($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f54) {
            ctx->pc = 0x146F60u;
            goto label_146f60;
        }
    }
    ctx->pc = 0x146F5Cu;
label_146f5c:
    // 0x146f5c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x146f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_146f60:
    // 0x146f60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146f68: 0x3e00008  jr          $ra
    ctx->pc = 0x146F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F68u;
        // 0x146f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F70u;
}
