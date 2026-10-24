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

// Function: func_002C7850
// Address: 0x2c7850 - 0x2c78f0
void func_002C7850_0x2c7850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C7850_0x2c7850");
#endif

    switch (ctx->pc) {
        case 0x2c78e4u: goto label_2c78e4;
        default: break;
    }

    ctx->pc = 0x2c7850u;

    // 0x2c7850: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7858: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c7858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c785c: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x2c785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x2c7860: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c7860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7864: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c7864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c7868: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2c7868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2c786c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c786cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7870: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c7870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c7874: 0x34632001  ori         $v1, $v1, 0x2001
    ctx->pc = 0x2c7874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8193);
    // 0x2c7878: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2c7878u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c787c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2c787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c7880: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x2c7880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x2c7884: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c7888: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c7888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c788c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2c788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c7890: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x2c7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x2c7894: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x2c7894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x2c7898: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2c7898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c789c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c78a0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2c78a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2c78a4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2c78a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c78a8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2c78a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2c78ac: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2c78acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2c78b0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2c78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2c78b4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2c78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2c78b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c78b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c78bc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2c78bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c78c0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2c78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2c78c4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2c78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2c78c8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2c78c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2c78cc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2c78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2c78d0: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2c78d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2c78d4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2c78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2c78d8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2c78d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2c78dc: 0xc056e20  jal         func_15B880
    ctx->pc = 0x2C78DCu;
    SET_GPR_U32(ctx, 31, 0x2C78E4u);
    ctx->pc = 0x2C78E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C78DCu;
    // 0x2c78e0: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x2C78DCu, 0x2C78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C78E4u;
label_2c78e4:
    // 0x2c78e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c78e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c78e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C78E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C78E8u;
        // 0x2c78ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C78E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C78F0u;
}
