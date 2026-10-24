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

// Function: func_001B3548
// Address: 0x1b3548 - 0x1b35c8
void func_001B3548_0x1b3548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B3548_0x1b3548");
#endif

    ctx->pc = 0x1b3548u;

    // 0x1b3548: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1b3548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1b354c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b354cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3554: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b3558: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3558u;
    {
        const bool branch_taken_0x1b3558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3558u;
        // 0x1b355c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3558) {
            ctx->pc = 0x1B356Cu;
            goto label_1b356c;
        }
    }
    ctx->pc = 0x1B3560u;
    // 0x1b3560: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1b3560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1b3564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3564u;
    {
        const bool branch_taken_0x1b3564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3564u;
        // 0x1b3568: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3564) {
            ctx->pc = 0x1B3570u;
            goto label_1b3570;
        }
    }
    ctx->pc = 0x1B356Cu;
label_1b356c:
    // 0x1b356c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b356cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3570:
    // 0x1b3570: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b3574: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b3574u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b3578: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b357c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1b357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3580: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1b3580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1b3584: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b3584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b3588: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b358c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b358cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b3590: 0x3c014043  lui         $at, 0x4043
    ctx->pc = 0x1b3590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16451 << 16));
    // 0x1b3594: 0x34217a14  ori         $at, $at, 0x7A14
    ctx->pc = 0x1b3594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31252);
    // 0x1b3598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b359c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b359cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b35a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b35a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b35a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1b35a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b35a8: 0x0  nop
    ctx->pc = 0x1b35a8u;
    // NOP
    // 0x1b35ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B35ACu;
    {
        const bool branch_taken_0x1b35ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35ACu;
        // 0x1b35b0: 0xe4400100  swc1        $f0, 0x100($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b35ac) {
            ctx->pc = 0x1B35C0u;
            goto label_1b35c0;
        }
    }
    ctx->pc = 0x1B35B4u;
    // 0x1b35b4: 0xe4430100  swc1        $f3, 0x100($v0)
    ctx->pc = 0x1b35b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1b35b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b35bc: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1b35bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
label_1b35c0:
    // 0x1b35c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B35C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B35C0u;
        // 0x1b35c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B35C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B35C8u;
}
