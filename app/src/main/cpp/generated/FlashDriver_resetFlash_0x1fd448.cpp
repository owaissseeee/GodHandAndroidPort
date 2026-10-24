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

// Function: FlashDriver_resetFlash
// Address: 0x1fd448 - 0x1fd528
void FlashDriver_resetFlash_0x1fd448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FlashDriver_resetFlash_0x1fd448");
#endif

    ctx->pc = 0x1fd448u;

    // 0x1fd448: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fd448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd44c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1fd44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1fd450: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x1fd450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1fd454: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1fd454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fd458: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1fd45c: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x1fd45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1fd460: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fd460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fd464: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1fd464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x1fd468: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fd468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fd46c: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x1fd46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1fd470: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1fd470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1fd474: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1fd474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1fd478: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1fd478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1fd47c: 0x2405ff7f  addiu       $a1, $zero, -0x81
    ctx->pc = 0x1fd47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1fd480: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fd480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fd484: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x1fd484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1fd488: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fd488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fd48c: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x1fd48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1fd490: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1fd494: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd498: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1fd498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1fd49c: 0xace30040  sw          $v1, 0x40($a3)
    ctx->pc = 0x1fd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 3));
    // 0x1fd4a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fd4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fd4a4: 0xa4e00044  sh          $zero, 0x44($a3)
    ctx->pc = 0x1fd4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fd4a8: 0xace20060  sw          $v0, 0x60($a3)
    ctx->pc = 0x1fd4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 2));
    // 0x1fd4ac: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x1fd4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1fd4b0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x1fd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x1fd4b4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1fd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1fd4b8: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1fd4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1fd4bc: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1fd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1fd4c0: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x1fd4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x1fd4c4: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD4C4u;
    {
        const bool branch_taken_0x1fd4c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1FD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4C4u;
        // 0x1fd4c8: 0x24647a78  addiu       $a0, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4c4) {
            ctx->pc = 0x1FD51Cu;
            goto label_1fd51c;
        }
    }
    ctx->pc = 0x1FD4CCu;
    // 0x1fd4cc: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x1fd4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1fd4d0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD4D0u;
    {
        const bool branch_taken_0x1fd4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd4d0) {
            ctx->pc = 0x1FD51Cu;
            goto label_1fd51c;
        }
    }
    ctx->pc = 0x1FD4D8u;
    // 0x1fd4d8: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x1fd4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1fd4dc: 0xc442054c  lwc1        $f2, 0x54C($v0)
    ctx->pc = 0x1fd4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fd4e0: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1fd4e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd4e4: 0x0  nop
    ctx->pc = 0x1fd4e4u;
    // NOP
    // 0x1fd4e8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1FD4E8u;
    {
        const bool branch_taken_0x1fd4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd4e8) {
            ctx->pc = 0x1FD51Cu;
            goto label_1fd51c;
        }
    }
    ctx->pc = 0x1FD4F0u;
    // 0x1fd4f0: 0xc480ff9c  lwc1        $f0, -0x64($a0)
    ctx->pc = 0x1fd4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd4f4: 0xc44105a8  lwc1        $f1, 0x5A8($v0)
    ctx->pc = 0x1fd4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd4f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fd4f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd4fc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1fd4fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1fd500: 0xe441054c  swc1        $f1, 0x54C($v0)
    ctx->pc = 0x1fd500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x1fd504: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1fd508: 0xc480054c  lwc1        $f0, 0x54C($a0)
    ctx->pc = 0x1fd508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd50c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1fd50cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd510: 0x0  nop
    ctx->pc = 0x1fd510u;
    // NOP
    // 0x1fd514: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1FD514u;
    {
        const bool branch_taken_0x1fd514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd514) {
            ctx->pc = 0x1FD518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD514u;
            // 0x1fd518: 0xe483054c  swc1        $f3, 0x54C($a0) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1356), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD51Cu;
            goto label_1fd51c;
        }
    }
    ctx->pc = 0x1FD51Cu;
label_1fd51c:
    // 0x1fd51c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD524u;
    // 0x1fd524: 0x0  nop
    ctx->pc = 0x1fd524u;
    // NOP
    ctx->pc = 0x1fd528u;
}
