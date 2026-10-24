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

// Function: func_00170F60
// Address: 0x170f60 - 0x171000
void func_00170F60_0x170f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170F60_0x170f60");
#endif

    switch (ctx->pc) {
        case 0x170f74u: goto label_170f74;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fe8u: goto label_170fe8;
        default: break;
    }

    ctx->pc = 0x170f60u;

    // 0x170f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170f64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x170f68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170f6c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x170F6Cu;
    SET_GPR_U32(ctx, 31, 0x170F74u);
    ctx->pc = 0x170F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F6Cu;
    // 0x170f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x170F6Cu, 0x170F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F74u;
label_170f74:
    // 0x170f74: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x170f78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x170f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x170f7c: 0x26020600  addiu       $v0, $s0, 0x600
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1536));
    // 0x170f80: 0x3c014083  lui         $at, 0x4083
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16515 << 16));
    // 0x170f84: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x170f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x170f88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x170f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x170f8c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x170f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x170f90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x170f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x170f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x170f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170f98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x170f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x170f9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x170f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170fa0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x170fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x170fa4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x170fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x170fa8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x170fa8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x170fac: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x170FACu;
    {
        const bool branch_taken_0x170fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x170FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FACu;
        // 0x170fb0: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fac) {
            ctx->pc = 0x170FC4u;
            goto label_170fc4;
        }
    }
    ctx->pc = 0x170FB4u;
    // 0x170fb4: 0xe6030600  swc1        $f3, 0x600($s0)
    ctx->pc = 0x170fb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x170fb8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x170fb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x170fbc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x170fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fc0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x170fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_170fc4:
    // 0x170fc4: 0xc06f680  jal         func_1BDA00
    ctx->pc = 0x170FC4u;
    SET_GPR_U32(ctx, 31, 0x170FCCu);
    ctx->pc = 0x170FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FC4u;
    // 0x170fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA00u, 0x170FC4u, 0x170FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FCCu;
label_170fcc:
    // 0x170fcc: 0xc06f5a6  jal         func_1BD698
    ctx->pc = 0x170FCCu;
    SET_GPR_U32(ctx, 31, 0x170FD4u);
    ctx->pc = 0x170FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FCCu;
    // 0x170fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD698u, 0x170FCCu, 0x170FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FD4u;
label_170fd4:
    // 0x170fd4: 0x3c014086  lui         $at, 0x4086
    ctx->pc = 0x170fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16518 << 16));
    // 0x170fd8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x170fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x170fdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x170fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x170fe0: 0xc06f762  jal         func_1BDD88
    ctx->pc = 0x170FE0u;
    SET_GPR_U32(ctx, 31, 0x170FE8u);
    ctx->pc = 0x170FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FE0u;
    // 0x170fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD88u, 0x170FE0u, 0x170FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FE8u;
label_170fe8:
    // 0x170fe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x170fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170fec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x170fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x170ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x170FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FF4u;
        // 0x170ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170FFCu;
    // 0x170ffc: 0x0  nop
    ctx->pc = 0x170ffcu;
    // NOP
    ctx->pc = 0x171000u;
}
