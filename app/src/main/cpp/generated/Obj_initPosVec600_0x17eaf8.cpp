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

// Function: Obj_initPosVec600
// Address: 0x17eaf8 - 0x17eb98
void Obj_initPosVec600_0x17eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj_initPosVec600_0x17eaf8");
#endif

    switch (ctx->pc) {
        case 0x17eb0cu: goto label_17eb0c;
        case 0x17eb64u: goto label_17eb64;
        case 0x17eb6cu: goto label_17eb6c;
        case 0x17eb80u: goto label_17eb80;
        default: break;
    }

    ctx->pc = 0x17eaf8u;

    // 0x17eaf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17eafc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17eb00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17eb04: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17EB04u;
    SET_GPR_U32(ctx, 31, 0x17EB0Cu);
    ctx->pc = 0x17EB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB04u;
    // 0x17eb08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17EB04u, 0x17EB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB0Cu;
label_17eb0c:
    // 0x17eb0c: 0x3c0140b8  lui         $at, 0x40B8
    ctx->pc = 0x17eb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16568 << 16));
    // 0x17eb10: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x17eb10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x17eb14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17eb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17eb18: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x17eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x17eb1c: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x17eb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
    // 0x17eb20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17eb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17eb24: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x17eb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x17eb28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17eb28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17eb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17eb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eb30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17eb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17eb34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17eb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17eb38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17eb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17eb3c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17eb3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17eb40: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x17eb40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17eb44: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EB44u;
    {
        const bool branch_taken_0x17eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x17EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB44u;
        // 0x17eb48: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb44) {
            ctx->pc = 0x17EB5Cu;
            goto label_17eb5c;
        }
    }
    ctx->pc = 0x17EB4Cu;
    // 0x17eb4c: 0xe6030600  swc1        $f3, 0x600($s0)
    ctx->pc = 0x17eb4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x17eb50: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x17eb50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17eb54: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17eb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eb58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x17eb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17eb5c:
    // 0x17eb5c: 0xc06f680  jal         func_1BDA00
    ctx->pc = 0x17EB5Cu;
    SET_GPR_U32(ctx, 31, 0x17EB64u);
    ctx->pc = 0x17EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB5Cu;
    // 0x17eb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA00u, 0x17EB5Cu, 0x17EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB64u;
label_17eb64:
    // 0x17eb64: 0xc06f5a6  jal         func_1BD698
    ctx->pc = 0x17EB64u;
    SET_GPR_U32(ctx, 31, 0x17EB6Cu);
    ctx->pc = 0x17EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB64u;
    // 0x17eb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD698u, 0x17EB64u, 0x17EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB6Cu;
label_17eb6c:
    // 0x17eb6c: 0x3c0140b3  lui         $at, 0x40B3
    ctx->pc = 0x17eb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16563 << 16));
    // 0x17eb70: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x17eb70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x17eb74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17eb74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17eb78: 0xc06f762  jal         func_1BDD88
    ctx->pc = 0x17EB78u;
    SET_GPR_U32(ctx, 31, 0x17EB80u);
    ctx->pc = 0x17EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB78u;
    // 0x17eb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD88u, 0x17EB78u, 0x17EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EB80u;
label_17eb80:
    // 0x17eb80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17eb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eb84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eb88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EB8Cu;
        // 0x17eb90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EB94u;
    // 0x17eb94: 0x0  nop
    ctx->pc = 0x17eb94u;
    // NOP
    ctx->pc = 0x17eb98u;
}
