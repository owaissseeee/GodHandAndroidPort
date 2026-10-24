#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: StateSinking__9EnemyShipRQ29EnemyShip4Ship
// Address: 0x79f680 - 0x79f720
void StateSinking__9EnemyShipRQ29EnemyShip4Ship_0x79f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateSinking__9EnemyShipRQ29EnemyShip4Ship_0x79f680");
#endif

    ctx->pc = 0x79f680u;

    // 0x79f680: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x79f680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x79f684: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79f684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x79f688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79f688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79f68c: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x79f68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f690: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x79f690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79f694: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79f694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79f698: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79f698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79f69c: 0x0  nop
    ctx->pc = 0x79f69cu;
    // NOP
    // 0x79f6a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79F6A0u;
    {
        const bool branch_taken_0x79f6a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79f6a0) {
            ctx->pc = 0x79F6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79F6A0u;
            // 0x79f6a4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79F6A8u;
            goto label_79f6a8;
        }
    }
    ctx->pc = 0x79F6A8u;
label_79f6a8:
    // 0x79f6a8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x79f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x79f6ac: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x79f6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x79f6b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79f6b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79f6b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79f6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79f6bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79F6BCu;
    {
        const bool branch_taken_0x79f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F6BCu;
        // 0x79f6c0: 0xc4810010  lwc1        $f1, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f6bc) {
            ctx->pc = 0x79F6CCu;
            goto label_79f6cc;
        }
    }
    ctx->pc = 0x79F6C4u;
    // 0x79f6c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x79f6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x79f6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79f6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79f6cc:
    // 0x79f6cc: 0x0  nop
    ctx->pc = 0x79f6ccu;
    // NOP
    // 0x79f6d0: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x79f6d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79f6d4: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x79f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f6d8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79f6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79f6dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79f6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79f6e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79f6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79f6e4: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x79f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x79f6e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79f6e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x79f6ec: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x79f6ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x79f6f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79f6f4: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x79f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x79f6f8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79F6F8u;
    {
        const bool branch_taken_0x79f6f8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F6F8u;
        // 0x79f6fc: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f6f8) {
            ctx->pc = 0x79F714u;
            goto label_79f714;
        }
    }
    ctx->pc = 0x79F700u;
    // 0x79f700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79f700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79f704: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x79f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79f708: 0xa0830079  sb          $v1, 0x79($a0)
    ctx->pc = 0x79f708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x79f70c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x79f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x79f710: 0xa0830078  sb          $v1, 0x78($a0)
    ctx->pc = 0x79f710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 3));
label_79f714:
    // 0x79f714: 0x3e00008  jr          $ra
    ctx->pc = 0x79F714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79F71Cu;
    // 0x79f71c: 0x0  nop
    ctx->pc = 0x79f71cu;
    // NOP
    ctx->pc = 0x79f720u;
}
} // namespace gh_r501
