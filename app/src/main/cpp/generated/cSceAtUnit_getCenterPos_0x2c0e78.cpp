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

// Function: cSceAtUnit_getCenterPos
// Address: 0x2c0e78 - 0x2c0ed0
void cSceAtUnit_getCenterPos_0x2c0e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtUnit_getCenterPos_0x2c0e78");
#endif

    switch (ctx->pc) {
        case 0x2c0ea0u: goto label_2c0ea0;
        default: break;
    }

    ctx->pc = 0x2c0e78u;

    // 0x2c0e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c0e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c0e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0e84: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2c0e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c0e88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c0e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c0e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c0e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c0e90: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C0E90u;
    {
        const bool branch_taken_0x2c0e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E90u;
        // 0x2c0e94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e90) {
            ctx->pc = 0x2C0EBCu;
            goto label_2c0ebc;
        }
    }
    ctx->pc = 0x2C0E98u;
    // 0x2c0e98: 0xc07e26a  jal         func_1F89A8
    ctx->pc = 0x2C0E98u;
    SET_GPR_U32(ctx, 31, 0x2C0EA0u);
    ctx->pc = 0x2C0E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0E98u;
    // 0x2c0e9c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89A8u, 0x2C0E98u, 0x2C0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EA0u;
label_2c0ea0:
    // 0x2c0ea0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2c0ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0ea4: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2c0ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2c0ea8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c0ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2c0eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0eb0: 0x0  nop
    ctx->pc = 0x2c0eb0u;
    // NOP
    // 0x2c0eb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0eb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0eb8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2c0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2c0ebc:
    // 0x2c0ebc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c0ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EC4u;
        // 0x2c0ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0ECCu;
    // 0x2c0ecc: 0x0  nop
    ctx->pc = 0x2c0eccu;
    // NOP
    ctx->pc = 0x2c0ed0u;
}
