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

// Function: func_00139910
// Address: 0x139910 - 0x1399a0
void func_00139910_0x139910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00139910_0x139910");
#endif

    ctx->pc = 0x139910u;

    // 0x139910: 0x8c830364  lw          $v1, 0x364($a0)
    ctx->pc = 0x139910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x139914: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x139914u;
    {
        const bool branch_taken_0x139914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139914u;
        // 0x139918: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139914) {
            ctx->pc = 0x139998u;
            goto label_139998;
        }
    }
    ctx->pc = 0x13991Cu;
    // 0x13991c: 0x8c820368  lw          $v0, 0x368($a0)
    ctx->pc = 0x13991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x139920: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x139920u;
    {
        const bool branch_taken_0x139920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139920u;
        // 0x139924: 0x24820210  addiu       $v0, $a0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139920) {
            ctx->pc = 0x139998u;
            goto label_139998;
        }
    }
    ctx->pc = 0x139928u;
    // 0x139928: 0xc46000b8  lwc1        $f0, 0xB8($v1)
    ctx->pc = 0x139928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13992c: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x13992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139930: 0xc46200b4  lwc1        $f2, 0xB4($v1)
    ctx->pc = 0x139930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139938: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x139938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13993c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x13993cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139940: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x139940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139944: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x139944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139948: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x139948u;
    {
        const bool branch_taken_0x139948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x13994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139948u;
        // 0x13994c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139948) {
            ctx->pc = 0x139960u;
            goto label_139960;
        }
    }
    ctx->pc = 0x139950u;
    // 0x139950: 0xe4810210  swc1        $f1, 0x210($a0)
    ctx->pc = 0x139950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 528), bits); }
    // 0x139954: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x139954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x139958: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13995c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13995cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_139960:
    // 0x139960: 0x8c820368  lw          $v0, 0x368($a0)
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x139964: 0x24830200  addiu       $v1, $a0, 0x200
    ctx->pc = 0x139964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x139968: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x139968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13996c: 0xc44200b4  lwc1        $f2, 0xB4($v0)
    ctx->pc = 0x13996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x139970: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x139970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139974: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x139974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x139978: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x139978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13997c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x13997cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139980: 0x107d0005  beq         $v1, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x139980u;
    {
        const bool branch_taken_0x139980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x139984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139980u;
        // 0x139984: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139980) {
            ctx->pc = 0x139998u;
            goto label_139998;
        }
    }
    ctx->pc = 0x139988u;
    // 0x139988: 0xe4810200  swc1        $f1, 0x200($a0)
    ctx->pc = 0x139988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 512), bits); }
    // 0x13998c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x13998cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x139990: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x139990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139994: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x139994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_139998:
    // 0x139998: 0x3e00008  jr          $ra
    ctx->pc = 0x139998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139998u;
        // 0x13999c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1399A0u;
}
